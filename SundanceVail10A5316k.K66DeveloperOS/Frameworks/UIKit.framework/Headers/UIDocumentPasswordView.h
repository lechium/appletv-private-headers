/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"

@class UIDocumentPasswordField, UILabel, UIImageView, UITextField;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
	UIImageView *_iconView;	// 84 = 0x54
	UIDocumentPasswordField *_passwordTextField;	// 88 = 0x58
	UILabel *_label;	// 92 = 0x5c
@private
	NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;	// 96 = 0x60
}
@property(assign, nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;	// G=0x3043ff51; S=0x3043ff61; @synthesize
@property(readonly, assign, nonatomic) UITextField *passwordField;	// G=0x3043ff71; @synthesize=_passwordTextField
- (id)initWithDocumentName:(id)documentName;	// 0x3043f611
- (CGRect)_iconRectForWidth:(float)width;	// 0x3043faf9
- (void)_passwordEntered:(id)entered;	// 0x3043ff05
- (void)dealloc;	// 0x3043fa55
- (void)drawRect:(CGRect)rect;	// 0x3043fd3d
- (void)layoutSubviews;	// 0x3043fbd5
// declared property getter: - (id)passwordDelegate;	// 0x3043ff51
// declared property getter: - (id)passwordField;	// 0x3043ff71
// declared property setter: - (void)setPasswordDelegate:(id)delegate;	// 0x3043ff61
- (void)textFieldDidBeginEditing:(id)textField;	// 0x3043fe55
- (void)textFieldDidEndEditing:(id)textField;	// 0x3043fead
@end

