/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuItem.h"

@class ATVMerchant, NSString;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 144 = 0x90
	BOOL _signOutExitsApp;	// 148 = 0x94
	NSString *_confirmationTitle;	// 152 = 0x98
	NSString *_confirmationDescription;	// 156 = 0x9c
	NSString *_signInPageURL;	// 160 = 0xa0
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x32ffc4bd; S=0x32ffc4cd; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x32ffc489; S=0x32ffc499; @synthesize=_confirmationTitle
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x32ffc435; S=0x32ffc445; @synthesize=_merchant
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x32ffc4f1; S=0x32ffc501; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x32ffc469; S=0x32ffc479; @synthesize=_signOutExitsApp
- (void)_update;	// 0x32ffbf19
- (BOOL)brEventAction:(id)action;	// 0x32ffc045
// declared property getter: - (id)confirmationDescription;	// 0x32ffc4bd
// declared property getter: - (id)confirmationTitle;	// 0x32ffc489
- (void)controlWasActivated;	// 0x32ffc005
- (void)dealloc;	// 0x32ffbe91
// declared property getter: - (id)merchant;	// 0x32ffc435
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x32ffc4cd
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x32ffc499
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x32ffc445
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x32ffc501
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x32ffc479
// declared property getter: - (id)signInPageURL;	// 0x32ffc4f1
// declared property getter: - (BOOL)signOutExitsApp;	// 0x32ffc469
@end

