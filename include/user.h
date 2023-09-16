#ifndef _USER_H_
#define _USER_H_

typedef enum pidtype{
  PIDNO,
  PIDPISITION,
  PIDSPEED,
}PIDtype;

typedef struct motordata{
  
  double PositionMeasure;
  double SpeedMeasure;
  double CurrentMeasure;
  double PositionExpected;
  double SpeedExpected;
  double CurrentExpected;
}MotorData;

typedef struct classis{

  double Vertical_Measure;
  double Rotate_Measure;
  double Straight_Measure; 

  double Vertical_Expected;
  double Rotate_Expected;
  double Straight_Expected;
}Classis;

extern Classis MySmallCar;

#endif