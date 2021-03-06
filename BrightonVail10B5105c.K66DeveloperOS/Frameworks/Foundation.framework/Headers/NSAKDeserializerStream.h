/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSDeserializerStream.h"


@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
	const void *memory;	// 4 = 0x4
	const char *current;	// 8 = 0x8
	unsigned left;	// 12 = 0xc
	unsigned max;	// 16 = 0x10
	BOOL freeWhenDone;	// 20 = 0x14
}
- (id)initFromMemoryNoCopy:(const void *)memoryNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x36177975
- (id)initFromPath:(id)path;	// 0x36177a85
- (void)dealloc;	// 0x361779c5
- (void)finalize;	// 0x36177a25
- (unsigned)readAlignedDataSize;	// 0x36177c59
- (void)readData:(void *)data length:(unsigned)length;	// 0x36177d39
- (int)readInt;	// 0x36177bdd
@end

