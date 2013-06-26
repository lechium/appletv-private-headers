/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableData.h"


__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData {
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x2d263125; S=0x2d2baa31; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d2baa29
- (BOOL)_isDeallocating;	// 0x2d2ba9d9
- (BOOL)_tryRetain;	// 0x2d2ba9c9
- (const void *)bytes;	// 0x2d263121
- (id)copyWithZone:(NSZone *)zone;	// 0x2d28b57d
- (void)finalize;	// 0x2d2ba9e9
- (unsigned)hash;	// 0x2d2ba9c1
- (BOOL)isEqual:(id)equal;	// 0x2d2ba9a9
// converted property getter: - (unsigned)length;	// 0x2d263125
- (void *)mutableBytes;	// 0x2d2baa2d
- (oneway void)release;	// 0x2d249ba5
- (id)retain;	// 0x2d26972d
- (unsigned)retainCount;	// 0x2d2ba9e5
// converted property setter: - (void)setLength:(unsigned)length;	// 0x2d2baa31
@end
