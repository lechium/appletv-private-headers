/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSSerializerStream.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
	void *memory;	// 4 = 0x4
	unsigned current;	// 8 = 0x8
	unsigned max;	// 12 = 0xc
	CFDictionaryRef roomForIntLocations;	// 16 = 0x10
}
- (void)copySerializationInto:(void *)into;	// 0x31ae5331
- (void)dealloc;	// 0x31ae4ca1
- (void)finalize;	// 0x31ae4d6d
- (unsigned)writeAlignedDataSize:(unsigned)size;	// 0x31ae4f2d
- (unsigned)writeData:(const void *)data length:(unsigned)length;	// 0x31ae4ff9
- (void)writeDelayedInt:(unsigned)int for:(int)aFor;	// 0x31ae5171
- (unsigned)writeInt:(unsigned)int;	// 0x31ae4dd1
- (unsigned)writeRoomForInt:(int *)int;	// 0x31ae50d9
- (BOOL)writeToPath:(id)path safely:(BOOL)safely;	// 0x31ae5239
@end

