/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXSheet : NSObject {
}
+ (Class)exSheetClassFromXmlSheetType:(id)xmlSheetType location:(id)location;	// 0x328d9dd9
+ (void)readAllDrawablesWithState:(id)state;	// 0x328dcef9
+ (void)readCommonSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x328dcb49
+ (void)readDelayedSheeWithLocation:(id)location sheetXmlType:(id)type state:(id)state;	// 0x328dabe1
+ (void)readDrawablesWithState:(id)state;	// 0x328dcfdd
+ (void)readFrom:(xmlNode *)from state:(id)state;	// 0x328d9959
+ (void)readLegacyDrawablesWithState:(id)state;	// 0x32942051
@end

