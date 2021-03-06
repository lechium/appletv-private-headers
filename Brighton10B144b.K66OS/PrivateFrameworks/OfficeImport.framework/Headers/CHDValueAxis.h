/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


@interface CHDValueAxis : CHDAxis {
	bool mPercentageFormattingFlag;	// 128 = 0x80
	bool mAutoMajorUnitValue;	// 129 = 0x81
	bool mAutoMinorUnitValue;	// 130 = 0x82
	double mMajorUnitValue;	// 132 = 0x84
	double mMinorUnitValue;	// 140 = 0x8c
	double mScalingLogBase;	// 148 = 0x94
}
@property(assign) double majorUnitValue;	// G=0x349f5221; S=0x34973295; converted property
@property(assign) double minorUnitValue;	// G=0x349f5239; S=0x349732c9; converted property
@property(assign, getter=isPercentageFormattingFlag) bool percentageFormattingFlag;	// G=0x3497bdc1; S=0x3497c065; converted property
@property(assign) double scalingLogBase;	// G=0x349f5251; S=0x349f5269; converted property
- (id)initWithResources:(id)resources;	// 0x34973195
- (void)adjustAxisPositionForHorizontalChart;	// 0x349d410d
- (bool)isAutoMajorUnitValue;	// 0x349f527d
- (bool)isAutoMinorUnitValue;	// 0x349f5291
// converted property getter: - (bool)isPercentageFormattingFlag;	// 0x3497bdc1
// converted property getter: - (double)majorUnitValue;	// 0x349f5221
// converted property getter: - (double)minorUnitValue;	// 0x349f5239
// converted property getter: - (double)scalingLogBase;	// 0x349f5251
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x34973295
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x349732c9
// converted property setter: - (void)setPercentageFormattingFlag:(bool)flag;	// 0x3497c065
// converted property setter: - (void)setScalingLogBase:(double)base;	// 0x349f5269
@end

