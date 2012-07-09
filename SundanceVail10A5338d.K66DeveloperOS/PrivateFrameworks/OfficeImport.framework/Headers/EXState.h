/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVState.h"
#import "OfficeImport-Structs.h"

@class EDWorkbook, EDSheet, EXOAVState, EXOfficeArtState, OCPPackagePart, ECColumnWidthConvertor, NSMutableArray, NSMutableDictionary, EDReference, CPImportTracing, EDResources;
@protocol OCCancelDelegate;

@interface EXState : OAVState {
	unsigned mCurrentSheetIndex;	// 28 = 0x1c
	EDSheet *mCurrentSheet;	// 32 = 0x20
	unsigned mCellStyleXfsOffset;	// 36 = 0x24
	double mDefaultColumnWidth;	// 40 = 0x28
	double mDefaultRowHeight;	// 48 = 0x30
	OCPPackagePart *mCurrentPart;	// 56 = 0x38
	OCPPackagePart *mWorkbookPart;	// 60 = 0x3c
	CFDictionaryRef mSharedFormulasMap;	// 64 = 0x40
	NSMutableArray *mArrayedFormulas;	// 68 = 0x44
	EDReference *mSheetDimension;	// 72 = 0x48
	EXOfficeArtState *mOfficeArtState;	// 76 = 0x4c
	EXOAVState *mOAVState;	// 80 = 0x50
	bool mMaxColumnsWarned;	// 84 = 0x54
	bool mMaxRowsWarned;	// 85 = 0x55
	bool mIsPredefinedTableStylesRead;	// 86 = 0x56
	NSMutableDictionary *mReferenceForCommentTextBox;	// 88 = 0x58
	bool mIsPredefinedDxfsBeingRead;	// 92 = 0x5c
	xmlNs *mRelationshipNS;	// 96 = 0x60
	unsigned mTotalCellsWithContentCount;	// 100 = 0x64
	unsigned mTotalCellsWithFormulaCount;	// 104 = 0x68
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 108 = 0x6c
	NSMutableArray *mLegacyDrawables;	// 112 = 0x70
	EDWorkbook *mWorkbook;	// 116 = 0x74
	EDResources *mResources;	// 120 = 0x78
	id<OCCancelDelegate> mCancelDelegate;	// 124 = 0x7c
	CPImportTracing *mTracing;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x33b8684d; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x33a5f135; S=0x33a5eca5; converted property
@property(retain) id currentPart;	// G=0x33a5fc41; S=0x33a5fb1d; converted property
@property(retain) id currentSheet;	// G=0x33a617a9; S=0x33a61495; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x33b86805; S=0x33a60b65; converted property
@property(assign) double defaultColumnWidth;	// G=0x33b86815; S=0x33a633cd; converted property
@property(assign) double defaultRowHeight;	// G=0x33a63df5; S=0x33a633e1; converted property
@property(retain) id officeArtState;	// G=0x33a5ca45; S=0x33aeedc9; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x33aee265; S=0x33aed855; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x33aed33d; S=0x33aee329; converted property
@property(retain) id resources;	// G=0x33a5cfd9; S=0x33a5ca35; converted property
@property(retain) id sheetDimension;	// G=0x33a63991; S=0x33a62f51; converted property
@property(retain) id workbook;	// G=0x33a5cff9; S=0x33a5c9e9; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x33a5bf21
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x33afc231
- (id)arrayedFormulas;	// 0x33a6498d
// declared property getter: - (id)cancelDelegate;	// 0x33b8684d
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x33a5f135
- (unsigned)cellsWithContentCount;	// 0x33b8683d
- (id)columnWidthConvertor;	// 0x33a63329
// converted property getter: - (id)currentPart;	// 0x33a5fc41
// converted property getter: - (id)currentSheet;	// 0x33a617a9
// converted property getter: - (unsigned)currentSheetIndex;	// 0x33b86805
- (void)dealloc;	// 0x33a65875
// converted property getter: - (double)defaultColumnWidth;	// 0x33b86815
// converted property getter: - (double)defaultRowHeight;	// 0x33a63df5
- (void)incrementCellsWithContentCount;	// 0x33a641d1
- (void)incrementCellsWithFormulaCount;	// 0x33adcbdd
- (BOOL)isCancelled;	// 0x33a60b41
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x33aee265
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x33aed33d
- (id)legacyDrawables;	// 0x33a646c1
- (id)oavState;	// 0x33b12051
// converted property getter: - (id)officeArtState;	// 0x33a5ca45
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x33b8682d
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x33a608a9
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x33b0d9d1
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x33b0d555
- (void)resetForNewSheet;	// 0x33a60f09
// converted property getter: - (id)resources;	// 0x33a5cfd9
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x33a5eca5
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x33a5fb1d
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x33a61495
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x33a60b65
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x33a633cd
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x33a633e1
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x33aeedc9
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x33aed855
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x33aee329
// converted property setter: - (void)setResources:(id)resources;	// 0x33a5ca35
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x33a62f51
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x33b11b75
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x33a5c9e9
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x33afc245
// converted property getter: - (id)sheetDimension;	// 0x33a63991
- (id)textBoxForReference:(id)reference;	// 0x33b12bf5
// converted property getter: - (id)workbook;	// 0x33a5cff9
- (id)workbookPart;	// 0x33a5c961
@end
