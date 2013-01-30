/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSInputStream.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x319f3b45; S=0x319f3b49; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319f3a81
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x319f3a7d
- (id)initWithData:(id)data;	// 0x319f3a89
- (id)initWithFileAtPath:(id)path;	// 0x319f3aad
- (id)initWithURL:(id)url;	// 0x319f3b19
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x319f3ce9
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x319f3cd1
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x319f3cf1
- (BOOL)allowsWeakReference;	// 0x319f3a15
- (void)close;	// 0x319f3b41
// converted property getter: - (id)delegate;	// 0x319f3b45
- (void)finalize;	// 0x319f3a3d
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x319f3ca1
- (BOOL)hasBytesAvailable;	// 0x319f3cc5
- (unsigned)hash;	// 0x319f39fd
- (BOOL)isEqual:(id)equal;	// 0x319f39e5
- (void)open;	// 0x319f3b3d
- (id)propertyForKey:(id)key;	// 0x319f3bcd
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x319f3c99
- (oneway void)release;	// 0x319f3a11
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x319f3c39
- (id)retain;	// 0x319f3a01
- (unsigned)retainCount;	// 0x319f3a39
- (BOOL)retainWeakReference;	// 0x319f3a29
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x319f3c09
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x319f3b49
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x319f3bf9
- (id)streamError;	// 0x319f3c6d
- (unsigned)streamStatus;	// 0x319f3c69
@end
