/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRWaitSpinnerControl, BRDescriptionOverlayControl, BRTextControl, BRTransportControl;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerWaitControl : BRControl {
@private
	id<BRMediaAsset> _asset;	// 48 = 0x30
	BRDescriptionOverlayControl *_descriptionControl;	// 52 = 0x34
	BRTextControl *_loadingControl;	// 56 = 0x38
	BRWaitSpinnerControl *_loadingSpinner;	// 60 = 0x3c
	BRTextControl *_readyToPlayInNMinsControl;	// 64 = 0x40
	BRWaitSpinnerControl *_readyToPlayInNMinsSpinner;	// 68 = 0x44
	BRTextControl *_readyToPlayControl;	// 72 = 0x48
	BRTextControl *_authorizingControl;	// 76 = 0x4c
	BRWaitSpinnerControl *_authorizingSpinner;	// 80 = 0x50
	BRTransportControl *_transport;	// 84 = 0x54
}
- (id)initWithAsset:(id)asset;	// 0x33055e05
- (void)_addFadeAnimationToControl:(id)control;	// 0x33056d05
- (void)dealloc;	// 0x330562ed
- (void)layoutSubcontrols;	// 0x330567f1
- (void)setAuthorizing;	// 0x33056735
- (void)setReadyForPlayInNMins:(int)nmins;	// 0x330563ed
- (void)setReadyToPlay;	// 0x330566a5
@end

