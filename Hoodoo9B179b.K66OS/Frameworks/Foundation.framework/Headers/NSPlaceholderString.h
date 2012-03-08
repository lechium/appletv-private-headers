/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSPlaceholderString : NSString {
}
- (id)init;	// 0x31041e95
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x3100b5d5
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x31052fc1
- (id)initWithCString:(const char *)cstring;	// 0x310a39b9
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x31005cd5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x310a3989
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x31007545
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x31008aa1
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3100d38d
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x31047009
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x31006c51
- (id)initWithString:(id)string;	// 0x3102a46d
- (BOOL)_isDeallocating;	// 0x310a397d
- (BOOL)_tryRetain;	// 0x310a3981
- (id)autorelease;	// 0x310a3969
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x310a3a11
- (void)dealloc;	// 0x310a3985
- (unsigned)length;	// 0x310a39e1
- (oneway void)release;	// 0x310a3979
- (id)retain;	// 0x310a396d
- (unsigned)retainCount;	// 0x310a3971
@end

