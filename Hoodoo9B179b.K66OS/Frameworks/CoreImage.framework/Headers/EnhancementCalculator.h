/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "EnhancementCalculation.h"


__attribute__((visibility("hidden")))
@interface EnhancementCalculator : EnhancementCalculation {
@private
	BOOL faceBalanceEnabled;	// 56 = 0x38
	BOOL vibranceEnabled;	// 57 = 0x39
	BOOL curvesEnabled;	// 58 = 0x3a
	BOOL shadowsEnabled;	// 59 = 0x3b
}
@property(assign) BOOL curvesEnabled;	// G=0x36d78d8d; S=0x36d78d9d; @synthesize
@property(assign) BOOL faceBalanceEnabled;	// G=0x36d78d4d; S=0x36d78d5d; @synthesize
@property(assign) BOOL shadowsEnabled;	// G=0x36d78dad; S=0x36d78dbd; @synthesize
@property(assign) BOOL vibranceEnabled;	// G=0x36d78d6d; S=0x36d78d7d; @synthesize
- (id)init;	// 0x36d7818d
- (void)analyzeFeatures:(id)features usingContext:(id)context baseImage:(id)image;	// 0x36d787b1
// declared property getter: - (BOOL)curvesEnabled;	// 0x36d78d8d
- (void)dealloc;	// 0x36d781f5
// declared property getter: - (BOOL)faceBalanceEnabled;	// 0x36d78d4d
- (id)histogramFromRows:(id)rows componentOffset:(unsigned)offset;	// 0x36d78221
// declared property setter: - (void)setCurvesEnabled:(BOOL)enabled;	// 0x36d78d9d
// declared property setter: - (void)setFaceBalanceEnabled:(BOOL)enabled;	// 0x36d78d5d
// declared property setter: - (void)setShadowsEnabled:(BOOL)enabled;	// 0x36d78dbd
// declared property setter: - (void)setVibranceEnabled:(BOOL)enabled;	// 0x36d78d7d
- (id)setupFaceColorFromImage:(id)image usingContext:(id)context detectorOpts:(id)opts;	// 0x36d78cad
- (void)setupFaceColorFromImage:(id)image usingContext:(id)context features:(id)features;	// 0x36d78d29
- (void)setupHistogramsUsing:(id)aUsing redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;	// 0x36d7834d
// declared property getter: - (BOOL)shadowsEnabled;	// 0x36d78dad
// declared property getter: - (BOOL)vibranceEnabled;	// 0x36d78d6d
@end

