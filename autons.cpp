#include "main.h"

/////
// For installation, upgrading, documentations, and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
const int DRIVE_SPEED = 110;
const int TURN_SPEED = 90;
const int SWING_SPEED = 110;

///
// Constants
///
void default_constants() {
  // P, I, D, and Start I
  chassis.pid_drive_constants_set(20.0, 0.0, 100.0);         // Fwd/rev constants, used for odom and non odom motions
  chassis.pid_heading_constants_set(11.0, 0.0, 20.0);        // Holds the robot straight while going forward without odom
  chassis.pid_turn_constants_set(3.0, 0.05, 20.0, 15.0);     // Turn in place constants
  chassis.pid_swing_constants_set(6.0, 0.0, 65.0);           // Swing constants
  chassis.pid_odom_angular_constants_set(6.5, 0.0, 52.5);    // Angular control for odom motions
  chassis.pid_odom_boomerang_constants_set(5.8, 0.0, 32.5);  // Angular control for boomerang motions

  // Exit conditions
  chassis.pid_turn_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_swing_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 500_ms);
  chassis.pid_drive_exit_condition_set(90_ms, 1_in, 250_ms, 3_in, 500_ms, 500_ms);
  chassis.pid_odom_turn_exit_condition_set(90_ms, 3_deg, 250_ms, 7_deg, 500_ms, 750_ms);
  chassis.pid_odom_drive_exit_condition_set(90_ms, 1_in, 250_ms, 3_in, 500_ms, 750_ms);
  chassis.pid_turn_chain_constant_set(3_deg);
  chassis.pid_swing_chain_constant_set(5_deg);
  chassis.pid_drive_chain_constant_set(3_in);

  // Slew constants
  chassis.slew_turn_constants_set(3_deg, 70);
  chassis.slew_drive_constants_set(3_in, 70);
  chassis.slew_swing_constants_set(3_in, 80);

  // The amount that turns are prioritized over driving in odom motions
  // - if you have tracking wheels, you can run this higher.  1.0 is the max
  chassis.odom_turn_bias_set(0.9);

  chassis.odom_look_ahead_set(7_in);           // This is how far ahead in the path the robot looks at
  chassis.odom_boomerang_distance_set(16_in);  // This sets the maximum distance away from target that the carrot point can be
  chassis.odom_boomerang_dlead_set(0.625);     // This handles how aggressive the end of boomerang motions are

  chassis.pid_angle_behavior_set(ez::shortest);  // Changes the default behavior for turning, this defaults it to the shortest path there
}
void test(){
// Test run
//chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
//  chassis.pid_wait_until(6_in);
//
//  mogograb.set(true);
//  intake.move(127);
//
//  chassis.pid_turn_set(45_deg, TURN_SPEED);
//  chassis.pid_wait_quick_chain();
//
//  chassis.pid_turn_set(-45_deg, TURN_SPEED);
//  chassis.pid_wait_quick_chain();
//
//  chassis.pid_turn_set(0_deg, TURN_SPEED);
//  chassis.pid_wait();
//
//  intake.move(-127);
//  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
//  chassis.pid_speed_max_set(DRIVE_SPEED);  
//  chassis.pid_wait();
//  intake.move(0);
//}
//void rleft(){
// //Red Side Left
// chassis.pid_turn_set(0_deg, TURN_SPEED);
// chassis.pid_drive_set(-36_in, 110);
// chassis.pid_wait();
//
// mogograb.set(true);
// 
// intake.move(127);
//
// 
// chassis.pid_turn_set(0_deg, TURN_SPEED);
// chassis.pid_drive_set(15_in, 110);
// chassis.pid_wait();
//
 //chassis.pid_turn_set(0_deg, TURN_SPEED);
 //chassis.pid_drive_set(24_in, 110);
 //chassis.pid_wait();
//
 //chassis.pid_turn_set(-33.6_deg, TURN_SPEED);
 //chassis.pid_drive_set(-14.4_in, 110);
 //chassis.pid_wait();
//
 //chassis.pid_turn_set(0_deg, TURN_SPEED);
 //chassis.pid_drive_set(12_in, 110);
 //chassis.pid_wait();
//done

}
void bleft(){
// blue Side Left
chassis.pid_turn_set(180_deg, TURN_SPEED);
chassis.pid_drive_set(38_in, 110);
chassis.pid_wait();
mogograb.set(true);
intake.move(100);

chassis.pid_wait_quick_chain();
chassis.pid_turn_set(-90_deg, TURN_SPEED);
chassis.pid_drive_set(28_in, 110);
chassis.pid_wait();

chassis.pid_turn_set(-157.4_deg, TURN_SPEED);
chassis.pid_drive_set(52_in, 110);
chassis.pid_wait();

intake.move(0);


}
void rright(){
// red side right
chassis.pid_turn_set(180_deg, TURN_SPEED);
chassis.pid_drive_set(38_in, 110);
chassis.pid_wait();
mogograb.set(true);
intake.move(100);

chassis.pid_wait_quick_chain();
chassis.pid_turn_set(90_deg, TURN_SPEED);
chassis.pid_drive_set(28_in, 110);
chassis.pid_wait();

chassis.pid_turn_set(157.4_deg, TURN_SPEED);
chassis.pid_drive_set(52_in, 110);
chassis.pid_wait();

intake.move(0);

}
void bright(){
// blue side Right
chassis.pid_turn_set(0_deg, TURN_SPEED);
 chassis.pid_drive_set(36_in, 110);
 chassis.pid_wait();

 mogograb.set(true);
 intake.move(100);

 chassis.pid_turn_set(0_deg, TURN_SPEED);
 chassis.pid_drive_set(0_in, 110);
 chassis.pid_wait();

 //chassis.pid_turn_set(0_deg, TURN_SPEED);
 //chassis.pid_drive_set(24_in, 110);
 //chassis.pid_wait();
//
 //chassis.pid_turn_set(33.6_deg, TURN_SPEED);
 //chassis.pid_drive_set(-14.4_in, 110);
 //chassis.pid_wait();
//
 //chassis.pid_turn_set(0_deg, TURN_SPEED);
 //chassis.pid_drive_set(12_in, 110);
 //chassis.pid_wait();
}
//done


