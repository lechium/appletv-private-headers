/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSURL, UIWindow, MPMoviePlayerVideoViewController, UIColor, NSError, AVFileValidator;

@interface MPMoviePlayerControllerInternalOld : NSObject {
@private
	NSURL *_contentURL;	// 4 = 0x4
	int _scalingMode;	// 8 = 0x8
	int _movieControlMode;	// 12 = 0xc
	UIWindow *_window;	// 16 = 0x10
	UIWindow *_previousKeyWindow;	// 20 = 0x14
	MPMoviePlayerVideoViewController *_videoViewController;	// 24 = 0x18
	UIColor *_backgroundColor;	// 28 = 0x1c
	unsigned _previousStatusBarOrientation;	// 32 = 0x20
	int _previousStatusBarStyle;	// 36 = 0x24
	NSError *_playbackError;	// 40 = 0x28
	AVFileValidator *_fileValidator;	// 44 = 0x2c
	double _initialPlaybackTime;	// 48 = 0x30
	struct {
		unsigned active : 1;
		unsigned visible : 1;
		unsigned mediaType : 1;
		unsigned isStreaming : 1;
		unsigned statusBarWasHidden : 1;
		unsigned shouldRestartPlaybackAfterAudioRouteChange : 1;
		unsigned playbackFailed : 1;
		unsigned isFinishing : 1;
		unsigned hideLoadingIndicatorForLocalFiles : 1;
		unsigned fullscreen : 1;
		unsigned playAfterCreatingPlayer : 1;
		unsigned canShowControlsOverlay : 1;
		unsigned tearDownPlayerOnEnd : 1;
		unsigned didSendPreloadNotification : 1;
		unsigned unused : 18;
	} _playerBitfield;	// 56 = 0x38
}
@end

