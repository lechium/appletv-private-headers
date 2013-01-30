/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface OAVStroke : NSObject {
}
+ (int)readCapStyle:(id)style;	// 0x36abf1a5
+ (int)readCompoundType:(id)type;	// 0x36abf279
+ (void)readDashStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x36abe869
+ (void)readFillStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x36abe5dd
+ (id)readFromManager:(id)manager;	// 0x36abe265
+ (void)readJoinStyleFromManager:(id)manager toStroke:(id)stroke;	// 0x36abeac5
+ (void)readLineEnd:(id)end type:(id)type width:(id)width length:(id)length;	// 0x36abeda5
+ (int)readLineEndLength:(id)length;	// 0x36abef11
+ (int)readLineEndType:(id)type;	// 0x36abee39
+ (int)readLineEndWidth:(id)width;	// 0x36abeea5
+ (int)readPresetDashStyle:(id)style;	// 0x36abea49
+ (id)targetFgColorWithManager:(id)manager;	// 0x36abe491
@end
