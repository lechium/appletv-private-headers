/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"


@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)ASCIIByteSet;	// 0x304a0d81
+ (id)asciiWhitespaceSet;	// 0x304a0dd1
+ (id)nonASCIIByteSet;	// 0x304a0d39
+ (id)suspiciousCodepage1252ByteSet;	// 0x304a0ce9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x304a0bad
- (id)initWithCString:(const char *)cstring;	// 0x304a0e1d
- (id)initWithRange:(NSRange)range;	// 0x304a0bfd
- (id)_initWithSet:(const char *)set;	// 0x304a0b6d
- (BOOL)byteIsMember:(BOOL)member;	// 0x304a09a1
- (id)copyWithZone:(NSZone *)zone;	// 0x304a0b31
- (id)invertedSet;	// 0x304a0cb5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x304a0af5
@end

