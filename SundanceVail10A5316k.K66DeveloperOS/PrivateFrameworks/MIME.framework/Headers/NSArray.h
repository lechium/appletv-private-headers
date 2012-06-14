/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSArray.h> // Unknown library


@interface NSArray (NSEmailAddressArray)
- (id)mf_uncommentedAddressList;	// 0x366bb879
@end

@interface NSArray (DerivedArray)
- (id)mf_indicesOfStringsWithPrefix:(id)prefix;	// 0x366d9bd1
- (id)mf_objectsPassingTest:(id)test;	// 0x366d9d59
@end

@interface NSArray (SortedArrayExtensions)
- (unsigned)mf_indexOfObject:(id)object usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x366da095
- (unsigned)mf_indexWhereObjectWouldBeInserted:(id)inserted usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x366da149
- (id)mf_objectEquivalentTo:(id)to usingSortFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x366da0fd
@end

@interface NSArray (MessagesFromMixedStoresConvenience)
- (id)mf_dictionaryWithMessagesSortedByStore;	// 0x366da185
@end

