/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRVideoCacheManagerDelegate.h"
#import "BRSecureResource.h"
#import "BRController.h"

@class BRTextControl, BRResumeMenuControl, BRTransportControl, BRDescriptionOverlayControl, BRMediaPlayer, BRMediaPlayerEventHandler, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <BRVideoCacheManagerDelegate, BRSecureResource> {
@private
	long _state;	// 80 = 0x50
	BRControl *_content;	// 84 = 0x54
	BRControl *_audioVisualizer;	// 88 = 0x58
	BRMediaPlayer *_player;	// 92 = 0x5c
	BRMediaPlayerEventHandler *_eventHandler;	// 96 = 0x60
	BRResumeMenuControl *_resumeMenu;	// 100 = 0x64
	BRTransportControl *_transport;	// 104 = 0x68
	BRControl *_javascriptOverlay;	// 108 = 0x6c
	BRDescriptionOverlayControl *_descriptionOverlay;	// 112 = 0x70
	BRTextControl *_explanatoryTextControl;	// 116 = 0x74
	id _delegate;	// 120 = 0x78
	id _transitionAnimationDelegate;	// 124 = 0x7c
	NSTimer *_suppressBackgroundProcessTimer;	// 128 = 0x80
	NSTimer *_explanatoryTextFadeTimer;	// 132 = 0x84
	NSTimer *_readyToPlayTimer;	// 136 = 0x88
	NSTimer *_readyToPlayUpdateMinsTimer;	// 140 = 0x8c
	NSTimer *_loadingSpinnerDelayTimer;	// 144 = 0x90
	float _lastBufferingProgress;	// 148 = 0x94
	unsigned _startChapterIndex;	// 152 = 0x98
	float _startPosition;	// 156 = 0x9c
	BOOL _drmAttempted;	// 160 = 0xa0
	BOOL _authenticationAttempted;	// 161 = 0xa1
	BOOL _playbackInitiated;	// 162 = 0xa2
	BOOL _shouldRestoreVoiceOver;	// 163 = 0xa3
	BOOL _alwaysStopOnPop;	// 164 = 0xa4
	BOOL _transportDisabled;	// 165 = 0xa5
	BOOL _resumeMenuDisabled;	// 166 = 0xa6
	BOOL _waitingForTransition;	// 167 = 0xa7
	BOOL _visualsHidden;	// 168 = 0xa8
	BOOL _inChapterMode;	// 169 = 0xa9
	BOOL _digitalExtrasMenuItemDisabled;	// 170 = 0xaa
	BOOL _itemReadyToPlay;	// 171 = 0xab
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x35db72dd; S=0x35db72cd; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x35db71c9; S=0x35db71b9; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x35db7e11; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x35db6ffd; converted property
@property(assign) id playerDelegate;	// G=0x35db7115; S=0x35db70d5; converted property
@property(assign) int repeatMode;	// G=0x35db72ad; S=0x35db728d; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x35db7135; S=0x35db7125; converted property
@property(assign) unsigned startChapterIndex;	// G=0x35db71e9; S=0x35db71d9; converted property
@property(assign) float startPosition;	// G=0x35db723d; S=0x35db71f9; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x35db71a9; S=0x35db7145; converted property
@property(assign) BOOL visualsHidden;	// G=0x35db73d9; S=0x35db73c9; converted property
+ (id)controllerForPlayer:(id)player;	// 0x35db700d
- (id)initWithPlayer:(id)player;	// 0x35db6a4d
- (id)_audioVisualizer;	// 0x35dba271
- (void)_authenticationCancelled:(id)cancelled;	// 0x35dbb265
- (void)_authenticationFailed:(id)failed;	// 0x35dbb1e1
- (void)_authenticationSucceeded:(id)succeeded;	// 0x35dbb171
- (void)_authorizationAttemptComplete:(id)complete;	// 0x35dbaef1
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x35dba3cd
- (id)_descriptionOverlayForType:(id)type;	// 0x35dba1fd
- (void)_dismissResumeMenu;	// 0x35dbb399
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x35dba2f9
- (void)_enterAuthenticationState;	// 0x35db9609
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x35db8ed9
- (void)_enterDRMSyncState;	// 0x35db91cd
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x35db88f5
- (void)_enterErrorStateWithError:(id)error;	// 0x35db9379
- (void)_enterMediaCueingState;	// 0x35db8d81
- (void)_enterMediaResolutionState;	// 0x35db8275
- (void)_enterPINEntryState;	// 0x35db803d
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x35db9171
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x35db8781
- (void)_enterResumeMenuState;	// 0x35db83e1
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState;	// 0x35db909d
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x35dbbbfd
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x35dbb7f9
- (void)_handleContextMenuSelection:(id)selection;	// 0x35dbba05
- (BOOL)_handleDownEvent:(id)event;	// 0x35dbb89d
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x35dbba81
- (void)_handleHideChapterMarkers;	// 0x35dba159
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x35dbb49d
- (void)_handleShowChapterMarkers;	// 0x35dba109
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x35dbb979
- (BOOL)_handleUpEvent:(id)event;	// 0x35dbb845
- (void)_initiatePlayback;	// 0x35db97a1
- (id)_javascriptOverlay;	// 0x35dba0c9
- (void)_mediaResolutionComplete:(id)complete;	// 0x35dbafc1
- (id)_photoSet;	// 0x35dba7ad
- (void)_playerAssetChanged:(id)changed;	// 0x35dbada1
- (void)_playerError:(id)error;	// 0x35dbad51
- (void)_playerMediaCued:(id)cued;	// 0x35dbb099
- (void)_playerPlaybackEnded:(id)ended;	// 0x35dbab99
- (void)_playerStateChanged:(id)changed;	// 0x35dbabed
- (void)_playerTimeSkipped:(id)skipped;	// 0x35dbadc5
- (void)_playerVisualsChanged:(id)changed;	// 0x35dbad11
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x35db8c21
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x35db8cfd
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x35db98b5
- (void)_resumeItemSelected:(id)selected;	// 0x35dbb3f9
- (double)_resumeTime;	// 0x35dbb345
- (BOOL)_shouldShowResumeMenu;	// 0x35dba845
- (BOOL)_shouldUseMusicContextMenu;	// 0x35dba9dd
- (void)_showLoadingSpinner;	// 0x35dba5f1
- (void)_showTransport:(id)transport;	// 0x35dba1c5
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x35dba78d
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x35dbb44d
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x35dbbb25
- (void)_transitionAnimationFinished;	// 0x35dbb2e9
- (id)_transportControlForType:(id)type;	// 0x35db9f59
- (void)_updateExplantoryText;	// 0x35db9c85
- (void)_updatePlaybackControls;	// 0x35db98d9
- (void)_updateReadyToPlayTime:(ATVMediaItemRef)playTime;	// 0x35db8ba1
- (void)_updateVoiceOverDisabling;	// 0x35dba6bd
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x35db7bb5
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x35db72dd
- (BOOL)brEventAction:(id)action;	// 0x35db77d1
- (BOOL)canBeScreenSaver;	// 0x35db73e9
- (void)clearPlayer;	// 0x35db7059
- (void)controlWasActivated;	// 0x35db7415
- (void)controlWasDeactivated;	// 0x35db75e9
- (void)dealloc;	// 0x35db6e75
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x35db71c9
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x35db7f3d
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x35db7e61
// converted property getter: - (id)javascriptOverlay;	// 0x35db7e11
- (void)layoutSubcontrols;	// 0x35db795d
// converted property getter: - (id)player;	// 0x35db6ffd
// converted property getter: - (id)playerDelegate;	// 0x35db7115
- (id)providersForContextMenu;	// 0x35db7d35
// converted property getter: - (int)repeatMode;	// 0x35db72ad
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x35db7fc9
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x35db7135
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x35db72cd
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x35db71b9
- (void)setFailedURLDelegate:(id)delegate;	// 0x35db7d15
- (void)setForwardPlaybackEndTime:(double)time;	// 0x35db7e21
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x35db70d5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x35db728d
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x35db7125
- (void)setReversePlaybackEndTime:(double)time;	// 0x35db7e41
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x35db71d9
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x35db724d
// converted property setter: - (void)setStartPosition:(float)position;	// 0x35db71f9
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x35db7145
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x35db73c9
- (BOOL)shouldShowTrackPopup;	// 0x35db7bb9
- (BOOL)shouldTransitionIn;	// 0x35db7c69
// converted property getter: - (unsigned)startChapterIndex;	// 0x35db71e9
- (id)startDate;	// 0x35db726d
// converted property getter: - (float)startPosition;	// 0x35db723d
// converted property getter: - (BOOL)transportControlDisabled;	// 0x35db71a9
// converted property getter: - (BOOL)visualsHidden;	// 0x35db73d9
- (void)wasPopped;	// 0x35db7665
@end
