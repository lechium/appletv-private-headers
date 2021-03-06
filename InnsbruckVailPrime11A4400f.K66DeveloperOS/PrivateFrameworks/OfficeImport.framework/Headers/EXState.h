/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class ECColumnWidthConvertor, OCPPackagePart, CPImportTracing, EDWorkbook, EDReference, EDResources, EXOAVState, EXOfficeArtState, NSMutableArray, EDSheet, NSMutableDictionary;
@protocol OCCancelDelegate;

@interface EXState : OAVState {
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned long mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	map<long, unsigned int, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned int> > > mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 76 = 0x4c
	EDReference *mSheetDimension;	// 80 = 0x50
	EXOfficeArtState *mOfficeArtState;	// 84 = 0x54
	EXOAVState *mOAVState;	// 88 = 0x58
	bool mMaxColumnsWarned;	// 92 = 0x5c
	bool mMaxRowsWarned;	// 93 = 0x5d
	bool mIsPredefinedTableStylesRead;	// 94 = 0x5e
	NSMutableDictionary *mReferenceForCommentTextBox;	// 96 = 0x60
	bool mIsPredefinedDxfsBeingRead;	// 100 = 0x64
	xmlNs *mRelationshipNS;	// 104 = 0x68
	unsigned mTotalCellsWithContentCount;	// 108 = 0x6c
	unsigned mTotalCellsWithFormulaCount;	// 112 = 0x70
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 116 = 0x74
	NSMutableArray *mLegacyDrawables;	// 120 = 0x78
	EDWorkbook *mWorkbook;	// 124 = 0x7c
	EDResources *mResources;	// 128 = 0x80
	id<OCCancelDelegate> mCancelDelegate;	// 132 = 0x84
	CPImportTracing *mTracing;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x318db4c1; @synthesize=mCancelDelegate
@property(assign) unsigned long cellStyleXfsOffset;	// G=0x3182b0e9; S=0x3182ac59; converted property
@property(retain) id currentPart;	// G=0x3182bd11; S=0x3182bbed; converted property
@property(retain) id currentSheet;	// G=0x3182d439; S=0x3182d10d; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x318db479; S=0x3182c82d; converted property
@property(assign) double defaultColumnWidth;	// G=0x318db489; S=0x3182f141; converted property
@property(assign) double defaultRowHeight;	// G=0x3182fb3d; S=0x3182f155; converted property
@property(retain) id officeArtState;	// G=0x318289f1; S=0x318698cd; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x31868c39; S=0x31868329; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x3186802d; S=0x31868cf9; converted property
@property(retain) id resources;	// G=0x31828fc1; S=0x318289e1; converted property
@property(retain) id sheetDimension;	// G=0x3182f6dd; S=0x3182ecc1; converted property
@property(retain) id workbook;	// G=0x31828fe1; S=0x31828995; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x31827eed
- (id).cxx_construct;	// 0x31827ecd
- (void).cxx_destruct;	// 0x31830cc9
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x3187c15d
- (id)arrayedFormulas;	// 0x318306bd
// declared property getter: - (id)cancelDelegate;	// 0x318db4c1
// converted property getter: - (unsigned long)cellStyleXfsOffset;	// 0x3182b0e9
- (unsigned)cellsWithContentCount;	// 0x318db4b1
- (id)columnWidthConvertor;	// 0x3182f099
// converted property getter: - (id)currentPart;	// 0x3182bd11
// converted property getter: - (id)currentSheet;	// 0x3182d439
// converted property getter: - (unsigned)currentSheetIndex;	// 0x318db479
- (void)dealloc;	// 0x31830b9d
// converted property getter: - (double)defaultColumnWidth;	// 0x318db489
// converted property getter: - (double)defaultRowHeight;	// 0x3182fb3d
- (void)incrementCellsWithContentCount;	// 0x3182fef1
- (void)incrementCellsWithFormulaCount;	// 0x3185cc89
- (BOOL)isCancelled;	// 0x3182c809
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x31868c39
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x3186802d
- (id)legacyDrawables;	// 0x318303e9
- (id)oavState;	// 0x31893861
// converted property getter: - (id)officeArtState;	// 0x318289f1
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x318db4a1
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x3182c571
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x3188e765
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x3188dc61
- (void)resetForNewSheet;	// 0x3182cbd1
// converted property getter: - (id)resources;	// 0x31828fc1
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned long)offset;	// 0x3182ac59
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x3182bbed
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x3182d10d
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x3182c82d
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x3182f141
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x3182f155
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x318698cd
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x31868329
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x31868cf9
// converted property setter: - (void)setResources:(id)resources;	// 0x318289e1
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x3182ecc1
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x31893385
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x31828995
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x3187c181
// converted property getter: - (id)sheetDimension;	// 0x3182f6dd
- (id)textBoxForReference:(id)reference;	// 0x3189440d
// converted property getter: - (id)workbook;	// 0x31828fe1
- (id)workbookPart;	// 0x31828909
@end

