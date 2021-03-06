/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXStroke : NSObject {
}
+ (id)compoundLineEnumMap;	// 0x310e0149
+ (id)lineCapEnumMap;	// 0x310e00f1
+ (id)lineEndLengthEnumMap;	// 0x3115ec99
+ (id)lineEndTypeEnumMap;	// 0x3115ebe9
+ (id)lineEndWidthEnumMap;	// 0x3115ec41
+ (id)penAlignmentEnumMap;	// 0x310e01a1
+ (id)presetDashEnumMap;	// 0x310e02a1
+ (id)readCustomDashFromXmlNode:(xmlNode *)xmlNode;	// 0x3125a809
+ (void)readLineEnd:(id)end fromXmlNode:(xmlNode *)xmlNode;	// 0x310ede99
+ (id)readPresetDashFromXmlNode:(xmlNode *)xmlNode;	// 0x310e01f9
+ (id)readStrokeFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x310dfcd1
@end

