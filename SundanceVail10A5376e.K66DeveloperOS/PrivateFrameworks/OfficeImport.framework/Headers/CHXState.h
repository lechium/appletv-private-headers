/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, OCPPackagePart, OADParagraphProperties, EXOfficeArtState, CHDChart, CHDSeries, CHDChartType;
@protocol CHAutoStyling;

@interface CHXState : NSObject {
	EXOfficeArtState *mDrawingState;	// 4 = 0x4
	CHDChart *mChart;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
	OCPPackagePart *mChartPart;	// 16 = 0x10
	CHDChartType *mCurrentChartType;	// 20 = 0x14
	CHDSeries *mCurrentSeries;	// 24 = 0x18
	OADParagraphProperties *mDefaultTextProperties;	// 28 = 0x1c
	BOOL mDefaultTextPropertiesHaveExplicitFontSize;	// 32 = 0x20
	id<CHAutoStyling> mAutoStyling;	// 36 = 0x24
}
@property(retain) id chart;	// G=0x370988b9; S=0x37096b49; converted property
@property(retain) id chartPart;	// G=0x37096b39; S=0x37096839; converted property
@property(retain) id currentChartType;	// G=0x37099ee5; S=0x370993ed; converted property
@property(retain) id currentSeries;	// G=0x370f37b9; S=0x37099f59; converted property
@property(retain) id defaultTextProperties;	// G=0x37097685; S=0x37097065; converted property
@property(retain) id resources;	// G=0x37096ff5; S=0x3709688d; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x370967e1
- (id)autoStyling;	// 0x37097d4d
// converted property getter: - (id)chart;	// 0x370988b9
// converted property getter: - (id)chartPart;	// 0x37096b39
// converted property getter: - (id)currentChartType;	// 0x37099ee5
// converted property getter: - (id)currentSeries;	// 0x370f37b9
- (void)dealloc;	// 0x3709de4d
// converted property getter: - (id)defaultTextProperties;	// 0x37097685
- (id)drawingState;	// 0x37096bd1
- (id)exState;	// 0x3709a2cd
- (void)popTitleTextProperties;	// 0x370bef61
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x370beac1
// converted property getter: - (id)resources;	// 0x37096ff5
// converted property setter: - (void)setChart:(id)chart;	// 0x37096b49
// converted property setter: - (void)setChartPart:(id)part;	// 0x37096839
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x370993ed
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x37099f59
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x37097065
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x37097009
// converted property setter: - (void)setResources:(id)resources;	// 0x3709688d
@end

