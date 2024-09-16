/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\dell                                             */
/*    Created:      Mon Sep 16 2024                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Vision9              vision        9               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;
void vision_1(){
  Brain.Screen.clearLine();
 Vision9.takeSnapshot(Vision9__SIG_1);
if (Vision9.largestObject.exists)
{Brain.Screen.print("Vision Sensor: x: %d", Vision9.largestObject.originX);
Brain.Screen.print(" Y: %d", Vision9.largestObject.originY);
Brain.Screen.print(" W %d", Vision9.largestObject.width);
Brain.Screen.print(" H: %d", Vision9.largestObject.height);}
else
{
Brain.Screen.print("Vision Sensor: Color Signature Not Found!");
} 

}
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  while(true){
  vision_1();task::sleep(100);}
  
  
}
