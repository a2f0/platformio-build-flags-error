
#if HIGH_LOW==HIGH
void emptyFun() {
}
#endif

#if HIGH_LOW==LOW
#include <Adafruit_BNO055.h>
void displaySensorOffsets(const adafruit_bno055_offsets_t &calibData)
{
}
#endif

void setup() {
} 

void loop() {
}
