#include "OdometryProject.h"

void OdometryProject::update(){
  int leftDiff = leftEncoder->read() - lastLeftReading;
  int rightDiff = rightEncoder->read() - lastRightReading;
  double avgDiff = (leftDiff + rightDiff)/2.0;
  x = cos(heading)*avgDiff;
  y = sin(heading)*avgDiff;
  gyro->read();
  heading = gyro->g.z;
}

void OdometryProject::zero(){
  x=0;
  y=0;
  heading = 0;
  leftEncoder->write(0);
  rightEncoder->write(0);
  //gyro->zero Need to find a way to zero the gyro here
}

