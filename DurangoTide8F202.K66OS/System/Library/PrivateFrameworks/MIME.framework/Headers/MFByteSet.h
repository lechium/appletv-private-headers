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
+ (id)ASCIIByteSet;	// 0x34699d81
+ (id)asciiWhitespaceSet;	// 0x34699dd1
+ (id)nonASCIIByteSet;	// 0x34699d39
+ (id)suspiciousCodepage1252ByteSet;	// 0x34699ce9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x34699bad
- (id)initWithCString:(const char *)cstring;	// 0x34699e1d
- (id)initWithRange:(NSRange)range;	// 0x34699bfd
- (id)_initWithSet:(const char *)set;	// 0x34699b6d
- (BOOL)byteIsMember:(BOOL)member;	// 0x346999a1
- (id)copyWithZone:(NSZone *)zone;	// 0x34699b31
- (id)invertedSet;	// 0x34699cb5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34699af5
@end

