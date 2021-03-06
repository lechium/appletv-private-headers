/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CHBState.h"

@class EBReaderSheetState;

@interface CHBReaderState : CHBState {
	EBReaderSheetState *mEBReaderSheetState;	// 32 = 0x20
	XlChartBinaryReader *mXlReader;	// 36 = 0x24
	int mAxisGroup;	// 40 = 0x28
	XlChartPlot *mXlCurrentPlot;	// 44 = 0x2c
	int mXlCurrentPlotIndex;	// 48 = 0x30
}
@property(assign) int axisGroup;	// G=0x34970bc1; S=0x34970671; converted property
@property(assign) XlChartPlot *xlCurrentPlot;	// G=0x34974669; S=0x3497425d; converted property
@property(assign) int xlCurrentPlotIndex;	// G=0x34974b9d; S=0x3497424d; converted property
- (id)initWithEBReaderSheetState:(id)ebreaderSheetState;	// 0x34969c65
// converted property getter: - (int)axisGroup;	// 0x34970bc1
- (const XlChartSeriesFormat *)defaultFormatForXlSeries:(const XlChartDataSeries *)xlSeries;	// 0x34976bb1
- (id)ebReaderSheetState;	// 0x3496a42d
- (void)readAndCacheXlChartDataSeries;	// 0x3496bb25
- (id)resources;	// 0x3496ee09
// converted property setter: - (void)setAxisGroup:(int)group;	// 0x34970671
// converted property setter: - (void)setXlCurrentPlot:(XlChartPlot *)plot;	// 0x3497425d
// converted property setter: - (void)setXlCurrentPlotIndex:(int)index;	// 0x3497424d
- (id)workbook;	// 0x349728ed
- (const XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;	// 0x34976b71
// converted property getter: - (XlChartPlot *)xlCurrentPlot;	// 0x34974669
// converted property getter: - (int)xlCurrentPlotIndex;	// 0x34974b9d
- (int)xlPlotCount;	// 0x34973571
- (XlChartBinaryReader *)xlReader;	// 0x3496a41d
@end

