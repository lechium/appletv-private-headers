/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSArray.h> // Unknown library


@interface NSArray (NSEmailAddressArray)
- (id)mf_uncommentedAddressList;	// 0x325920ad
@end

@interface NSArray (MessagesFromMixedStoresConvenience)
- (id)mf_dictionaryWithMessagesSortedByStore;	// 0x325aff81
@end

@interface NSArray (SortedArrayExtensions)
- (unsigned)mf_indexOfObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x325b0275
- (unsigned)mf_indexWhereObjectWouldBeInserted:(id)inserted usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x325b02e5
- (id)mf_objectEquivalentTo:(id)to usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x325aff39
@end

@interface NSArray (DerivedArray)
- (id)mf_indicesOfStringsWithPrefix:(id)prefix;	// 0x325b00bd
@end

