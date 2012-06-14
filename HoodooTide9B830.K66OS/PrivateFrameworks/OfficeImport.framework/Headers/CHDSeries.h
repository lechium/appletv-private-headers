/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class EDCollection, CHDErrorBar, CHDFormula, EDKeyedCollection, CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject <EDKeyedObject> {
@private
	CHDChart *mChart;	// 4 = 0x4
	CHDChartType *mChartType;	// 8 = 0x8
	int mOrder;	// 12 = 0xc
	int mStyleIndex;	// 16 = 0x10
	CHDFormula *mName;	// 20 = 0x14
	CHDDataValue *mLastCachedName;	// 24 = 0x18
	CHDData *mValueData;	// 28 = 0x1c
	CHDData *mCategoryData;	// 32 = 0x20
	EDKeyedCollection *mDataValuePropertiesCollection;	// 36 = 0x24
	EDCollection *mTrendlinesCollection;	// 40 = 0x28
	CHDErrorBar *mErrorBarX;	// 44 = 0x2c
	CHDErrorBar *mErrorBarY;	// 48 = 0x30
	CHDDataLabel *mDefaultDataLabel;	// 52 = 0x34
	OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
	bool mDateTimeFormattingFlag;	// 60 = 0x3c
	bool mHiddenFlag;	// 61 = 0x3d
}
@property(retain) id categoryData;	// G=0x31255b65; S=0x31252281; converted property
@property(retain) id chartType;	// G=0x312cfa65; S=0x31252ce5; converted property
@property(retain) id dataValuePropertiesCollection;	// G=0x312523b9; S=0x312e2cb1; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x31259761; S=0x31259751; converted property
@property(retain) id defaultDataLabel;	// G=0x312526b9; S=0x312cf321; converted property
@property(retain) id errorBarXAxis;	// G=0x312cfc59; S=0x312cfc69; converted property
@property(retain) id errorBarYAxis;	// G=0x31253309; S=0x31253751; converted property
@property(retain) id graphicProperties;	// G=0x312528fd; S=0x31252671; converted property
@property(retain) id lastCachedName;	// G=0x31252e85; S=0x31255f75; converted property
@property(retain) id name;	// G=0x31252e75; S=0x31251a6d; converted property
@property(assign) int order;	// G=0x3134a305; S=0x31251499; converted property
@property(assign) int styleIndex;	// G=0x312528ed; S=0x31252501; converted property
@property(retain) id trendlinesCollection;	// G=0x312cfc01; S=0x312cfc11; converted property
@property(retain) id valueData;	// G=0x31252f99; S=0x3125210d; converted property
+ (id)seriesWithChart:(id)chart;	// 0x312c717d
- (id)initWithChart:(id)chart;	// 0x31250f59
// converted property getter: - (id)categoryData;	// 0x31255b65
- (id)chart;	// 0x31253319
// converted property getter: - (id)chartType;	// 0x312cfa65
- (void)clearBackPointers;	// 0x312d0dc9
// converted property getter: - (id)dataValuePropertiesCollection;	// 0x312523b9
- (void)dealloc;	// 0x3125ea81
// converted property getter: - (id)defaultDataLabel;	// 0x312526b9
- (id)defaultSeriesNameForIndex:(int)index;	// 0x31256ff1
// converted property getter: - (id)errorBarXAxis;	// 0x312cfc59
// converted property getter: - (id)errorBarYAxis;	// 0x31253309
// converted property getter: - (id)graphicProperties;	// 0x312528fd
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x31259761
- (bool)isEmpty;	// 0x31254099
- (bool)isHidden;	// 0x31252cd5
- (unsigned)key;	// 0x31252e65
// converted property getter: - (id)lastCachedName;	// 0x31252e85
// converted property getter: - (id)name;	// 0x31252e75
// converted property getter: - (int)order;	// 0x3134a305
// converted property setter: - (void)setCategoryData:(id)data;	// 0x31252281
// converted property setter: - (void)setChartType:(id)type;	// 0x31252ce5
// converted property setter: - (void)setDataValuePropertiesCollection:(id)collection;	// 0x312e2cb1
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x31259751
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x312cf321
- (void)setErrorBar:(id)bar;	// 0x31253609
// converted property setter: - (void)setErrorBarXAxis:(id)axis;	// 0x312cfc69
// converted property setter: - (void)setErrorBarYAxis:(id)axis;	// 0x31253751
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31252671
- (void)setHiddenFlag:(bool)flag;	// 0x312dfb4d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x31255f75
// converted property setter: - (void)setName:(id)name;	// 0x31251a6d
// converted property setter: - (void)setOrder:(int)order;	// 0x31251499
// converted property setter: - (void)setStyleIndex:(int)index;	// 0x31252501
// converted property setter: - (void)setTrendlinesCollection:(id)collection;	// 0x312cfc11
// converted property setter: - (void)setValueData:(id)data;	// 0x3125210d
- (id)shallowCopy;	// 0x312cfb21
// converted property getter: - (int)styleIndex;	// 0x312528ed
// converted property getter: - (id)trendlinesCollection;	// 0x312cfc01
// converted property getter: - (id)valueData;	// 0x31252f99
@end
