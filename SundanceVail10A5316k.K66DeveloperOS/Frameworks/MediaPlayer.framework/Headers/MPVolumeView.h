/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library
#import "NSCoding.h"
#import "MPAudioDeviceControllerDelegate.h"

@class MPAudioDeviceController, UILabel, MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingPopoverController, MPVolumeSlider, UIButton;

@interface MPVolumeView : UIView <MPAudioDeviceControllerDelegate, NSCoding> {
@private
	MPAudioVideoRoutingActionSheet *_actionSheet;	// 84 = 0x54
	MPAudioDeviceController *_audioDeviceController;	// 88 = 0x58
	BOOL _hasNonDefaultRouteButtonImages;	// 92 = 0x5c
	BOOL _hasNonDefaultMaxVolumeSliderImage;	// 93 = 0x5d
	BOOL _hasNonDefaultMinVolumeSliderImage;	// 94 = 0x5e
	BOOL _hidesRouteLabelWhenNoRouteChoice;	// 95 = 0x5f
	UIButton *_routeButton;	// 96 = 0x60
	BOOL _routeDiscoveryEnabled;	// 100 = 0x64
	UILabel *_routeLabel;	// 104 = 0x68
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 108 = 0x6c
	BOOL _showingButton;	// 112 = 0x70
	BOOL _showingLabel;	// 113 = 0x71
	BOOL _showingSlider;	// 114 = 0x72
	BOOL _showsRouteButton;	// 115 = 0x73
	BOOL _showsVolumeSlider;	// 116 = 0x74
	int _style;	// 120 = 0x78
	MPVolumeSlider *_volumeSlider;	// 124 = 0x7c
	BOOL _volumeSliderShrinksFromBothEnds;	// 128 = 0x80
}
@property(assign, nonatomic) BOOL hidesRouteLabelWhenNoRouteChoice;	// G=0x348581b5; S=0x348581d5; 
@property(readonly, assign, nonatomic) BOOL isShowingRouteButton;	// G=0x34858269; 
@property(readonly, assign, nonatomic) BOOL isVisible;	// G=0x3485822d; 
@property(assign, nonatomic) BOOL showsRouteButton;	// G=0x34858025; S=0x34857fad; 
@property(assign, nonatomic) BOOL showsVolumeSlider;	// G=0x34858035; S=0x34857fd9; 
@property(readonly, assign, nonatomic) int style;	// G=0x34858195; 
@property(readonly, assign, nonatomic) MPVolumeSlider *volumeSlider;	// G=0x348581a5; 
@property(assign, nonatomic) BOOL volumeSliderShrinksFromBothEnds;	// G=0x348581c5; S=0x34858201; 
- (id)initWithCoder:(id)coder;	// 0x34857425
- (id)initWithFrame:(CGRect)frame;	// 0x34857291
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x348572bd
- (void)_createSubviews;	// 0x348583a1
- (id)_defaultRouteButtonImageAsSelected:(BOOL)selected;	// 0x3485870d
- (void)_displayAudioRoutePicker;	// 0x34858799
- (void)_getDefaultVolumeSliderFrame:(CGRect *)frame routeButtonFrame:(CGRect *)frame2 forBounds:(CGRect)bounds;	// 0x34858a99
- (void)_initWithStyle:(int)style;	// 0x348571f9
- (id)_routeButton;	// 0x34858391
- (void)_setShowsRouteButton:(BOOL)button animated:(BOOL)animated;	// 0x34858d29
- (void)_setShowsVolumeSlider:(BOOL)slider;	// 0x34859109
- (void)_setVolumeAudioCategory:(id)category;	// 0x34858371
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x34857be5
- (void)dealloc;	// 0x3485730d
- (void)didMoveToSuperview;	// 0x34857961
- (void)didMoveToWindow;	// 0x348579b9
- (void)dismissActiveOverlaysAnimated:(BOOL)animated;	// 0x34858279
- (void)encodeWithCoder:(id)coder;	// 0x34857579
// declared property getter: - (BOOL)hidesRouteLabelWhenNoRouteChoice;	// 0x348581b5
- (BOOL)isShowingActiveOverlays;	// 0x34858341
// declared property getter: - (BOOL)isShowingRouteButton;	// 0x34858269
// declared property getter: - (BOOL)isVisible;	// 0x3485822d
- (void)layoutSubviews;	// 0x34857641
- (id)maximumVolumeSliderImageForState:(unsigned)state;	// 0x34857ded
- (id)minimumVolumeSliderImageForState:(unsigned)state;	// 0x34857db9
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x34857709
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34857d59
- (id)routeButtonImageForState:(unsigned)state;	// 0x34857e21
- (CGRect)routeButtonRectForBounds:(CGRect)bounds;	// 0x34857e55
- (void)setAlpha:(float)alpha;	// 0x34857a91
- (void)setFrame:(CGRect)frame;	// 0x348577a1
- (void)setHidden:(BOOL)hidden;	// 0x34857ae9
// declared property setter: - (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)choice;	// 0x348581d5
- (void)setMaximumVolumeSliderImage:(id)image forState:(unsigned)state;	// 0x34857ec9
- (void)setMinimumVolumeSliderImage:(id)image forState:(unsigned)state;	// 0x34857e8d
- (void)setRouteButtonImage:(id)image forState:(unsigned)state;	// 0x34857f05
// declared property setter: - (void)setShowsRouteButton:(BOOL)button;	// 0x34857fad
// declared property setter: - (void)setShowsVolumeSlider:(BOOL)slider;	// 0x34857fd9
// declared property setter: - (void)setVolumeSliderShrinksFromBothEnds:(BOOL)bothEnds;	// 0x34858201
- (void)setVolumeThumbImage:(id)image forState:(unsigned)state;	// 0x34858005
// declared property getter: - (BOOL)showsRouteButton;	// 0x34858025
// declared property getter: - (BOOL)showsVolumeSlider;	// 0x34858035
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34857829
// declared property getter: - (int)style;	// 0x34858195
// declared property getter: - (id)volumeSlider;	// 0x348581a5
- (CGRect)volumeSliderRectForBounds:(CGRect)bounds;	// 0x34858045
// declared property getter: - (BOOL)volumeSliderShrinksFromBothEnds;	// 0x348581c5
- (id)volumeThumbImageForState:(unsigned)state;	// 0x3485807d
- (CGRect)volumeThumbRectForBounds:(CGRect)bounds volumeSliderRect:(CGRect)rect value:(float)value;	// 0x3485809d
- (void)willMoveToWindow:(id)window;	// 0x34857b41
@end

