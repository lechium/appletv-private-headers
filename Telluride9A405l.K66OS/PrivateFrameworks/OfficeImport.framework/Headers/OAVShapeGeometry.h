/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVShapeGeometry : NSObject {
}
+ (OADAdjustCoord)readAdjustCoord:(id)coord;	// 0x30e8dce5
+ (void)readAdjustValuesFromManager:(id)manager toGeometry:(id)geometry;	// 0x30d7efe1
+ (id)readFromManager:(id)manager;	// 0x30d7ec5d
+ (void)readLimoFromManager:(id)manager toGeometry:(id)geometry;	// 0x30de95d5
+ (void)readTextBodyRectsFromManager:(id)manager toGeometry:(id)geometry;	// 0x30de97d5
@end
