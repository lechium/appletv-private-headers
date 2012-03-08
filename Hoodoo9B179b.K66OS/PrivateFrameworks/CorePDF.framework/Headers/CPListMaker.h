/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "CorePDF-Structs.h"

@class CPList, CPLayoutArea, NSArray;

@interface CPListMaker : NSObject <CPDisposable> {
	CPLayoutArea *area;	// 4 = 0x4
	NSArray *spacers;	// 8 = 0x8
	unsigned textLineCount;	// 12 = 0xc
	CPTextLine **textLines;	// 16 = 0x10
	CPList *list;	// 20 = 0x14
}
+ (void)makeListsInChunk:(id)chunk;	// 0x3486c5d5
+ (void)makeListsInLayoutArea:(id)layoutArea;	// 0x3486c675
+ (void)makeListsInPage:(id)page;	// 0x3486c589
- (id)initWithLayoutArea:(id)layoutArea;	// 0x3486c4cd
- (void)dealloc;	// 0x3486d175
- (void)dispose;	// 0x3486d239
- (void)fetchTextLine:(id)line;	// 0x3486d0ed
- (void)fetchTextLinesInColumn:(id)column;	// 0x3486d035
- (void)finalize;	// 0x3486d1f9
- (BOOL)makeListFrom:(CPListInfo *)from;	// 0x3486c7b5
- (void)makeListItemFrom:(CPListInfo *)from stopAt:(unsigned)at;	// 0x3486cd31
- (void)makeLists;	// 0x3486c6d1
- (void)makeListsInColumn:(id)column;	// 0x3486c74d
@end

