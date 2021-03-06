/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
@private
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x3045a125; S=0x30459931; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x3045a0cd; S=0x3045998d; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x3045a0e5; S=0x304599e1; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x3045a115; S=0x30459a89; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x3045a0fd; S=0x30459a35; @synthesize=_locationSpeed
- (id)init;	// 0x304594d5
- (void)appendSimulatedLocation:(id)location;	// 0x30459b0d
- (id)availableScenarios;	// 0x3045963d
- (void)clearSimulatedCells;	// 0x30459e15
- (void)clearSimulatedLocations;	// 0x30459ad5
- (void)flush;	// 0x3045a095
- (void)loadScenarioFromURL:(id)url;	// 0x304597ed
- (id)localizedNameForScenario:(id)scenario;	// 0x30459765
// declared property getter: - (int)locationDeliveryBehavior;	// 0x3045a125
// declared property getter: - (double)locationDistance;	// 0x3045a0cd
// declared property getter: - (double)locationInterval;	// 0x3045a0e5
// declared property getter: - (int)locationRepeatBehavior;	// 0x3045a115
// declared property getter: - (double)locationSpeed;	// 0x3045a0fd
- (id)scenariosPath;	// 0x30459565
- (void)selectScenario:(id)scenario;	// 0x30459769
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x30459931
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x3045998d
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x304599e1
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x30459a89
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x30459a35
- (void)setSimulatedCell:(id)cell;	// 0x30459e4d
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x30459f55
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x3045a059
- (void)setWifiScanResults:(id)results;	// 0x30459f91
- (void)startCellSimulation;	// 0x30459ee5
- (void)startLocationSimulation;	// 0x30459da5
- (void)startWifiSimulation;	// 0x30459fe9
- (void)stopCellSimulation;	// 0x30459f1d
- (void)stopLocationSimulation;	// 0x30459ddd
- (void)stopWifiSimulation;	// 0x3045a021
@end

