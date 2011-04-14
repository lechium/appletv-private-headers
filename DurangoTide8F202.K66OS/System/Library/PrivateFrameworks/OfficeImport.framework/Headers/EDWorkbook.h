/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class NSMutableArray, OADTheme, NSDate, EDProcessors, EDReference, ESDContainer, EDResources, ECMappingContext, EDWarnings, OADDrawingGroup, NSString;

__attribute__((visibility("hidden")))
@interface EDWorkbook : OCDDocument {
@private
	EDResources *mResources;	// 16 = 0x10
	NSMutableArray *mOtherResources;	// 20 = 0x14
	EDProcessors *mProcessors;	// 24 = 0x18
	ECMappingContext *mMappingContext;	// 28 = 0x1c
	EDWarnings *mWarnings;	// 32 = 0x20
	NSMutableArray *mSheets;	// 36 = 0x24
	EDReference *mVisibleRange;	// 40 = 0x28
	unsigned mActiveSheetIndex;	// 44 = 0x2c
	NSDate *mDateBaseDate;	// 48 = 0x30
	unsigned mDateBase;	// 52 = 0x34
	NSString *mFileName;	// 56 = 0x38
	NSString *mTemporaryDirectory;	// 60 = 0x3c
	OADDrawingGroup *mDrawingGroup;	// 64 = 0x40
	OADTheme *mTheme;	// 68 = 0x44
	ESDContainer *mEscherDrawingGroup;	// 72 = 0x48
	unsigned mRealSheetCount;	// 76 = 0x4c
}
@property(retain) id activeSheet;	// G=0x31ad4edd; S=0x31ad4eb9; converted property
@property(assign) unsigned activeSheetIndex;	// G=0x31ad4d11; S=0x319dcb01; converted property
@property(assign) unsigned dateBase;	// G=0x319e3bf9; S=0x319dc595; converted property
@property(retain) id escherDrawingGroup;	// G=0x31ad4d01; S=0x31ad4d91; converted property
@property(retain) id mappingContext;	// G=0x31ad4cf1; S=0x31ad4e7d; converted property
@property(retain) id resources;	// G=0x318ca27d; S=0x31ad5111; converted property
@property(retain) id temporaryDirectory;	// G=0x31ad514d; S=0x319dc2e9; converted property
@property(retain) id theme;	// G=0x319e3db5; S=0x31ad4e0d; converted property
@property(retain) id visibleRange;	// G=0x31ad4ce1; S=0x31a5976d; converted property
- (id)init;	// 0x319db515
- (id)initWithFileName:(id)fileName;	// 0x319db4dd
- (id)initWithStringOptimization:(bool)stringOptimization;	// 0x319db52d
// converted property getter: - (id)activeSheet;	// 0x31ad4edd
// converted property getter: - (unsigned)activeSheetIndex;	// 0x31ad4d11
- (void)addOtherResources:(id)resources;	// 0x31a7e1f1
- (void)addSheet:(id)sheet;	// 0x319e3629
- (void)applyProcessors;	// 0x31ad4e45
// converted property getter: - (unsigned)dateBase;	// 0x319e3bf9
- (id)dateBaseDate;	// 0x31ad4fdd
- (void)dealloc;	// 0x318f0a15
- (id)drawingGroup;	// 0x319e651d
// converted property getter: - (id)escherDrawingGroup;	// 0x31ad4d01
- (id)fileName;	// 0x31ad4cd1
- (unsigned)indexOfSheet:(id)sheet;	// 0x31ad4fb1
- (unsigned)indexOfSheetWithName:(id)name;	// 0x31ad4f09
// converted property getter: - (id)mappingContext;	// 0x31ad4cf1
- (id)processors;	// 0x319dc325
- (void)reduceMemoryIfPossible;	// 0x31ad4d21
- (void)removeWorksheetAtIndex:(unsigned)index;	// 0x31aa6751
// converted property getter: - (id)resources;	// 0x318ca27d
// converted property setter: - (void)setActiveSheet:(id)sheet;	// 0x31ad4eb9
// converted property setter: - (void)setActiveSheetIndex:(unsigned)index;	// 0x319dcb01
// converted property setter: - (void)setDateBase:(unsigned)base;	// 0x319dc595
// converted property setter: - (void)setEscherDrawingGroup:(id)group;	// 0x31ad4d91
// converted property setter: - (void)setMappingContext:(id)context;	// 0x31ad4e7d
// converted property setter: - (void)setResources:(id)resources;	// 0x31ad5111
// converted property setter: - (void)setTemporaryDirectory:(id)directory;	// 0x319dc2e9
// converted property setter: - (void)setTheme:(id)theme;	// 0x31ad4e0d
// converted property setter: - (void)setVisibleRange:(id)range;	// 0x31a5976d
- (id)sheetAtIndex:(unsigned)index;	// 0x318c5959
- (id)sheetAtIndex:(unsigned)index loadIfNeeded:(bool)needed;	// 0x318c5971
- (unsigned)sheetCount;	// 0x318c59d5
// converted property getter: - (id)temporaryDirectory;	// 0x31ad514d
// converted property getter: - (id)theme;	// 0x319e3db5
- (void)trashSheetAtIndex:(unsigned)index;	// 0x31ad4dc9
// converted property getter: - (id)visibleRange;	// 0x31ad4ce1
- (id)warnings;	// 0x319e6149
- (id)workbookName;	// 0x318ee35d
@end

