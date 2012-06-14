/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDChartTypesCollection, CHDAxesCollection;

__attribute__((visibility("hidden")))
@interface CHDPlotArea : NSObject {
@private
	CHDChartTypesCollection *mChartTypes;	// 4 = 0x4
	CHDAxesCollection *mAxes;	// 8 = 0x8
	OADGraphicProperties *mGraphicProperties;	// 12 = 0xc
	bool mCategoryAxesReversed;	// 16 = 0x10
	bool mCategoryAxesReversedOverridden;	// 17 = 0x11
	bool mContainsVolumeStockType;	// 18 = 0x12
}
@property(assign) bool containsVolumeStockType;	// G=0x311f81dd; S=0x311f81f1; converted property
@property(retain) id graphicProperties;	// G=0x31181161; S=0x31173919; converted property
- (id)initWithChart:(id)chart;	// 0x3116ad05
- (id)axes;	// 0x31173d19
- (id)chartTypes;	// 0x31176bf9
// converted property getter: - (bool)containsVolumeStockType;	// 0x311f81dd
- (void)dealloc;	// 0x31187a8d
// converted property getter: - (id)graphicProperties;	// 0x31181161
- (bool)hasSecondaryAxis;	// 0x311f7fb5
- (bool)hasSecondaryYAxisDeleted;	// 0x311f802d
- (bool)isCategoryAxesReversed:(bool)reversed;	// 0x3117ce65
- (void)markSecondaryAxes;	// 0x311f80d5
// converted property setter: - (void)setContainsVolumeStockType:(bool)type;	// 0x311f81f1
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31173919
@end

