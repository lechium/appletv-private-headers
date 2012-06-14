/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"


__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding> {
@private
	id _delegate;	// 84 = 0x54
	BOOL _usesRoundedCorners;	// 88 = 0x58
	float _cornerRadius;	// 92 = 0x5c
	BOOL _usesInnerShadow;	// 96 = 0x60
	BOOL _shadowViewsInstalled;	// 97 = 0x61
	UIView *_shadowView;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x300ce2cd; S=0x300c1bd9; 
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x302d0a19; S=0x302d09b5; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x302d0a09; S=0x302d0535; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x302d0479
- (void)_installShadowViews;	// 0x302d0645
- (void)_tearDownShadowViews;	// 0x3014a3a9
- (void)addSubview:(id)subview;	// 0x300c6c31
- (void)dealloc;	// 0x3014a369
// declared property getter: - (id)delegate;	// 0x300ce2cd
- (void)encodeWithCoder:(id)coder;	// 0x302d04d9
- (void)layoutSubviews;	// 0x300ce1f1
- (void)setBounds:(CGRect)bounds;	// 0x30162091
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300c1bd9
- (void)setFrame:(CGRect)frame;	// 0x300c1b45
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x302d09b5
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x302d0535
// declared property getter: - (BOOL)usesInnerShadow;	// 0x302d0a19
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x302d0a09
@end

