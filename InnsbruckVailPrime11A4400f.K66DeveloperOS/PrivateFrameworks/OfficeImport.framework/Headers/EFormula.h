/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class EDFormula, EFTableData, NSString;
@protocol EFHelper;

@interface EFormula : NSObject {
	id<EFHelper> mHelper;	// 4 = 0x4
	EFLexer *mYylex;	// 8 = 0x8
	Class mFormulaClass;	// 12 = 0xc
	EDFormula *mFormula;	// 16 = 0x10
	EFTableData *mTableData;	// 20 = 0x14
	NSString *mErrMsg;	// 24 = 0x18
}
@property(assign) Class formulaClass;	// G=0x3185c565; S=0x31859651; converted property
@property(retain) id formulaHelper;	// G=0x3185cea5; S=0x31859661; converted property
@property(retain) id tableData;	// G=0x318a25dd; S=0x318a25ed; converted property
+ (id)singletonEFormula;	// 0x318595f5
+ (id)stringToFormula:(id)formula formulaHelper:(id)helper formulaClass:(Class)aClass;	// 0x31859599
- (void)dealloc;	// 0x3185d4a5
// converted property getter: - (Class)formulaClass;	// 0x3185c565
// converted property getter: - (id)formulaHelper;	// 0x3185cea5
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x318a25bd
- (unsigned)resolveName:(const char *)name;	// 0x3186f231
- (unsigned)resolveSheet:(const char *)sheet isCurrentSheet:(BOOL *)sheet2;	// 0x3186f65d
- (id)resolveTable:(const char *)table sheetIndex:(unsigned *)index;	// 0x3186f3c1
- (void)setFormula:(id)formula;	// 0x3185c861
// converted property setter: - (void)setFormulaClass:(Class)aClass;	// 0x31859651
// converted property setter: - (void)setFormulaHelper:(id)helper;	// 0x31859661
// converted property setter: - (void)setTableData:(id)data;	// 0x318a25ed
- (id)stringToTokens:(id)tokens;	// 0x3185969d
// converted property getter: - (id)tableData;	// 0x318a25dd
@end

