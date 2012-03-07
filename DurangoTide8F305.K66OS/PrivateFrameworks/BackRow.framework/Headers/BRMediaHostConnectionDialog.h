/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRTextWithSpinnerController.h"

@class BRMediaHost;
@protocol BRMediaLoading, BRMediaProvider;

__attribute__((visibility("hidden")))
@interface BRMediaHostConnectionDialog : BRTextWithSpinnerController {
@private
	BRMediaHost *_mediaHost;	// 80 = 0x50
	id<BRMediaLoading, BRMediaProvider> _providerNeedingAuth;	// 84 = 0x54
	BRController *_controllerUnderneath;	// 88 = 0x58
	BOOL _timerSatisfied;	// 92 = 0x5c
	BOOL _wasBuried;	// 93 = 0x5d
	BOOL _passwordWasEntered;	// 94 = 0x5e
	BOOL _authAlreadyAttempted;	// 95 = 0x5f
}
@property(retain) BRMediaHost *mediaHost;	// G=0x329a6dd1; S=0x329a6ead; converted property
- (id)initWithHost:(id)host;	// 0x329a7041
- (void)_authRequired:(id)required;	// 0x329a715d
- (void)_checkMountStatus:(id)status;	// 0x329a7729
- (void)_hostsChanged:(id)changed;	// 0x329a6de5
- (void)_waitForHostReset:(id)hostReset;	// 0x329a7481
- (BOOL)brEventAction:(id)action;	// 0x329a7e75
- (void)dealloc;	// 0x329a6f21
// converted property getter: - (id)mediaHost;	// 0x329a6dd1
// converted property setter: - (void)setMediaHost:(id)host;	// 0x329a6ead
- (void)textDidChange:(id)text;	// 0x329a6de1
- (void)textDidEndEditing:(id)text;	// 0x329a7abd
- (void)wasBuried;	// 0x329a6ee5
- (void)wasPushed;	// 0x329a7c4d
@end
