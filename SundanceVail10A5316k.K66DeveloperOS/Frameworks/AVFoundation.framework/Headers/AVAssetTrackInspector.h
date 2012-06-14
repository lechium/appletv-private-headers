/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVFigObjectInspector.h"
#import "AVAsynchronousKeyValueLoading.h"

@class NSString, NSLocale, AVWeakReference, NSArray;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x36781875; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x36781859; 
@property(readonly, assign, nonatomic) CGSize dimensions;	// G=0x3678161d; 
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x36781545; 
@property(readonly, assign, nonatomic) float estimatedDataRate;	// G=0x367815a1; 
@property(readonly, assign, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;	// G=0x367818ad; 
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x367815a9; 
@property(readonly, assign, nonatomic) NSArray *formatDescriptions;	// G=0x36781525; 
@property(readonly, assign, nonatomic) NSString *languageCode;	// G=0x367815a5; 
@property(readonly, assign, nonatomic) int layer;	// G=0x3678165d; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x367815ad; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x36781521; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x36781615; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x36781599; 
@property(readonly, assign, nonatomic) float nominalFrameRate;	// G=0x36781669; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x36781541; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x36781625; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x36781661; 
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x3678166d; 
@property(readonly, assign, nonatomic, getter=isSelfContained) BOOL selfContained;	// G=0x36781549; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x36781555; 
@property(readonly, assign, nonatomic) long long totalSampleDataLength;	// G=0x3678154d; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x3678151d; 
+ (id)assetTrackInspectorWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x367812ad
- (id)init;	// 0x36781475
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x36781431
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x3678139d
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x36781455
- (id)_weakReference;	// 0x36781499
// declared property getter: - (id)availableMetadataFormats;	// 0x36781875
// declared property getter: - (id)commonMetadata;	// 0x36781859
- (id)copyWithZone:(NSZone *)zone;	// 0x367814f5
- (void)dealloc;	// 0x367814a9
// declared property getter: - (CGSize)dimensions;	// 0x3678161d
// declared property getter: - (float)estimatedDataRate;	// 0x367815a1
// declared property getter: - (id)extendedLanguageTag;	// 0x367815a9
// declared property getter: - (id)formatDescriptions;	// 0x36781525
// declared property getter: - (BOOL)isEnabled;	// 0x36781545
// declared property getter: - (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x367818ad
// declared property getter: - (BOOL)isPlayable;	// 0x36781541
// declared property getter: - (BOOL)isSelfContained;	// 0x36781549
// declared property getter: - (id)languageCode;	// 0x367815a5
// declared property getter: - (int)layer;	// 0x3678165d
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x36781511
// declared property getter: - (id)locale;	// 0x367815ad
// declared property getter: - (id)mediaType;	// 0x36781521
- (id)metadataForFormat:(id)format;	// 0x36781891
// declared property getter: - (CGSize)naturalSize;	// 0x36781615
// declared property getter: - (int)naturalTimeScale;	// 0x36781599
// declared property getter: - (float)nominalFrameRate;	// 0x36781669
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x36781625
// declared property getter: - (float)preferredVolume;	// 0x36781661
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3678168d
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x36781689
// declared property getter: - (id)segments;	// 0x3678166d
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x36781505
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x36781555
// declared property getter: - (long long)totalSampleDataLength;	// 0x3678154d
// declared property getter: - (int)trackID;	// 0x3678151d
@end

