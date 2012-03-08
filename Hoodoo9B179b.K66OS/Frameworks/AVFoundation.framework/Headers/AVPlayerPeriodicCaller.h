/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerTimelyCaller.h"


@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller {
	XXStruct_pwHToB _interval;	// 24 = 0x18
	id _block;	// 48 = 0x30
	OpaqueFigPlaybackItem *_figPlaybackItem;	// 52 = 0x34
}
- (id)initWithPlayer:(id)player interval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s *)queue block:(id)block;	// 0x30abd82d
- (void)_resetTimerForPlayerNewRate:(float)playerNewRate;	// 0x30abe16d
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;	// 0x30abdffd
- (void)_stopObservingPlaybackItemNotifications;	// 0x30abe515
- (void)_stopRespondingToPlayerStateChanges;	// 0x30abdcb9
- (void)dealloc;	// 0x30abdc11
- (void)finalize;	// 0x30abdc75
- (void)invalidate;	// 0x30abdd2d
- (void)itemTimeJumped;	// 0x30abe3b1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30abde15
@end

