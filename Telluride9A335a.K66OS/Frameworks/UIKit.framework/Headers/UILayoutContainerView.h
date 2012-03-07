/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "_UIViewFastModeSupport.h"
#import "UIView.h"

@class UIRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView <NSCoding, _UIViewFastModeSupport> {
@private
	id _delegate;	// 48 = 0x30
	BOOL _usesRoundedCorners;	// 52 = 0x34
	float _cornerRadius;	// 56 = 0x38
	BOOL _fastMode;	// 60 = 0x3c
	UIRoundedCornerView *_roundedCornerView;	// 64 = 0x40
	BOOL _usesInnerShadow;	// 68 = 0x44
	BOOL _shadowViewsInstalled;	// 69 = 0x45
	UIView *_shadowView;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x339bfe39; S=0x339b4ba1; 
@property(assign, nonatomic) BOOL useFastMode;	// G=0x33be065d; S=0x33be044d; @synthesize=_fastMode
@property(assign, nonatomic) BOOL usesInnerShadow;	// G=0x33be066d; S=0x33be03f9; @synthesize=_usesInnerShadow
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x33be064d; S=0x33be0011; @synthesize=_usesRoundedCorners
- (id)initWithCoder:(id)coder;	// 0x33bdff51
- (void)_beginFastMode;	// 0x33be0495
- (void)_endFastMode;	// 0x33be05c1
- (void)_installShadowViews;	// 0x33be0119
- (void)_tearDownShadowViews;	// 0x33a46a95
- (void)addSubview:(id)subview;	// 0x339b93a5
- (void)dealloc;	// 0x33a46a35
// declared property getter: - (id)delegate;	// 0x339bfe39
- (void)encodeWithCoder:(id)coder;	// 0x33bdffb1
- (void)layoutSubviews;	// 0x339bfd61
- (void)setBounds:(CGRect)bounds;	// 0x33a5fdc1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339b4ba1
- (void)setFrame:(CGRect)frame;	// 0x339b4b0d
// declared property setter: - (void)setUseFastMode:(BOOL)mode;	// 0x33be044d
// declared property setter: - (void)setUsesInnerShadow:(BOOL)shadow;	// 0x33be03f9
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x33be0011
// declared property getter: - (BOOL)useFastMode;	// 0x33be065d
// declared property getter: - (BOOL)usesInnerShadow;	// 0x33be066d
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x33be064d
@end
