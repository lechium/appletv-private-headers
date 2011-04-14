/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage, UIClipCornerView;

@interface UIRoundedCornerView : UIView {
	UIClipCornerView *_clipCornerViews[4];	// 44 = 0x2c
	float _cornerRadius;	// 60 = 0x3c
	float _cornerSize;	// 64 = 0x40
	float _edgeInset;	// 68 = 0x44
	UIImage *_imageBackground;	// 72 = 0x48
}
- (id)initWithCornerRadius:(float)cornerRadius size:(float)size inset:(float)inset;	// 0x308394f5
- (void)_layoutSubviews;	// 0x30839dcd
- (CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;	// 0x30839fc1
- (void)dealloc;	// 0x30839475
- (void)didMoveToSuperview;	// 0x30839271
- (void)setFrame:(CGRect)frame;	// 0x30839d25
- (void)setImageBackground:(id)background;	// 0x30839325
- (void)setUseSnapshot:(BOOL)snapshot;	// 0x308392bd
@end

