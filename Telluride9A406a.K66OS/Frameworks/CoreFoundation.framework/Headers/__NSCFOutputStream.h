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
@property(assign) id delegate;	// G=0x340ae76d; S=0x340ae771; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x340ae629
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340ae625
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x340ae665
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x340ae695
- (id)initToMemory;	// 0x340ae62d
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x340ae709
- (BOOL)_isDeallocating;	// 0x340ae5d1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x340ae8dd
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x340ae8c5
- (BOOL)_tryRetain;	// 0x340ae5bd
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x340ae8e5
- (void)close;	// 0x340ae769
// converted property getter: - (id)delegate;	// 0x340ae76d
- (void)finalize;	// 0x340ae5e1
- (BOOL)hasSpaceAvailable;	// 0x340ae8b9
- (unsigned)hash;	// 0x340ae5a5
- (BOOL)isEqual:(id)equal;	// 0x340ae58d
- (void)open;	// 0x340ae765
- (id)propertyForKey:(id)key;	// 0x340ae7ed
- (oneway void)release;	// 0x340ae5b9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x340ae855
- (id)retain;	// 0x340ae5a9
- (unsigned)retainCount;	// 0x340ae5dd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x340ae829
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x340ae771
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x340ae819
- (id)streamError;	// 0x340ae885
- (unsigned)streamStatus;	// 0x340ae881
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x340ae8b1
@end

