/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState {
@private
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x31174259; S=0x31173d09; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x31177d01; S=0x311778f5; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x31178235; S=0x311778e5; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x3116d2fd
// converted property getter: - (int)axisGroup;	// 0x31174259
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x3117a249
- (id)ebReaderSheetState;	// 0x3116dac5
- (void)readAndCacheXlChartDataSeries;	// 0x3116f1bd
- (id)resources;	// 0x311724a1
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x31173d09
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x311778f5
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x311778e5
- (id)workbook;	// 0x31175f85
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x3117a209
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x31177d01
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x31178235
- (int)xlPlotCount;	// 0x31176c09
- (XlChartBinaryReader *)xlReader;	// 0x3116dab5
@end
