/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRController.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRTextControl, NSMutableArray, BRImageControl, NSTimer;

@interface ATVNewFeaturesController : BRController {
@private
	BOOL _iTunesStoreInitialized;	// 60 = 0x3c
	BRImageControl *_topDividerControl;	// 64 = 0x40
	BRImageControl *_bottomDividerControl;	// 68 = 0x44
	BRImageControl *_continueButtonControl;	// 72 = 0x48
	BRTextControl *_continueTextControl;	// 76 = 0x4c
	BRTextControl *_whatsNewControl;	// 80 = 0x50
	BRTextControl *_moreInfoURLControl;	// 84 = 0x54
	NSMutableArray *_featureControls;	// 88 = 0x58
	NSTimer *_storeWaitTimer;	// 92 = 0x5c
}
- (id)init;	// 0x307c8105
- (CGRect)_getFrameForFeatureAtIndex:(int)index;	// 0x307c86dd
- (BOOL)_isFeatureEnabled:(id)enabled;	// 0x307c7ac1
- (void)_musicStoreNotification:(id)notification;	// 0x307c8dc9
- (void)_storeWaitTimerFired:(id)fired;	// 0x307c7bbd
- (id)accessibilityLabel;	// 0x307c8bfd
- (BOOL)brEventAction:(id)action;	// 0x307c7d51
- (void)dealloc;	// 0x307c7ddd
- (BOOL)isAccessibilityElement;	// 0x307c7a51
- (void)layoutSubcontrols;	// 0x307c8799
- (void)wasPushed;	// 0x307c7bf1
@end
