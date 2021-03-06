/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSURL *alarmId;	// G=0x32f35519; S=0x32f35595; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)createCompleted;	// 0x32f35489
+ (id)createCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f354cd
// declared property getter: - (id)alarmId;	// 0x32f35519
- (id)encodedClassName;	// 0x32f3547d
- (id)groupIdentifier;	// 0x32f3546d
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x32f35595
@end

