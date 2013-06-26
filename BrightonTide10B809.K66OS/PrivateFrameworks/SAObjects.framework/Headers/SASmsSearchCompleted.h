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
@property(copy, nonatomic) NSArray *results;	// G=0x353c34e5; S=0x353c3585; 
+ (id)searchCompleted;	// 0x353c33d9
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353c341d
+ (id)searchCompletedWithResults:(id)results;	// 0x353c3469
- (id)initWithResults:(id)results;	// 0x353c34b1
- (id)encodedClassName;	// 0x353c33cd
- (id)groupIdentifier;	// 0x353c33bd
// declared property getter: - (id)results;	// 0x353c34e5
// declared property setter: - (void)setResults:(id)results;	// 0x353c3585
@end
