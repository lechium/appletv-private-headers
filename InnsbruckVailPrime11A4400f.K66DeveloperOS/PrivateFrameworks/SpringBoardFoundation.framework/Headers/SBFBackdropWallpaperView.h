/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import "SpringBoardFoundation-Structs.h"
#import "SBFWallpaperView.h"

@class CABackdropLayer, SBFBackdropStatisticsProvider;

@interface SBFBackdropWallpaperView : SBFWallpaperView {
	SBFBackdropStatisticsProvider *_statisticsProvider;	// 156 = 0x9c
	CABackdropLayer *_layer;	// 160 = 0xa0
}
@property(assign, nonatomic) BOOL colorSamplingEnabled;	// G=0x3275675d; S=0x3275670d; 
+ (BOOL)_allowsParallax;	// 0x32756525
- (id)initWithFrame:(CGRect)frame;	// 0x32756529
- (id)_computeAverageColor;	// 0x327567a1
// declared property getter: - (BOOL)colorSamplingEnabled;	// 0x3275675d
- (void)dealloc;	// 0x32756695
- (void)layoutSubviews;	// 0x327567cd
// declared property setter: - (void)setColorSamplingEnabled:(BOOL)enabled;	// 0x3275670d
@end

