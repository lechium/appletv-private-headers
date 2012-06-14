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
- (id)init;	// 0x310961c9
- (unsigned)addLink:(id)link;	// 0x310a1719
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x3122df45
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x3122df21
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x311a1f91
- (unsigned)addReference:(id)reference;	// 0x310a15e1
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x3117c2f5
- (void)dealloc;	// 0x310c5241
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x311a2075
- (unsigned)indexOfReference:(id)reference;	// 0x311a20f5
- (id)linkAtIndex:(unsigned)index;	// 0x310d2dc5
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x311a201d
- (unsigned)linksCount;	// 0x310d2e0d
- (id)referenceAtIndex:(unsigned)index;	// 0x310d2d4d
- (unsigned)referencesCount;	// 0x310d2d95
@end

