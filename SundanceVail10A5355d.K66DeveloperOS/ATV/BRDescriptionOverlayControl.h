/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImage, NSAttributedString, NSString, NSTimer, BRMediaPlayer;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRDescriptionOverlayControl : BRControl {
	BRControl *_customOverlay;	// 80 = 0x50
	CGColorRef _fillColor;	// 84 = 0x54
	BRMediaPlayer *_player;	// 88 = 0x58
	id<BRMediaAsset> _asset;	// 92 = 0x5c
	NSString *_imageID;	// 96 = 0x60
	BRImage *_image;	// 100 = 0x64
	BRImage *_ratingImage;	// 104 = 0x68
	NSAttributedString *_title;	// 108 = 0x6c
	NSAttributedString *_publisher;	// 112 = 0x70
	NSAttributedString *_description;	// 116 = 0x74
	NSAttributedString *_pressAndHoldDescription;	// 120 = 0x78
	BOOL _showPressAndHoldDescription;	// 124 = 0x7c
	NSTimer *_fadeTimer;	// 128 = 0x80
}
- (id)init;	// 0x2a95d1
- (void)_fadeOverlay:(id)overlay;	// 0x2aafa9
- (void)_hideOverlay;	// 0x2aaecd
- (void)_imageUpdated:(id)updated;	// 0x2aade1
- (id)_pressAndHoldDescriptionAttributes;	// 0x2aacfd
- (BOOL)_pressAndHoldOptionAvailable;	// 0x2aad1d
- (void)_setImage:(id)image;	// 0x2aacad
- (void)_showOverlay;	// 0x2aaf45
- (void)_showOverlayWithTimeout:(float)timeout;	// 0x2aa70d
- (void)_updateCurrentMediaInfo;	// 0x2aa7a9
- (id)accessibilityLabel;	// 0x2aa65d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2ab0d1
- (void)dealloc;	// 0x2a9675
- (void)drawRect:(CGRect)rect;	// 0x2a9ad9
- (BOOL)hasContent;	// 0x2a9855
- (void)hideOverlay;	// 0x2a98c9
- (BOOL)isAccessibilityElement;	// 0x2aa709
- (void)layoutSubcontrols;	// 0x2a99ed
- (void)setAsset:(id)asset;	// 0x2a97f5
- (void)setPlayer:(id)player;	// 0x2a97b9
- (void)showOverlayWithLongTimeout;	// 0x2a98d9
- (void)showOverlayWithLongTimeoutFromTouchRemote;	// 0x2a9991
- (void)showOverlayWithShortTimeout;	// 0x2a9935
@end

