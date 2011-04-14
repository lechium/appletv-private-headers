/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXBaseTypes : NSObject {
}
+ (float)readOptionalAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a3c0bd
+ (float)readOptionalFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a317a9
+ (float)readOptionalLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a6efe1
+ (long)readOptionalLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a317dd
+ (CGPoint)readPoint2DFromXmlNode:(xmlNode *)xmlNode;	// 0x31a3bff1
+ (id)readPoint3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31ab9fb5
+ (int)readRectAlignmentFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a31485
+ (id)readRelativeRectFromXmlNode:(xmlNode *)xmlNode;	// 0x31a316ed
+ (float)readRequiredAngleFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a6349d
+ (float)readRequiredFractionFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a30769
+ (float)readRequiredLengthFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a3c03d
+ (long)readRequiredLongFromXmlNode:(xmlNode *)xmlNode name:(const char *)name;	// 0x31a3079d
+ (id)readRotation3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31a63409
+ (CGSize)readSize2DFromXmlNode:(xmlNode *)xmlNode;	// 0x31a3c071
+ (id)readVector3DFromXmlNode:(xmlNode *)xmlNode;	// 0x31aba049
+ (id)rectAlignmentEnumMap;	// 0x31a600a9
@end

