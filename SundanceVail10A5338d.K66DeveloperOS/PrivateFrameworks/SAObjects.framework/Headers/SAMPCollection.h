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
@property(copy, nonatomic) NSArray *items;	// G=0x37950a91; S=0x37950b0d; 
+ (id)collection;	// 0x37950a01
+ (id)collectionWithDictionary:(id)dictionary context:(id)context;	// 0x37950a45
- (id)encodedClassName;	// 0x379509f5
- (id)groupIdentifier;	// 0x379509e5
// declared property getter: - (id)items;	// 0x37950a91
// declared property setter: - (void)setItems:(id)items;	// 0x37950b0d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x37950b75
@end

