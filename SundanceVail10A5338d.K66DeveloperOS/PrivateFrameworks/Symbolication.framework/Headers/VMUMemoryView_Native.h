/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "VMUMemoryView.h"


@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x34c98fc5; converted property
@property(assign) unsigned long long cursor;	// G=0x34c98fe9; S=0x34c99011; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x34c98f3d
- (long long)LEB128;	// 0x34c9a38d
- (unsigned long long)ULEB128;	// 0x34c9a259
// converted property getter: - (VMURange)addressRange;	// 0x34c98fc5
- (void)advanceCursor:(unsigned long long)cursor;	// 0x34c990e9
- (id)arrayOfInt16:(unsigned long)int16;	// 0x34c99c59
- (id)arrayOfInt32:(unsigned long)int32;	// 0x34c99d35
- (id)arrayOfInt64:(unsigned long)int64;	// 0x34c99e11
- (id)arrayOfInt8:(unsigned long)int8;	// 0x34c99b81
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x34c99fc5
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x34c9a0a1
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x34c9a17d
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x34c99eed
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x34c9a869
// converted property getter: - (unsigned long long)cursor;	// 0x34c98fe9
- (id)description;	// 0x34c9ac65
- (dyld_image_info_64)dyldImageInfo;	// 0x34c9a621
- (dyld_image_info_64)dyldImageInfo64;	// 0x34c9a745
- (short)int16;	// 0x34c99425
- (int)int32;	// 0x34c99519
- (long long)int64;	// 0x34c9960d
- (BOOL)int8;	// 0x34c99331
- (BOOL)isCursorPointerAligned;	// 0x34c992a9
- (nlist_64)nlist;	// 0x34c9a401
- (nlist_64)nlist_64;	// 0x34c9a515
- (void)pointerAlignCursor;	// 0x34c992ed
- (id)readBytes:(unsigned long)bytes;	// 0x34c99ae1
- (void)rewindCursor:(unsigned long long)cursor;	// 0x34c991c9
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x34c99011
- (id)stringWithEncoding:(unsigned)encoding;	// 0x34c9ab0d
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x34c9a945
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x34c9a965
- (unsigned short)uint16;	// 0x34c997fd
- (unsigned)uint32;	// 0x34c998f1
- (unsigned long long)uint64;	// 0x34c999e5
- (unsigned char)uint8;	// 0x34c99709
@end

