/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

@interface UIClipCornerView : UIView {
	float _cornerRadius;	// 44 = 0x2c
	int _rectCorner;	// 48 = 0x30
	CGPoint _pathOrigin;	// 52 = 0x34
	CGPathRef _clipPath;	// 60 = 0x3c
	UIImage *_backgroundImage;	// 64 = 0x40
	CGRect _backgroundImageSubrect;	// 68 = 0x44
	CGAffineTransform _backgroundTransform;	// 84 = 0x54
	BOOL _useSnapshot;	// 108 = 0x6c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3032216d; S=0x303223e1; @synthesize=_backgroundImage
@property(assign, nonatomic) CGRect backgroundImageSubrect;	// G=0x30322151; S=0x30322821; @synthesize=_backgroundImageSubrect
@property(assign, nonatomic) float cornerRadius;	// G=0x3032217d; S=0x3032242d; @synthesize=_cornerRadius
@property(assign, nonatomic) BOOL useSnapshot;	// G=0x30322141; S=0x303223a5; @synthesize=_useSnapshot
- (id)initWithCornerRadius:(float)cornerRadius forCorner:(int)corner;	// 0x30322669
- (void)_updateCornerPath;	// 0x3032218d
- (void)_updateSnapshot;	// 0x3032287d
// declared property getter: - (id)backgroundImage;	// 0x3032216d
// declared property getter: - (CGRect)backgroundImageSubrect;	// 0x30322151
// declared property getter: - (float)cornerRadius;	// 0x3032217d
- (void)dealloc;	// 0x30322619
- (void)drawRect:(CGRect)rect;	// 0x3032308d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x303223e1
// declared property setter: - (void)setBackgroundImageSubrect:(CGRect)subrect;	// 0x30322821
// declared property setter: - (void)setCornerRadius:(float)radius;	// 0x3032242d
- (void)setFrame:(CGRect)frame;	// 0x3032272d
// declared property setter: - (void)setUseSnapshot:(BOOL)snapshot;	// 0x303223a5
// declared property getter: - (BOOL)useSnapshot;	// 0x30322141
@end

