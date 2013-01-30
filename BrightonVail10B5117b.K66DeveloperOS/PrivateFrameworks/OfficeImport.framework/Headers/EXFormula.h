/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXFormula : NSObject {
}
+ (void)applyArrayedFormula:(id)formula edReference:(id)reference edWorksheet:(id)worksheet state:(id)state;	// 0x34ba2a99
+ (void)applyArrayedFormulasToSheet:(id)sheet state:(id)state;	// 0x34aec1dd
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement formulaClass:(Class)aClass state:(id)state;	// 0x34b7a2ed
+ (id)edFormulaFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x34c0d8f5
+ (id)edTokensForFormulaString:(id)formulaString formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 sheet:(id)sheet workbook:(id)workbook;	// 0x34b60f65
+ (id)edTokensForFormulaString:(id)formulaString sheet:(id)sheet workbook:(id)workbook;	// 0x34c0d931
+ (Class)formulaClassFromXmlFormulaElement:(xmlNode *)xmlFormulaElement state:(id)state;	// 0x34b60af1
+ (id)readFrom:(xmlNode *)from formulaClass:(Class)aClass rowNumber:(int)number columnNumber:(int)number4 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x34b60c35
+ (void)readFrom:(xmlNode *)from rowNumber:(int)number columnNumber:(int)number3 edCell:(EDCellHeader *)cell edRowBlocks:(id)blocks state:(id)state;	// 0x34b60a91
@end
