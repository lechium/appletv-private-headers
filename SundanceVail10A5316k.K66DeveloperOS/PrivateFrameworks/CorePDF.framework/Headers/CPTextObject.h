/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPTextObject : CPChunk {
	CGPoint anchor;	// 52 = 0x34
	BOOL metricInfoCalculated;	// 60 = 0x3c
	float maxFontSize;	// 64 = 0x40
	double maxFontLineHeight;	// 68 = 0x44
}
@property(readonly, assign) double maxFontLineHeight;	// G=0x33a4bbad; converted property
@property(readonly, assign) float maxFontSize;	// G=0x33a4bb75; converted property
- (void)calculateMetrics;	// 0x33a4ba51
- (void)clearCachedInfo;	// 0x33a4bbed
// converted property getter: - (double)maxFontLineHeight;	// 0x33a4bbad
// converted property getter: - (float)maxFontSize;	// 0x33a4bb75
- (void)translateObjectYBy:(float)by;	// 0x33a4bc21
@end

