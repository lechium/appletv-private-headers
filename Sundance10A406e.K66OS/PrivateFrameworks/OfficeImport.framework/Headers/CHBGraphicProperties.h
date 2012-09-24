/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHBGraphicProperties : NSObject {
}
+ (int)lineWeightEnumFromWidth:(float)width;	// 0x35045219
+ (id)mapAssociatedEscherObjectstate:(id)objectstate;	// 0x3502eb11
+ (id)mapFillStyle:(const XlChartFillStyle *)style xlPictureFormat:(const XlChartPicF *)format state:(id)state;	// 0x34fc3ea1
+ (id)mapFillStyleForMarker:(const XlChartMarkerStyle *)marker complex:(bool)complex state:(id)state;	// 0x34fcf8a9
+ (id)mapPresetDashFromPattern:(int)pattern;	// 0x34fd9559
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)linePatternEnum;	// 0x34fd95d5
+ (id)oadGraphicPropertiesFromState:(id)state xlLineStyle:(const XlChartLineStyle *)style xlFillStyle:(const XlChartFillStyle *)style3;	// 0x34fcb479
+ (id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType *)xlChartFrameType state:(id)state;	// 0x34fc3d61
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat *)xlChartSeriesFormat state:(id)state;	// 0x34fcf42d
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle *)xlMarkerStyle complex:(bool)complex state:(id)state;	// 0x34fcf6c5
+ (id)oadStrokeFrom:(const XlChartLineStyle *)from;	// 0x34fc4175
+ (int)presetLinePatternEnumFromDash:(id)dash;	// 0x35045165
+ (float)widthFromLineWeightEnum:(int)lineWeightEnum;	// 0x34fd951d
@end
