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
@property(readonly, assign) VMURange addressRange;	// G=0x301705d5; converted property
@property(assign) unsigned long long cursor;	// G=0x301705f1; S=0x301708a5; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x3017061d
- (long long)LEB128;	// 0x301706cd
- (unsigned long long)ULEB128;	// 0x301712d1
// converted property getter: - (VMURange)addressRange;	// 0x301705d5
- (void)advanceCursor:(unsigned long long)cursor;	// 0x301707c1
- (id)arrayOfInt16:(unsigned long)int16;	// 0x30171925
- (id)arrayOfInt32:(unsigned long)int32;	// 0x30171849
- (id)arrayOfInt64:(unsigned long)int64;	// 0x3017176d
- (id)arrayOfInt8:(unsigned long)int8;	// 0x30171a01
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x301715b5
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x301714d9
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x301713fd
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x30171691
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x30170d29
// converted property getter: - (unsigned long long)cursor;	// 0x301705f1
- (id)description;	// 0x30170965
- (dyld_image_info_64)dyldImageInfo;	// 0x30170f35
- (dyld_image_info_64)dyldImageInfo64;	// 0x30170e01
- (short)int16;	// 0x3017212d
- (int)int32;	// 0x30172021
- (long long)int64;	// 0x30171f11
- (BOOL)int8;	// 0x30172239
- (BOOL)isCursorPointerAligned;	// 0x30170785
- (nlist_64)nlist;	// 0x3017119d
- (nlist_64)nlist_64;	// 0x3017107d
- (void)pointerAlignCursor;	// 0x30170749
- (id)readBytes:(unsigned long)bytes;	// 0x30172419
- (void)rewindCursor:(unsigned long long)cursor;	// 0x30172345
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x301708a5
- (id)stringWithEncoding:(unsigned)encoding;	// 0x301709f9
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x3017069d
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x30170b6d
- (unsigned short)uint16;	// 0x30171cf9
- (unsigned)uint32;	// 0x30171bed
- (unsigned long long)uint64;	// 0x30171add
- (unsigned char)uint8;	// 0x30171e05
@end

