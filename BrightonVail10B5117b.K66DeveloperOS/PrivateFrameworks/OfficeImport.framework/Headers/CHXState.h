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
@property(retain) id chart;	// G=0x34b788b9; S=0x34b76b49; converted property
@property(retain) id chartPart;	// G=0x34b76b39; S=0x34b76839; converted property
@property(retain) id currentChartType;	// G=0x34b79ee5; S=0x34b793ed; converted property
@property(retain) id currentSeries;	// G=0x34bd37b9; S=0x34b79f59; converted property
@property(retain) id defaultTextProperties;	// G=0x34b77685; S=0x34b77065; converted property
@property(retain) id resources;	// G=0x34b76ff5; S=0x34b7688d; converted property
- (id)initWithDrawingState:(id)drawingState;	// 0x34b767e1
- (id)autoStyling;	// 0x34b77d4d
// converted property getter: - (id)chart;	// 0x34b788b9
// converted property getter: - (id)chartPart;	// 0x34b76b39
// converted property getter: - (id)currentChartType;	// 0x34b79ee5
// converted property getter: - (id)currentSeries;	// 0x34bd37b9
- (void)dealloc;	// 0x34b7de4d
// converted property getter: - (id)defaultTextProperties;	// 0x34b77685
- (id)drawingState;	// 0x34b76bd1
- (id)exState;	// 0x34b7a2cd
- (void)popTitleTextProperties;	// 0x34b9ef61
- (void)pushTitleTextProperties:(BOOL)properties;	// 0x34b9eac1
// converted property getter: - (id)resources;	// 0x34b76ff5
// converted property setter: - (void)setChart:(id)chart;	// 0x34b76b49
// converted property setter: - (void)setChartPart:(id)part;	// 0x34b76839
// converted property setter: - (void)setCurrentChartType:(id)type;	// 0x34b793ed
// converted property setter: - (void)setCurrentSeries:(id)series;	// 0x34b79f59
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x34b77065
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)size;	// 0x34b77009
// converted property setter: - (void)setResources:(id)resources;	// 0x34b7688d
@end

