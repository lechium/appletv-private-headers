/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSPlaceholderString : NSString {
}
- (id)init;	// 0x31a20f45
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x319ea541
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x31a31f89
- (id)initWithCString:(const char *)cstring;	// 0x31a884dd
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x319e48b5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x31a884ad
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x319e626d
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x319e7865
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x319ec379
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x31a25f09
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x319e590d
- (id)initWithString:(id)string;	// 0x31a09325
- (BOOL)_isDeallocating;	// 0x31a884a1
- (BOOL)_tryRetain;	// 0x31a884a5
- (id)autorelease;	// 0x31a8848d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x31a88535
- (void)dealloc;	// 0x31a884a9
- (unsigned)length;	// 0x31a88505
- (oneway void)release;	// 0x31a8849d
- (id)retain;	// 0x31a88491
- (unsigned)retainCount;	// 0x31a88495
@end

