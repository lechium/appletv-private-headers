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
- (id)init;	// 0x315aae95
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x315745d5
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x315bbfc1
- (id)initWithCString:(const char *)cstring;	// 0x3160c9b9
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x3156ecd5
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x3160c989
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x31570545
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x31571aa1
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3157638d
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x315b0009
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x3156fc51
- (id)initWithString:(id)string;	// 0x3159346d
- (BOOL)_isDeallocating;	// 0x3160c97d
- (BOOL)_tryRetain;	// 0x3160c981
- (id)autorelease;	// 0x3160c969
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3160ca11
- (void)dealloc;	// 0x3160c985
- (unsigned)length;	// 0x3160c9e1
- (oneway void)release;	// 0x3160c979
- (id)retain;	// 0x3160c96d
- (unsigned)retainCount;	// 0x3160c971
@end
