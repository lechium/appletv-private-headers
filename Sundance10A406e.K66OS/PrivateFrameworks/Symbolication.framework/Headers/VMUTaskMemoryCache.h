/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"


@interface VMUTaskMemoryCache : NSObject {
	mapped_memory_t *_memoryRegions;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
	BOOL _taskIs64Bit;	// 12 = 0xc
	BOOL _stopped;	// 13 = 0xd
	BOOL _shouldTouchPages;	// 14 = 0xe
}
+ (BOOL)taskIs64Bit:(unsigned)bit;	// 0x36de5e95
+ (id)taskMemoryCacheForTask:(unsigned)task;	// 0x36de5ea1
- (id)initWithTask:(unsigned)task;	// 0x36de5edd
- (BOOL)copyRange:(VMURange)range to:(void *)to;	// 0x36de6211
- (void)dealloc;	// 0x36de5fb9
- (void)finalize;	// 0x36de6021
- (void)flushMemoryCache;	// 0x36de5fa1
- (int)peekAtAddress:(unsigned long long)address size:(unsigned long long)size returnsBuf:(void **)buf;	// 0x36de6109
- (int)readPointerAt:(unsigned long long)at value:(unsigned long long *)value;	// 0x36de61b1
- (int)startPeeking;	// 0x36de608d
- (int)stopPeeking;	// 0x36de60c9
@end
