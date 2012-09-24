/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class SBDeviceLockTitle, SBDeviceLockEntryField, NSString;

@interface SBDeviceLockView : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	SBDeviceLockTitle *_statusView;	// 92 = 0x5c
	SBDeviceLockEntryField *_entryView;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
}
@property(assign, nonatomic) id delegate;	// G=0x3639c6e9; S=0x3639c6f9; @synthesize=_delegate
@property(readonly, assign, nonatomic) UIView *entryView;	// G=0x3639c371; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3639c6d9; S=0x3639c655; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;	// G=0x3639c4fd; 
@property(readonly, assign, nonatomic) UIView *keypadView;	// G=0x3639c381; 
@property(retain, nonatomic) NSString *passcode;	// G=0x3639c469; S=0x3639c489; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x3639c4ed; S=0x3639c4f1; 
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;	// G=0x3639c4a9; S=0x3639c4cd; 
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;	// G=0x3639c405; S=0x3639c429; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x3639c4f5; S=0x3639c4f9; 
@property(retain, nonatomic) NSString *statusSubtitle;	// G=0x3639c3c5; S=0x3639c3e5; 
@property(retain, nonatomic) NSString *statusTitle;	// G=0x3639c385; S=0x3639c3a5; 
@property(readonly, assign, nonatomic) UIView *statusView;	// G=0x3639c361; 
@property(readonly, assign, nonatomic) int style;	// G=0x3639c6c9; @synthesize=_style
+ (int)defaultStyle;	// 0x3639bf39
+ (double)deviceLockAnimationDuration;	// 0x3639bec1
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3639bfa1
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x3639c101
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x3639c6b5
- (BOOL)becomeFirstResponder;	// 0x3639c241
- (void)blinkStatusView;	// 0x3639c449
- (BOOL)canBecomeFirstResponder;	// 0x3639c21d
- (void)dealloc;	// 0x3639c2ad
// declared property getter: - (id)delegate;	// 0x3639c6e9
- (BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;	// 0x3639c521
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x3639c501
- (void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;	// 0x3639c511
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x3639c525
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3639c6c5
// declared property getter: - (id)entryView;	// 0x3639c371
// declared property getter: - (int)interfaceOrientation;	// 0x3639c6d9
- (BOOL)isFirstResponder;	// 0x3639c265
// declared property getter: - (BOOL)isKeypadMinimized;	// 0x3639c4fd
// declared property getter: - (BOOL)isShowingEntryStatusWarning;	// 0x3639c4a9
// declared property getter: - (BOOL)isShowingStatusWarning;	// 0x3639c405
// declared property getter: - (id)keypadView;	// 0x3639c381
- (void)notifyDelegateThatCancelButtonWasPressed;	// 0x3639c5c5
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x3639c60d
- (void)notifyDelegateThatPasscodeDidChange;	// 0x3639c535
- (void)notifyDelegateThatPasscodeWasEntered;	// 0x3639c57d
// declared property getter: - (id)passcode;	// 0x3639c469
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x3639c4ed
- (BOOL)resignFirstResponder;	// 0x3639c289
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3639c6f9
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3639c655
// declared property setter: - (void)setPasscode:(id)passcode;	// 0x3639c489
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x3639c4f1
// declared property setter: - (void)setShowingEntryStatusWarning:(BOOL)warning;	// 0x3639c4cd
// declared property setter: - (void)setShowingStatusWarning:(BOOL)warning;	// 0x3639c429
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3639c4f9
// declared property setter: - (void)setStatusSubtitle:(id)subtitle;	// 0x3639c3e5
// declared property setter: - (void)setStatusTitle:(id)title;	// 0x3639c3a5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3639c311
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x3639c4f5
// declared property getter: - (id)statusSubtitle;	// 0x3639c3c5
// declared property getter: - (id)statusTitle;	// 0x3639c385
// declared property getter: - (id)statusView;	// 0x3639c361
// declared property getter: - (int)style;	// 0x3639c6c9
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3639c6b1
@end
