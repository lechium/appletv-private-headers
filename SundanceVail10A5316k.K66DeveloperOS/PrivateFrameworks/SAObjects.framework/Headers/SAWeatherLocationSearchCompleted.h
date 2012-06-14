/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *weatherLocations;	// G=0x32f4de01; S=0x32f4de7d; 
+ (id)locationSearchCompleted;	// 0x32f4dcf5
+ (id)locationSearchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f4dd39
+ (id)locationSearchCompletedWithWeatherLocations:(id)weatherLocations;	// 0x32f4dd85
- (id)initWithWeatherLocations:(id)weatherLocations;	// 0x32f4ddcd
- (id)encodedClassName;	// 0x32f4dce9
- (id)groupIdentifier;	// 0x32f4dcd9
// declared property setter: - (void)setWeatherLocations:(id)locations;	// 0x32f4de7d
// declared property getter: - (id)weatherLocations;	// 0x32f4de01
@end

