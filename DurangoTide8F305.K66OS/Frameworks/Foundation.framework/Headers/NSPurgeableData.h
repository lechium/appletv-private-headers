/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDiscardableContent.h"
#import <NSMutableData.h> // Unknown library


@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
@private
	unsigned _length;	// 4 = 0x4
	int _accessCount;	// 8 = 0x8
	unsigned char _private[32];	// 12 = 0xc
	void *_reserved;	// 44 = 0x2c
}
@property(assign) unsigned length;	// G=0x32787495; S=0x32787ebd; converted property
- (id)init;	// 0x327867c9
- (id)initWithBytes:(void *)bytes length:(unsigned)length copy:(BOOL)copy freeWhenDone:(BOOL)done bytesAreVM:(BOOL)vm;	// 0x32787bfd
- (id)initWithCapacity:(unsigned)capacity;	// 0x32788129
- (void)_destroyMemory;	// 0x32787535
- (BOOL)beginContentAccess;	// 0x32787569
- (const void *)bytes;	// 0x327873f1
- (void)dealloc;	// 0x327871b9
- (id)description;	// 0x327872c9
- (void)discardContentIfPossible;	// 0x327867e1
- (void)endContentAccess;	// 0x32787601
- (void)finalize;	// 0x3278717d
- (BOOL)isContentDiscarded;	// 0x327875b9
// converted property getter: - (unsigned)length;	// 0x32787495
- (void *)mutableBytes;	// 0x3278734d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x32787ebd
@end
