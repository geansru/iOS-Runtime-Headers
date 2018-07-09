/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        bool isStanding; 
        float tilt; 
        double timestamp; 
        bool isVehicleConnected; 
        int exitState; 
        double estExitTime; 
        double startTime; 
        int rawType; 
        int rawConfidence; 
        struct { 
            unsigned int motionHint : 1; 
            unsigned int gpsHint : 1; 
            unsigned int basebandHint : 1; 
            unsigned int wifiHint : 1; 
            unsigned int btHint : 1; 
        } vehicularFlags; 
        float drivingStowedLikelihoodSum; 
        float drivingArmLikelihoodSum; 
        float ssLikelihoodSum; 
    }  fState;
}

@property (nonatomic, readonly) bool automotive;
@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) bool cycling;
@property (nonatomic, readonly) bool running;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool stationary;
@property (nonatomic, readonly) bool unknown;
@property (getter=isVehicleBTHint, nonatomic, readonly) bool vehicleBTHint;
@property (getter=isVehicleBasebandHint, nonatomic, readonly) bool vehicleBasebandHint;
@property (getter=isVehicleConnected, nonatomic, readonly) bool vehicleConnected;
@property (getter=isVehicleGpsHint, nonatomic, readonly) bool vehicleGpsHint;
@property (getter=isVehicleMotionHint, nonatomic, readonly) bool vehicleMotionHint;
@property (getter=isVehicleWifiHint, nonatomic, readonly) bool vehicleWifiHint;
@property (nonatomic, readonly) bool walking;

+ (bool)supportsSecureCoding;

- (bool)automotive;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cycling;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; float x6; double x7; bool x8; int x9; double x10; double x11; int x12; int x13; struct { unsigned int x_14_1_1 : 1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5 : 1; } x14; float x15; float x16; float x17; })arg1;
- (bool)isVehicleBTHint;
- (bool)isVehicleBasebandHint;
- (bool)isVehicleConnected;
- (bool)isVehicleGpsHint;
- (bool)isVehicleMotionHint;
- (bool)isVehicleWifiHint;
- (bool)running;
- (id)startDate;
- (bool)stationary;
- (bool)unknown;
- (bool)walking;

@end
