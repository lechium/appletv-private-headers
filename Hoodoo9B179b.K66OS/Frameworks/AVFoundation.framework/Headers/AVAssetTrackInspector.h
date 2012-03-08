/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "AVFigObjectInspector.h"

@class AVWeakReference, NSArray, NSLocale, NSString;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *availableMetadataFormats;	// G=0x30b19bfd; 
@property(readonly, assign, nonatomic) NSArray *commonMetadata;	// G=0x30b19be1; 
@property(readonly, assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30b198d5; 
@property(readonly, assign, nonatomic) float estimatedDataRate;	// G=0x30b19931; 
@property(readonly, assign, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;	// G=0x30b19c35; 
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x30b19939; 
@property(readonly, assign, nonatomic) NSArray *formatDescriptions;	// G=0x30b198b5; 
@property(readonly, assign, nonatomic) NSString *languageCode;	// G=0x30b19935; 
@property(readonly, assign, nonatomic) int layer;	// G=0x30b199e5; 
@property(readonly, assign, nonatomic) NSLocale *locale;	// G=0x30b1993d; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x30b198b1; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x30b199a5; 
@property(readonly, assign, nonatomic) int naturalTimeScale;	// G=0x30b19929; 
@property(readonly, assign, nonatomic) float nominalFrameRate;	// G=0x30b199f1; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x30b198d1; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x30b199ad; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x30b199e9; 
@property(readonly, assign, nonatomic) NSArray *segments;	// G=0x30b199f5; 
@property(readonly, assign, nonatomic, getter=isSelfContained) BOOL selfContained;	// G=0x30b198d9; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x30b198e5; 
@property(readonly, assign, nonatomic) long long totalSampleDataLength;	// G=0x30b198dd; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x30b198ad; 
+ (id)assetTrackInspectorWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30b19649
- (id)init;	// 0x30b19809
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x30b197c5
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30b19755
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x30b197e9
- (id)_weakReference;	// 0x30b1982d
// declared property getter: - (id)availableMetadataFormats;	// 0x30b19bfd
// declared property getter: - (id)commonMetadata;	// 0x30b19be1
- (id)copyWithZone:(NSZone *)zone;	// 0x30b19889
- (void)dealloc;	// 0x30b1983d
// declared property getter: - (float)estimatedDataRate;	// 0x30b19931
// declared property getter: - (id)extendedLanguageTag;	// 0x30b19939
// declared property getter: - (id)formatDescriptions;	// 0x30b198b5
// declared property getter: - (BOOL)isEnabled;	// 0x30b198d5
// declared property getter: - (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x30b19c35
// declared property getter: - (BOOL)isPlayable;	// 0x30b198d1
// declared property getter: - (BOOL)isSelfContained;	// 0x30b198d9
// declared property getter: - (id)languageCode;	// 0x30b19935
// declared property getter: - (int)layer;	// 0x30b199e5
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30b198a5
// declared property getter: - (id)locale;	// 0x30b1993d
// declared property getter: - (id)mediaType;	// 0x30b198b1
- (id)metadataForFormat:(id)format;	// 0x30b19c19
// declared property getter: - (CGSize)naturalSize;	// 0x30b199a5
// declared property getter: - (int)naturalTimeScale;	// 0x30b19929
// declared property getter: - (float)nominalFrameRate;	// 0x30b199f1
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x30b199ad
// declared property getter: - (float)preferredVolume;	// 0x30b199e9
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30b19a15
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30b19a11
// declared property getter: - (id)segments;	// 0x30b199f5
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30b19899
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x30b198e5
// declared property getter: - (long long)totalSampleDataLength;	// 0x30b198dd
// declared property getter: - (int)trackID;	// 0x30b198ad
@end

