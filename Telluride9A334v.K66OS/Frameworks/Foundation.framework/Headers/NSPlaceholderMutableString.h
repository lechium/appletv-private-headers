/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableString.h"


@interface NSPlaceholderMutableString : NSMutableString {
}
- (id)init;	// 0x30617b0d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x3061e491
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x30685b11
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x30685bf9
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x30685ca5
- (id)initWithCapacity:(unsigned)capacity;	// 0x3061de35
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x30685bbd
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x30633685
- (id)initWithString:(id)string;	// 0x3061797d
- (BOOL)_isDeallocating;	// 0x30685b05
- (BOOL)_tryRetain;	// 0x30685b09
- (id)autorelease;	// 0x30685af1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x30685d2d
- (void)dealloc;	// 0x30685b0d
- (unsigned)length;	// 0x30685cfd
- (oneway void)release;	// 0x30685b01
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x30685d5d
- (id)retain;	// 0x30685af5
- (unsigned)retainCount;	// 0x30685af9
@end
