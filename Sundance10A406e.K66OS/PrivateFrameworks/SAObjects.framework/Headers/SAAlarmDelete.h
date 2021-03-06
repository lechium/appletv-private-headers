/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAAlarmDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *alarmIds;	// G=0x32512d75; S=0x32512e15; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32512c99; S=0x32512d15; 
+ (id)delete;	// 0x32512c09
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x32512c4d
// declared property getter: - (id)alarmIds;	// 0x32512d75
- (id)encodedClassName;	// 0x32512bfd
- (id)groupIdentifier;	// 0x32512bed
- (BOOL)requiresResponse;	// 0x32512e95
// declared property setter: - (void)setAlarmIds:(id)ids;	// 0x32512e15
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32512d15
// declared property getter: - (id)targetAppId;	// 0x32512c99
@end