void Hex(){
  // blue side Right
chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();
 
chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();

chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();

chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();

chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();

chassis.pid_turn_set(120_deg, TURN_SPEED);
   chassis.pid_drive_set(24_in, 110);
   chassis.pid_wait();



  }


  void Square(){
    // blue side Right
  chassis.pid_turn_set(90_deg, TURN_SPEED);
     chassis.pid_drive_set(24_in, 110);
     chassis.pid_wait();

    chassis.pid_turn_set(90_deg, TURN_SPEED);
     chassis.pid_drive_set(24_in, 110);
     chassis.pid_wait();
   
   chassis.pid_turn_set(90_deg, TURN_SPEED);
     chassis.pid_drive_set(24_in, 110);
     chassis.pid_wait();
   
   chassis.pid_turn_set(90_deg, TURN_SPEED);
     chassis.pid_drive_set(24_in, 110);
     chassis.pid_wait();
   
  
    }
    

    void BIGSquare(){
      // blue side Right
    chassis.pid_turn_set(90_deg, TURN_SPEED);
       chassis.pid_drive_set(24_in, 110);
       chassis.pid_wait();
  
      chassis.pid_turn_set(90_deg, TURN_SPEED);
       chassis.pid_drive_set(24_in, 110);
       chassis.pid_wait();
     
     chassis.pid_turn_set(90_deg, TURN_SPEED);
       chassis.pid_drive_set(24_in, 110);
       chassis.pid_wait();
     
     chassis.pid_turn_set(90_deg, TURN_SPEED);
       chassis.pid_drive_set(24_in, 110);
       chassis.pid_wait();
     
    
      }