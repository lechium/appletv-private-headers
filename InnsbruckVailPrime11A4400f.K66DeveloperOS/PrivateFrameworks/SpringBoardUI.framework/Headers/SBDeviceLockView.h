/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIView.h>

@class SBDeviceLockTitle, NSString, SBDeviceLockEntryField;

@interface SBDeviceLockView : UIView {
	int _style;	// 96 = 0x60
	int _interfaceOrientation;	// 100 = 0x64
	SBDeviceLockTitle *_statusView;	// 104 = 0x68
	SBDeviceLockEntryField *_entryView;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
}
@property(assign, nonatomic) id delegate;	// G=0x327865dd; S=0x327865ed; @synthesize=_delegate
@property(readonly, assign, nonatomic) UIView *entryView;	// G=0x32786265; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x327865cd; S=0x32786549; @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic, getter=isKeypadMinimized) BOOL keypadMinimized;	// G=0x327863f1; 
@property(readonly, assign, nonatomic) UIView *keypadView;	// G=0x32786275; 
@property(retain, nonatomic) NSString *passcode;	// G=0x3278635d; S=0x3278637d; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x327863e1; S=0x327863e5; 
@property(assign, nonatomic, getter=isShowingEntryStatusWarning) BOOL showingEntryStatusWarning;	// G=0x3278639d; S=0x327863c1; 
@property(assign, nonatomic, getter=isShowingStatusWarning) BOOL showingStatusWarning;	// G=0x327862f9; S=0x3278631d; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x327863e9; S=0x327863ed; 
@property(retain, nonatomic) NSString *statusSubtitle;	// G=0x327862b9; S=0x327862d9; 
@property(retain, nonatomic) NSString *statusTitle;	// G=0x32786279; S=0x32786299; 
@property(readonly, assign, nonatomic) UIView *statusView;	// G=0x32786255; 
@property(readonly, assign, nonatomic) int style;	// G=0x327865bd; @synthesize=_style
+ (int)defaultStyle;	// 0x32785e79
+ (int)defaultStyleForSiri;	// 0x32785e59
+ (int)defaultStyleForSiri:(BOOL)siri;	// 0x32785dd9
+ (double)deviceLockAnimationDuration;	// 0x32785d69
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x32785e99
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;	// 0x32785ff5
- (void)animateToInterfaceInterfaceOrientation:(int)interfaceInterfaceOrientation;	// 0x327865a9
- (BOOL)becomeFirstResponder;	// 0x32786135
- (void)blinkStatusView;	// 0x3278633d
- (BOOL)canBecomeFirstResponder;	// 0x32786111
- (void)dealloc;	// 0x327861a1
// declared property getter: - (id)delegate;	// 0x327865dd
- (BOOL)deviceLockEntryField:(id)field shouldInsertText:(id)text;	// 0x32786415
- (void)deviceLockEntryFieldDidAcceptEntry:(id)deviceLockEntryField;	// 0x327863f5
- (void)deviceLockEntryFieldDidCancelEntry:(id)deviceLockEntryField;	// 0x32786405
- (void)deviceLockEntryFieldTextDidChange:(id)deviceLockEntryFieldText;	// 0x32786419
- (void)didAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x327865b9
// declared property getter: - (id)entryView;	// 0x32786265
// declared property getter: - (int)interfaceOrientation;	// 0x327865cd
- (BOOL)isFirstResponder;	// 0x32786159
// declared property getter: - (BOOL)isKeypadMinimized;	// 0x327863f1
// declared property getter: - (BOOL)isShowingEntryStatusWarning;	// 0x3278639d
// declared property getter: - (BOOL)isShowingStatusWarning;	// 0x327862f9
// declared property getter: - (id)keypadView;	// 0x32786275
- (void)notifyDelegateThatCancelButtonWasPressed;	// 0x327864b9
- (void)notifyDelegateThatEmergencyCallButtonWasPressed;	// 0x32786501
- (void)notifyDelegateThatPasscodeDidChange;	// 0x32786429
- (void)notifyDelegateThatPasscodeWasEntered;	// 0x32786471
// declared property getter: - (id)passcode;	// 0x3278635d
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x327863e1
- (BOOL)resignFirstResponder;	// 0x3278617d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x327865ed
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x32786549
// declared property setter: - (void)setPasscode:(id)passcode;	// 0x3278637d
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x327863e5
// declared property setter: - (void)setShowingEntryStatusWarning:(BOOL)warning;	// 0x327863c1
// declared property setter: - (void)setShowingStatusWarning:(BOOL)warning;	// 0x3278631d
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x327863ed
// declared property setter: - (void)setStatusSubtitle:(id)subtitle;	// 0x327862d9
// declared property setter: - (void)setStatusTitle:(id)title;	// 0x32786299
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x32786205
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x327863e9
// declared property getter: - (id)statusSubtitle;	// 0x327862b9
// declared property getter: - (id)statusTitle;	// 0x32786279
// declared property getter: - (id)statusView;	// 0x32786255
// declared property getter: - (int)style;	// 0x327865bd
- (void)willAnimateToInterfaceOrientation:(int)interfaceOrientation;	// 0x327865a5
@end

