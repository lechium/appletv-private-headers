/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>

@protocol VMUMemory;

@interface VMUFatArch : __objc_empty_vtable {
	unsigned _fileOffset;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned _alignment;	// 12 = 0xc
	id<VMUMemory> _memory;	// 16 = 0x10
}
@property(readonly, assign) unsigned alignment;	// G=0x34d5c771; converted property
@property(readonly, assign) unsigned fileOffset;	// G=0x34d5c751; converted property
@property(readonly, assign) unsigned size;	// G=0x34d5c761; converted property
+ (id)fatArchWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x34d5c565
+ (id)fatArchWithMemory:(id)memory memoryView:(id)view;	// 0x34d5c519
- (id)initWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x34d5c5bd
- (id)initWithMemory:(id)memory memoryView:(id)view;	// 0x34d5c641
// converted property getter: - (unsigned)alignment;	// 0x34d5c771
- (id)architecture;	// 0x34d5c731
- (void)dealloc;	// 0x34d5c791
// converted property getter: - (unsigned)fileOffset;	// 0x34d5c751
- (id)memory;	// 0x34d5c781
// converted property getter: - (unsigned)size;	// 0x34d5c761
@end

