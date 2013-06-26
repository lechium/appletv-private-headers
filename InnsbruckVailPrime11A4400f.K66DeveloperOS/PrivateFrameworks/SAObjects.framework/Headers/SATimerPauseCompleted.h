/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class SATimerObject, NSString;

@interface SATimerPauseCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x326b3441; S=0x326b3485; 
+ (id)pauseCompleted;	// 0x326b33b1
+ (id)pauseCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x326b33f5
- (id)encodedClassName;	// 0x326b33a5
- (id)groupIdentifier;	// 0x326b3395
// declared property setter: - (void)setTimer:(id)timer;	// 0x326b3485
// declared property getter: - (id)timer;	// 0x326b3441
@end
