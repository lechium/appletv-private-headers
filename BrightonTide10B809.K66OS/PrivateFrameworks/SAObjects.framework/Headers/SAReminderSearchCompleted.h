/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAReminderSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353d7171; S=0x353d71ed; 
+ (id)searchCompleted;	// 0x353d70e1
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353d7125
- (id)encodedClassName;	// 0x353d70d5
- (id)groupIdentifier;	// 0x353d70c5
// declared property getter: - (id)results;	// 0x353d7171
// declared property setter: - (void)setResults:(id)results;	// 0x353d71ed
@end

