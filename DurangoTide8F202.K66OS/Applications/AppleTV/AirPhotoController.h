/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MediaControlServer, BRWaitPromptControl;

@interface AirPhotoController : XXUnknownSuperclass {
	MediaControlServer *_server;	// 60 = 0x3c
	BOOL _slideshowStarted;	// 64 = 0x40
	BRWaitPromptControl *_waitPrompt;	// 68 = 0x44
	double _savedAutoPresentTimeout;	// 72 = 0x48
}
- (void)_slideshowActivity:(id)activity;	// 0x3dad5
- (void)_slideshowWillStart:(id)_slideshow;	// 0x3da3d
- (void)_slideshowWillStop:(id)_slideshow;	// 0x3d9e1
- (id)_transitionForName:(id)name;	// 0x3dbd5
- (BOOL)brEventAction:(id)action;	// 0x3ddc1
- (void)controlWasDeactivated;	// 0x3e041
- (void)dealloc;	// 0x3e0a5
- (void)setServer:(id)server;	// 0x3d9d1
- (void)showPhotoAtPath:(id)path withTransition:(id)transition;	// 0x3e279
- (void)showPhotoData:(id)data withTransition:(id)transition;	// 0x3e39d
- (void)startSlideshow;	// 0x3e119
- (void)stopSlideshow;	// 0x3db5d
- (void)wasPopped;	// 0x3dfcd
@end

