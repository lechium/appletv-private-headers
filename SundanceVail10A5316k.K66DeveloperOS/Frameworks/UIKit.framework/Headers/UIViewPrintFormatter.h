/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
@private
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x303cd441; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x303cd051
- (int)_recalcPageCount;	// 0x303cd145
- (id)copyWithZone:(NSZone *)zone;	// 0x303cd0a5
- (void)dealloc;	// 0x303cd0f9
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x303cd32d
- (CGRect)rectForPageAtIndex:(int)index;	// 0x303cd221
// declared property getter: - (id)view;	// 0x303cd441
@end

