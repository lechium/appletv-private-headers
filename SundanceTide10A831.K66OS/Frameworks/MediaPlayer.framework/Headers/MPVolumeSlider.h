/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSString, MPAVController, UIImageView, NSTimer, UIView;

@interface MPVolumeSlider : UISlider {
	NSTimer *_commitTimer;	// 172 = 0xac
	MPAVController *_player;	// 176 = 0xb0
	UILabel *_routeNameLabel;	// 180 = 0xb4
	int _style;	// 184 = 0xb8
	UIImageView *_thumbImageView;	// 188 = 0xbc
	UIImageView *_thumbMaskImageView;	// 192 = 0xc0
	NSString *_volumeAudioCategory;	// 196 = 0xc4
	BOOL _isOffScreen;	// 200 = 0xc8
	BOOL _volumeWarningEnabled;	// 201 = 0xc9
	UIView *_volumeWarningView;	// 204 = 0xcc
	int _volumeWarningState;	// 208 = 0xd0
	float _EUVolumeLimit;	// 212 = 0xd4
	BOOL _volumeWarningBlinking;	// 216 = 0xd8
}
@property(assign, nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;	// G=0x36ef9c71; S=0x36ef8495; @synthesize
@property(retain, nonatomic) MPAVController *player;	// G=0x36ef8169; S=0x36ef8179; 
@property(readonly, assign, nonatomic) int style;	// G=0x36ef9c61; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x36ef8345; S=0x36ef8411; 
- (id)initWithFrame:(CGRect)frame;	// 0x36ef6dc9
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x36ef6df5
- (void)_EUVolumeLimitDidChange:(id)_EUVolumeLimit;	// 0x36ef89b9
- (void)_EUVolumeLimitEnforcedDidChange:(id)_EUVolumeLimitEnforced;	// 0x36ef8a25
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x36ef84e5
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x36ef8539
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x36ef85d5
- (void)_beginBlinkingWarningView;	// 0x36ef9b69
- (void)_blinkWarningView;	// 0x36ef9b89
- (void)_commitVolumeChange;	// 0x36ef8c59
- (void)_endBlinkingWarningView;	// 0x36ef9c11
- (void)_endTracking;	// 0x36ef7c61
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x36ef8605
// declared property getter: - (BOOL)_isOffScreen;	// 0x36ef9c71
- (void)_layoutForAvailableRoutes;	// 0x36ef9139
- (void)_layoutMaskForThumb;	// 0x36ef8ef5
- (void)_layoutVolumeWarningView;	// 0x36ef9819
- (id)_maxTrackImageForStyle:(int)style;	// 0x36ef8e55
- (id)_minTrackImageForStyle:(int)style;	// 0x36ef8db5
- (void)_routeNameLabelAnimationDidEnd;	// 0x36ef9b2d
// declared property setter: - (void)_setIsOffScreen:(BOOL)screen;	// 0x36ef8495
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x36ef8635
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x36ef866d
- (id)_thumbImageForStyle:(int)style;	// 0x36ef8d1d
- (void)_updateVolumeFromAVController;	// 0x36ef8b89
- (void)_volumeDidChange:(id)_volume;	// 0x36ef8891
- (float)_volumeFromAVController;	// 0x36ef8ab5
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36ef77e1
- (void)cancelTrackingWithEvent:(id)event;	// 0x36ef7c21
- (id)createThumbView;	// 0x36ef73ad
- (void)dealloc;	// 0x36ef7165
- (void)didMoveToSuperview;	// 0x36ef7e15
- (void)didMoveToWindow;	// 0x36ef7eb5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36ef7b41
- (void)layoutSubviews;	// 0x36ef7d59
- (float)maximumValue;	// 0x36ef7489
- (float)minimumValue;	// 0x36ef7491
// declared property getter: - (id)player;	// 0x36ef8169
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x36ef7f29
- (void)setAlpha:(float)alpha;	// 0x36ef8045
- (void)setFrame:(CGRect)frame;	// 0x36ef7dbd
- (void)setHidden:(BOOL)hidden;	// 0x36ef809d
// declared property setter: - (void)setPlayer:(id)player;	// 0x36ef8179
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x36ef80f5
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x36ef7495
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x36ef8411
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36ef7fe1
// declared property getter: - (int)style;	// 0x36ef9c61
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x36ef7625
// declared property getter: - (id)volumeAudioCategory;	// 0x36ef8345
@end

