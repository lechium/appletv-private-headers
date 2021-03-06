/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVPlayer.h"
#import "AVFoundation-Structs.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
@private
	AVQueuePlayerInternal *_queuePlayer;	// 8 = 0x8
}
+ (void)initialize;	// 0x3145ed25
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x3145ec95
+ (id)playerWithURL:(id)url;	// 0x3145ec4d
+ (id)queuePlayerWithItems:(id)items;	// 0x3145ecdd
- (id)init;	// 0x3145f239
- (id)initWithItems:(id)items;	// 0x3145f181
- (int)_defaultActionAtItemEnd;	// 0x3145ebcd
- (void)_enqueueModification:(id)modification;	// 0x3145efc9
- (BOOL)_shouldEnqueueModifications;	// 0x3145ebd1
- (void)advanceToNextItem;	// 0x3145f0d9
- (void)beginModifications;	// 0x3145ebf9
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x3145f075
- (void)commitModifications;	// 0x3145ed41
- (void)dealloc;	// 0x3145f119
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x3145ef45
- (id)items;	// 0x3145f109
- (void)removeAllItems;	// 0x3145ee41
- (void)removeItem:(id)item;	// 0x3145eec1
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x3145ec1d
@end

