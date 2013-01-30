/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WBSection : NSObject {
}
+ (void)mapPrinterSettings:(WrdSectionProperties *)settings toSection:(id)section;	// 0x349304b1
+ (void)mapSection:(id)section toSectionProperties:(WrdSectionProperties *)sectionProperties;	// 0x34a8d6fd
+ (void)mapSectionProperties:(WrdSectionProperties *)properties toSection:(id)section;	// 0x34930581
+ (void)readFrom:(id)from textRun:(WrdSectionTextRun *)run document:(id)document index:(int)index section:(id)section;	// 0x3492b9a1
+ (void)readHeaderFrom:(id)from type:(int)type index:(int)index header:(id)header;	// 0x34930409
+ (void)writeSectionProperties:(id)properties to:(id)to;	// 0x34a8d4bd
@end
