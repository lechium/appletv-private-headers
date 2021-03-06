/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePadInlineFloatingBackgroundView : UIView {
	float _rowHeight;	// 84 = 0x54
	unsigned _highlightedRowIndex;	// 88 = 0x58
	float _contentHeight;	// 92 = 0x5c
}
@property(assign, nonatomic) float contentHeight;	// G=0x30c7a605; S=0x30c7a615; @synthesize=_contentHeight
@property(assign, nonatomic) unsigned highlightedRowIndex;	// G=0x30c7a5e5; S=0x30c7a5f5; @synthesize=_highlightedRowIndex
@property(assign, nonatomic) float rowHeight;	// G=0x30c7a5c5; S=0x30c7a5d5; @synthesize=_rowHeight
- (id)initWithFrame:(CGRect)frame;	// 0x30c7a2cd
// declared property getter: - (float)contentHeight;	// 0x30c7a605
- (void)drawRect:(CGRect)rect;	// 0x30c7a31d
// declared property getter: - (unsigned)highlightedRowIndex;	// 0x30c7a5e5
// declared property getter: - (float)rowHeight;	// 0x30c7a5c5
// declared property setter: - (void)setContentHeight:(float)height;	// 0x30c7a615
// declared property setter: - (void)setHighlightedRowIndex:(unsigned)index;	// 0x30c7a5f5
// declared property setter: - (void)setRowHeight:(float)height;	// 0x30c7a5d5
@end

