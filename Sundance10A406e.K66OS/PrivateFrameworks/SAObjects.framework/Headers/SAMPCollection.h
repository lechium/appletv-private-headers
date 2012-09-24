/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity {
}
@property(copy, nonatomic) NSArray *items;	// G=0x325159b5; S=0x32515a31; 
+ (id)collection;	// 0x32515925
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;	// 0x32515969
- (id)encodedClassName;	// 0x32515919
- (id)groupIdentifier;	// 0x32515909
// declared property getter: - (id)items;	// 0x325159b5
// declared property setter: - (void)setItems:(id)items;	// 0x32515a31
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x32515a99
@end
