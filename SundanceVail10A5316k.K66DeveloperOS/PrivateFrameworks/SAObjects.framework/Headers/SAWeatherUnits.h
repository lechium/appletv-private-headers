/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *distanceUnits;	// G=0x32f4ead1; S=0x32f4eaed; 
@property(copy, nonatomic) NSString *pressureUnits;	// G=0x32f4eb3d; S=0x32f4eb59; 
@property(copy, nonatomic) NSString *speedUnits;	// G=0x32f4eba9; S=0x32f4ebc5; 
@property(copy, nonatomic) NSString *temperatureUnits;	// G=0x32f4ec15; S=0x32f4ec31; 
+ (id)units;	// 0x32f4ea41
+ (id)unitsWithDictionary:(id)dictionary context:(id)context;	// 0x32f4ea85
// declared property getter: - (id)distanceUnits;	// 0x32f4ead1
- (id)encodedClassName;	// 0x32f4ea35
- (id)groupIdentifier;	// 0x32f4ea25
// declared property getter: - (id)pressureUnits;	// 0x32f4eb3d
// declared property setter: - (void)setDistanceUnits:(id)units;	// 0x32f4eaed
// declared property setter: - (void)setPressureUnits:(id)units;	// 0x32f4eb59
// declared property setter: - (void)setSpeedUnits:(id)units;	// 0x32f4ebc5
// declared property setter: - (void)setTemperatureUnits:(id)units;	// 0x32f4ec31
// declared property getter: - (id)speedUnits;	// 0x32f4eba9
// declared property getter: - (id)temperatureUnits;	// 0x32f4ec15
@end

