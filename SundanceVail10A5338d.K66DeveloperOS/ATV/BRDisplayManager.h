/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class CADisplay, NSString, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface BRDisplayManager : BRSingleton {
	CADisplay *_display;	// 4 = 0x4
	int _modeChangeFailureCount;	// 8 = 0x8
	NSTimer *_modeChangeFailureRetryTimer;	// 12 = 0xc
	BOOL _computingAllModes;	// 16 = 0x10
	BOOL _settingCurrentMode;	// 17 = 0x11
	NSMutableArray *_nonVirtualModes;	// 20 = 0x14
	NSMutableArray *_virtualModes;	// 24 = 0x18
	NSString *_displayIDMatchingModes;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x338ba9
+ (id)singleton;	// 0x338b99
- (id)init;	// 0x3389d1
- (void)_availableModesDidChange;	// 0x339b7d
- (void)_clearUserPreferredModeForCurrentDisplay;	// 0x33afa5
- (void)_computeAllModesForDisplay;	// 0x33a541
- (BOOL)_currentModeIsValid;	// 0x339ce9
- (void)_displayModeDidChange;	// 0x3399f1
- (BOOL)_setCurrentMode:(id)mode;	// 0x339d45
- (void)_setDisplay:(id)display;	// 0x339935
- (void)_setDisplayToDefaultColorMode;	// 0x33a429
- (void)_setDisplayToDefaultMode;	// 0x339f5d
- (id)_uniqueDisplayID;	// 0x33a4e9
- (id)_userPreferredModeForCurrentDisplay;	// 0x33aaa9
- (id)allPotentialModes;	// 0x3395e9
- (int)colorMode;	// 0x339331
- (id)currentMode;	// 0x339131
- (BOOL)currentModeIsAuto;	// 0x339221
- (void)dealloc;	// 0x338aed
- (BOOL)displayModeSupported:(id)supported;	// 0x339731
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x339785
- (BOOL)setColorMode:(int)mode;	// 0x3393c5
- (BOOL)setCurrentModeToAuto;	// 0x3392c9
- (BOOL)setUserPreferredMode:(id)mode;	// 0x338d51
- (id)stringForDisplayMode:(id)displayMode;	// 0x338c85
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x338bb9
@end
