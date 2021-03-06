/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class UITabBar;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView {
	id _value;	// 96 = 0x60
	id _alternate;	// 100 = 0x64
	float _scale;	// 104 = 0x68
	BOOL _showAlternate;	// 108 = 0x6c
	BOOL _flipped;	// 109 = 0x6d
	int _currentAnimation;	// 112 = 0x70
	UITabBar *_tabBar;	// 116 = 0x74
	int _buttonTag;	// 120 = 0x78
}
- (id)initWithImage:(id)image alternateImage:(id)image2;	// 0x30c9dc4d
- (void)animateImage:(float)image withTabBar:(id)tabBar withTag:(int)tag;	// 0x30e66861
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x30e66a79
- (void)dealloc;	// 0x30e667e5
- (void)setAlternateImage:(id)image;	// 0x30e66ab5
- (void)setCurrentImage;	// 0x30c9dd6d
- (void)setImage:(id)image;	// 0x30e66b25
- (void)showAlternateImage:(BOOL)image;	// 0x30c9f799
@end

