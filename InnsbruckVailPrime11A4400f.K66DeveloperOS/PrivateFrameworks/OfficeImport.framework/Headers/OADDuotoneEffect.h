/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {
	OADColor *mColor1;	// 8 = 0x8
	OADColor *mColor2;	// 12 = 0xc
	int mTransferMode1;	// 16 = 0x10
	int mTransferMode2;	// 20 = 0x14
}
@property(retain) id color1;	// G=0x318ecd1d; S=0x3185ed41; converted property
@property(retain) id color2;	// G=0x318ecd2d; S=0x3185ed7d; converted property
@property(assign) int transferMode1;	// G=0x318ecd3d; S=0x318ecd4d; converted property
@property(assign) int transferMode2;	// G=0x318ecd5d; S=0x318ecd6d; converted property
- (id)init;	// 0x3185ecf1
// converted property getter: - (id)color1;	// 0x318ecd1d
// converted property getter: - (id)color2;	// 0x318ecd2d
- (id)copyWithZone:(NSZone *)zone;	// 0x3187db99
- (void)dealloc;	// 0x3185eecd
- (unsigned)hash;	// 0x318ecd7d
- (BOOL)isEqual:(id)equal;	// 0x318ecdfd
// converted property setter: - (void)setColor1:(id)a1;	// 0x3185ed41
// converted property setter: - (void)setColor2:(id)a2;	// 0x3185ed7d
- (void)setStyleColor:(id)color;	// 0x3187dcd9
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x318ecd4d
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x318ecd6d
// converted property getter: - (int)transferMode1;	// 0x318ecd3d
// converted property getter: - (int)transferMode2;	// 0x318ecd5d
@end

