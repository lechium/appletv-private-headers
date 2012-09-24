/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <CALayer.h> // Unknown library


@interface FigHUDGraphLayer : CALayer {
	float **_Values;	// 48 = 0x30
	float *_Mins;	// 52 = 0x34
	float *_Maxes;	// 56 = 0x38
	int *_StartIndex;	// 60 = 0x3c
	int *_NumValues;	// 64 = 0x40
	int _NumGraphs;	// 68 = 0x44
	CGPoint *_Lines;	// 72 = 0x48
	int _MaxLength;	// 76 = 0x4c
	CTFontRef _Font;	// 80 = 0x50
	CFDictionaryRef _TextAttributes;	// 84 = 0x54
}
- (id)init;	// 0x333a58e9
- (void)dealloc;	// 0x333a5a51
- (void)drawInContext:(CGContextRef)context;	// 0x333a5b79
- (void)setUpGraph:(int)graph min:(float)min max:(float)max numValues:(int)values;	// 0x333a5701
- (void)setUpGraphs:(int)graphs;	// 0x333a55e9
- (void)updateValue:(int)value value:(float)value2;	// 0x333a5831
@end
