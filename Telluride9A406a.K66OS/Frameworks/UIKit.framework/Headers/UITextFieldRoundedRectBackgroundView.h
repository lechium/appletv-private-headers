/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldBackgroundView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UITextFieldRoundedRectBackgroundView : UITextFieldBackgroundView {
@private
	UIImageView *_leftCap;	// 56 = 0x38
	UIImageView *_center;	// 60 = 0x3c
	UIImageView *_rightCap;	// 64 = 0x40
	UIImageView *_progressFill;	// 68 = 0x44
}
- (void)_updateImages;	// 0x357ea2d9
- (void)dealloc;	// 0x358a09a1
- (void)layoutSubviews;	// 0x357edc31
@end

