/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class SATimerObject, NSString;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(retain, nonatomic) SATimerObject *timer;	// G=0x353cd079; S=0x353cd0cd; 
+ (id)getCompleted;	// 0x353ccfe9
+ (id)getCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353cd02d
- (id)encodedClassName;	// 0x353ccfdd
- (id)groupIdentifier;	// 0x353ccfcd
// declared property setter: - (void)setTimer:(id)timer;	// 0x353cd0cd
// declared property getter: - (id)timer;	// 0x353cd079
@end

