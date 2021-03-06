/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface EDLinksCollection : NSObject {
	NSMutableArray *mLinks;	// 4 = 0x4
	NSMutableArray *mReferences;	// 8 = 0x8
}
- (id)init;	// 0x36a5bb31
- (unsigned)addLink:(id)link;	// 0x36a67081
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x36bf3915
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x36bf38f1
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x36b678d1
- (unsigned)addReference:(id)reference;	// 0x36a66f49
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x36b41c5d
- (void)dealloc;	// 0x36a8aba9
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x36b679b5
- (unsigned)indexOfReference:(id)reference;	// 0x36b67a35
- (id)linkAtIndex:(unsigned)index;	// 0x36a9872d
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x36b6795d
- (unsigned)linksCount;	// 0x36a98775
- (id)referenceAtIndex:(unsigned)index;	// 0x36a986b5
- (unsigned)referencesCount;	// 0x36a986fd
@end

