/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class NSMutableIndexSet, MPAVItem, NSString, MPButton;

@interface MPTransportControls : UIView {
	id _target;	// 44 = 0x2c
	MPAVItem *_item;	// 48 = 0x30
	unsigned _desiredParts;	// 52 = 0x34
	unsigned _disabledParts;	// 56 = 0x38
	NSMutableIndexSet *_heldParts;	// 60 = 0x3c
	unsigned _visibleParts;	// 64 = 0x40
	unsigned _playing : 1;	// 68 = 0x44
	BOOL _allowsWirelessPlayback;	// 69 = 0x45
	MPButton *_alternatesButton;	// 72 = 0x48
	MPButton *_bookmarkButton;	// 76 = 0x4c
	MPButton *_chaptersButton;	// 80 = 0x50
	MPButton *_devicePickerButton;	// 84 = 0x54
	MPButton *_emailButton;	// 88 = 0x58
	MPButton *_nextButton;	// 92 = 0x5c
	MPButton *_playButton;	// 96 = 0x60
	MPButton *_previousButton;	// 100 = 0x64
	MPButton *_scaleButton;	// 104 = 0x68
	MPButton *_rewind30SecondsButton;	// 108 = 0x6c
	MPButton *_toggleFullscreenButton;	// 112 = 0x70
	id _volumeSlider;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x31d9f731; S=0x31da06c1; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned desiredParts;	// G=0x31d9f721; S=0x31da06a9; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x31d9f711; S=0x31da0655; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x31d9f701; S=0x31da05d1; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x31d9f5fd; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x31d9f5f1; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x31da054d; 
@property(assign, nonatomic) id target;	// G=0x31d9f6e1; S=0x31d9f6f1; @synthesize=_target
@property(assign, nonatomic) unsigned visibleParts;	// G=0x31d9f6d1; S=0x31da05b9; @synthesize=_visibleParts
+ (unsigned)defaultVisibleParts;	// 0x31da0725
- (id)init;	// 0x31da06ed
- (id)initWithFrame:(CGRect)frame;	// 0x31da0d95
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x31da0535
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x31d9ff09
- (unsigned)_applyPossibleVisiblePartsToParts:(unsigned)parts;	// 0x31d9ff2d
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x31da04e5
- (void)_destinationChangedNotification:(id)notification;	// 0x31da0469
- (void)_handleHoldForPart:(unsigned)part;	// 0x31d9fe5d
- (void)_handleReleaseForPart:(unsigned)part;	// 0x31d9fdd9
- (void)_handleTapForPart:(unsigned)part;	// 0x31d9fc75
- (void)_itemChangedNotification:(id)notification;	// 0x31da0431
- (void)_playbackStateChangedNotification:(id)notification;	// 0x31da0335
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x31d9f841
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned)part;	// 0x31da0849
- (void)_updateEnabledStates:(BOOL)states;	// 0x31d9f741
- (void)_validityChangedNotification:(id)notification;	// 0x31da031d
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x31d9f731
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x31da02d9
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x31d9f615
- (void)buttonDown:(id)down;	// 0x31da02a5
- (id)buttonForPart:(unsigned)part;	// 0x31d9f619
- (void)buttonHeld:(id)held;	// 0x31da025d
- (void)buttonHoldReleased:(id)released;	// 0x31da0231
- (id)buttonImageForPart:(unsigned)part;	// 0x31da11f1
- (void)buttonUp:(id)up;	// 0x31da01e1
- (id)createButtonForPart:(unsigned)part;	// 0x31da009d
- (id)createVolumeSlider;	// 0x31da102d
- (void)dealloc;	// 0x31da0a95
// declared property getter: - (unsigned)desiredParts;	// 0x31d9f721
- (void)didMoveToSuperview;	// 0x31da09f5
- (void)didMoveToWindow;	// 0x31da0a45
// declared property getter: - (unsigned)disabledParts;	// 0x31d9f711
- (id)highlightedButtonImageForPart:(unsigned)part;	// 0x31d9f60d
// declared property getter: - (id)item;	// 0x31d9f701
// declared property getter: - (id)pauseButtonImage;	// 0x31d9f5fd
// declared property getter: - (id)playButtonImage;	// 0x31d9f5f1
// declared property getter: - (id)playPauseButtonImage;	// 0x31da054d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31d9f609
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31da06c1
- (void)setAlpha:(float)alpha;	// 0x31da09a5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x31da06a9
- (void)setDesiredParts:(unsigned)parts animated:(BOOL)animated;	// 0x31da067d
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x31da0655
- (void)setFrame:(CGRect)frame;	// 0x31da1139
- (void)setHidden:(BOOL)hidden;	// 0x31da0951
// declared property setter: - (void)setItem:(id)item;	// 0x31da05d1
// declared property setter: - (void)setTarget:(id)target;	// 0x31d9f6f1
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x31da05b9
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x31da057d
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x31d9f611
// declared property getter: - (id)target;	// 0x31d9f6e1
// declared property getter: - (unsigned)visibleParts;	// 0x31d9f6d1
@end

