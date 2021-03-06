/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


__attribute__((visibility("hidden")))
@interface CHDPie2DType : CHDChartType {
@private
	int mFirstSliceAngle;	// 24 = 0x18
	bool mDoughnutType;	// 28 = 0x1c
	bool mPieOfPieType;	// 29 = 0x1d
	bool mBarOfPieType;	// 30 = 0x1e
}
@property(assign, getter=isBarOfPieType) bool barOfPieType;	// G=0x32d0dcb5; S=0x32d0dcc5; converted property
@property(assign, getter=isDoughnutType) bool doughnutType;	// G=0x32cbd035; S=0x32cbe509; converted property
@property(assign) int firstSliceAngle;	// G=0x32d0dc85; S=0x32c92a91; converted property
@property(assign, getter=isPieOfPieType) bool pieOfPieType;	// G=0x32d0dc95; S=0x32d0dca5; converted property
- (id)initWithChart:(id)chart;	// 0x32c929a9
- (id)contentFormat;	// 0x32d0dcd5
- (int)defaultLabelPosition;	// 0x32d0ddb1
// converted property getter: - (int)firstSliceAngle;	// 0x32d0dc85
// converted property getter: - (bool)isBarOfPieType;	// 0x32d0dcb5
// converted property getter: - (bool)isDoughnutType;	// 0x32cbd035
// converted property getter: - (bool)isPieOfPieType;	// 0x32d0dc95
// converted property setter: - (void)setBarOfPieType:(bool)pieType;	// 0x32d0dcc5
// converted property setter: - (void)setDoughnutType:(bool)type;	// 0x32cbe509
// converted property setter: - (void)setFirstSliceAngle:(int)angle;	// 0x32c92a91
// converted property setter: - (void)setPieOfPieType:(bool)pieType;	// 0x32d0dca5
@end

