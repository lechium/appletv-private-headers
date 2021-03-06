/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class EDWarnings, ESDContainer, EDProcessors, NSMutableArray, EDReference, OADTheme, ECMappingContext, EDResources, NSString, NSDate;

@interface EDWorkbook : OCDDocument {
	EDResources *mResources;	// 20 = 0x14
	NSMutableArray *mOtherResources;	// 24 = 0x18
	EDProcessors *mProcessors;	// 28 = 0x1c
	ECMappingContext *mMappingContext;	// 32 = 0x20
	EDWarnings *mWarnings;	// 36 = 0x24
	NSMutableArray *mSheets;	// 40 = 0x28
	EDReference *mVisibleRange;	// 44 = 0x2c
	unsigned mActiveSheetIndex;	// 48 = 0x30
	NSDate *mDateBaseDate;	// 52 = 0x34
	unsigned mDateBase;	// 56 = 0x38
	NSString *mFileName;	// 60 = 0x3c
	NSString *mTemporaryDirectory;	// 64 = 0x40
	OADTheme *mTheme;	// 68 = 0x44
	ESDContainer *mEscherDrawingGroup;	// 72 = 0x48
}
@property(retain) id activeSheet;	// G=0x34c0ab69; S=0x34c0ab91; converted property
@property(assign) unsigned activeSheetIndex;	// G=0x34c0ad3d; S=0x34a70f29; converted property
@property(assign) unsigned dateBase;	// G=0x34a80001; S=0x34a6f21d; converted property
@property(retain) id escherDrawingGroup;	// G=0x34c0ac75; S=0x34c0ac85; converted property
@property(retain) id mappingContext;	// G=0x34b610e1; S=0x34c0abb9; converted property
@property(retain) id resources;	// G=0x34a6ee49; S=0x34c0a8c1; converted property
@property(retain) id temporaryDirectory;	// G=0x34c0a915; S=0x34a6ec85; converted property
@property(retain) id theme;	// G=0x34a7ef41; S=0x34c0ac39; converted property
@property(retain) id visibleRange;	// G=0x34c0aaa9; S=0x34b8f049; converted property
- (id)init;	// 0x34c0a8ad
- (id)initWithFileName:(id)fileName andStringOptimization:(bool)optimization;	// 0x34a6daa5
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x34a6dae5
// converted property getter: - (id)activeSheet;	// 0x34c0ab69
// converted property getter: - (unsigned)activeSheetIndex;	// 0x34c0ad3d
- (void)addOtherResources:(id)resources;	// 0x34b75c49
- (void)addSheet:(id)sheet;	// 0x34a7f7c9
- (void)applyProcessors;	// 0x34c0abfd
// converted property getter: - (unsigned)dateBase;	// 0x34a80001
- (id)dateBaseDate;	// 0x34c0a94d
- (void)dealloc;	// 0x34a9d01d
// converted property getter: - (id)escherDrawingGroup;	// 0x34c0ac75
- (id)fileName;	// 0x34c0a905
- (unsigned)indexOfSheet:(id)sheet;	// 0x34b7a475
- (unsigned)indexOfSheetWithName:(id)name;	// 0x34c0aab9
// converted property getter: - (id)mappingContext;	// 0x34b610e1
- (id)processors;	// 0x34a6ecc9
- (void)reduceMemoryIfPossible;	// 0x34c0acc1
- (void)removeWorksheetAtIndex:(unsigned)index;	// 0x34bc2361
// converted property getter: - (id)resources;	// 0x34a6ee49
// converted property setter: - (void)setActiveSheet:(id)sheet;	// 0x34c0ab91
// converted property setter: - (void)setActiveSheetIndex:(unsigned)index;	// 0x34a70f29
// converted property setter: - (void)setDateBase:(unsigned)base;	// 0x34a6f21d
// converted property setter: - (void)setEscherDrawingGroup:(id)group;	// 0x34c0ac85
// converted property setter: - (void)setMappingContext:(id)context;	// 0x34c0abb9
// converted property setter: - (void)setResources:(id)resources;	// 0x34c0a8c1
// converted property setter: - (void)setTemporaryDirectory:(id)directory;	// 0x34a6ec85
// converted property setter: - (void)setTheme:(id)theme;	// 0x34c0ac39
// converted property setter: - (void)setVisibleRange:(id)range;	// 0x34b8f049
- (id)sheetAtIndex:(unsigned)index;	// 0x34a802dd
- (id)sheetAtIndex:(unsigned)index loadIfNeeded:(bool)needed;	// 0x34a800d1
- (unsigned)sheetCount;	// 0x34a800b1
// converted property getter: - (id)temporaryDirectory;	// 0x34c0a915
// converted property getter: - (id)theme;	// 0x34a7ef41
// converted property getter: - (id)visibleRange;	// 0x34c0aaa9
- (id)warnings;	// 0x34b7e695
- (id)workbookName;	// 0x34a9ce81
@end

