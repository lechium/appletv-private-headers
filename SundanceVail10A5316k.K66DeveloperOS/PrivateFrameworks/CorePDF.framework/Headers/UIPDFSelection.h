/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class UIPDFPage;

@interface UIPDFSelection : NSObject {
@private
	UIPDFPage *_page;	// 4 = 0x4
	CGPDFSelectionRef _cgSelection;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	CFStringRef _string;	// 16 = 0x10
	XXStruct_ny2fMB stringRange;	// 20 = 0x14
}
@property(readonly, retain) UIPDFPage *page;	// G=0x33a7d6d1; converted property
@property(assign, nonatomic) XXStruct_ny2fMB stringRange;	// G=0x33a7e4a9; S=0x33a7e4c1; @synthesize
- (id)initWithPage:(id)page cgSelection:(CGPDFSelectionRef)selection;	// 0x33a7e4d5
- (id)initWithPage:(id)page fromArchive:(id)archive;	// 0x33a7d59d
- (id)initWithSelection:(id)selection;	// 0x33a7d639
- (CGPDFSelectionRef)CGSelection;	// 0x33a7e5c5
- (id)archive;	// 0x33a7e055
- (id)attributedStringAtIndex:(unsigned)index;	// 0x33a7d955
- (CGRect)bounds;	// 0x33a7d7cd
- (id)containingTextLine;	// 0x33a7d9f1
- (void)copyToPasteboard;	// 0x33a7e2c5
- (void)dealloc;	// 0x33a7e551
- (id)description;	// 0x33a7e605
- (unsigned)extendAtEnd:(unsigned)end;	// 0x33a7e29d
- (unsigned)extendAtStart:(unsigned)start;	// 0x33a7e275
- (void)extendToParagraph;	// 0x33a7e5d5
- (XXStruct_ny2fMB)extent;	// 0x33a7e411
- (BOOL)getBounds:(CGRect *)bounds transform:(CGAffineTransform *)transform index:(unsigned)index;	// 0x33a7dab9
- (id)htmlAtIndex:(unsigned)index;	// 0x33a7dbc9
- (BOOL)isEmpty;	// 0x33a7d9a9
- (BOOL)isNonEmpty;	// 0x33a7d9c9
- (BOOL)isWord;	// 0x33a7da7d
- (unsigned)numberOfRectangles;	// 0x33a7da9d
// converted property getter: - (id)page;	// 0x33a7d6d1
- (XXStruct_BUymIA)rectangleAtIndex:(unsigned)index scale:(float)scale inset:(float)inset;	// 0x33a7dc61
// declared property setter: - (void)setStringRange:(XXStruct_ny2fMB)range;	// 0x33a7e4c1
- (id)string;	// 0x33a7d8f1
// declared property getter: - (XXStruct_ny2fMB)stringRange;	// 0x33a7e4a9
- (id)textAtIndex:(unsigned)index;	// 0x33a7db31
- (CGAffineTransform)transform;	// 0x33a7d6e1
@end

