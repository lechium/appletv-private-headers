/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDFormula.h"

@class EDReferenceCollection, EDWorkbook;

__attribute__((visibility("hidden")))
@interface CHDFormula : EDFormula {
@private
	EDReferenceCollection *mReferences;	// 8 = 0x8
	EDWorkbook *mWorkbook;	// 12 = 0xc
}
@property(retain) id references;	// G=0x328a6939; S=0x328a6d01; converted property
+ (id)formulaWithReference:(id)reference;	// 0x32920c85
+ (id)formulaWithReferences:(id)references;	// 0x32932b3d
- (id)initWithReference:(id)reference;	// 0x32920cd1
- (id)initWithReferences:(id)references;	// 0x32932b89
- (id)initWithWorkbook:(id)workbook;	// 0x3299972d
- (unsigned)countOfCellsBeingReferenced;	// 0x328a6da1
- (void)dealloc;	// 0x328aeb81
- (bool)isConstantStringFormula;	// 0x32999771
- (void)prepareTokens;	// 0x329997c5
// converted property getter: - (id)references;	// 0x328a6939
- (id)referencesFromFormula;	// 0x328a69ad
// converted property setter: - (void)setReferences:(id)references;	// 0x328a6d01
- (void)setWorkbook:(id)workbook;	// 0x328a1c95
@end

