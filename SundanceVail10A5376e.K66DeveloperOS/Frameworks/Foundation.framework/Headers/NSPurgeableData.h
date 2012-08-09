/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableData.h> // Unknown library
#import "NSDiscardableContent.h"


@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
	unsigned _length;	// 4 = 0x4
	int _accessCount;	// 8 = 0x8
	unsigned char _private[32];	// 12 = 0xc
	void *_reserved;	// 44 = 0x2c
}
@property(assign) unsigned length;	// G=0x34d937cd; S=0x34d939a1; converted property
- (id)init;	// 0x34d93e0d
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x34d93ef5
- (id)initWithCapacity:(unsigned)capacity;	// 0x34d93e21
- (void)_destroyMemory;	// 0x34d93d75
- (BOOL)beginContentAccess;	// 0x34d93ca1
- (const void *)bytes;	// 0x34d93869
- (void)dealloc;	// 0x34d94015
- (id)description;	// 0x34d93c1d
- (void)discardContentIfPossible;	// 0x34d93da5
- (void)endContentAccess;	// 0x34d93ced
- (void)finalize;	// 0x34d94055
- (BOOL)isContentDiscarded;	// 0x34d93dc9
// converted property getter: - (unsigned)length;	// 0x34d937cd
- (void *)mutableBytes;	// 0x34d93905
// converted property setter: - (void)setLength:(unsigned)length;	// 0x34d939a1
@end
