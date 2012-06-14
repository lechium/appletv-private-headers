/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerCancelCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x32f3f4c1; S=0x32f3f515; 
+ (id)cancelCompleted;	// 0x32f3f431
+ (id)cancelCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f3f475
- (id)encodedClassName;	// 0x32f3f425
- (id)groupIdentifier;	// 0x32f3f415
// declared property setter: - (void)setTimer:(id)timer;	// 0x32f3f515
// declared property getter: - (id)timer;	// 0x32f3f4c1
@end

