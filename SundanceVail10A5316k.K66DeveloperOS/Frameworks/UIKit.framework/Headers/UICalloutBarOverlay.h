/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICalloutBarOverlay : UIView {
@private
	CGRect m_arrowRect;	// 84 = 0x54
	float m_dividerOffsets[20];	// 100 = 0x64
	BOOL highlighted;	// 180 = 0xb4
	CGRect highlightRect;	// 184 = 0xb8
}
@property(assign, nonatomic) CGRect highlightRect;	// G=0x3033e46d; S=0x301837b1; @synthesize
@property(assign, nonatomic) BOOL highlighted;	// G=0x3033e45d; S=0x30185cad; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x3018371d
- (void)dealloc;	// 0x3033dd49
- (void)drawRect:(CGRect)rect;	// 0x3033dd79
// declared property getter: - (CGRect)highlightRect;	// 0x3033e46d
// declared property getter: - (BOOL)highlighted;	// 0x3033e45d
- (void)setDividerOffsets:(float *)offsets;	// 0x301dce55
// declared property setter: - (void)setHighlightRect:(CGRect)rect;	// 0x301837b1
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30185cad
- (void)setHighlighted:(BOOL)highlighted forFrame:(CGRect)frame;	// 0x30185c59
@end

