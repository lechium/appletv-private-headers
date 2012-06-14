/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView {
@private
	UIColor *m_insertionPointColor;	// 84 = 0x54
	UIColor *m_selectionBarColor;	// 88 = 0x58
	UIImageView *m_dot;	// 92 = 0x5c
	int m_orientation;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL showsBall;	// G=0x30351e0d; S=0x30351e39; 
- (id)initWithFrame:(CGRect)frame container:(id)container orientation:(int)orientation;	// 0x303515a9
- (void)dealloc;	// 0x30351781
- (void)drawRect:(CGRect)rect;	// 0x30351b95
- (BOOL)isPointedDown;	// 0x30351819
- (BOOL)isPointedLeft;	// 0x30351861
- (BOOL)isPointedRight;	// 0x30351849
- (BOOL)isPointedUp;	// 0x30351831
- (BOOL)isVertical;	// 0x303517f9
- (void)setFrame:(CGRect)frame;	// 0x30351879
// declared property setter: - (void)setShowsBall:(BOOL)ball;	// 0x30351e39
// declared property getter: - (BOOL)showsBall;	// 0x30351e0d
@end

