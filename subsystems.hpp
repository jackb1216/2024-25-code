#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

//Intake
inline pros::MotorGroup intake({17, -18});
// MoGo Grip
inline ez::Piston mogograb('A');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');