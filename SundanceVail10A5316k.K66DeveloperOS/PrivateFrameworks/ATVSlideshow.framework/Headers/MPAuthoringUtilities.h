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
+ (id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;	// 0x36415345
+ (id)absolutePathForPath:(id)path withOptions:(id)options;	// 0x36415009
+ (id)absolutePathsForPaths:(id)paths withOptions:(id)options;	// 0x364155d1
+ (BOOL)alignToBeatsFromOptions:(id)options;	// 0x36412c9d
+ (BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;	// 0x3641508d
+ (float)aspectRatioFromOptions:(id)options;	// 0x36413665
+ (double)audioDurationFromOptions:(id)options;	// 0x364124b1
+ (int)audioScalingModeFromOptions:(id)options;	// 0x364124f9
+ (CGColorRef)backgroundColorFromOptions:(id)options;	// 0x36412efd
+ (double)beatFactorFromOptions:(id)options;	// 0x36412eb1
+ (float)breakDurationScaleFromOptions:(id)options;	// 0x364154ed
+ (BOOL)canAdjustPhaseDurations:(id)durations;	// 0x36414df9
+ (BOOL)canRepeatEffectWithPreset:(id)preset;	// 0x364131f9
+ (BOOL)canRepeatPreset:(id)preset;	// 0x36413369
+ (BOOL)collectVersionInformationFromOptions:(id)options;	// 0x36413801
+ (id)colorSchemeFromOptions:(id)options;	// 0x364149e5
+ (BOOL)createBeatsFromOptions:(id)options;	// 0x36412d01
+ (int)croppingModeFromOptions:(id)options;	// 0x3641253d
+ (double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;	// 0x364158c5
+ (double)durationPerEffectFromOptions:(id)options;	// 0x364130a5
+ (BOOL)easeKenBurnsPanFromOptions:(id)options;	// 0x364129a1
+ (BOOL)effectDecidesTransitionFromOptions:(id)options;	// 0x3641492d
+ (id)effectListFromOptions:(id)options;	// 0x364136ad
+ (BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;	// 0x364132b1
+ (float)effectPadding:(id)padding;	// 0x36414215
+ (double)exportTransitionDurationFromOptions:(id)options;	// 0x36414339
+ (id)exportTransitionIDFromOptions:(id)options;	// 0x364142c9
+ (BOOL)fadeOutAudioFromOptions:(id)options;	// 0x36414fc9
+ (double)fadeOutDurationFromOptions:(id)options;	// 0x364153d1
+ (id)gapInformationFromOptions:(id)options;	// 0x3641577d
+ (id)idFromPresetID:(id)presetID;	// 0x36413df1
+ (BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;	// 0x36412189
+ (id)ignoreTransitionListFromOptions:(id)options;	// 0x364138f9
+ (double)introDurationFromOptions:(id)options;	// 0x36413a65
+ (id)introEffectIDFromOptions:(id)options;	// 0x36413c35
+ (CGPoint)kbCenterPointFromRect:(CGRect)rect;	// 0x364157f1
+ (BOOL)kenBurnsAlwaysZoomInFromOptions:(id)options;	// 0x36412899
+ (BOOL)kenBurnsBreaksFromOptions:(id)options;	// 0x3641291d
+ (float)kenBurnsEndZoomLevelFromOptions:(id)options;	// 0x36412811
+ (int)kenBurnsLevelFromOptions:(id)options;	// 0x36412a25
+ (float)kenBurnsLikelihoodFromOptions:(id)options;	// 0x364125d9
+ (int)kenBurnsOffsetTypeFromOptions:(id)options;	// 0x36412ad5
+ (float)kenBurnsPanFactorFromOptions:(id)options;	// 0x364126d9
+ (float)kenBurnsStartZoomLevelFromOptions:(id)options;	// 0x36412789
+ (float)kenBurnsZoomFactorFromOptions:(id)options;	// 0x36413745
+ (id)lastPresetFromOptions:(id)options;	// 0x36414015
+ (BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;	// 0x36412b59
+ (id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;	// 0x364143b9
+ (BOOL)layerHasImagesFromOptions:(id)options;	// 0x364144f1
+ (int)layerIndexFromOptions:(id)options;	// 0x3641246d
+ (double)layerOffsetFromOptions:(id)options;	// 0x36413169
+ (double)layerTimeScaleFromOptions:(id)options;	// 0x36412df9
+ (id)layerTypeFromOptions:(id)options;	// 0x3641514d
+ (BOOL)lockTransitionDurationFromOptions:(id)options;	// 0x36412d41
+ (id)loopTransitionIDFromOptions:(id)options;	// 0x36414259
+ (BOOL)matchPhasesWithTransitionFromOptions:(id)options;	// 0x36412fed
+ (float)maxKenBurnsZoomFromOptions:(id)options;	// 0x36412695
+ (int)maxNumberOfSlidesToPreloadFromOptions:(id)options;	// 0x36413bf1
+ (double)maximumTransitionDurationFromOptions:(id)options;	// 0x364146e9
+ (double)minimumEffectDurationFromOptions:(id)options;	// 0x364147a9
+ (int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;	// 0x36413bad
+ (double)minimumTransitionDurationFromOptions:(id)options;	// 0x36414629
+ (float)movieVolumeFromOptions:(id)options;	// 0x364148e9
+ (float)multilineSizeFactorFromOptions:(id)options;	// 0x364158fd
+ (int)numberOfLayersFromOptions:(id)options;	// 0x364145a9
+ (double)outroDurationFromOptions:(id)options;	// 0x36413aad
+ (id)outroEffectIDFromOptions:(id)options;	// 0x364139a5
+ (BOOL)padTextOnlyEffects:(id)effects;	// 0x364148a9
+ (BOOL)performFaceDetectionFromOptions:(id)options;	// 0x364152a9
+ (BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;	// 0x36414cc9
+ (BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;	// 0x36414c01
+ (int)presentationOrderFromOptions:(id)options;	// 0x364150cd
+ (id)presetIDFromPresetID:(id)presetID;	// 0x36413e61
+ (unsigned)randomSeedFromOptions:(id)options;	// 0x364135f9
+ (NSRange)reconfigureRangeFromOptions:(id)options;	// 0x364151cd
+ (CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;	// 0x364157a1
+ (int)regionOfInterestPickModeFromOptions:(id)options;	// 0x36415229
+ (int)reorderModeFromOptions:(id)options;	// 0x36414ab5
+ (BOOL)repeatTransitionsFromOptions:(id)options;	// 0x36413841
+ (BOOL)replaceAudioPlaylistFromOptions:(id)options;	// 0x36412ebd
+ (BOOL)requestGeneratedImagesFromOptions:(id)options;	// 0x36414ec1
+ (BOOL)scaleEffectsForBreaksFromOptions:(id)options;	// 0x36415469
+ (BOOL)scaleOutroEffectFromOptions:(id)options;	// 0x36413af5
+ (BOOL)shouldComputeFramesFromOptions:(id)options;	// 0x36413ec1
+ (BOOL)shouldComputeLoopTransitionFromOptions:(id)options;	// 0x36414169
+ (BOOL)shouldComputeSlideFiltersFromOptions:(id)options;	// 0x364140a9
+ (BOOL)shouldComputeTransitionsFromOptions:(id)options;	// 0x36413f51
+ (BOOL)shouldDuckMoviesFromOptions:(id)options;	// 0x3641504d
+ (id)styleFromOptions:(id)options;	// 0x36412431
+ (id)subtitlesFromOptions:(id)options;	// 0x36415321
+ (id)titleEffectFromOptions:(id)options;	// 0x36413cc9
+ (double)transitionDurationFromOptions:(id)options;	// 0x36413421
+ (id)transitionListFromOptions:(id)options;	// 0x3641391d
+ (id)urlsFromPaths:(id)paths;	// 0x3641233d
+ (BOOL)useBestAspectRatioFromOptions:(id)options;	// 0x364134f9
+ (BOOL)useDefaultAudioFromOptions:(id)options;	// 0x364135b9
+ (BOOL)useLargestEffectsFromOptions:(id)options;	// 0x364156ed
+ (BOOL)useROIAspectRatioFromOptions:(id)options;	// 0x36414b89
+ (BOOL)useROIFromOptions:(id)options;	// 0x36413539
+ (BOOL)useTitleEffectFromOptions:(id)options;	// 0x36413579
+ (BOOL)useTransitionLayoutTagsWithOptions:(id)options;	// 0x36414f01
+ (BOOL)useUniformDurations:(id)durations;	// 0x36414869
+ (NSRange)videoPathsRangeFromOptions:(id)options;	// 0x36415575
@end
