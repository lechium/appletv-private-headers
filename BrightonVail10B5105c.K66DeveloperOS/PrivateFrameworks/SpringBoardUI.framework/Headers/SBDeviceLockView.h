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
@property(assign, nonatomic) id delegate;	// G=0x303fb559; S=0x303fb569; @synthesize=_delegate
@property(readonly, assign, nonatomic) UIView *entryView;	// G=0x303fb1e1; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x303fb549; S=0x303fb4c5; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;	// G=0x303fb36d; 
@property(readonly, assign, nonatomic) UIView *keypadView;	// G=0x303fb1f1; 
@property(retain, nonatomic) NSString *passcode;	// G=0x303fb2d9; S=0x303fb2f9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x303fb35d; S=0x303fb361; 
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;	// G=0x303fb319; S=0x303fb33d; 
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;	// G=0x303fb275; S=0x303fb299; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x303fb365; S=0x303fb369; 
@property(retain, nonatomic) NSString *statusSubtitle;	// G=0x303fb235; S=0x303fb255; 
@property(retain, nonatomic) NSString *statusTitle;	// G=0x303fb1f5; S=0x303fb215; 
@property(readonly, assign, nonatomic) UIView *statusView;	// G=0x303fb1d1; 
@property(readonly, assign, nonatomic) int style;	// G=0x303fb539; @synthesize=_style
+ (int)defaultStyle;	// 0x303fae09
+ (int)defaultStyleForSiri;	// 0x303fade9
+ (int)defaultStyleForSiri:(BOOL)siri;	// 0x303fad69
+ (double)deviceLockAnimationDuration;	// 0x303facf1
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x303fae29
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x303faf71
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x303fb525
- (BOOL)becomeFirstResponder;	// 0x303fb0b1
- (void)blinkStatusView;	// 0x303fb2b9
- (BOOL)canBecomeFirstResponder;	// 0x303fb08d
- (void)dealloc;	// 0x303fb11d
// declared property getter: - (id)delegate;	// 0x303fb559
- (BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;	// 0x303fb391
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x303fb371
- (void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;	// 0x303fb381
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x303fb395
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303fb535
// declared property getter: - (id)entryView;	// 0x303fb1e1
// declared property getter: - (int)interfaceOrientation;	// 0x303fb549
- (BOOL)isFirstResponder;	// 0x303fb0d5
// declared property getter: - (BOOL)isKeypadMinimized;	// 0x303fb36d
// declared property getter: - (BOOL)isShowingEntryStatusWarning;	// 0x303fb319
// declared property getter: - (BOOL)isShowingStatusWarning;	// 0x303fb275
// declared property getter: - (id)keypadView;	// 0x303fb1f1
- (void)notifyDelegateThatCancelButtonWasPressed;	// 0x303fb435
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x303fb47d
- (void)notifyDelegateThatPasscodeDidChange;	// 0x303fb3a5
- (void)notifyDelegateThatPasscodeWasEntered;	// 0x303fb3ed
// declared property getter: - (id)passcode;	// 0x303fb2d9
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x303fb35d
- (BOOL)resignFirstResponder;	// 0x303fb0f9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303fb569
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x303fb4c5
// declared property setter: - (void)setPasscode:(id)passcode;	// 0x303fb2f9
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x303fb361
// declared property setter: - (void)setShowingEntryStatusWarning:(BOOL)warning;	// 0x303fb33d
// declared property setter: - (void)setShowingStatusWarning:(BOOL)warning;	// 0x303fb299
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x303fb369
// declared property setter: - (void)setStatusSubtitle:(id)subtitle;	// 0x303fb255
// declared property setter: - (void)setStatusTitle:(id)title;	// 0x303fb215
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x303fb181
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x303fb365
// declared property getter: - (id)statusSubtitle;	// 0x303fb235
// declared property getter: - (id)statusTitle;	// 0x303fb1f5
// declared property getter: - (id)statusView;	// 0x303fb1d1
// declared property getter: - (int)style;	// 0x303fb539
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303fb521
@end

