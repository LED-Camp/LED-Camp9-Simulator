#ifndef __CONTROLLER__
#define __CONTROLLER__

#include <cstdint>
#include "drivers/includes/TwinWheelDriver.hpp"
#include "drivers/includes/RangeSensor.hpp"
#include <webots/Robot.hpp>
#include <webots/DistanceSensor.hpp>

using namespace webots;
class Controller {
private:
    Robot* robot;
    RangeSensor* rangeSensor;
    TwinWheelDriver* twinWheelDriver;
    DistanceSensor* colorSensor;
    DistanceSensor* lineSensorCenter;
    DistanceSensor* lineSensorRight;
    DistanceSensor* lineSensorLeft;
protected:
    Controller();
    ~Controller(void);
public:
    static Controller* _instance;
    static Controller* getInstance();
    // twinWheelDriver系
    void changeDriveMode(Mode mode, int voltage_level);
    bool clockForward();
    
    void outputSensorValues(); // センサ値出力(開発用)
    };
#endif
