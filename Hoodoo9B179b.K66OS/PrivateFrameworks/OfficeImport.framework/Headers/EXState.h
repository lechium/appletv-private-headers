/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class NSMutableArray, EDResources, NSMutableDictionary, EDSheet, OCPPackagePart, CPImportTracing, EXOAVState, EXOfficeArtState, EDWorkbook, EDReference, ECColumnWidthConvertor;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXState : OAVState {
@private
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
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x32988cd5; @synthesize=mCancelDelegate
@property(assign) unsigned cellStyleXfsOffset;	// G=0x328d82a1; S=0x328d7dd1; converted property
@property(retain) id currentPart;	// G=0x328d8d71; S=0x328d8c49; converted property
@property(retain) id currentSheet;	// G=0x328da669; S=0x328da345; converted property
@property(assign) unsigned currentSheetIndex;	// G=0x32988c8d; S=0x328d9949; converted property
@property(assign) double defaultColumnWidth;	// G=0x32988c9d; S=0x328dc079; converted property
@property(assign) double defaultRowHeight;	// G=0x328dc74d; S=0x328dc08d; converted property
@property(retain) id officeArtState;	// G=0x328d5b4d; S=0x32913bb9; converted property
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// G=0x32912fc1; S=0x32912871; converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// G=0x3291242d; S=0x3291308d; converted property
@property(retain) id resources;	// G=0x328d6155; S=0x328d5b3d; converted property
@property(retain) id sheetDimension;	// G=0x328dc441; S=0x328dbbc9; converted property
@property(retain) id workbook;	// G=0x328d6175; S=0x328d5ae9; converted property
- (id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x328d50cd
- (void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;	// 0x3291ca15
- (id)arrayedFormulas;	// 0x328dd275
// declared property getter: - (id)cancelDelegate;	// 0x32988cd5
// converted property getter: - (unsigned)cellStyleXfsOffset;	// 0x328d82a1
- (unsigned)cellsWithContentCount;	// 0x32988cc5
- (id)columnWidthConvertor;	// 0x328dbfc9
// converted property getter: - (id)currentPart;	// 0x328d8d71
// converted property getter: - (id)currentSheet;	// 0x328da669
// converted property getter: - (unsigned)currentSheetIndex;	// 0x32988c8d
- (void)dealloc;	// 0x328dd759
// converted property getter: - (double)defaultColumnWidth;	// 0x32988c9d
// converted property getter: - (double)defaultRowHeight;	// 0x328dc74d
- (void)incrementCellsWithContentCount;	// 0x328dcb19
- (void)incrementCellsWithFormulaCount;	// 0x3291c9c5
- (BOOL)isCancelled;	// 0x328d9925
// converted property getter: - (bool)isPredefinedDxfsBeingRead;	// 0x32912fc1
// converted property getter: - (bool)isPredefinedTableStylesRead;	// 0x3291242d
- (id)legacyDrawables;	// 0x328dcfcd
- (id)oavState;	// 0x32942305
// converted property getter: - (id)officeArtState;	// 0x328d5b4d
- (xmlNs *)relationshipNameSpaceForWorkbook;	// 0x32988cb5
- (void)relationshipNameSpaceForWorkbook:(xmlNs *)workbook;	// 0x328d96a9
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x3292c045
- (void)reportWorksheetWarning:(CPTaggedMessageStructure *)warning;	// 0x3292f8fd
- (void)resetForNewSheet;	// 0x328d9d19
// converted property getter: - (id)resources;	// 0x328d6155
// converted property setter: - (void)setCellStyleXfsOffset:(unsigned)offset;	// 0x328d7dd1
// converted property setter: - (void)setCurrentPart:(id)part;	// 0x328d8c49
// converted property setter: - (void)setCurrentSheet:(id)sheet;	// 0x328da345
// converted property setter: - (void)setCurrentSheetIndex:(unsigned)index;	// 0x328d9949
// converted property setter: - (void)setDefaultColumnWidth:(double)width;	// 0x328dc079
// converted property setter: - (void)setDefaultRowHeight:(double)height;	// 0x328dc08d
// converted property setter: - (void)setOfficeArtState:(id)state;	// 0x32913bb9
// converted property setter: - (void)setPredefinedDxfsBeingRead:(bool)read;	// 0x32912871
// converted property setter: - (void)setPredefinedTableStylesRead:(bool)read;	// 0x3291308d
// converted property setter: - (void)setResources:(id)resources;	// 0x328d5b3d
// converted property setter: - (void)setSheetDimension:(id)dimension;	// 0x328dbbc9
- (void)setTextBox:(id)box forReference:(id)reference;	// 0x32941ff9
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x328d5ae9
- (unsigned)sharedBaseFormulaIndexWithIndex:(long)index;	// 0x3291ca85
// converted property getter: - (id)sheetDimension;	// 0x328dc441
- (id)textBoxForReference:(id)reference;	// 0x32942ea5
// converted property getter: - (id)workbook;	// 0x328d6175
- (id)workbookPart;	// 0x328d5a89
@end

