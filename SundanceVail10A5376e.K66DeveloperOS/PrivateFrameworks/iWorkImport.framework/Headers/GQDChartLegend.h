/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChart;

@interface GQDChartLegend : GQDGraphic {
	GQDChart *mChart;	// 40 = 0x28
	BOOL mIsChartRetained;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x3580afed
- (id)chart;	// 0x3580b055
- (void)dealloc;	// 0x3580aff9
- (id)graphicStyle;	// 0x3580b065
@end
