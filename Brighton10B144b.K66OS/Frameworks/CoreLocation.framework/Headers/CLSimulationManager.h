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
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x315d0a79; S=0x315d025d; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x315d0a21; S=0x315d02b9; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x315d0a39; S=0x315d030d; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x315d0a69; S=0x315d03b5; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x315d0a51; S=0x315d0361; @synthesize=_locationSpeed
- (id)init;	// 0x315cfda5
- (void)appendSimulatedLocation:(id)location;	// 0x315d0439
- (id)availableScenarios;	// 0x315cff19
- (void)clearSimulatedCells;	// 0x315d0769
- (void)clearSimulatedLocations;	// 0x315d0401
- (void)flush;	// 0x315d09e9
- (void)loadScenarioFromURL:(id)url;	// 0x315d00ed
- (id)localizedNameForScenario:(id)scenario;	// 0x315d0065
// declared property getter: - (int)locationDeliveryBehavior;	// 0x315d0a79
// declared property getter: - (double)locationDistance;	// 0x315d0a21
// declared property getter: - (double)locationInterval;	// 0x315d0a39
// declared property getter: - (int)locationRepeatBehavior;	// 0x315d0a69
// declared property getter: - (double)locationSpeed;	// 0x315d0a51
- (id)scenariosPath;	// 0x315cfe35
- (void)selectScenario:(id)scenario;	// 0x315d0069
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x315d025d
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x315d02b9
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x315d030d
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x315d03b5
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x315d0361
- (void)setSimulatedCell:(id)cell;	// 0x315d07a1
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x315d08a9
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x315d09ad
- (void)setWifiScanResults:(id)results;	// 0x315d08e5
- (void)startCellSimulation;	// 0x315d0839
- (void)startLocationSimulation;	// 0x315d06f9
- (void)startWifiSimulation;	// 0x315d093d
- (void)stopCellSimulation;	// 0x315d0871
- (void)stopLocationSimulation;	// 0x315d0731
- (void)stopWifiSimulation;	// 0x315d0975
@end
