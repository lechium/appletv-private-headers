/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

#import "MediaControl-Structs.h"
#import <NSObject.h> // Unknown library

@class AirPlayLocalSlideshow;
@protocol MediaControlServerDelegate;

@interface MediaControlServer : NSObject {
	MediaControlServerImp *_server;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id<MediaControlServerDelegate> _delegate;	// 12 = 0xc
	AirPlayLocalSlideshow *_slideshow;	// 16 = 0x10
}
@property(assign, nonatomic) id<MediaControlServerDelegate> delegate;	// G=0x30019b79; S=0x3001a079; @synthesize=_delegate
@property(assign, nonatomic) unsigned supportedFeatures;	// G=0x30019b39; S=0x30019b4d; 
- (id)init;	// 0x3001a191
- (void)dealloc;	// 0x3001ad61
// declared property getter: - (id)delegate;	// 0x30019b79
- (void)postEvent:(id)event;	// 0x3001afc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3001a079
- (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x3001af11
- (long)setPassword:(id)password;	// 0x3001af51
// declared property setter: - (void)setSupportedFeatures:(unsigned)features;	// 0x30019b4d
- (void)slideshowRequestAssetWithInfo:(id)info sessionUUID:(const char *)uuid completion:(id)completion;	// 0x3001afdd
- (long)start;	// 0x3001af7d
- (void)stop;	// 0x3001afad
// declared property getter: - (unsigned)supportedFeatures;	// 0x30019b39
@end
