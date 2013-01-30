/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChartModel, GQDChartLegend, GQDSStyle;

@interface GQDChart : GQDGraphic {
	GQDChartLegend *mLegend;	// 40 = 0x28
	BOOL mIsLegendRetained;	// 44 = 0x2c
	GQDChartModel *mModel;	// 48 = 0x30
	GQDSStyle *mStyle;	// 52 = 0x34
	long mType;	// 56 = 0x38
}
@property(retain) id legend;	// G=0x32cd734d; S=0x32cd739d; converted property
+ (const StateSpec *)stateForReading;	// 0x32cd72b9
- (void)dealloc;	// 0x32cd72c5
- (id)graphicStyle;	// 0x32cd737d
// converted property getter: - (id)legend;	// 0x32cd734d
- (id)model;	// 0x32cd735d
// converted property setter: - (void)setLegend:(id)legend;	// 0x32cd739d
- (id)style;	// 0x32cd736d
- (long)type;	// 0x32cd738d
@end
