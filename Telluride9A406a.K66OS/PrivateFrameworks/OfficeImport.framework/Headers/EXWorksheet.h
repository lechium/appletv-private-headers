/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXWorksheet : NSObject {
}
+ (id)edSheetWithState:(id)state;	// 0x329c2f85
+ (void)readColumnInfosFrom:(xmlNode *)from state:(id)state;	// 0x329f5be9
+ (void)readCommentTextFrom:(id)from;	// 0x329c4039
+ (void)readConditionalFormattingsFrom:(xmlNode *)from state:(id)state;	// 0x32a72529
+ (void)readDataValidationsFrom:(xmlNode *)from state:(id)state;	// 0x32a1883d
+ (bool)readDistinctSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x329c4799
+ (void)readHyperlinksFrom:(xmlNode *)from state:(id)state;	// 0x32a2608d
+ (void)readOleObjectsFrom:(xmlNode *)from state:(id)state;	// 0x32a72599
+ (void)readOtherSheetComponentsWithState:(id)state;	// 0x329c4009
+ (void)readPivotTables:(id)tables;	// 0x329c43b9
+ (void)readTables:(id)tables;	// 0x329c33a1
+ (void)readWorksheetFormatPropertiesFrom:(xmlNode *)from state:(id)state;	// 0x329c4dc9
+ (void)readWorksheetViewsFrom:(xmlNode *)from state:(id)state;	// 0x329c4c11
+ (void)setupProcessors:(id)processors;	// 0x329c301d
@end

