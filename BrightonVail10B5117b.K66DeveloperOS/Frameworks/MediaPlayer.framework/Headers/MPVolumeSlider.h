/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UIView, UIImageView, NSString, NSTimer, UILabel, MPAVController;

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
@property(assign, nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;	// G=0x31d981c9; S=0x31d9696d; @synthesize
@property(retain, nonatomic) MPAVController *player;	// G=0x31d96641; S=0x31d96651; 
@property(readonly, assign, nonatomic) int style;	// G=0x31d981b9; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x31d9681d; S=0x31d968e9; 
- (id)initWithFrame:(CGRect)frame;	// 0x31d95289
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31d952b5
- (void)_EUVolumeLimitDidChange:(id)_EUVolumeLimit;	// 0x31d96e99
- (void)_EUVolumeLimitEnforcedDidChange:(id)_EUVolumeLimitEnforced;	// 0x31d96f05
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x31d969bd
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x31d96a11
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31d96aad
- (void)_beginBlinkingWarningView;	// 0x31d980c1
- (void)_blinkWarningView;	// 0x31d980e1
- (void)_commitVolumeChange;	// 0x31d9719d
- (void)_endBlinkingWarningView;	// 0x31d98169
- (void)_endTracking;	// 0x31d96139
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x31d96add
// declared property getter: - (BOOL)_isOffScreen;	// 0x31d981c9
- (BOOL)_isPlayerInValidState;	// 0x31d96f95
- (void)_layoutForAvailableRoutes;	// 0x31d97691
- (void)_layoutMaskForThumb;	// 0x31d97451
- (void)_layoutVolumeWarningView;	// 0x31d97d71
- (id)_maxTrackImageForStyle:(int)style;	// 0x31d973b1
- (id)_minTrackImageForStyle:(int)style;	// 0x31d97311
- (void)_routeNameLabelAnimationDidEnd;	// 0x31d98085
// declared property setter: - (void)_setIsOffScreen:(BOOL)screen;	// 0x31d9696d
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x31d96b0d
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x31d96b45
- (id)_thumbImageForStyle:(int)style;	// 0x31d97279
- (void)_updateVolumeFromAVController;	// 0x31d970cd
- (void)_volumeDidChange:(id)_volume;	// 0x31d96d71
- (float)_volumeFromAVController;	// 0x31d96fe1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d95ca1
- (void)cancelTrackingWithEvent:(id)event;	// 0x31d960f9
- (id)createThumbView;	// 0x31d9586d
- (void)dealloc;	// 0x31d95625
- (void)didMoveToSuperview;	// 0x31d962ed
- (void)didMoveToWindow;	// 0x31d9638d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d96019
- (void)layoutSubviews;	// 0x31d96231
- (float)maximumValue;	// 0x31d95949
- (float)minimumValue;	// 0x31d95951
// declared property getter: - (id)player;	// 0x31d96641
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31d96401
- (void)setAlpha:(float)alpha;	// 0x31d9651d
- (void)setFrame:(CGRect)frame;	// 0x31d96295
- (void)setHidden:(BOOL)hidden;	// 0x31d96575
// declared property setter: - (void)setPlayer:(id)player;	// 0x31d96651
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x31d965cd
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x31d95955
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x31d968e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31d964b9
// declared property getter: - (int)style;	// 0x31d981b9
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x31d95ae5
// declared property getter: - (id)volumeAudioCategory;	// 0x31d9681d
@end
