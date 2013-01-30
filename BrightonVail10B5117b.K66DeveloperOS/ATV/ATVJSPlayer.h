/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSPlayerMoreAssetsSpinnerController, BRStateMachine, ATVInterstitialGroup, ATVJSContext, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : XXUnknownSuperclass {
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x17d939; S=0x17d949; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x17d959; S=0x17d96d; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x17b211
- (void)_loadAssetsActivity;	// 0x17c4e1
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x17b6e9
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x17c41d
- (void)_playerPlaybackEnded:(id)ended;	// 0x17c4b5
- (void)_playerPlaybackError:(id)error;	// 0x17b739
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x17b8e9
- (void)_playerStallDuringPlayback:(id)playback;	// 0x17b809
- (void)_playerStartedBuffering:(id)buffering;	// 0x17b641
- (void)_playerStateChanged:(id)changed;	// 0x17b2d1
- (void)_playerTransportDisplayChange:(id)change;	// 0x17b9fd
- (void)_playerWillStop:(id)_player;	// 0x17b95d
- (void)_registerPlaylistHandlers;	// 0x17cedd
- (void)_setupSpinnerActivity;	// 0x17cdc9
- (void)_updateAsset:(id)asset;	// 0x17bad5
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x17bd7d
- (void)_updateEventGroupsNotification:(id)notification;	// 0x17c3b1
// declared property getter: - (id)context;	// 0x17d939
// declared property getter: - (id)interstitialGroup;	// 0x17d959
// declared property setter: - (void)setContext:(id)context;	// 0x17d949
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x17d96d
- (void)setup;	// 0x17aed9
- (void)tearDown;	// 0x17b169
@end
