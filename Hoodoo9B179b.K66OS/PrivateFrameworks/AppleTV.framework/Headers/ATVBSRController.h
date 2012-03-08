/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class BRDisplayMode, CADisplay, NSString, NSArray, NSTimer, ATVBSRLayer;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
@private
	id _completionBlock;	// 128 = 0x80
	ATVBSRLayer *_bsrControl;	// 132 = 0x84
	int _selectionKind;	// 136 = 0x88
	BRDisplayMode *_originalMode;	// 140 = 0x8c
	BRDisplayMode *_failedMode;	// 144 = 0x90
	BOOL _originalModeWasAuto;	// 148 = 0x94
	CADisplay *_mainDisplay;	// 152 = 0x98
	NSString *_mainDisplayUniqueID;	// 156 = 0x9c
	NSArray *_listOfResolutionsToTry;	// 160 = 0xa0
	NSTimer *_modeTimer;	// 164 = 0xa4
	int _secondsLeftBeforeNextDisplayMode;	// 168 = 0xa8
	int _attemptedModeNumber;	// 172 = 0xac
	int _numberOfBSRAttempts;	// 176 = 0xb0
	BOOL _isBSRController;	// 180 = 0xb4
	int _result;	// 184 = 0xb8
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x301540a1
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x30154125
- (id)init;	// 0x3015417d
- (void)_availableModesChanged;	// 0x301555d9
- (id)_countdownString;	// 0x30155099
- (BOOL)_executeDisplayChangeEvent;	// 0x3015515d
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x30154aed
- (id)_nextModeToTry;	// 0x30154f91
- (void)_playResolutionSwitchFailedSound;	// 0x30155565
- (void)_restoreOriginalModeAndPopController;	// 0x30155479
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x30154e45
- (void)_timerCallback:(id)callback;	// 0x301550fd
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x30154db1
- (BOOL)brEventAction:(id)action;	// 0x301545bd
- (void)dealloc;	// 0x30154185
- (float)heightForRow:(long)row;	// 0x30154969
- (long)itemCount;	// 0x3015492d
- (id)itemForRow:(long)row;	// 0x30154851
- (void)itemSelected:(long)selected;	// 0x30154659
- (void)layoutSubcontrols;	// 0x30154261
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30154971
- (BOOL)rowSelectable:(long)selectable;	// 0x3015496d
- (id)titleForRow:(long)row;	// 0x30154745
- (void)wasPopped;	// 0x301544f5
- (void)wasPushed;	// 0x30154361
@end

