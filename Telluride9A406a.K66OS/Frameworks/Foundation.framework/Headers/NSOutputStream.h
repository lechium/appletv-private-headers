/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOutputStream.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSOutputStream (NSOutputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e72121
+ (id)outputStreamToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x35e72201
+ (id)outputStreamToFileAtPath:(id)path append:(BOOL)append;	// 0x35e72245
+ (id)outputStreamToMemory;	// 0x35e721c5
+ (id)outputStreamWithURL:(id)url append:(BOOL)append;	// 0x35e72289
- (unsigned long)_cfTypeID;	// 0x35e722cd
- (BOOL)hasSpaceAvailable;	// 0x35e721a1
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x35e72179
@end

@interface NSOutputStream (NSCFOutputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x35e72315
@end

