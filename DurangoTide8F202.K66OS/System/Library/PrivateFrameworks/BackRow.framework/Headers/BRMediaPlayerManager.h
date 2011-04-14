/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"
#import "BackRow-Structs.h"

@class NSTimer, NSDictionary, BRWindow, NSMutableArray;

@interface BRMediaPlayerManager : BRSingleton {
@private
	NSMutableArray *_registrations;	// 4 = 0x4
	NSDictionary *_singletons;	// 8 = 0x8
	BRWindow *_shroudyMcShroud;	// 12 = 0xc
	BRWindow *_playerWindow;	// 16 = 0x10
	NSTimer *_popupDelay;	// 20 = 0x14
	NSTimer *_autoPresentTimer;	// 24 = 0x18
	NSTimer *_safetyTimer;	// 28 = 0x1c
	double _autoPresentTimeout;	// 32 = 0x20
	int _playerWindowState;	// 40 = 0x28
	BOOL _playerWindowBeingRemoved;	// 44 = 0x2c
	BOOL _playerWindowBeingAdded;	// 45 = 0x2d
	BOOL _playerWindowRemovedWhileBeingAdded;	// 46 = 0x2e
	BOOL _screensaverUp;	// 47 = 0x2f
	float _savedVolume;	// 48 = 0x30
}
@property(assign) double autoPresentTimeout;	// G=0x32941f91; S=0x329432f9; converted property
+ (void)setSingleton:(id)singleton;	// 0x32941f75
+ (id)singleton;	// 0x32941f69
- (id)init;	// 0x3289d219
- (void)_addPlayerWindowForController:(id)controller;	// 0x32942b01
- (void)_addPlayerWindowUnderShroud;	// 0x32942a55
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x32944249
- (id)_autoPresentPlayer;	// 0x32942491
- (void)_autoPresentTimerFired:(id)fired;	// 0x32943f85
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x32942ef9
- (void)_dataClientStatusChanged:(id)changed;	// 0x329445a5
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x32942e21
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x32943251
- (void)_networkStatusChanged:(id)changed;	// 0x3294202d
- (void)_playerAssetChanged:(id)changed;	// 0x3294229d
- (void)_playerControllerUserEvent:(id)event;	// 0x32942875
- (void)_playerControllerWasPopped:(id)popped;	// 0x32941fa1
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x329430d1
- (id)_playerInstanceForClass:(Class)aClass;	// 0x32942f85
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x3294285d
- (void)_playerStateChanged:(id)changed;	// 0x329422f1
- (void)_playerVolumeChanged:(id)changed;	// 0x329421ad
- (void)_popupDelayTimerFired:(id)fired;	// 0x3294257d
- (id)_presentedPlayer;	// 0x32942da1
- (id)_presentedPlayerController;	// 0x32942d45
- (void)_removePlayerWindow:(BOOL)window;	// 0x32942965
- (void)_removePlayerWindowUnderShroud;	// 0x32942899
- (void)_removeShroudWindow;	// 0x32942dc5
- (void)_removeShroudWindowWithAnimation;	// 0x329440b5
- (void)_removeTrackPopup;	// 0x329427b1
- (void)_safetyTimerFired:(id)fired;	// 0x32943fc5
- (void)_screenSaverActivated:(id)activated;	// 0x32942151
- (void)_screenSaverDismissed:(id)dismissed;	// 0x329420f9
- (void)_serverStatusChanged:(id)changed;	// 0x32944461
- (void)_showTrackPopupForPlayer:(id)player;	// 0x32942639
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x329425b5
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x32942e5d
- (void)_updateAutoPresentPlayer;	// 0x32943e6d
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x32942809
- (void)_userActivity:(id)activity;	// 0x32941fb5
- (id)activeAudioPlayer;	// 0x329434e5
- (id)activePlayer;	// 0x329435b5
- (id)airtunesAudioPlayer;	// 0x3294344d
- (id)audioPlayer;	// 0x32943499
- (id)audioVisualizer;	// 0x32943359
// converted property getter: - (double)autoPresentTimeout;	// 0x32941f91
- (void)dealloc;	// 0x32943d9d
- (void)endPresentation;	// 0x32943615
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x32943bf5
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x32943d29
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x32943c39
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x32943cc1
- (void)presentATVMediaAsset:(ATVMediaItemRef)asset options:(id)options;	// 0x32943725
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x329436b5
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x32943775
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x32943645
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x3294367d
- (void)presentPlayer:(id)player options:(id)options;	// 0x329437f5
- (BOOL)presentationCanBeScreenSaver;	// 0x329435f1
- (id)presentationWindow;	// 0x32941f81
- (void)registerPlayerClass:(Class)aClass;	// 0x3294403d
- (void)removePresentation;	// 0x3294362d
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x329432f9
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x32943331
- (void)showVolumeControl;	// 0x329446d5
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x32943379
@end

