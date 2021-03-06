/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x36074c95
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x360d7235
+ (id)dataWithLength:(unsigned)length;	// 0x360817c5
- (id)initWithCapacity:(unsigned)capacity;	// 0x360d7275
- (id)initWithLength:(unsigned)length;	// 0x360d7299
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x360d6a75
- (void)appendData:(id)data;	// 0x360d6c05
- (Class)classForCoder;	// 0x36080245
- (void)increaseLengthBy:(unsigned)by;	// 0x360d6dcd
- (void *)mutableBytes;	// 0x360d6785
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x360d6ec5
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x360d67cd
- (void)resetBytesInRange:(NSRange)range;	// 0x360d70c1
- (void)setData:(id)data;	// 0x360d71d1
- (void)setLength:(unsigned)length;	// 0x360d67a9
@end

