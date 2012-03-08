/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMusicPlayerController.h"
#import "MPServerObjectProxy.h"

@class MPMediaQuery, MPMusicPlayerController, MPMediaItemCollection;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
@private
	MPMusicPlayerController *_musicPlayerController;	// 16 = 0x10
	unsigned _clientPort;	// 20 = 0x14
	CFRunLoopSourceRef _runLoopSource;	// 24 = 0x18
	int _playbackState;	// 28 = 0x1c
	int _playbackNotificationObservers;	// 32 = 0x20
	MPMediaQuery *_query;	// 36 = 0x24
	MPMediaItemCollection *_itemCollection;	// 40 = 0x28
	int _inBlockHandlingPlaybackStateChangedMessageFromServer;	// 44 = 0x2c
	unsigned _didCheckIn : 1;	// 48 = 0x30
	unsigned _useApplicationSpecificQueue : 1;	// 48 = 0x30
	unsigned _useCachedPlaybackState : 1;	// 48 = 0x30
	unsigned _cachedPlaybackStateIsValid : 1;	// 48 = 0x30
	unsigned _allowsRemoteUIAccess : 1;	// 48 = 0x30
}
@property(assign) BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;	// G=0x31a0dde9; S=0x31a0ddc5; 
- (id)initWithMusicPlayerController:(id)musicPlayerController;	// 0x31a0db81
- (void)didPrepareForRemoteSelectorInvocation;	// 0x31a0dc9d
// declared property getter: - (BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;	// 0x31a0dde9
- (BOOL)prepareForRemoteSelectorInvocation;	// 0x31a0dbc1
- (void)serverConnectionDied;	// 0x31a0dd5d
// declared property setter: - (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)server;	// 0x31a0ddc5
@end

