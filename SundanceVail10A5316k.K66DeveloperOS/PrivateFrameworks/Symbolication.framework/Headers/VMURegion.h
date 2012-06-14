/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMURegion : VMUAddressRange <NSCoding, NSCopying> {
	VMUSymbolOwner *_owner;	// 20 = 0x14
	NSString *_name;	// 24 = 0x18
}
@property(readonly, retain) NSString *name;	// G=0x313d03dd; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x313d03cd; S=0x313d09a9; converted property
+ (id)regionWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x313d0221
- (id)initWithCoder:(id)coder;	// 0x313d0315
- (id)initWithOwner:(id)owner name:(id)name addressRange:(VMURange)range;	// 0x313d027d
- (VMURange)addressRange;	// 0x313d03ed
- (int)compare:(id)compare;	// 0x313d0415
- (id)copyWithZone:(NSZone *)zone;	// 0x313d0695
- (void)dealloc;	// 0x313d0645
- (id)description;	// 0x313d05b5
- (void)encodeWithCoder:(id)coder;	// 0x313d037d
- (unsigned)hash;	// 0x313d0571
- (BOOL)isEqual:(id)equal;	// 0x313d04fd
- (BOOL)isEqualToRegion:(id)region;	// 0x313d0475
// converted property getter: - (id)name;	// 0x313d03dd
// converted property getter: - (id)owner;	// 0x313d03cd
// converted property setter: - (void)setOwner:(id)owner;	// 0x313d09a9
@end

