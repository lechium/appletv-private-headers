/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAWeatherLocation;

@interface SAWeatherLocationDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x304ede99; S=0x304edf15; 
@property(retain, nonatomic) SAWeatherLocation *weatherLocation;	// G=0x304edf75; S=0x304edfc9; 
+ (id)locationDelete;	// 0x304ede09
+ (id)locationDeleteWithDictionary:(id)dictionary context:(id)context;	// 0x304ede4d
- (id)encodedClassName;	// 0x304eddfd
- (id)groupIdentifier;	// 0x304edded
- (BOOL)requiresResponse;	// 0x304ee005
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x304edf15
// declared property setter: - (void)setWeatherLocation:(id)location;	// 0x304edfc9
// declared property getter: - (id)targetAppId;	// 0x304ede99
// declared property getter: - (id)weatherLocation;	// 0x304edf75
@end

