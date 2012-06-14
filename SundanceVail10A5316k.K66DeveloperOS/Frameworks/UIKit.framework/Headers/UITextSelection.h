/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class DOMRange, UIResponder, UITextRange;
@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
@private
	UIResponder<UITextInputPrivate> *_document;	// 4 = 0x4
	int _granularity;	// 8 = 0x8
	UITextRange *_selectedRange;	// 12 = 0xc
	UITextRange *_base;	// 16 = 0x10
	UITextRange *_initialExtent;	// 20 = 0x14
	BOOL _isCommitting;	// 24 = 0x18
}
@property(retain, nonatomic) UITextRange *base;	// G=0x303c6fb9; S=0x301b6069; @synthesize=_base
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *document;	// G=0x30165db9; @synthesize=_document
@property(readonly, assign, nonatomic, getter=_domRange) DOMRange *domRange;	// G=0x3017e669; 
@property(assign, nonatomic) int granularity;	// G=0x3017ec45; S=0x3017e659; @synthesize=_granularity
@property(retain, nonatomic) UITextRange *initialExtent;	// G=0x303c6fc9; S=0x301b6079; @synthesize=_initialExtent
@property(readonly, assign, nonatomic) BOOL isCommitting;	// G=0x30165e8d; @synthesize=_isCommitting
@property(retain, nonatomic) UITextRange *selectedRange;	// G=0x30167349; S=0x30165e7d; @synthesize=_selectedRange
- (id)initWithDocument:(id)document;	// 0x30165d15
// declared property getter: - (id)_domRange;	// 0x3017e669
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x303c5dd1
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x303c5fbd
// declared property getter: - (id)base;	// 0x303c6fb9
- (CGRect)caretRect;	// 0x3016740d
- (CGRect)caretRectAtBeginOfDocument;	// 0x303c5ae1
- (CGRect)caretRectAtEndOfDocument;	// 0x303c5a75
- (void)clearRangedSelectionInitialExtent;	// 0x303c62c9
- (void)clearSelection;	// 0x303c5d55
- (CGPoint)clipPoint:(CGPoint)point inRect:(CGRect)rect;	// 0x303c63b5
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x303c5b91
- (void)collapseSelection;	// 0x303c5d69
- (void)commit;	// 0x3017e9d1
- (void)dealloc;	// 0x301b5ffd
// declared property getter: - (id)document;	// 0x30165db9
// declared property getter: - (int)granularity;	// 0x3017ec45
- (BOOL)hasEditableSelection;	// 0x3020c42d
// declared property getter: - (id)initialExtent;	// 0x303c6fc9
// declared property getter: - (BOOL)isCommitting;	// 0x30165e8d
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x3017e6dd
- (unsigned)offsetInMarkedText;	// 0x303c5c51
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x303c614d
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x303c60d9
- (void)selectAll;	// 0x303c5cd1
// declared property getter: - (id)selectedRange;	// 0x30167349
- (id)selectedText;	// 0x303c5b4d
- (void)selectionChanged;	// 0x30165d79
- (id)selectionRects;	// 0x303c5a31
// declared property setter: - (void)setBase:(id)base;	// 0x301b6069
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x3017e659
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x301b6079
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x303c61c1
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x303c625d
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x303c61f1
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x303c6a69
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x303c64c5
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x303c6349
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x303c62dd
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x303c6b31
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x30165e7d
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x303c6a8d
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x3017e3ed
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x303c6c59
- (id)wordContainingCaretSelection;	// 0x301dafbd
@end

