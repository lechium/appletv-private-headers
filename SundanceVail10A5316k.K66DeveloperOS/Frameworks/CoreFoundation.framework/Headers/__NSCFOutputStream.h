/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSOutputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x370fe43d; S=0x370fe441; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x370fe2fd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x370fe2f9
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x370fe339
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x370fe369
- (id)initToMemory;	// 0x370fe301
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x370fe3d9
- (BOOL)_isDeallocating;	// 0x370fe2a9
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x370fe5bd
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x370fe5a5
- (BOOL)_tryRetain;	// 0x370fe299
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x370fe5c5
- (void)close;	// 0x370fe439
// converted property getter: - (id)delegate;	// 0x370fe43d
- (void)finalize;	// 0x370fe2b9
- (BOOL)hasSpaceAvailable;	// 0x370fe599
- (unsigned)hash;	// 0x370fe281
- (BOOL)isEqual:(id)equal;	// 0x370fe269
- (void)open;	// 0x370fe435
- (id)propertyForKey:(id)key;	// 0x370fe4c5
- (oneway void)release;	// 0x370fe295
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x370fe531
- (id)retain;	// 0x370fe285
- (unsigned)retainCount;	// 0x370fe2b5
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x370fe501
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x370fe441
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x370fe4f1
- (id)streamError;	// 0x370fe565
- (unsigned)streamStatus;	// 0x370fe561
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x370fe591
@end

