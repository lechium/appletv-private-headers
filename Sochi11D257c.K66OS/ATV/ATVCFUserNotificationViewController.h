/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVCFUserNotification;

__attribute__((visibility("hidden")))
@interface ATVCFUserNotificationViewController : XXUnknownSuperclass <BRTextFieldDelegate> {
	BOOL _passwordAutofillRequiresOneClick;	// 4 = 0x4
	BOOL _shouldCancel;	// 5 = 0x5
	BOOL _activated;	// 6 = 0x6
	ATVCFUserNotification *_notification;	// 8 = 0x8
	double _creationTime;	// 12 = 0xc
}
@property(assign, nonatomic, getter=isActivated) BOOL activated;	// G=0x380c9; S=0x380d9; @synthesize=_activated
@property(assign, nonatomic) double creationTime;	// G=0x380e9; S=0x38101; @synthesize=_creationTime
@property(retain, nonatomic) ATVCFUserNotification *notification;	// G=0x38051; S=0x38061; @synthesize=_notification
@property(assign, nonatomic) BOOL passwordAutofillRequiresOneClick;	// G=0x38089; S=0x38099; @synthesize=_passwordAutofillRequiresOneClick
@property(assign, nonatomic) BOOL shouldCancel;	// G=0x380a9; S=0x380b9; @synthesize=_shouldCancel
- (id)initWithNotification:(id)notification;	// 0x36b41
- (void).cxx_destruct;	// 0x38115
- (void)_activate;	// 0x36e29
- (BOOL)_configurePasswordTextEntryDialog:(id)dialog;	// 0x37c0d
- (void)_configureUsernameTextEntryDialog:(id)dialog;	// 0x37981
- (void)_dismiss;	// 0x378d9
- (id)_passwordForAccount:(id)account;	// 0x37fc1
- (void)_sendResponse:(int)response;	// 0x378dd
- (void)cancel;	// 0x36de9
// declared property getter: - (double)creationTime;	// 0x380e9
// declared property getter: - (BOOL)isActivated;	// 0x380c9
// declared property getter: - (id)notification;	// 0x38051
// declared property getter: - (BOOL)passwordAutofillRequiresOneClick;	// 0x38089
// declared property setter: - (void)setActivated:(BOOL)activated;	// 0x380d9
// declared property setter: - (void)setCreationTime:(double)time;	// 0x38101
// declared property setter: - (void)setNotification:(id)notification;	// 0x38061
// declared property setter: - (void)setPasswordAutofillRequiresOneClick:(BOOL)click;	// 0x38099
// declared property setter: - (void)setShouldCancel:(BOOL)cancel;	// 0x380b9
// declared property getter: - (BOOL)shouldCancel;	// 0x380a9
- (void)textDidChange:(id)text;	// 0x36dfd
- (void)textDidEndEditing:(id)text;	// 0x36e01
- (void)update;	// 0x36ba1
- (void)wakeup;	// 0x36ba5
@end

