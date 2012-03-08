/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView {
@private
	BOOL _active;	// 46 = 0x2e
	float _progress;	// 48 = 0x30
	UIColor *_tintColor;	// 52 = 0x34
}
@property(retain, nonatomic) UIColor *tintColor;	// G=0x358a0911; S=0x3571d37d; @synthesize=_tintColor
- (id)initWithFrame:(CGRect)frame active:(BOOL)active;	// 0x3571ce45
- (void)_updateImages;	// 0x358a07a5
- (void)dealloc;	// 0x358a07a9
- (void)setActive:(BOOL)active;	// 0x357204c1
- (void)setBounds:(CGRect)bounds;	// 0x358a07f5
- (void)setFrame:(CGRect)frame;	// 0x3571ced9
- (void)setProgress:(float)progress;	// 0x358a08ad
// declared property setter: - (void)setTintColor:(id)color;	// 0x3571d37d
// declared property getter: - (id)tintColor;	// 0x358a0911
@end

