/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "VMUMemoryView.h"


@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView> {
	VMURange _addressRange;	// 4 = 0x4
	unsigned long _cursor;	// 20 = 0x14
	char *_data;	// 24 = 0x18
	id _gcKeepAlive;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x35593045; converted property
@property(assign) unsigned long long cursor;	// G=0x35593069; S=0x35593091; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x35592fbd
- (long long)LEB128;	// 0x355946e9
- (unsigned long long)ULEB128;	// 0x3559469d
// converted property getter: - (VMURange)addressRange;	// 0x35593045
- (void)advanceCursor:(unsigned long long)cursor;	// 0x3559316d
- (id)arrayOfInt16:(unsigned long)int16;	// 0x35593ced
- (id)arrayOfInt32:(unsigned long)int32;	// 0x35593e6d
- (id)arrayOfInt64:(unsigned long)int64;	// 0x35593fed
- (id)arrayOfInt8:(unsigned long)int8;	// 0x35593c15
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x35594231
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x355943b1
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x35594531
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x35594159
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x35594c29
// converted property getter: - (unsigned long long)cursor;	// 0x35593069
- (id)description;	// 0x35595069
- (dyld_image_info_64)dyldImageInfo;	// 0x355949e1
- (dyld_image_info_64)dyldImageInfo64;	// 0x35594b05
- (short)int16;	// 0x355934a9
- (int)int32;	// 0x355935a1
- (long long)int64;	// 0x35593699
- (BOOL)int8;	// 0x355933b5
- (BOOL)isCursorPointerAligned;	// 0x3559332d
- (nlist_64)nlist;	// 0x3559475d
- (nlist_64)nlist_64;	// 0x3559489d
- (void)pointerAlignCursor;	// 0x35593371
- (id)readBytes:(unsigned long)bytes;	// 0x35593b75
- (void)rewindCursor:(unsigned long long)cursor;	// 0x3559324d
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x35593091
- (id)stringWithEncoding:(unsigned)encoding;	// 0x35594ecd
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x35594d05
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x35594d25
- (unsigned short)uint16;	// 0x35593889
- (unsigned)uint32;	// 0x35593981
- (unsigned long long)uint64;	// 0x35593a79
- (unsigned char)uint8;	// 0x35593795
@end
