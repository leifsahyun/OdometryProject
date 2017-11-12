#include <L3G.h>
#include <Encoder.h>
#include "Arduino.h"

namespace OdometryProject {
  public:
    double x;
    double y;
    double heading;
    long lastLeftReading = 0;
    long lastRightReading = 0;
    Encoder *leftEncoder;
    Encoder *rightEncoder;
    L3G *gyro;
    void update();
    void zero();    
}

