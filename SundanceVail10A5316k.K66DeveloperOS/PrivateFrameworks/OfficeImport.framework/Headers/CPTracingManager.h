/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class TSMTraceBuffer;

__attribute__((visibility("hidden")))
@interface CPTracingManager : NSObject {
@private
	TSMTraceBuffer *mBuffer;	// 4 = 0x4
	unsigned mCount;	// 8 = 0x8
}
+ (id)_singletonAlloc;	// 0x3130a0c9
+ (id)allocWithZone:(NSZone *)zone;	// 0x3130a27d
+ (id)sharedManager;	// 0x3130a0f9
- (id)autorelease;	// 0x3130a309
- (id)copyWithZone:(NSZone *)zone;	// 0x3130a30d
- (void)dealloc;	// 0x3130a311
- (oneway void)release;	// 0x3130a305
- (id)retain;	// 0x3130a2f9
- (unsigned)retainCount;	// 0x3130a2fd
- (void)setup;	// 0x3130a351
- (void)teardown;	// 0x3130a355
@end
