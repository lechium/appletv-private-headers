/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXColor : NSObject {
}
+ (id)presetColorEnumMap;	// 0x348f46d1
+ (id)readColorFromNode:(xmlNode *)node;	// 0x348db3ad
+ (id)readColorFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x348db35d
+ (id)readHslColorFromXmlNode:(xmlNode *)xmlNode;	// 0x34a56d05
+ (id)readPresetColorFromAttribute:(id)attribute;	// 0x348f3fd5
+ (id)readPresetColorFromXmlNode:(xmlNode *)xmlNode;	// 0x3493b7a1
+ (id)readSRgbColorFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute;	// 0x348db7c5
+ (id)readScRgbColorFromXmlNode:(xmlNode *)xmlNode;	// 0x3495e159
+ (id)readSchemeColorFromXmlNode:(xmlNode *)xmlNode;	// 0x348dbe45
+ (id)readSystemColorFromAttribute:(id)attribute;	// 0x348db629
+ (id)readSystemColorFromXmlNode:(xmlNode *)xmlNode;	// 0x348db535
+ (id)schemeColorEnumMap;	// 0x348dbefd
+ (id)systemColorEnumMap;	// 0x348db6d9
@end

