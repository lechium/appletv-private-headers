/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDReference, EDResources, NSString, EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotTable : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	bool mShowLastColumn;	// 8 = 0x8
	bool mShowRowHeaders;	// 9 = 0x9
	bool mShowColumnHeaders;	// 10 = 0xa
	bool mShowRowStripes;	// 11 = 0xb
	bool mShowColumnStripes;	// 12 = 0xc
	bool mApplyNumberFormats;	// 13 = 0xd
	bool mApplyBorderFormats;	// 14 = 0xe
	bool mApplyFontFormats;	// 15 = 0xf
	bool mApplyPatternFormats;	// 16 = 0x10
	bool mApplyAlignmentFormats;	// 17 = 0x11
	bool mApplyWidthHeightFormats;	// 18 = 0x12
	bool mUseAutoFormatting;	// 19 = 0x13
	bool mColGrandTotals;	// 20 = 0x14
	bool mRowGrandTotals;	// 21 = 0x15
	bool mCustomListSort;	// 22 = 0x16
	bool mCompactData;	// 23 = 0x17
	bool mCompact;	// 24 = 0x18
	bool mDataCaption;	// 25 = 0x19
	bool mDataOnRows;	// 26 = 0x1a
	bool mDisableFieldList;	// 27 = 0x1b
	bool mMergeItem;	// 28 = 0x1c
	bool mMultipleFieldFilters;	// 29 = 0x1d
	bool mOutline;	// 30 = 0x1e
	bool mOutlineData;	// 31 = 0x1f
	bool mPageOverThenDown;	// 32 = 0x20
	bool mShowCalcMbrs;	// 33 = 0x21
	bool mShowDataDropDown;	// 34 = 0x22
	bool mShowDropZones;	// 35 = 0x23
	bool mShowEmptyCol;	// 36 = 0x24
	bool mShowEmptyRow;	// 37 = 0x25
	bool mShowHeaders;	// 38 = 0x26
	bool mShowMemberPropertyTips;	// 39 = 0x27
	bool mShowMissing;	// 40 = 0x28
	bool mShowMultipleLabel;	// 41 = 0x29
	bool mSubtotalHiddenItems;	// 42 = 0x2a
	NSString *mName;	// 44 = 0x2c
	NSString *mStyleName;	// 48 = 0x30
	NSString *mColumnHeaderCaption;	// 52 = 0x34
	NSString *mRowHeaderCaption;	// 56 = 0x38
	NSString *mPageStyleName;	// 60 = 0x3c
	EDReference *mPivotTableRange;	// 64 = 0x40
	unsigned mStyleIndex;	// 68 = 0x44
	int mFirstHeaderRow;	// 72 = 0x48
	int mFirstDataRow;	// 76 = 0x4c
	int mFirstDataColumn;	// 80 = 0x50
	unsigned mRowPageCount;	// 84 = 0x54
	unsigned mColumnPageCount;	// 88 = 0x58
	unsigned mPageWrap;	// 92 = 0x5c
	unsigned mAutoFormatId;	// 96 = 0x60
	unsigned mDataPosition;	// 100 = 0x64
	EDCollection *mRowFields;	// 104 = 0x68
	EDCollection *mColumnFields;	// 108 = 0x6c
	EDCollection *mRowItems;	// 112 = 0x70
	EDCollection *mColumnItems;	// 116 = 0x74
	EDCollection *mPivotFields;	// 120 = 0x78
	EDCollection *mDataFields;	// 124 = 0x7c
	EDCollection *mConditionalFields;	// 128 = 0x80
	EDCollection *mPivotAreas;	// 132 = 0x84
	EDCollection *mPageFields;	// 136 = 0x88
}
@property(assign) bool applyAlignmentFormats;	// G=0x30e330e1; S=0x30dee9d9; converted property
@property(assign) bool applyBorderFormats;	// G=0x30e330b1; S=0x30dee9a9; converted property
@property(assign) bool applyFontFormats;	// G=0x30e330c1; S=0x30dee9b9; converted property
@property(assign) bool applyNumberFormats;	// G=0x30e330a1; S=0x30dee999; converted property
@property(assign) bool applyPatternFormats;	// G=0x30e330d1; S=0x30dee9c9; converted property
@property(assign) bool applyWidthHeightFormats;	// G=0x30e330f1; S=0x30dee9e9; converted property
@property(assign) unsigned autoFormatId;	// G=0x30e33051; S=0x30e33061; converted property
@property(assign) bool colGrandTotals;	// G=0x30e33101; S=0x30e33111; converted property
@property(retain) id columnHeaderCaption;	// G=0x30e32fa1; S=0x30e33441; converted property
@property(assign) unsigned columnPageCount;	// G=0x30e33011; S=0x30e33021; converted property
@property(assign) bool compact;	// G=0x30defb7d; S=0x30e33191; converted property
@property(assign) bool compactData;	// G=0x30e33171; S=0x30e33181; converted property
@property(assign) bool customListSort;	// G=0x30e33151; S=0x30e33161; converted property
@property(assign) bool dataCaption;	// G=0x30e331a1; S=0x30deea09; converted property
@property(assign) bool dataOnRows;	// G=0x30e331b1; S=0x30e331c1; converted property
@property(assign) unsigned dataPosition;	// G=0x30e33071; S=0x30e33081; converted property
@property(assign) bool disableFieldList;	// G=0x30e331d1; S=0x30e331e1; converted property
@property(assign) int firstDataColumn;	// G=0x30deed1d; S=0x30decf89; converted property
@property(assign) int firstDataRow;	// G=0x30deed0d; S=0x30decf79; converted property
@property(assign) int firstHeaderRow;	// G=0x30deecfd; S=0x30decf69; converted property
@property(assign) bool mergeItem;	// G=0x30e331f1; S=0x30e33201; converted property
@property(assign) bool multipleFieldFilters;	// G=0x30e33211; S=0x30deea19; converted property
@property(retain) id name;	// G=0x30e32fe1; S=0x30dee951; converted property
@property(assign) bool outline;	// G=0x30e33221; S=0x30deea29; converted property
@property(assign) bool outlineData;	// G=0x30e33231; S=0x30deea39; converted property
@property(assign) bool pageOverThenDown;	// G=0x30e33241; S=0x30e33251; converted property
@property(retain) id pageStyleName;	// G=0x30e32fc1; S=0x30e333b1; converted property
@property(assign) unsigned pageWrap;	// G=0x30e33031; S=0x30e33041; converted property
@property(retain) id pivotTableRange;	// G=0x30deeced; S=0x30decf21; converted property
@property(assign) bool rowGrandTotals;	// G=0x30e33131; S=0x30e33141; converted property
@property(retain) id rowHeaderCaption;	// G=0x30e32fb1; S=0x30e333f9; converted property
@property(assign) unsigned rowPageCount;	// G=0x30e32ff1; S=0x30e33001; converted property
@property(assign) bool showCalcMbrs;	// G=0x30e33261; S=0x30deea49; converted property
@property(assign) bool showColumnHeaders;	// G=0x30deef29; S=0x30ded1b9; converted property
@property(assign) bool showColumnStripes;	// G=0x30def541; S=0x30ded199; converted property
@property(assign) bool showDataDropDown;	// G=0x30e33271; S=0x30e33281; converted property
@property(assign) bool showDropZones;	// G=0x30e33291; S=0x30e332a1; converted property
@property(assign) bool showEmptyCol;	// G=0x30e332b1; S=0x30e332c1; converted property
@property(assign) bool showEmptyRow;	// G=0x30e332d1; S=0x30e332e1; converted property
@property(assign) bool showHeaders;	// G=0x30e332f1; S=0x30e33301; converted property
@property(assign) bool showLastColumn;	// G=0x30e33091; S=0x30ded179; converted property
@property(assign) bool showMemberPropertyTips;	// G=0x30e33311; S=0x30e33321; converted property
@property(assign) bool showMissing;	// G=0x30e33331; S=0x30e33341; converted property
@property(assign) bool showMultipleLabel;	// G=0x30e33351; S=0x30e33361; converted property
@property(assign) bool showRowHeaders;	// G=0x30def531; S=0x30ded1a9; converted property
@property(assign) bool showRowStripes;	// G=0x30defb4d; S=0x30ded189; converted property
@property(retain) id style;	// G=0x30deea6d; S=0x30e33489; converted property
@property(assign) unsigned styleIndex;	// G=0x30e33391; S=0x30e333a1; converted property
@property(retain) id styleName;	// G=0x30e32fd1; S=0x30ded131; converted property
@property(assign) bool subtotalHiddenItems;	// G=0x30e33371; S=0x30e33381; converted property
@property(assign) bool useAutoFormatting;	// G=0x30e33121; S=0x30dee9f9; converted property
+ (id)pivotTableWithResources:(id)resources;	// 0x30dec93d
- (id)initWithResources:(id)resources;	// 0x30dec989
// converted property getter: - (bool)applyAlignmentFormats;	// 0x30e330e1
// converted property getter: - (bool)applyBorderFormats;	// 0x30e330b1
// converted property getter: - (bool)applyFontFormats;	// 0x30e330c1
// converted property getter: - (bool)applyNumberFormats;	// 0x30e330a1
// converted property getter: - (bool)applyPatternFormats;	// 0x30e330d1
// converted property getter: - (bool)applyWidthHeightFormats;	// 0x30e330f1
// converted property getter: - (unsigned)autoFormatId;	// 0x30e33051
// converted property getter: - (bool)colGrandTotals;	// 0x30e33101
- (id)columnFields;	// 0x30dedfe9
// converted property getter: - (id)columnHeaderCaption;	// 0x30e32fa1
- (id)columnItems;	// 0x30dedff9
// converted property getter: - (unsigned)columnPageCount;	// 0x30e33011
// converted property getter: - (bool)compact;	// 0x30defb7d
// converted property getter: - (bool)compactData;	// 0x30e33171
- (id)conditionalFormats;	// 0x30dee56d
// converted property getter: - (bool)customListSort;	// 0x30e33151
// converted property getter: - (bool)dataCaption;	// 0x30e331a1
- (id)dataFields;	// 0x30dee139
// converted property getter: - (bool)dataOnRows;	// 0x30e331b1
// converted property getter: - (unsigned)dataPosition;	// 0x30e33071
- (void)dealloc;	// 0x30defd9d
// converted property getter: - (bool)disableFieldList;	// 0x30e331d1
// converted property getter: - (int)firstDataColumn;	// 0x30deed1d
// converted property getter: - (int)firstDataRow;	// 0x30deed0d
// converted property getter: - (int)firstHeaderRow;	// 0x30deecfd
// converted property getter: - (bool)mergeItem;	// 0x30e331f1
// converted property getter: - (bool)multipleFieldFilters;	// 0x30e33211
// converted property getter: - (id)name;	// 0x30e32fe1
// converted property getter: - (bool)outline;	// 0x30e33221
// converted property getter: - (bool)outlineData;	// 0x30e33231
- (id)pageFields;	// 0x30dee009
// converted property getter: - (bool)pageOverThenDown;	// 0x30e33241
// converted property getter: - (id)pageStyleName;	// 0x30e32fc1
// converted property getter: - (unsigned)pageWrap;	// 0x30e33031
- (id)pivotAreas;	// 0x30dee71d
- (id)pivotFields;	// 0x30ded1c9
// converted property getter: - (id)pivotTableRange;	// 0x30deeced
- (id)rowFields;	// 0x30dedc79
// converted property getter: - (bool)rowGrandTotals;	// 0x30e33131
// converted property getter: - (id)rowHeaderCaption;	// 0x30e32fb1
- (id)rowItems;	// 0x30dedd45
// converted property getter: - (unsigned)rowPageCount;	// 0x30e32ff1
// converted property setter: - (void)setApplyAlignmentFormats:(bool)formats;	// 0x30dee9d9
// converted property setter: - (void)setApplyBorderFormats:(bool)formats;	// 0x30dee9a9
// converted property setter: - (void)setApplyFontFormats:(bool)formats;	// 0x30dee9b9
// converted property setter: - (void)setApplyNumberFormats:(bool)formats;	// 0x30dee999
// converted property setter: - (void)setApplyPatternFormats:(bool)formats;	// 0x30dee9c9
// converted property setter: - (void)setApplyWidthHeightFormats:(bool)formats;	// 0x30dee9e9
// converted property setter: - (void)setAutoFormatId:(unsigned)anId;	// 0x30e33061
// converted property setter: - (void)setColGrandTotals:(bool)totals;	// 0x30e33111
// converted property setter: - (void)setColumnHeaderCaption:(id)caption;	// 0x30e33441
// converted property setter: - (void)setColumnPageCount:(unsigned)count;	// 0x30e33021
// converted property setter: - (void)setCompact:(bool)compact;	// 0x30e33191
// converted property setter: - (void)setCompactData:(bool)data;	// 0x30e33181
// converted property setter: - (void)setCustomListSort:(bool)sort;	// 0x30e33161
// converted property setter: - (void)setDataCaption:(bool)caption;	// 0x30deea09
// converted property setter: - (void)setDataOnRows:(bool)rows;	// 0x30e331c1
// converted property setter: - (void)setDataPosition:(unsigned)position;	// 0x30e33081
// converted property setter: - (void)setDisableFieldList:(bool)list;	// 0x30e331e1
// converted property setter: - (void)setFirstDataColumn:(int)column;	// 0x30decf89
// converted property setter: - (void)setFirstDataRow:(int)row;	// 0x30decf79
// converted property setter: - (void)setFirstHeaderRow:(int)row;	// 0x30decf69
// converted property setter: - (void)setMergeItem:(bool)item;	// 0x30e33201
// converted property setter: - (void)setMultipleFieldFilters:(bool)filters;	// 0x30deea19
// converted property setter: - (void)setName:(id)name;	// 0x30dee951
// converted property setter: - (void)setOutline:(bool)outline;	// 0x30deea29
// converted property setter: - (void)setOutlineData:(bool)data;	// 0x30deea39
// converted property setter: - (void)setPageOverThenDown:(bool)down;	// 0x30e33251
// converted property setter: - (void)setPageStyleName:(id)name;	// 0x30e333b1
// converted property setter: - (void)setPageWrap:(unsigned)wrap;	// 0x30e33041
// converted property setter: - (void)setPivotTableRange:(id)range;	// 0x30decf21
// converted property setter: - (void)setRowGrandTotals:(bool)totals;	// 0x30e33141
// converted property setter: - (void)setRowHeaderCaption:(id)caption;	// 0x30e333f9
// converted property setter: - (void)setRowPageCount:(unsigned)count;	// 0x30e33001
// converted property setter: - (void)setShowCalcMbrs:(bool)mbrs;	// 0x30deea49
// converted property setter: - (void)setShowColumnHeaders:(bool)headers;	// 0x30ded1b9
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x30ded199
// converted property setter: - (void)setShowDataDropDown:(bool)down;	// 0x30e33281
// converted property setter: - (void)setShowDropZones:(bool)zones;	// 0x30e332a1
// converted property setter: - (void)setShowEmptyCol:(bool)col;	// 0x30e332c1
// converted property setter: - (void)setShowEmptyRow:(bool)row;	// 0x30e332e1
// converted property setter: - (void)setShowHeaders:(bool)headers;	// 0x30e33301
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x30ded179
// converted property setter: - (void)setShowMemberPropertyTips:(bool)tips;	// 0x30e33321
// converted property setter: - (void)setShowMissing:(bool)missing;	// 0x30e33341
// converted property setter: - (void)setShowMultipleLabel:(bool)label;	// 0x30e33361
// converted property setter: - (void)setShowRowHeaders:(bool)headers;	// 0x30ded1a9
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x30ded189
// converted property setter: - (void)setStyle:(id)style;	// 0x30e33489
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x30e333a1
// converted property setter: - (void)setStyleName:(id)name;	// 0x30ded131
// converted property setter: - (void)setSubtotalHiddenItems:(bool)items;	// 0x30e33381
// converted property setter: - (void)setUseAutoFormatting:(bool)formatting;	// 0x30dee9f9
// converted property getter: - (bool)showCalcMbrs;	// 0x30e33261
// converted property getter: - (bool)showColumnHeaders;	// 0x30deef29
// converted property getter: - (bool)showColumnStripes;	// 0x30def541
// converted property getter: - (bool)showDataDropDown;	// 0x30e33271
// converted property getter: - (bool)showDropZones;	// 0x30e33291
// converted property getter: - (bool)showEmptyCol;	// 0x30e332b1
// converted property getter: - (bool)showEmptyRow;	// 0x30e332d1
// converted property getter: - (bool)showHeaders;	// 0x30e332f1
// converted property getter: - (bool)showLastColumn;	// 0x30e33091
// converted property getter: - (bool)showMemberPropertyTips;	// 0x30e33311
// converted property getter: - (bool)showMissing;	// 0x30e33331
// converted property getter: - (bool)showMultipleLabel;	// 0x30e33351
// converted property getter: - (bool)showRowHeaders;	// 0x30def531
// converted property getter: - (bool)showRowStripes;	// 0x30defb4d
// converted property getter: - (id)style;	// 0x30deea6d
// converted property getter: - (unsigned)styleIndex;	// 0x30e33391
// converted property getter: - (id)styleName;	// 0x30e32fd1
// converted property getter: - (bool)subtotalHiddenItems;	// 0x30e33371
// converted property getter: - (bool)useAutoFormatting;	// 0x30e33121
@end

