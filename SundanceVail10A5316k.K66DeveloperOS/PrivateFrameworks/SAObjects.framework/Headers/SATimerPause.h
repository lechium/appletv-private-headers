/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SATimerPause : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f3fb25; S=0x32f3fba1; 
+ (id)pause;	// 0x32f3fa95
+ (id)pauseWithDictionary:(id)dictionary context:(id)context;	// 0x32f3fad9
- (id)encodedClassName;	// 0x32f3fa89
- (id)groupIdentifier;	// 0x32f3fa79
- (BOOL)requiresResponse;	// 0x32f3fc01
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3fba1
// declared property getter: - (id)targetAppId;	// 0x32f3fb25
@end

