/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {
}
+ (id)colorWithSchemeColorId:(int)schemeColorId shade:(float)shade;	// 0x318a0db9
+ (id)colorWithSchemeColorId:(int)schemeColorId tint:(float)tint;	// 0x3186cea9
+ (id)colorWithSchemeColorId:(int)schemeColorId transformType:(int)type transformValue:(float)value;	// 0x3186cec9
+ (int)styleColumnWithStyleId:(int)styleId;	// 0x31872029
+ (int)styleIdWithStyleRow:(int)styleRow styleColumn:(int)column;	// 0x318b237d
+ (int)styleRowWithStyleId:(int)styleId;	// 0x3186cd99
- (id)autoAxisColor;	// 0x3186ce75
- (id)autoAxisStroke;	// 0x318b24ed
- (id)autoChartAreaColor;	// 0x3186ccdd
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned)index seriesCount:(unsigned)count;	// 0x3189a519
- (id)autoColorOfSeriesWithIndex:(unsigned)index colorMap:(id)map colorScheme:(id)scheme;	// 0x31872041
- (id)autoMinorGridColor;	// 0x318714d1
- (id)autoPlotAreaColor;	// 0x3186da1d
- (id)autoStrokeForSeriesIndex:(unsigned)seriesIndex;	// 0x318b2541
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x318715ed
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x3186cbe1
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x3186d059
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(unsigned)seriesIndex colorMap:(id)map colorScheme:(id)scheme;	// 0x318b25a1
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(unsigned)seriesIndex colorMap:(id)map colorScheme:(id)scheme;	// 0x31871d2d
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(unsigned)seriesIndex isLine:(bool)line colorMap:(id)map colorScheme:(id)scheme;	// 0x31871d61
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(unsigned)seriesIndex;	// 0x3189daa5
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x31872741
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x31871529
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(unsigned)seriesIndex;	// 0x3187ca9d
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x3187140d
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x3186d90d
- (void)resolveWallGraphicProperties:(id)properties;	// 0x3186d135
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)graphicProperties;	// 0x318b2385
- (int)styleColumn;	// 0x31871fdd
- (int)styleRow;	// 0x3186cd3d
@end

