/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayer, AVWeakReference;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AVPlayerTimelyCaller : NSObject {
	NSObject<OS_dispatch_queue> *_timerQueue;	// 4 = 0x4
	AVWeakReference *_weakReference;	// 8 = 0x8
	AVPlayer *_player;	// 12 = 0xc
	NSObject<OS_dispatch_source> *_timerSource;	// 16 = 0x10
	BOOL _isInvalidated;	// 20 = 0x14
	BOOL _timerQueueIsPlayerStateDispatchQueue;	// 21 = 0x15
	OpaqueCMTimebase *_timebase;	// 24 = 0x18
	double _lastRate;	// 28 = 0x1c
	double _currentRate;	// 36 = 0x24
}
@property(readonly, retain) AVPlayer *player;	// G=0x3689ab09; converted property
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x3689b0d5; @synthesize=_weakReference
- (id)initWithPlayer:(id)player queue:(id)queue;	// 0x3689a355
- (void)_effectiveRateChanged;	// 0x3689ab05
- (void)_handleTimeDiscontinuity;	// 0x3689ab01
- (long)_removeCurrentTimebaseFromTimerSource;	// 0x3689a6f5
- (void)_resetNextFireTime;	// 0x3689aafd
- (void)_startObservingTimebaseNotificationsForCurrentItem;	// 0x3689a935
- (void)_stopObservingTimebaseNotifications;	// 0x3689a775
- (void)_stopRespondingToPlayerStateChanges;	// 0x3689a889
- (void)_timebaseDidChange:(id)_timebase;	// 0x3689ab19
// declared property getter: - (id)_weakReference;	// 0x3689b0d5
- (void)dealloc;	// 0x3689a59d
- (void)finalize;	// 0x3689a665
- (void)invalidate;	// 0x3689a9fd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3689ad6d
// converted property getter: - (id)player;	// 0x3689ab09
@end

