/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class NSString, MPAVController, MPButton, NSMutableIndexSet, MPAVItem;

@interface MPTransportControls : UIView {
	id _target;	// 88 = 0x58
	MPAVItem *_item;	// 92 = 0x5c
	MPAVController *_player;	// 96 = 0x60
	unsigned long long _desiredParts;	// 100 = 0x64
	unsigned long long _disabledParts;	// 108 = 0x6c
	NSMutableIndexSet *_heldParts;	// 116 = 0x74
	unsigned long long _visibleParts;	// 120 = 0x78
	unsigned _playing : 1;	// 128 = 0x80
	BOOL _allowsWirelessPlayback;	// 129 = 0x81
	BOOL _registeredForPlayerNotifications;	// 130 = 0x82
	MPButton *_alternatesButton;	// 132 = 0x84
	MPButton *_bookmarkButton;	// 136 = 0x88
	MPButton *_chaptersButton;	// 140 = 0x8c
	MPButton *_devicePickerButton;	// 144 = 0x90
	MPButton *_emailButton;	// 148 = 0x94
	MPButton *_likeOrBanButton;	// 152 = 0x98
	MPButton *_nextButton;	// 156 = 0x9c
	MPButton *_playButton;	// 160 = 0xa0
	MPButton *_previousButton;	// 164 = 0xa4
	MPButton *_rewind30SecondsButton;	// 168 = 0xa8
	MPButton *_scaleButton;	// 172 = 0xac
	MPButton *_toggleFullscreenButton;	// 176 = 0xb0
	id _volumeSlider;	// 180 = 0xb4
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x3484fdf5; S=0x3484e535; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x3484fe05; S=0x3484e561; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x3484fe1d; S=0x3484e5d5; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x3484fe35; S=0x3484e621; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x3484e749; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x3484e73d; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x3484e755; 
@property(retain, nonatomic) MPAVController *player;	// G=0x3484fe45; S=0x3484dd49; @synthesize=_player
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// G=0x3484fe8d; S=0x3484fe9d; @synthesize=_registeredForPlayerNotifications
@property(assign, nonatomic) id target;	// G=0x3484fe55; S=0x3484fe65; @synthesize=_target
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x3484fe75; S=0x3484e6b9; @synthesize=_visibleParts
+ (Class)buttonClass;	// 0x3484e2f5
+ (unsigned long long)defaultVisibleParts;	// 0x3484d665
- (id)init;	// 0x3484d6b1
- (id)initWithFrame:(CGRect)frame;	// 0x3484d6e1
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x3484e789
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x3484f2b9
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)parts;	// 0x3484f11d
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x3484e7e9
- (void)_handleHoldForPart:(unsigned long long)part;	// 0x3484f2ed
- (void)_handleReleaseForPart:(unsigned long long)part;	// 0x3484f3b5
- (void)_handleTapForPart:(unsigned long long)part;	// 0x3484f459
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x3484e845
- (void)_itemChangedNotification:(id)notification;	// 0x3484e8b9
- (void)_playbackStateChangedNotification:(id)notification;	// 0x3484e8f9
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x3484f6d9
- (void)_timeMarkersAvailableNotification:(id)notification;	// 0x3484e859
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned long long)part;	// 0x3484fb79
- (void)_updateEnabledStates:(BOOL)states;	// 0x3484fcb9
- (void)_validityChangedNotification:(id)notification;	// 0x3484ea55
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x3484fdf5
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x3484ea69
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x3484f119
- (void)buttonDown:(id)down;	// 0x3484eab5
- (id)buttonForPart:(unsigned long long)part;	// 0x3484e311
- (void)buttonHeld:(id)held;	// 0x3484eaf1
- (void)buttonHoldReleased:(id)released;	// 0x3484eb45
- (id)buttonImageForPart:(unsigned long long)part;	// 0x3484eea9
- (void)buttonUp:(id)up;	// 0x3484eb79
- (void)dealloc;	// 0x3484d849
// declared property getter: - (unsigned long long)desiredParts;	// 0x3484fe05
- (void)didMoveToSuperview;	// 0x3484e119
- (void)didMoveToWindow;	// 0x3484e0c1
// declared property getter: - (unsigned long long)disabledParts;	// 0x3484fe1d
- (id)highlightedButtonImageForPart:(unsigned long long)part;	// 0x3484f111
// declared property getter: - (id)item;	// 0x3484fe35
- (id)newButtonForPart:(unsigned long long)part;	// 0x3484ebd5
- (id)newVolumeSlider;	// 0x3484ed8d
// declared property getter: - (id)pauseButtonImage;	// 0x3484e749
// declared property getter: - (id)playButtonImage;	// 0x3484e73d
// declared property getter: - (id)playPauseButtonImage;	// 0x3484e755
// declared property getter: - (id)player;	// 0x3484fe45
- (void)registerForPlayerNotifications;	// 0x3484db55
// declared property getter: - (BOOL)registeredForPlayerNotifications;	// 0x3484fe8d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x3484eea5
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3484e535
- (void)setAlpha:(float)alpha;	// 0x3484e171
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x3484e561
- (void)setDesiredParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x3484e585
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x3484e5d5
- (void)setFrame:(CGRect)frame;	// 0x3484e221
- (void)setHidden:(BOOL)hidden;	// 0x3484e1c9
// declared property setter: - (void)setItem:(id)item;	// 0x3484e621
// declared property setter: - (void)setPlayer:(id)player;	// 0x3484dd49
// declared property setter: - (void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;	// 0x3484fe9d
// declared property setter: - (void)setTarget:(id)target;	// 0x3484fe65
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x3484e6b9
- (void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x3484e6dd
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x3484f115
// declared property getter: - (id)target;	// 0x3484fe55
- (void)unregisterForPlayerNotifications;	// 0x3484dc79
// declared property getter: - (unsigned long long)visibleParts;	// 0x3484fe75
@end

