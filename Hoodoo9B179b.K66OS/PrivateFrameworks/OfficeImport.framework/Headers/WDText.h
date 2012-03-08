/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDTableCell, NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDText : NSObject {
@private
	NSMutableArray *mBlocks;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mTextType;	// 12 = 0xc
	WDTableCell *mTableCell;	// 16 = 0x10
}
- (id)initWithDocument:(id)document textType:(int)type;	// 0x32855f21
- (id)initWithDocument:(id)document textType:(int)type tableCell:(id)cell;	// 0x32855f45
- (void)addBlock:(id)block;	// 0x329cfca5
- (id)addParagraph;	// 0x328662c9
- (id)addParagraphAtIndex:(int)index;	// 0x329cfcc9
- (id)addTable;	// 0x32872ca5
- (id)addTableAtIndex:(int)index;	// 0x329cfd39
- (id)blockAt:(int)at;	// 0x327c63ad
- (int)blockCount;	// 0x327c6561
- (id)blockIterator;	// 0x329cfda9
- (id)blocks;	// 0x329cfc71
- (id)content;	// 0x329cff6d
- (void)dealloc;	// 0x327d6bb5
- (id)document;	// 0x3286643d
- (int)indexOfBlock:(id)block;	// 0x329cfc81
- (BOOL)isEmpty;	// 0x329cfefd
- (id)lastBlock;	// 0x328ca909
- (id)newBlockIterator;	// 0x329cfdfd
- (id)newRunIterator;	// 0x329cfea1
- (void)removeLastBlock;	// 0x32868779
- (void)removeLastCharacter:(unsigned short)character;	// 0x328692a9
- (id)runIterator;	// 0x329cfe41
- (id)tableCell;	// 0x3287525d
- (int)tableNestingLevel;	// 0x32864fc9
- (int)textType;	// 0x32865ee9
@end

