/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x36666a11; S=0x366661f5; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x366669b9; S=0x36666251; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x366669d1; S=0x366662a5; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x36666a01; S=0x3666634d; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x366669e9; S=0x366662f9; @synthesize=_locationSpeed
- (id)init;	// 0x36665d3d
- (void)appendSimulatedLocation:(id)location;	// 0x366663d1
- (id)availableScenarios;	// 0x36665eb1
- (void)clearSimulatedCells;	// 0x36666701
- (void)clearSimulatedLocations;	// 0x36666399
- (void)flush;	// 0x36666981
- (void)loadScenarioFromURL:(id)url;	// 0x36666085
- (id)localizedNameForScenario:(id)scenario;	// 0x36665ffd
// declared property getter: - (int)locationDeliveryBehavior;	// 0x36666a11
// declared property getter: - (double)locationDistance;	// 0x366669b9
// declared property getter: - (double)locationInterval;	// 0x366669d1
// declared property getter: - (int)locationRepeatBehavior;	// 0x36666a01
// declared property getter: - (double)locationSpeed;	// 0x366669e9
- (id)scenariosPath;	// 0x36665dcd
- (void)selectScenario:(id)scenario;	// 0x36666001
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x366661f5
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x36666251
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x366662a5
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x3666634d
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x366662f9
- (void)setSimulatedCell:(id)cell;	// 0x36666739
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x36666841
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x36666945
- (void)setWifiScanResults:(id)results;	// 0x3666687d
- (void)startCellSimulation;	// 0x366667d1
- (void)startLocationSimulation;	// 0x36666691
- (void)startWifiSimulation;	// 0x366668d5
- (void)stopCellSimulation;	// 0x36666809
- (void)stopLocationSimulation;	// 0x366666c9
- (void)stopWifiSimulation;	// 0x3666690d
@end
