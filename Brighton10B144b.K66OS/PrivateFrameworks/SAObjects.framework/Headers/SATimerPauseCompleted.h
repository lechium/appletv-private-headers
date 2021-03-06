/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerPauseCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x353cd5d5; S=0x353cd629; 
+ (id)pauseCompleted;	// 0x353cd545
+ (id)pauseCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353cd589
- (id)encodedClassName;	// 0x353cd539
- (id)groupIdentifier;	// 0x353cd529
// declared property setter: - (void)setTimer:(id)timer;	// 0x353cd629
// declared property getter: - (id)timer;	// 0x353cd5d5
@end

