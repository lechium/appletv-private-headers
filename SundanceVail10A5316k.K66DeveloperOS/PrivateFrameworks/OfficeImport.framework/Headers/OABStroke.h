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
+ (int)readCapStyle:(int)style;	// 0x3101fc1d
+ (int)readCompoundType:(int)type;	// 0x3101fca1
+ (int)readLineEndLength:(int)length;	// 0x3101f9dd
+ (int)readLineEndType:(int)type;	// 0x3101f9c5
+ (int)readLineEndWidth:(int)width;	// 0x3101f9d1
+ (id)readLineEndWithType:(int)type width:(int)width length:(int)length;	// 0x31240ce5
+ (int)readPresetDashStyle:(int)style;	// 0x3101f7d5
+ (id)readStrokeFromShapeBaseManager:(id)shapeBaseManager colorPalette:(id)palette;	// 0x3101e74d
+ (int)writeCapStyle:(int)style;	// 0x31241231
+ (int)writeCompoundType:(int)type;	// 0x312411c1
+ (int)writeLineEndLength:(int)length;	// 0x31241225
+ (int)writeLineEndType:(int)type;	// 0x3124120d
+ (int)writeLineEndWidth:(int)width;	// 0x31241219
+ (int)writePresetDashStyle:(int)style;	// 0x312411cd
+ (void)writePresetDashStyleForCustomDash:(id)customDash toStroke:(EshStroke *)stroke state:(id)state;	// 0x3124123d
+ (void)writeStroke:(id)stroke toStroke:(EshStroke *)stroke2 state:(id)state;	// 0x31240d85
@end

