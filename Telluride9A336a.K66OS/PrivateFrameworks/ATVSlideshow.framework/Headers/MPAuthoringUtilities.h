/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPAuthoringUtilities : NSObject {
}
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x342987c9
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x34298495
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x3429893d
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x342961ad
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x34298515
+ (float)aspectRatioFromOptions:(id)options;	// 0x34296b65
+ (double)audioDurationFromOptions:(id)options;	// 0x34295d3d
+ (int)audioScalingModeFromOptions:(id)options;	// 0x34295d85
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x34296415
+ (double)beatFactorFromOptions:(id)options;	// 0x342963c9
+ (BOOL)canAdjustPhaseDurations:(id)durations;	// 0x3429827d
+ (BOOL)canRepeatEffectWithPreset:(id)preset;	// 0x3429670d
+ (BOOL)canRepeatPreset:(id)preset;	// 0x34296885
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x34296d0d
+ (id)colorSchemeFromOptions:(id)options;	// 0x34297ead
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x34296215
+ (int)croppingModeFromOptions:(id)options;	// 0x34295dc5
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x34298c15
+ (double)durationPerEffectFromOptions:(id)options;	// 0x342965bd
+ (BOOL)effectDecidesTransitionFromOptions:(id)options;	// 0x34297df1
+ (id)effectListFromOptions:(id)options;	// 0x34296bb1
+ (BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;	// 0x342967c9
+ (float)effectPadding:(id)padding;	// 0x342976d5
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x34297801
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x34297791
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x34298455
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x34298849
+ (id)gapInformationFromOptions:(id)options;	// 0x34298ac9
+ (id)idFromPresetID:(id)presetID;	// 0x342972a5
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x34295a2d
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x34296e09
+ (id)introEffectIDFromOptions:(id)options;	// 0x342970f5
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x34298b3d
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x34295fbd
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x34295e71
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x34295f75
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x34296c45
+ (id)lastPresetFromOptions:(id)options;	// 0x342974d1
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x3429606d
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x34297881
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x3429799d
+ (int)layerIndexFromOptions:(id)options;	// 0x34295cfd
+ (double)layerOffsetFromOptions:(id)options;	// 0x34296679
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x34296311
+ (id)layerTypeFromOptions:(id)options;	// 0x342985d5
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x34296255
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x34297721
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x34296501
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x34295f2d
+ (int)maxNumberOfSlidesToPreloadFromOptions:(id)options;	// 0x342970b5
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x34297b99
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x34297c61
+ (int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;	// 0x34297075
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x34297ad1
+ (float)movieVolumeFromOptions:(id)options;	// 0x34297da9
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x34298c4d
+ (int)numberOfLayersFromOptions:(id)options;	// 0x34297a59
+ (double)outroDurationFromOptions:(id)options;	// 0x34296f75
+ (id)outroEffectIDFromOptions:(id)options;	// 0x34296eb5
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x34297d69
+ (BOOL)performFaceDetectionFromOptions:(id)options;	// 0x34298731
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x34298141
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x34298075
+ (int)presentationOrderFromOptions:(id)options;	// 0x34298555
+ (id)presetIDFromPresetID:(id)presetID;	// 0x34297321
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x34296afd
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x34298655
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x34298aed
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x342986b1
+ (int)reorderModeFromOptions:(id)options;	// 0x34297f85
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x34296d4d
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x342963d5
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x34298349
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x34296fb9
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x34297381
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x34297625
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x34297565
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x3429740d
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x342984d5
+ (id)styleFromOptions:(id)options;	// 0x34295cc5
+ (id)subtitlesFromOptions:(id)options;	// 0x342987a5
+ (id)titleEffectFromOptions:(id)options;	// 0x34297189
+ (double)transitionDurationFromOptions:(id)options;	// 0x34296941
+ (id)transitionListFromOptions:(id)options;	// 0x34296e2d
+ (id)urlsFromPaths:(id)paths;	// 0x34295bed
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x342969fd
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x34296abd
+ (BOOL)useLargestEffectsFromOptions:(id)options;	// 0x34298a39
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x34297ffd
+ (BOOL)useROIFromOptions:(id)options;	// 0x34296a3d
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x34296a7d
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x34298389
+ (BOOL)useUniformDurations:(id)durations;	// 0x34297d29
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x342988e1
@end
