/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIToolbarButtonBadge : UIView {
@private
	UIView *_value;	// 44 = 0x2c
	UIView *_background;	// 48 = 0x30
	UIView *_alternate;	// 52 = 0x34
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x30727bf9
- (void)dealloc;	// 0x30722539
- (void)layoutSubviews;	// 0x30725771
- (void)setBlinks:(BOOL)blinks;	// 0x30722e8d
- (void)setValue:(id)value;	// 0x307216e5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307254c1
@end

