/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAWeatherUnits : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *distanceUnits;	// G=0x353dc85d; S=0x353dc879; 
@property(copy, nonatomic) NSString *pressureUnits;	// G=0x353dc8c9; S=0x353dc8e5; 
@property(copy, nonatomic) NSString *speedUnits;	// G=0x353dc935; S=0x353dc951; 
@property(copy, nonatomic) NSString *temperatureUnits;	// G=0x353dc9a1; S=0x353dc9bd; 
+ (id)units;	// 0x353dc7cd
+ (id)unitsWithDictionary:(id)dictionary context:(id)context;	// 0x353dc811
// declared property getter: - (id)distanceUnits;	// 0x353dc85d
- (id)encodedClassName;	// 0x353dc7c1
- (id)groupIdentifier;	// 0x353dc7b1
// declared property getter: - (id)pressureUnits;	// 0x353dc8c9
// declared property setter: - (void)setDistanceUnits:(id)units;	// 0x353dc879
// declared property setter: - (void)setPressureUnits:(id)units;	// 0x353dc8e5
// declared property setter: - (void)setSpeedUnits:(id)units;	// 0x353dc951
// declared property setter: - (void)setTemperatureUnits:(id)units;	// 0x353dc9bd
// declared property getter: - (id)speedUnits;	// 0x353dc935
// declared property getter: - (id)temperatureUnits;	// 0x353dc9a1
@end
