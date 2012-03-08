/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABStroke : NSObject {
}
+ (int)readCapStyle:(int)style;	// 0x32899fd9
+ (int)readCompoundType:(int)type;	// 0x3289a075
+ (int)readLineEndLength:(int)length;	// 0x32899d3d
+ (int)readLineEndType:(int)type;	// 0x32899d01
+ (int)readLineEndWidth:(int)width;	// 0x32899d29
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x32b19d85
+ (int)readPresetDashStyle:(int)style;	// 0x328999d5
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x32898279
+ (int)writeCapStyle:(int)style;	// 0x32b19d71
+ (int)writeCompoundType:(int)type;	// 0x32b19cc1
+ (int)writeLineEndLength:(int)length;	// 0x32b19d5d
+ (int)writeLineEndType:(int)type;	// 0x32b19d21
+ (int)writeLineEndWidth:(int)width;	// 0x32b19d49
+ (int)writePresetDashStyle:(int)style;	// 0x32b19ce1
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x32b19e2d
@end

