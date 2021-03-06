/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *value;	// G=0x353dea15; S=0x353dea31; 
@property(copy, nonatomic) NSString *windDirection;	// G=0x353dea81; S=0x353dea9d; 
@property(copy, nonatomic) NSNumber *windDirectionDegree;	// G=0x353deaed; S=0x353deb09; 
+ (id)windSpeed;	// 0x353de985
+ (id)windSpeedWithDictionary:(id)dictionary context:(id)context;	// 0x353de9c9
- (id)encodedClassName;	// 0x353de979
- (id)groupIdentifier;	// 0x353de969
// declared property setter: - (void)setValue:(id)value;	// 0x353dea31
// declared property setter: - (void)setWindDirection:(id)direction;	// 0x353dea9d
// declared property setter: - (void)setWindDirectionDegree:(id)degree;	// 0x353deb09
// declared property getter: - (id)value;	// 0x353dea15
// declared property getter: - (id)windDirection;	// 0x353dea81
// declared property getter: - (id)windDirectionDegree;	// 0x353deaed
@end

