/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayer.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
@private
	AVQueuePlayerInternal *_queuePlayer;	// 8 = 0x8
}
+ (void)initialize;	// 0x36724ba5
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x36724c3d
+ (id)playerWithURL:(id)url;	// 0x36724c81
+ (id)queuePlayerWithItems:(id)items;	// 0x36724bf5
- (id)init;	// 0x36724cc5
- (id)initWithItems:(id)items;	// 0x36724d59
- (int)_defaultActionAtItemEnd;	// 0x36724e91
- (void)_enqueueModification:(id)modification;	// 0x36724f89
- (BOOL)_shouldEnqueueModifications;	// 0x36724f61
- (void)advanceToNextItem;	// 0x36724ed5
- (void)beginModifications;	// 0x36725425
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x36724f05
- (void)commitModifications;	// 0x36725449
- (void)dealloc;	// 0x36724e29
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x3672502d
- (id)items;	// 0x36724ec5
- (void)removeAllItems;	// 0x3672537d
- (void)removeItem:(id)item;	// 0x367251e5
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x36724e95
@end

