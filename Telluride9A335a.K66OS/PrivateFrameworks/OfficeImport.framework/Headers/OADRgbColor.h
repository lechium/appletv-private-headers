/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor {
@private
	float mRed;	// 8 = 0x8
	float mGreen;	// 12 = 0xc
	float mBlue;	// 16 = 0x10
}
+ (id)black;	// 0x351d155d
+ (id)rgbColorWithNSColor:(id)nscolor;	// 0x353c571d
+ (id)rgbColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x353c58a1
+ (id)rgbColorWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x353c5845
+ (id)rgbColorWithWhite:(float)white;	// 0x353c57fd
+ (id)rgbColorWithWhiteByte:(float)whiteByte;	// 0x353c57b5
+ (id)white;	// 0x351f2bd5
- (id)initWithRed:(float)red green:(float)green blue:(float)blue;	// 0x351d15ad
- (id)initWithRedByte:(float)redByte greenByte:(float)byte blueByte:(float)byte3;	// 0x351e5f35
- (id)initWithWhite:(float)white;	// 0x353c5a89
- (id)initWithWhiteByte:(float)whiteByte;	// 0x353c5a11
- (float)blue;	// 0x3512ced1
- (unsigned char)blueByte;	// 0x351aceed
- (id)copyWithZone:(NSZone *)zone;	// 0x352eb471
- (float)green;	// 0x3512cee1
- (unsigned char)greenByte;	// 0x351ace7d
- (unsigned)hash;	// 0x351acd9d
- (BOOL)isEqual:(id)equal;	// 0x351accf9
- (float)red;	// 0x3512cef1
- (unsigned char)redByte;	// 0x351ace0d
- (id)rgbColorWithFraction:(float)fraction ofRgbColor:(id)rgbColor;	// 0x353c58fd
@end
