/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAAlarmSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x3559f531; S=0x3559f5ad; 
+ (id)searchCompleted;	// 0x3559f425
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3559f469
+ (id)searchCompletedWithResults:(id)results;	// 0x3559f4b5
- (id)initWithResults:(id)results;	// 0x3559f4fd
- (id)encodedClassName;	// 0x3559f419
- (id)groupIdentifier;	// 0x3559f409
// declared property getter: - (id)results;	// 0x3559f531
// declared property setter: - (void)setResults:(id)results;	// 0x3559f5ad
@end

