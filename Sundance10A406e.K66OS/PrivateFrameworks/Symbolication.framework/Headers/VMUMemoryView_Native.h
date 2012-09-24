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
@property(readonly, assign) VMURange addressRange;	// G=0x36dccf8d; converted property
@property(assign) unsigned long long cursor;	// G=0x36dccfb1; S=0x36dccfd9; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x36dccf05
- (long long)LEB128;	// 0x36dce355
- (unsigned long long)ULEB128;	// 0x36dce221
// converted property getter: - (VMURange)addressRange;	// 0x36dccf8d
- (void)advanceCursor:(unsigned long long)cursor;	// 0x36dcd0b1
- (id)arrayOfInt16:(unsigned long)int16;	// 0x36dcdc21
- (id)arrayOfInt32:(unsigned long)int32;	// 0x36dcdcfd
- (id)arrayOfInt64:(unsigned long)int64;	// 0x36dcddd9
- (id)arrayOfInt8:(unsigned long)int8;	// 0x36dcdb49
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x36dcdf8d
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x36dce069
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x36dce145
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x36dcdeb5
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x36dce831
// converted property getter: - (unsigned long long)cursor;	// 0x36dccfb1
- (id)description;	// 0x36dcec2d
- (dyld_image_info_64)dyldImageInfo;	// 0x36dce5e9
- (dyld_image_info_64)dyldImageInfo64;	// 0x36dce70d
- (short)int16;	// 0x36dcd3ed
- (int)int32;	// 0x36dcd4e1
- (long long)int64;	// 0x36dcd5d5
- (BOOL)int8;	// 0x36dcd2f9
- (BOOL)isCursorPointerAligned;	// 0x36dcd271
- (nlist_64)nlist;	// 0x36dce3c9
- (nlist_64)nlist_64;	// 0x36dce4dd
- (void)pointerAlignCursor;	// 0x36dcd2b5
- (id)readBytes:(unsigned long)bytes;	// 0x36dcdaa9
- (void)rewindCursor:(unsigned long long)cursor;	// 0x36dcd191
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x36dccfd9
- (id)stringWithEncoding:(unsigned)encoding;	// 0x36dcead5
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x36dce90d
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x36dce92d
- (unsigned short)uint16;	// 0x36dcd7c5
- (unsigned)uint32;	// 0x36dcd8b9
- (unsigned long long)uint64;	// 0x36dcd9ad
- (unsigned char)uint8;	// 0x36dcd6d1
@end
