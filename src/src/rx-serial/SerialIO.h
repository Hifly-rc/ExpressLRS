#pragma once

#include "targets.h"
#include "FIFO.h"
#include "device.h"

class SerialIO {
public:
    const int defaultMaxSerialReadSize = 64;

    SerialIO(Stream *output, Stream *input) : _outputPort(output), _inputPort(input) {}
    virtual ~SerialIO() {}

    virtual void setLinkQualityStats(uint16_t lq, uint16_t rssi) = 0;
    virtual void sendLinkStatisticsToFC() = 0;
    virtual void sendMSPFrameToFC(uint8_t* data) = 0;
    virtual void setFailsafe(bool failsafe);

    virtual uint32_t sendRCFrameToFC(bool frameAvailable, uint32_t *channelData) = 0;

<<<<<<< HEAD
    virtual int getMaxSerialReadSize() { return defaultMaxSerialReadSize; }
    virtual void handleUARTout();
    virtual void handleUARTin();
=======
    /**
     * @brief Signals that the MSP frame should be queued for transmission.
     *
     * The MSP frame should be queued as in `queueLinkStatisticsPacket` so it can be
     * sent after any RC data.
     *
     * @param data pointer to the MSP packet
     */
    virtual void queueMSPFrameTransmission(uint8_t* data) = 0;

    /**
     * @brief send the RC channel data to the serial port stream `_outputPort` member
     * variable.
     *
     * If the function wishes to be called as fast as possible, then it should return
     * DURATION_IMMEDIATE, otherwise it should return the number of milliseconds delay
     * before this method is called again.
     *
     * @param frameAvailable indicates that a new OTA frame of data has been received
     * since the last call to this function
     * @param frameMissed indicates that a frame was not received in the OTA window
     * @param channelData pointer to the 16 channels of data
     * @return number of milliseconds to delay before this method is called again
     */
    virtual uint32_t sendRCFrame(bool frameAvailable, bool frameMissed, uint32_t *channelData) = 0;

    /**
     * @brief send any previously queued data to the serial port stream `_outputPort`
     * member variable.
     */
    virtual void sendQueuedData(uint32_t maxBytesToSend);

    /**
     * @brief read bytes from the serial port and process them.
     *
     * The maximum number of bytes to read per call is obtained
     * from the `getMaxSerialReadSize` method call.
     *
     * This method *should* not be overridden by custom implementations, it is
     * only overridden by the `SerialNOOP` implementation.
     */
    virtual void processSerialInput();

    /**
     * @brief Get the maximum number of bytes to write to the serial port in each call.
     *
     * @return maximum number of bytes to write
     */
    virtual int getMaxSerialWriteSize() { return defaultMaxSerialWriteSize; }
>>>>>>> master

protected:
    Stream *_outputPort;
    Stream *_inputPort;
    FIFO _fifo;
    bool failsafe = false;

    virtual void processBytes(uint8_t *bytes, uint16_t size);
    virtual void processByte(uint8_t byte) = 0;
};
