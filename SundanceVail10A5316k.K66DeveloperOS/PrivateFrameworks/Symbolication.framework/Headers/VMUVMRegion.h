/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString;

@interface VMUVMRegion : NSObject {
	VMURange range;	// 4 = 0x4
	unsigned prot;	// 20 = 0x14
	unsigned maxProt;	// 24 = 0x18
	NSString *type;	// 28 = 0x1c
	NSString *path;	// 32 = 0x20
	BOOL summarized;	// 36 = 0x24
	BOOL recalculate_pages_resident;	// 37 = 0x25
	unsigned char external_pager;	// 38 = 0x26
	unsigned char share_mode;	// 39 = 0x27
	int purgeable;	// 40 = 0x28
	unsigned virtual_pages;	// 44 = 0x2c
	unsigned pages_resident;	// 48 = 0x30
	unsigned pages_shared_now_private;	// 52 = 0x34
	unsigned pages_swapped_out;	// 56 = 0x38
	unsigned pages_dirtied;	// 60 = 0x3c
	unsigned ref_count;	// 64 = 0x40
	unsigned user_tag;	// 68 = 0x44
	unsigned object_id;	// 72 = 0x48
	unsigned nesting_depth;	// 76 = 0x4c
	BOOL is_submap;	// 80 = 0x50
	unsigned mallocBlockCount;	// 84 = 0x54
	unsigned mallocTypeFlag;	// 88 = 0x58
	unsigned pages_purgable_vol;	// 92 = 0x5c
	unsigned pages_purgable_non_vol;	// 96 = 0x60
	unsigned pages_purgable_empty;	// 100 = 0x64
}
@property(readonly, assign) VMURange range;	// G=0x313e2c7d; converted property
@property(readonly, retain) NSString *type;	// G=0x313e2cb1; converted property
- (id)breakAtLength:(unsigned long)length;	// 0x313e2e15
- (void)dealloc;	// 0x313e2fc1
- (id)description;	// 0x313e2c69
- (id)descriptionWithOptions:(unsigned)options maximumLength:(unsigned)length;	// 0x313e2451
- (BOOL)isEqual:(id)equal;	// 0x313e2cd1
- (BOOL)isSubmap;	// 0x313e2cc1
- (unsigned)protection;	// 0x313e2ca1
// converted property getter: - (VMURange)range;	// 0x313e2c7d
// converted property getter: - (id)type;	// 0x313e2cb1
@end

