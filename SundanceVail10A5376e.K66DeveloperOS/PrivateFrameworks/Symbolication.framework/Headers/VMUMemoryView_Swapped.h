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
@property(readonly, assign) VMURange addressRange;	// G=0x3222301d; converted property
@property(assign) unsigned long long cursor;	// G=0x32223041; S=0x32223069; converted property
- (id)initWithAddressRange:(VMURange)addressRange data:(char *)data memory:(id)memory;	// 0x32222f95
- (long long)LEB128;	// 0x322246c1
- (unsigned long long)ULEB128;	// 0x32224675
// converted property getter: - (VMURange)addressRange;	// 0x3222301d
- (void)advanceCursor:(unsigned long long)cursor;	// 0x32223145
- (id)arrayOfInt16:(unsigned long)int16;	// 0x32223cc5
- (id)arrayOfInt32:(unsigned long)int32;	// 0x32223e45
- (id)arrayOfInt64:(unsigned long)int64;	// 0x32223fc5
- (id)arrayOfInt8:(unsigned long)int8;	// 0x32223bed
- (id)arrayOfUInt16:(unsigned long)uint16;	// 0x32224209
- (id)arrayOfUInt32:(unsigned long)uint32;	// 0x32224389
- (id)arrayOfUInt64:(unsigned long)uint64;	// 0x32224509
- (id)arrayOfUInt8:(unsigned long)uint8;	// 0x32224131
- (BOOL)charAtOffset:(unsigned long long)offset;	// 0x32224c01
// converted property getter: - (unsigned long long)cursor;	// 0x32223041
- (id)description;	// 0x32225041
- (dyld_image_info_64)dyldImageInfo;	// 0x322249b9
- (dyld_image_info_64)dyldImageInfo64;	// 0x32224add
- (short)int16;	// 0x32223481
- (int)int32;	// 0x32223579
- (long long)int64;	// 0x32223671
- (BOOL)int8;	// 0x3222338d
- (BOOL)isCursorPointerAligned;	// 0x32223305
- (nlist_64)nlist;	// 0x32224735
- (nlist_64)nlist_64;	// 0x32224875
- (void)pointerAlignCursor;	// 0x32223349
- (id)readBytes:(unsigned long)bytes;	// 0x32223b4d
- (void)rewindCursor:(unsigned long long)cursor;	// 0x32223225
// converted property setter: - (void)setCursor:(unsigned long long)cursor;	// 0x32223069
- (id)stringWithEncoding:(unsigned)encoding;	// 0x32224ea5
- (id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;	// 0x32224cdd
- (id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;	// 0x32224cfd
- (unsigned short)uint16;	// 0x32223861
- (unsigned)uint32;	// 0x32223959
- (unsigned long long)uint64;	// 0x32223a51
- (unsigned char)uint8;	// 0x3222376d
@end

