/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface SCRCStackQueue : NSObject {
	SCRCStackNode *_firstNode;	// 4 = 0x4
	SCRCStackNode *_lastNode;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x355f11d1; converted property
// converted property getter: - (unsigned)count;	// 0x355f11d1
- (void)dealloc;	// 0x355effd1
- (id)dequeueObject;	// 0x355fdb0d
- (id)dequeueObjectRetained;	// 0x355ef119
- (id)description;	// 0x355fdb35
- (void)enqueueObject:(id)object;	// 0x355eedb1
- (BOOL)isEmpty;	// 0x355ef1a1
- (id)objectEnumerator;	// 0x355f0f11
- (id)popObject;	// 0x355fdae5
- (id)popObjectRetained;	// 0x355f11f5
- (void)pushArray:(id)array;	// 0x355f1255
- (void)pushObject:(id)object;	// 0x355eedc1
- (void)removeAllObjects;	// 0x355f0011
- (id)topObject;	// 0x355f11e1
@end

