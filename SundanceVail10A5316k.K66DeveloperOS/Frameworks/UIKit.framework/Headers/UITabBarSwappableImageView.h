/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class UITabBar;

__attribute__((visibility("hidden")))
@interface UITabBarSwappableImageView : UIImageView {
@private
	id _value;	// 96 = 0x60
	id _alternate;	// 100 = 0x64
	float _scale;	// 104 = 0x68
	BOOL _showAlternate;	// 108 = 0x6c
	BOOL _flipped;	// 109 = 0x6d
	int _currentAnimation;	// 112 = 0x70
	UITabBar *_tabBar;	// 116 = 0x74
	int _buttonTag;	// 120 = 0x78
}
- (id)initWithImage:(id)image alternateImage:(id)image2;	// 0x3011b725
- (void)animateImage:(float)image withTabBar:(id)tabBar withTag:(int)tag;	// 0x302e01c1
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x302e03d9
- (void)dealloc;	// 0x302e0145
- (void)setAlternateImage:(id)image;	// 0x302e0415
- (void)setCurrentImage;	// 0x3011b845
- (void)setImage:(id)image;	// 0x302e0485
- (void)showAlternateImage:(BOOL)image;	// 0x3011d261
@end

