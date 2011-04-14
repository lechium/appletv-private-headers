/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library
#import "ScreenReaderCore-Structs.h"


@interface SCRCStackQueue : NSObject {
	SCRCStackNode *_firstNode;	// 4 = 0x4
	SCRCStackNode *_lastNode;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x315c4779; converted property
// converted property getter: - (unsigned)count;	// 0x315c4779
- (void)dealloc;	// 0x315c4975
- (id)dequeueObject;	// 0x315c48dd
- (id)dequeueObjectRetained;	// 0x315c49b1
- (id)description;	// 0x315c4809
- (void)enqueueObject:(id)object;	// 0x315c4901
- (BOOL)isEmpty;	// 0x315c4789
- (id)objectEnumerator;	// 0x315c47bd
- (id)popObject;	// 0x315c4915
- (id)popObjectRetained;	// 0x315c4a09
- (void)pushArray:(id)array;	// 0x315c4ad1
- (void)pushObject:(id)object;	// 0x315c4b6d
- (void)removeAllObjects;	// 0x315c4a65
- (id)topObject;	// 0x315c4769
@end

