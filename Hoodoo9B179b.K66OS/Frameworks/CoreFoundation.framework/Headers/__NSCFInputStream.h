/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSInputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x30d663b9; S=0x30d663bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d662e9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d662e5
- (id)initWithData:(id)data;	// 0x30d662ed
- (id)initWithFileAtPath:(id)path;	// 0x30d66319
- (id)initWithURL:(id)url;	// 0x30d66381
- (BOOL)_isDeallocating;	// 0x30d66291
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x30d6654d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x30d66535
- (BOOL)_tryRetain;	// 0x30d6627d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x30d66555
- (void)close;	// 0x30d663b5
// converted property getter: - (id)delegate;	// 0x30d663b9
- (void)finalize;	// 0x30d662a1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x30d66505
- (BOOL)hasBytesAvailable;	// 0x30d66529
- (unsigned)hash;	// 0x30d66265
- (BOOL)isEqual:(id)equal;	// 0x30d6624d
- (void)open;	// 0x30d663b1
- (id)propertyForKey:(id)key;	// 0x30d66439
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x30d664fd
- (oneway void)release;	// 0x30d66279
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x30d664a1
- (id)retain;	// 0x30d66269
- (unsigned)retainCount;	// 0x30d6629d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x30d66475
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30d663bd
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x30d66465
- (id)streamError;	// 0x30d664d1
- (unsigned)streamStatus;	// 0x30d664cd
@end

