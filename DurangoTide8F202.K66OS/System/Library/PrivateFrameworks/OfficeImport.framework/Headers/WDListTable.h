/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListTable : NSObject {
@private
	NSMutableArray *mLists;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
}
- (id)initWithDocument:(id)document;	// 0x319a9d59
- (id)addList:(id)list;	// 0x319b2a19
- (void)dealloc;	// 0x31995329
- (id)document;	// 0x319b29e1
- (id)listAt:(int)at;	// 0x3198e5bd
- (int)listCount;	// 0x3198e529
- (id)lists;	// 0x31b006c5
@end

