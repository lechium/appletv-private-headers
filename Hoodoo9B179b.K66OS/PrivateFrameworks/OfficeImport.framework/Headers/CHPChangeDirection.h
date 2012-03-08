/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDProcessor.h"


__attribute__((visibility("hidden")))
@interface CHPChangeDirection : EDProcessor {
}
- (void)addDataValue:(id)value to:(id)to withIndex:(int)index;	// 0x329203d9
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x3291f4c9
- (void)changeChartDirection:(id)direction sheet:(id)sheet;	// 0x3291f4d9
- (void)cleanUpOldSeriesCollection:(id)collection;	// 0x32920d6d
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x3291f7fd
- (id)getGraphicPropertiesForSeriesWithIndex:(int)index fromCollection:(id)collection isVaryColors:(bool)colors forChart:(id)chart;	// 0x3291fcb1
- (id)getSeriesCollectionForOrthogonalDirection:(id)orthogonalDirection forChart:(id)chart;	// 0x3291f79d
- (bool)isObjectSupported:(id)supported;	// 0x328a3bd9
- (void)mapSeriesCollection:(id)collection from:(id)from forChart:(id)chart;	// 0x3291fef1
- (void)mapSeriesValues:(id)values to:(id)to forIndex:(unsigned)index byRow:(bool)row forChart:(id)chart;	// 0x32920415
@end

