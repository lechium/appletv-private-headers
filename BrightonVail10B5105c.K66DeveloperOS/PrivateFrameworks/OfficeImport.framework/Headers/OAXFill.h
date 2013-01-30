/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXFill : NSObject {
}
+ (id)pathGradientFillTypeEnumMap;	// 0x379826c1
+ (id)presetPatternFillTypeEnumMap;	// 0x37a703d9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x3798fb35
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x37980ce1
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37980f79
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x37981135
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37afbe6d
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x3798f919
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37980fc9
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3798f709
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x379823c9
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37a7024d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37980dc9
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x3798fb2d
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x37a3ab61
+ (id)tileFlipModeEnumMap;	// 0x37a358a1
@end
