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
@property(retain) id legend;	// G=0x3507776d; S=0x350777bd; converted property
+ (const StateSpec *)stateForReading;	// 0x350776d9
- (void)dealloc;	// 0x350776e5
- (id)graphicStyle;	// 0x3507779d
// converted property getter: - (id)legend;	// 0x3507776d
- (id)model;	// 0x3507777d
// converted property setter: - (void)setLegend:(id)legend;	// 0x350777bd
- (id)style;	// 0x3507778d
- (long)type;	// 0x350777ad
@end
