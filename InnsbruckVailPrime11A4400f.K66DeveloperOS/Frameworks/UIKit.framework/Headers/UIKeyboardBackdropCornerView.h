/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardBackdropCornerView : UIView {
	int _corners;	// 96 = 0x60
	float _radius;	// 100 = 0x64
}
- (id)initWithFrame:(CGRect)frame withCorners:(int)corners;	// 0x2f62a2c9
- (id)_generateBackdropMaskImage;	// 0x2f62a489
- (void)drawRect:(CGRect)rect;	// 0x2f62a3c5
- (void)updateFrame:(CGRect)frame withCorners:(int)corners;	// 0x2f62a38d
@end

