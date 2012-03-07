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
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x33759731; S=0x3375a6c1; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned desiredParts;	// G=0x33759721; S=0x3375a6a9; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned disabledParts;	// G=0x33759711; S=0x3375a655; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x33759701; S=0x3375a5d1; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x337595fd; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x337595f1; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x3375a54d; 
@property(assign, nonatomic) id target;	// G=0x337596e1; S=0x337596f1; @synthesize=_target
@property(assign, nonatomic) unsigned visibleParts;	// G=0x337596d1; S=0x3375a5b9; @synthesize=_visibleParts
+ (unsigned)defaultVisibleParts;	// 0x3375a725
- (id)init;	// 0x3375a6ed
- (id)initWithFrame:(CGRect)frame;	// 0x3375ad95
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x3375a535
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x33759f09
- (unsigned)_applyPossibleVisiblePartsToParts:(unsigned)parts;	// 0x33759f2d
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x3375a4e5
- (void)_destinationChangedNotification:(id)notification;	// 0x3375a469
- (void)_handleHoldForPart:(unsigned)part;	// 0x33759e5d
- (void)_handleReleaseForPart:(unsigned)part;	// 0x33759dd9
- (void)_handleTapForPart:(unsigned)part;	// 0x33759c75
- (void)_itemChangedNotification:(id)notification;	// 0x3375a431
- (void)_playbackStateChangedNotification:(id)notification;	// 0x3375a335
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x33759841
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned)part;	// 0x3375a849
- (void)_updateEnabledStates:(BOOL)states;	// 0x33759741
- (void)_validityChangedNotification:(id)notification;	// 0x3375a31d
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x33759731
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x3375a2d9
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x33759615
- (void)buttonDown:(id)down;	// 0x3375a2a5
- (id)buttonForPart:(unsigned)part;	// 0x33759619
- (void)buttonHeld:(id)held;	// 0x3375a25d
- (void)buttonHoldReleased:(id)released;	// 0x3375a231
- (id)buttonImageForPart:(unsigned)part;	// 0x3375b1f1
- (void)buttonUp:(id)up;	// 0x3375a1e1
- (id)createButtonForPart:(unsigned)part;	// 0x3375a09d
- (id)createVolumeSlider;	// 0x3375b02d
- (void)dealloc;	// 0x3375aa95
// declared property getter: - (unsigned)desiredParts;	// 0x33759721
- (void)didMoveToSuperview;	// 0x3375a9f5
- (void)didMoveToWindow;	// 0x3375aa45
// declared property getter: - (unsigned)disabledParts;	// 0x33759711
- (id)highlightedButtonImageForPart:(unsigned)part;	// 0x3375960d
// declared property getter: - (id)item;	// 0x33759701
// declared property getter: - (id)pauseButtonImage;	// 0x337595fd
// declared property getter: - (id)playButtonImage;	// 0x337595f1
// declared property getter: - (id)playPauseButtonImage;	// 0x3375a54d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x33759609
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3375a6c1
- (void)setAlpha:(float)alpha;	// 0x3375a9a5
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x3375a6a9
- (void)setDesiredParts:(unsigned)parts animated:(BOOL)animated;	// 0x3375a67d
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x3375a655
- (void)setFrame:(CGRect)frame;	// 0x3375b139
- (void)setHidden:(BOOL)hidden;	// 0x3375a951
// declared property setter: - (void)setItem:(id)item;	// 0x3375a5d1
// declared property setter: - (void)setTarget:(id)target;	// 0x337596f1
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x3375a5b9
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x3375a57d
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x33759611
// declared property getter: - (id)target;	// 0x337596e1
// declared property getter: - (unsigned)visibleParts;	// 0x337596d1
@end
