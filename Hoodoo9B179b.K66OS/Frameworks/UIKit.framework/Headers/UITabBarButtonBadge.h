/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITabBarButtonBadge : UIView {
@private
	UIView *_value;	// 48 = 0x30
	UIView *_background;	// 52 = 0x34
	UIView *_alternate;	// 56 = 0x38
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x331349c1
- (void)dealloc;	// 0x33134a35
- (void)layoutSubviews;	// 0x33134fc9
- (void)setBlinks:(BOOL)blinks;	// 0x33135131
- (void)setValue:(id)value;	// 0x33134d2d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33134aa9
@end

