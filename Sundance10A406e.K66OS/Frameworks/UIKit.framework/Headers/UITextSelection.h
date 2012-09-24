/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIResponder, UITextRange, DOMRange;
@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
	UIResponder<UITextInputPrivate> *_document;	// 4 = 0x4
	int _granularity;	// 8 = 0x8
	UITextRange *_selectedRange;	// 12 = 0xc
	UITextRange *_base;	// 16 = 0x10
	UITextRange *_initialExtent;	// 20 = 0x14
	BOOL _isCommitting;	// 24 = 0x18
}
@property(retain, nonatomic) UITextRange *base;	// G=0x30c13bf1; S=0x30a0e495; @synthesize=_base
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *document;	// G=0x3099d875; @synthesize=_document
@property(readonly, assign, nonatomic, getter=_domRange) DOMRange *domRange;	// G=0x309cb465; 
@property(assign, nonatomic) int granularity;	// G=0x309cbd05; S=0x309cb455; @synthesize=_granularity
@property(retain, nonatomic) UITextRange *initialExtent;	// G=0x30c13c01; S=0x30a0e4a5; @synthesize=_initialExtent
@property(readonly, assign, nonatomic) BOOL isCommitting;	// G=0x3099d9a5; @synthesize=_isCommitting
@property(retain, nonatomic) UITextRange *selectedRange;	// G=0x3099ee41; S=0x3099d995; @synthesize=_selectedRange
- (id)initWithDocument:(id)document;	// 0x3099d7d1
// declared property getter: - (id)_domRange;	// 0x309cb465
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x30c12955
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x30c12b71
// declared property getter: - (id)base;	// 0x30c13bf1
- (CGRect)caretRect;	// 0x3099ef5d
- (CGRect)caretRectAtBeginOfDocument;	// 0x30c12679
- (CGRect)caretRectAtEndOfDocument;	// 0x30c1260d
- (void)clearRangedSelectionInitialExtent;	// 0x30c12f01
- (void)clearSelection;	// 0x30a209f9
- (CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;	// 0x30c12fed
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x30c12729
- (void)collapseSelection;	// 0x30c128ed
- (void)commit;	// 0x309cba3d
- (void)dealloc;	// 0x30a0e455
// declared property getter: - (id)document;	// 0x3099d875
// declared property getter: - (int)granularity;	// 0x309cbd05
- (BOOL)hasEditableSelection;	// 0x30c12d75
// declared property getter: - (id)initialExtent;	// 0x30c13c01
- (void)invalidate;	// 0x30c125b9
// declared property getter: - (BOOL)isCommitting;	// 0x3099d9a5
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x309cb769
- (unsigned)offsetInMarkedText;	// 0x30c127e9
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x30c12d01
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x30c12c8d
- (void)selectAll;	// 0x30c12869
// declared property getter: - (id)selectedRange;	// 0x3099ee41
- (id)selectedText;	// 0x30c126e5
- (void)selectionChanged;	// 0x3099d835
- (id)selectionRects;	// 0x30a707f1
// declared property setter: - (void)setBase:(id)base;	// 0x30a0e495
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x309cb455
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x30a0e4a5
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x30c12df9
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x30c12e95
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x30c12e29
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x30c136a1
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x30c130fd
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x30c12f81
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x30c12f15
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x30c13769
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x3099d995
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x30c136c5
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x309cb1ed
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x30c13891
- (id)wordContainingCaretSelection;	// 0x30a10b69
@end
