/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSDate;

@interface MPNowPlayingInfoCenter : NSObject {
	NSDictionary *_nowPlayingInfo;	// 4 = 0x4
	NSDictionary *_queuedNowPlayingInfo;	// 8 = 0x8
	NSDate *_pushDate;	// 12 = 0xc
}
@property(copy) NSDictionary *nowPlayingInfo;	// G=0x31e023b1; S=0x31e01ef9; 
+ (id)defaultCenter;	// 0x31e01e01
- (id)init;	// 0x31e01ead
- (id)_init;	// 0x31e01e81
- (void)_pushNowPlayingInfoAndRetry:(BOOL)retry;	// 0x31e01fe1
// declared property getter: - (id)nowPlayingInfo;	// 0x31e023b1
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x31e01ef9
@end
