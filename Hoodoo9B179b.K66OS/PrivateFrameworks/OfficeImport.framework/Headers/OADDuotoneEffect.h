/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect : OADBlipEffect {
@private
	OADColor *mColor1;	// 8 = 0x8
	OADColor *mColor2;	// 12 = 0xc
	int mTransferMode1;	// 16 = 0x10
	int mTransferMode2;	// 20 = 0x14
}
@property(retain) id color1;	// G=0x329d17b9; S=0x32907385; converted property
@property(retain) id color2;	// G=0x329d17c9; S=0x329073c5; converted property
@property(assign) int transferMode1;	// G=0x329d17d9; S=0x329d17e9; converted property
@property(assign) int transferMode2;	// G=0x329d17f9; S=0x329d1809; converted property
- (id)init;	// 0x32907345
// converted property getter: - (id)color1;	// 0x329d17b9
// converted property getter: - (id)color2;	// 0x329d17c9
- (id)copyWithZone:(NSZone *)zone;	// 0x3291d3ed
- (void)dealloc;	// 0x32907405
- (unsigned)hash;	// 0x329d2115
- (BOOL)isEqual:(id)equal;	// 0x329d1fd9
// converted property setter: - (void)setColor1:(id)a1;	// 0x32907385
// converted property setter: - (void)setColor2:(id)a2;	// 0x329073c5
- (void)setStyleColor:(id)color;	// 0x3291d6c5
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x329d17e9
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x329d1809
// converted property getter: - (int)transferMode1;	// 0x329d17d9
// converted property getter: - (int)transferMode2;	// 0x329d17f9
@end

