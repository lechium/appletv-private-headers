/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UITextInput.h"

@class UIResponder, UITextRange, UIView, DOMRange;
@protocol UITextSelection, UITextSelectingContainer;

@protocol UITextSelection <UITextInput>
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
@optional
@property(assign, nonatomic) int selectionGranularity;
@required
// declared property getter: - (BOOL)isEditable;
// declared property getter: - (BOOL)isEditing;
- (id)rectsForRange:(id)range;
@optional
// declared property getter: - (int)selectionGranularity;
// declared property setter: - (void)setSelectionGranularity:(int)granularity;
@end

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
@private
	UIResponder<UITextSelection> *_document;	// 4 = 0x4
	int _granularity;	// 8 = 0x8
	UITextRange *_selectedRange;	// 12 = 0xc
	UITextRange *_base;	// 16 = 0x10
	UITextRange *_initialExtent;	// 20 = 0x14
	BOOL _isCommitting;	// 24 = 0x18
}
@property(retain, nonatomic) UITextRange *base;	// G=0x35404411; S=0x351f1a35; @synthesize=_base
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *document;	// G=0x3519d989; @synthesize=_document
@property(readonly, assign, nonatomic, getter=_domRange) DOMRange *domRange;	// G=0x351b8519; 
@property(assign, nonatomic) int granularity;	// G=0x351b8b85; S=0x351b8509; @synthesize=_granularity
@property(retain, nonatomic) UITextRange *initialExtent;	// G=0x35404421; S=0x351f1a59; @synthesize=_initialExtent
@property(readonly, assign, nonatomic) BOOL isCommitting;	// G=0x3519daa1; @synthesize=_isCommitting
@property(retain, nonatomic) UITextRange *selectedRange;	// G=0x3519ee49; S=0x3519da7d; @synthesize=_selectedRange
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *viewAsContainer;	// G=0x351b8b5d; 
- (id)initWithDocument:(id)document;	// 0x3519d8e5
// declared property getter: - (id)_domRange;	// 0x351b8519
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x3540335d
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x354035e9
// declared property getter: - (id)base;	// 0x35404411
- (CGRect)caretRect;	// 0x3519eed5
- (CGRect)caretRectAtEndOfDocument;	// 0x354030f5
- (void)clearRangedSelectionInitialExtent;	// 0x354038fd
- (void)clearSelection;	// 0x354032e1
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x354031a1
- (void)collapseSelection;	// 0x354032f5
- (void)commit;	// 0x351b8909
- (void)dealloc;	// 0x351f19c9
// declared property getter: - (id)document;	// 0x3519d989
// declared property getter: - (int)granularity;	// 0x351b8b85
- (BOOL)hasEditableSelection;	// 0x35252d9d
// declared property getter: - (id)initialExtent;	// 0x35404421
// declared property getter: - (BOOL)isCommitting;	// 0x3519daa1
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x351b862d
- (unsigned)offsetInMarkedText;	// 0x35403261
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x35403781
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x3540370d
// declared property getter: - (id)selectedRange;	// 0x3519ee49
- (id)selectedText;	// 0x3540315d
- (void)selectionChanged;	// 0x3519d949
- (id)selectionRects;	// 0x354030b1
// declared property setter: - (void)setBase:(id)base;	// 0x351f1a35
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x351b8509
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x351f1a59
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x354037f5
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x35403891
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x35403825
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x35403ead
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x354039e9
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x3540397d
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x35403911
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x35403f71
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x3519da7d
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x35403ed1
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x351b8299
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x35404095
// declared property getter: - (id)viewAsContainer;	// 0x351b8b5d
- (id)wordContainingCaretSelection;	// 0x352195ad
@end
