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
- (id)init;	// 0x3372f105
- (CGRect)_getFrameForFeatureAtIndex:(int)index;	// 0x3372f6dd
- (BOOL)_isFeatureEnabled:(id)enabled;	// 0x3372eac1
- (void)_musicStoreNotification:(id)notification;	// 0x3372fdc9
- (void)_storeWaitTimerFired:(id)fired;	// 0x3372ebbd
- (id)accessibilityLabel;	// 0x3372fbfd
- (BOOL)brEventAction:(id)action;	// 0x3372ed51
- (void)dealloc;	// 0x3372eddd
- (BOOL)isAccessibilityElement;	// 0x3372ea51
- (void)layoutSubcontrols;	// 0x3372f799
- (void)wasPushed;	// 0x3372ebf1
@end

