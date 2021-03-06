/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVItem;

@interface MPAVControllerToAggregateDCommunicator : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	unsigned _lastMediaType;	// 8 = 0x8
	double _playbackStartTime;	// 12 = 0xc
	BOOL _playbackStartTimeIsValid;	// 20 = 0x14
}
- (id)init;	// 0x31d610c1
- (void)_handleItemChangedNotification:(id)notification;	// 0x31d614f1
- (void)_handleItemTypeAvailableNotification:(id)notification;	// 0x31d61589
- (void)_handlePlaybackStateChangedNotification:(id)notification;	// 0x31d61439
- (void)_startPlaybackTimer;	// 0x31d61291
- (void)_stopPlaybackTimer;	// 0x31d612d9
- (void)_updateLastMediaTypeForItem;	// 0x31d613c5
- (void)dealloc;	// 0x31d61215
@end

