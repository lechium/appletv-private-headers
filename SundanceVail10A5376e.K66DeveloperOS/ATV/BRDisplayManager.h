/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSString, CADisplay, NSMutableArray, NSTimer;

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
+ (void)setSingleton:(id)singleton;	// 0x34e439
+ (id)singleton;	// 0x34e429
- (id)init;	// 0x34e261
- (void)_availableModesDidChange;	// 0x34f44d
- (void)_clearUserPreferredModeForCurrentDisplay;	// 0x3508ad
- (void)_computeAllModesForDisplay;	// 0x34fe39
- (BOOL)_currentModeIsValid;	// 0x34f5c5
- (void)_displayModeDidChange;	// 0x34f2c1
- (BOOL)_setCurrentMode:(id)mode;	// 0x34f621
- (void)_setDisplay:(id)display;	// 0x34f205
- (void)_setDisplayToDefaultColorMode;	// 0x34fd1d
- (void)_setDisplayToDefaultMode;	// 0x34f841
- (id)_uniqueDisplayID;	// 0x34fde1
- (id)_userPreferredModeForCurrentDisplay;	// 0x3503a9
- (id)allPotentialModes;	// 0x34eeb9
- (int)colorMode;	// 0x34ebf9
- (id)currentMode;	// 0x34e9f9
- (BOOL)currentModeIsAuto;	// 0x34eae9
- (void)dealloc;	// 0x34e37d
- (BOOL)displayModeSupported:(id)supported;	// 0x34f001
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x34f055
- (BOOL)setColorMode:(int)mode;	// 0x34ec8d
- (BOOL)setCurrentModeToAuto;	// 0x34eb91
- (BOOL)setUserPreferredMode:(id)mode;	// 0x34e611
- (id)stringForDisplayMode:(id)displayMode;	// 0x34e545
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x34e449
@end
