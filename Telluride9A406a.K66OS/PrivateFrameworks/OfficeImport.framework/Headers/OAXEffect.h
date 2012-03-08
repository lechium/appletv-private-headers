/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXEffect : NSObject {
}
+ (id)presetShadowTypeEnumMap;	// 0x32a100e1
+ (id)readEffectsFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x329a6389
+ (void)readGlow:(id)glow fromXmlNode:(xmlNode *)xmlNode;	// 0x329ee741
+ (void)readOuterShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x329a65b5
+ (void)readPresetShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x32a10049
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x329edfe9
+ (void)readShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x329a6795
@end

