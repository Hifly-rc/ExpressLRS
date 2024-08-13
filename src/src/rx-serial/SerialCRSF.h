#include "SerialIO.h"

class SerialCRSF : public SerialIO {
public:
    explicit SerialCRSF(Stream &out, Stream &in) : SerialIO(&out, &in) {}

    virtual ~SerialCRSF() {}

<<<<<<< HEAD
    void setLinkQualityStats(uint16_t lq, uint16_t rssi) override;
    uint32_t sendRCFrameToFC(bool frameAvailable, uint32_t *channelData) override;
    void sendMSPFrameToFC(uint8_t* data) override;
    void sendLinkStatisticsToFC() override;
=======
    uint32_t sendRCFrame(bool frameAvailable, bool frameMissed, uint32_t *channelData) override;
    void queueMSPFrameTransmission(uint8_t* data) override;
    void queueLinkStatisticsPacket() override;
    void sendQueuedData(uint32_t maxBytesToSend) override;
>>>>>>> master

private:
    uint16_t linkQuality = 0;
    uint16_t rssiDBM = 0;

    void processByte(uint8_t byte) override;
};
