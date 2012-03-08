/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVJSPlayerMoreAssetsSpinnerController, BRStateMachine, ATVInterstitialGroup, ATVJSContext, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : NSObject {
@private
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x30236a45; S=0x30236a55; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x30236a79; S=0x30236a8d; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x3023440d
- (void)_loadAssetsActivity;	// 0x30235599
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x302348e9
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x302354d5
- (void)_playerPlaybackEnded:(id)ended;	// 0x3023556d
- (void)_playerPlaybackError:(id)error;	// 0x30234939
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x30234ae5
- (void)_playerStallDuringPlayback:(id)playback;	// 0x30234a09
- (void)_playerStartedBuffering:(id)buffering;	// 0x30234841
- (void)_playerStateChanged:(id)changed;	// 0x302344cd
- (void)_playerWillStop:(id)_player;	// 0x30234b59
- (void)_registerPlaylistHandlers;	// 0x30235fa9
- (void)_setupSpinnerActivity;	// 0x30235e91
- (void)_updateAsset:(id)asset;	// 0x30234bf9
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x30234ea1
- (void)_updateEventGroupsNotification:(id)notification;	// 0x30235469
// declared property getter: - (id)context;	// 0x30236a45
// declared property getter: - (id)interstitialGroup;	// 0x30236a79
// declared property setter: - (void)setContext:(id)context;	// 0x30236a55
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x30236a8d
- (void)setup;	// 0x30234105
- (void)tearDown;	// 0x30234365
@end

