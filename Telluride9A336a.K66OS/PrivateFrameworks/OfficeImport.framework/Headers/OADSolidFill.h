/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill {
@private
	OADColor *mColor;	// 12 = 0xc
	BOOL mIsColorOverridden;	// 16 = 0x10
}
@property(retain) id color;	// G=0x34b848e5; S=0x34bff709; converted property
+ (id)blackFill;	// 0x34e1edbd
+ (id)defaultProperties;	// 0x34bff6c1
+ (id)whiteFill;	// 0x34e1ee39
- (id)initWithDefaults;	// 0x34c294f5
// converted property getter: - (id)color;	// 0x34b848e5
- (id)copyWithZone:(NSZone *)zone;	// 0x34ce8b95
- (void)dealloc;	// 0x34c04f5d
- (unsigned)hash;	// 0x34e1eeb5
- (BOOL)isColorOverridden;	// 0x34b84915
- (BOOL)isEqual:(id)equal;	// 0x34c048f9
// converted property setter: - (void)setColor:(id)color;	// 0x34bff709
- (void)setStyleColor:(id)color;	// 0x34d2b6f9
@end
