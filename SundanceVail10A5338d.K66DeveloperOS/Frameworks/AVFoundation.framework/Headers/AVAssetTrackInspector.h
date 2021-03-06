/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFigObjectInspector.h"
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"

@class NSArray, NSString, NSLocale, AVWeakReference;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x317b8889; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x317b886d; 
@property(readonly, assign, nonatomic) CGSize dimensions;	// G=0x317b8631; 
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x317b8555; 
@property(readonly, assign, nonatomic) float estimatedDataRate;	// G=0x317b85b1; 
@property(readonly, assign, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;	// G=0x317b88c1; 
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x317b85bd; 
@property(readonly, assign, nonatomic) NSArray *formatDescriptions;	// G=0x317b8535; 
@property(readonly, assign, nonatomic) NSString *languageCode;	// G=0x317b85b5; 
@property(readonly, assign, nonatomic) int layer;	// G=0x317b8671; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x317b85c1; 
@property(readonly, assign, nonatomic) NSArray *mediaCharacteristics;	// G=0x317b85b9; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x317b8531; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x317b8629; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x317b85a9; 
@property(readonly, assign, nonatomic) float nominalFrameRate;	// G=0x317b867d; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x317b8551; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x317b8639; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x317b8675; 
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x317b8681; 
@property(readonly, assign, nonatomic, getter=isSelfContained) BOOL selfContained;	// G=0x317b8559; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x317b8565; 
@property(readonly, assign, nonatomic) long long totalSampleDataLength;	// G=0x317b855d; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x317b852d; 
+ (id)assetTrackInspectorWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x317b82bd
- (id)init;	// 0x317b8485
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x317b8441
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x317b83ad
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x317b8465
- (id)_weakReference;	// 0x317b84a9
// declared property getter: - (id)availableMetadataFormats;	// 0x317b8889
// declared property getter: - (id)commonMetadata;	// 0x317b886d
- (id)copyWithZone:(NSZone *)zone;	// 0x317b8505
- (void)dealloc;	// 0x317b84b9
// declared property getter: - (CGSize)dimensions;	// 0x317b8631
// declared property getter: - (float)estimatedDataRate;	// 0x317b85b1
// declared property getter: - (id)extendedLanguageTag;	// 0x317b85bd
// declared property getter: - (id)formatDescriptions;	// 0x317b8535
// declared property getter: - (BOOL)isEnabled;	// 0x317b8555
// declared property getter: - (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x317b88c1
// declared property getter: - (BOOL)isPlayable;	// 0x317b8551
// declared property getter: - (BOOL)isSelfContained;	// 0x317b8559
// declared property getter: - (id)languageCode;	// 0x317b85b5
// declared property getter: - (int)layer;	// 0x317b8671
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x317b8521
// declared property getter: - (id)locale;	// 0x317b85c1
// declared property getter: - (id)mediaCharacteristics;	// 0x317b85b9
// declared property getter: - (id)mediaType;	// 0x317b8531
- (id)metadataForFormat:(id)format;	// 0x317b88a5
// declared property getter: - (CGSize)naturalSize;	// 0x317b8629
// declared property getter: - (int)naturalTimeScale;	// 0x317b85a9
// declared property getter: - (float)nominalFrameRate;	// 0x317b867d
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x317b8639
// declared property getter: - (float)preferredVolume;	// 0x317b8675
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x317b86a1
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x317b869d
// declared property getter: - (id)segments;	// 0x317b8681
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x317b8515
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x317b8565
// declared property getter: - (long long)totalSampleDataLength;	// 0x317b855d
// declared property getter: - (int)trackID;	// 0x317b852d
@end

