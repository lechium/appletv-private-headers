/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject {
}
+ (Class)chbAxisClassWith:(id)with;	// 0x32a7af3d
+ (Class)chbAxisClassWith:(XlChartPlotAxis *)with plotAxis:(int)axis;	// 0x329871ed
+ (int)chbAxisIdForPlotAxis:(int)plotAxis state:(id)state;	// 0x329877a9
+ (int)chdAxisPositionFromAxisType:(int)axisType;	// 0x32987811
+ (id)readWithXlPlotAxis:(int)xlPlotAxis state:(id)state;	// 0x32985c25
+ (int)xlPlotAxisTypeFrom:(int)from;	// 0x32a7af21
@end

