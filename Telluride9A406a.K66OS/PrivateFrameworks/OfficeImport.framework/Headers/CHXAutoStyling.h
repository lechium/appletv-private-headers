/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


__attribute__((visibility("hidden")))
@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {
}
+ (id)colorWithSchemeColorId:(int)schemeColorId shade:(float)shade;	// 0x32a237e9
+ (id)colorWithSchemeColorId:(int)schemeColorId tint:(float)tint;	// 0x329fe4c9
+ (id)colorWithSchemeColorId:(int)schemeColorId transformType:(int)type transformValue:(float)value;	// 0x329fe4e9
- (id)autoAxisColor;	// 0x329fe495
- (id)autoAxisStroke;	// 0x32a83e89
- (id)autoChartAreaColor;	// 0x329fe30d
- (id)autoColorOfFirstColumnSeriesWithIndex:(int)index seriesCount:(int)count;	// 0x32a84105
- (id)autoColorOfSeriesWithIndex:(int)index;	// 0x32a0304d
- (id)autoMinorGridColor;	// 0x32a026d1
- (id)autoPlotAreaColor;	// 0x329fee25
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x32a83ed9
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x32a027f1
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x329fe205
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x329fe671
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x32a83ff9
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x32a04ae5
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x32a03375
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x32a83f29
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x32a03829
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x32a02725
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x32a02d69
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x32a02605
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x329fed09
- (void)resolveWallGraphicProperties:(id)properties;	// 0x329fe751
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)graphicProperties;	// 0x32a83d21
- (int)styleColumn;	// 0x32a0333d
- (int)styleRow;	// 0x329fe37d
@end

