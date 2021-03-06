/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVStroke : NSObject {
}
+ (int)readCapStyle:(id)style;	// 0x34d1c71d
+ (int)readCompoundType:(id)type;	// 0x34d1c7f1
+ (void)readDashStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x34d1bddd
+ (void)readFillStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x34d1bb45
+ (id)readFromManager:(id)manager;	// 0x34d1b7c1
+ (void)readJoinStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x34d1c025
+ (void)readLineEnd:(id)end type:(id)type width:(id)width length:(id)length;	// 0x34d1c325
+ (int)readLineEndLength:(id)length;	// 0x34d1c48d
+ (int)readLineEndType:(id)type;	// 0x34d1c3b5
+ (int)readLineEndWidth:(id)width;	// 0x34d1c421
+ (int)readPresetDashStyle:(id)style;	// 0x34d1bfa9
+ (id)targetFgColorWithManager:(id)manager;	// 0x34d1ba01
@end

