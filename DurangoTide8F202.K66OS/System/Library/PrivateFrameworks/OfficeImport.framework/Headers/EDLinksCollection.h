/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject {
@private
	NSMutableArray *mLinks;	// 4 = 0x4
	NSMutableArray *mReferences;	// 8 = 0x8
}
- (id)init;	// 0x319dc1b5
- (unsigned)addLink:(id)link;	// 0x319e6321
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x31ad13e5
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x31ad1529
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x31ad14a1
- (unsigned)addReference:(id)reference;	// 0x319e6201
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x31a16701
- (void)dealloc;	// 0x318f1dfd
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x31ad15c9
- (unsigned)indexOfReference:(id)reference;	// 0x31ad154d
- (id)linkAtIndex:(unsigned)index;	// 0x31a165d9
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x31ad1579
- (unsigned)linksCount;	// 0x31a16615
- (id)referenceAtIndex:(unsigned)index;	// 0x31a1656d
- (unsigned)referencesCount;	// 0x31a165a9
@end

