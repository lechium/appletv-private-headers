/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x32068171; S=0x3206817d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32068115
- (BOOL)allowsWeakReference;	// 0x320680a5
- (const void *)bytes;	// 0x32068175
- (id)copyWithZone:(NSZone *)zone;	// 0x32068119
- (void)finalize;	// 0x320680d1
- (unsigned)hash;	// 0x3206808d
- (BOOL)isEqual:(id)equal;	// 0x32068075
// converted property getter: - (unsigned)length;	// 0x32068171
- (void *)mutableBytes;	// 0x32068179
- (oneway void)release;	// 0x320680a1
- (id)retain;	// 0x32068091
- (unsigned)retainCount;	// 0x320680cd
- (BOOL)retainWeakReference;	// 0x320680b9
// converted property setter: - (void)setLength:(unsigned)length;	// 0x3206817d
@end

