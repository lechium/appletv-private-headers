/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"

@class NSTimer, NSMutableDictionary, LTAirPlayPINControl, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface LTAirPlayAgent : BRSingleton <AirPlayReceiverUIDelegate, BRFailedURLHandling> {
	BOOL _audioStarted;	// 4 = 0x4
	NSMutableDictionary *_failedURLRequests;	// 8 = 0x8
	BOOL _playerStateObserving;	// 12 = 0xc
	BOOL _videoPlaybackEnded;	// 13 = 0xd
	BRMediaPlayer *_videoPlayer;	// 16 = 0x10
	BOOL _videoStarted;	// 20 = 0x14
	LTAirPlayPINControl *_dialog;	// 24 = 0x18
	NSTimer *_dialogTimer;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x6ea59
+ (id)singleton;	// 0x6ea49
- (id)init;	// 0x6ea7d
- (void).cxx_destruct;	// 0x6eb2d
- (long)_allowInterruption:(id *)interruption;	// 0x71a25
- (void)_autoDismissOnScreenCode:(id)code;	// 0x72099
- (void)_dismissOnScreenCode:(id)code;	// 0x720ad
- (id)_errorToDictionary:(id)dictionary;	// 0x71a89
- (BOOL)_isFinancialTransactionInProgress;	// 0x71c21
- (void)_playerStateChanged:(id)changed;	// 0x71cbd
- (long)_setVideoPosition:(float)position;	// 0x71dc9
- (long)_setVideoRate:(float)rate;	// 0x71ef1
- (void)_showPIN:(id)pin;	// 0x7216d
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x723b9
- (void)_updatePlayerStateObserving;	// 0x726c1
- (void)_videoMetadataChanged:(id)changed;	// 0x727bd
- (void)_videoPlaybackEnded:(id)ended;	// 0x727cd
- (void)_videoPlaybackError:(id)error;	// 0x72861
- (void)_videoPlayerStateChanged:(id)changed;	// 0x7292d
- (void)airplayUIActivity;	// 0x70691
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x6eb85
- (long)airplayUIHideProgress;	// 0x705d1
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x6f3dd
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x6eef5
- (long)airplayUIShowProgress;	// 0x70511
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x70719
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x700c1
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x70ab9
- (long)airplayUIStopAudio:(id)audio;	// 0x7091d
- (long)airplayUIStopPresentation:(id)presentation;	// 0x70445
- (long)airplayUIStopVideo:(id)video;	// 0x71755
- (long)airplayUIUpdateAudioMetaData:(id)data;	// 0x709c1
- (long)airplayUIUpdateAudioProgress:(double)progress duration:(double)duration;	// 0x70a39
- (void)dealloc;	// 0x6eac1
- (BOOL)handleFailedURLRequest:(id)request;	// 0x71941
@end

