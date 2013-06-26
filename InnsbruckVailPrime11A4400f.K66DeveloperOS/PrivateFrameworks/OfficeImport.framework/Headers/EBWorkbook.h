/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface EBWorkbook : NSObject {
}
+ (ChVector<OcText> *)createSheetNamesFromWorkbook:(id)workbook;	// 0x318c4eed
+ (void)readDocumentPresentation:(id)presentation state:(id)state;	// 0x3178aed9
+ (void)readDocumentProperties:(id)properties state:(id)state;	// 0x3178ac5d
+ (id)readWithState:(id)state reader:(id)reader;	// 0x317890c1
+ (void)setupProcessors:(id)processors;	// 0x3178aa89
+ (int)xlSheetTypeEnumFromEDSheet:(id)edsheet;	// 0x318c5061
@end
