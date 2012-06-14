/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SASmsSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x32f33905; S=0x32f339a5; 
+ (id)searchCompleted;	// 0x32f337f9
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f3383d
+ (id)searchCompletedWithResults:(id)results;	// 0x32f33889
- (id)initWithResults:(id)results;	// 0x32f338d1
- (id)encodedClassName;	// 0x32f337ed
- (id)groupIdentifier;	// 0x32f337dd
// declared property getter: - (id)results;	// 0x32f33905
// declared property setter: - (void)setResults:(id)results;	// 0x32f339a5
@end

