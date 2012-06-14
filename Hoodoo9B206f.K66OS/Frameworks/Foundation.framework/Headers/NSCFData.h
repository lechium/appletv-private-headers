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
@property(assign) unsigned length;	// G=0x31d51161; S=0x31d5116d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31d51105
- (BOOL)allowsWeakReference;	// 0x31d51095
- (const void *)bytes;	// 0x31d51165
- (id)copyWithZone:(NSZone *)zone;	// 0x31d51109
- (void)finalize;	// 0x31d510c1
- (unsigned)hash;	// 0x31d5107d
- (BOOL)isEqual:(id)equal;	// 0x31d51065
// converted property getter: - (unsigned)length;	// 0x31d51161
- (void *)mutableBytes;	// 0x31d51169
- (oneway void)release;	// 0x31d51091
- (id)retain;	// 0x31d51081
- (unsigned)retainCount;	// 0x31d510bd
- (BOOL)retainWeakReference;	// 0x31d510a9
// converted property setter: - (void)setLength:(unsigned)length;	// 0x31d5116d
@end
