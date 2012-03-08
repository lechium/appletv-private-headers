/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


@interface NSMutableData (NSMutableData)
+ (id)allocWithZone:(NSZone *)zone;	// 0x35dd9d6d
+ (id)dataWithCapacity:(unsigned)capacity;	// 0x35e1a6fd
+ (id)dataWithLength:(unsigned)length;	// 0x35dfbcf1
- (id)initWithCapacity:(unsigned)capacity;	// 0x35e380d5
- (id)initWithLength:(unsigned)length;	// 0x35e380f9
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x35e37935
- (void)appendData:(id)data;	// 0x35e37abd
- (Class)classForCoder;	// 0x35e11e99
- (void)increaseLengthBy:(unsigned)by;	// 0x35e37c71
- (void *)mutableBytes;	// 0x35e37669
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes;	// 0x35e37d65
- (void)replaceBytesInRange:(NSRange)range withBytes:(const void *)bytes length:(unsigned)length;	// 0x35e376b1
- (void)resetBytesInRange:(NSRange)range;	// 0x35e37f61
- (void)setData:(id)data;	// 0x35e38071
- (void)setLength:(unsigned)length;	// 0x35e3768d
@end

