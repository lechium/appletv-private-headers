/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class NSMutableArray, NSTimer, BRTextControl, BRImageControl;
@protocol BRImageProxy;

@interface ATVNewFeaturesController : BRController {
@private
	BOOL _iTunesStoreInitialized;	// 80 = 0x50
	BOOL _imagesReady;	// 81 = 0x51
	BRImageControl *_topDividerControl;	// 84 = 0x54
	BRImageControl *_bottomDividerControl;	// 88 = 0x58
	BRImageControl *_continueButtonControl;	// 92 = 0x5c
	BRTextControl *_continueTextControl;	// 96 = 0x60
	BRTextControl *_whatsNewControl;	// 100 = 0x64
	BRTextControl *_moreInfoURLControl;	// 104 = 0x68
	NSMutableArray *_featureControls;	// 108 = 0x6c
	NSTimer *_storeWaitTimer;	// 112 = 0x70
	NSTimer *_imageWaitTimer;	// 116 = 0x74
	id<BRImageProxy> _matchLogoProxy;	// 120 = 0x78
}
- (id)init;	// 0x35d7b751
- (void)_checkForImages;	// 0x35d7d2c5
- (CGRect)_getFrameForFeatureAtIndex:(int)index count:(int)count verticalSlots:(int)slots verticalSlotIndex:(int)index4;	// 0x35d7d0d1
- (void)_imageAvailableNotification:(id)notification;	// 0x35d7cf05
- (void)_imageFailedNotification:(id)notification;	// 0x35d7cff9
- (void)_imageWaitTimerFired:(id)fired;	// 0x35d7c119
- (void)_imagesReady;	// 0x35d7d485
- (BOOL)_isFeature1Enabled;	// 0x35d7d1e1
- (BOOL)_isFeature2Enabled;	// 0x35d7d219
- (BOOL)_isFeature3Enabled;	// 0x35d7d265
- (BOOL)_isFeature4Enabled;	// 0x35d7d271
- (BOOL)_isFeature5Enabled;	// 0x35d7d275
- (BOOL)_isFeature6Enabled;	// 0x35d7d2c1
- (void)_musicStoreNotification:(id)notification;	// 0x35d7cdc1
- (void)_storeWaitTimerFired:(id)fired;	// 0x35d7c0b5
- (id)accessibilityLabel;	// 0x35d7cbe1
- (BOOL)brEventAction:(id)action;	// 0x35d7be95
- (void)dealloc;	// 0x35d7bd8d
- (BOOL)isAccessibilityElement;	// 0x35d7cbdd
- (void)layoutSubcontrols;	// 0x35d7c129
- (void)wasPushed;	// 0x35d7bf29
@end
