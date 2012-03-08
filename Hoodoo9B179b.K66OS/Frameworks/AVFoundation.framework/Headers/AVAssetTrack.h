/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVAssetTrackInternal, AVAsset;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetTrackInternal *_track;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x30ab7951; 
@property(readonly, assign, nonatomic) int trackID;	// G=0x30ab799d; 
+ (id)keyPathsForValuesAffectingTimeRange;	// 0x30ab8a61
+ (id)mediaCharacteristicsForMediaTypes;	// 0x30ab72c5
+ (id)mediaTypesForMediaCharacteristics;	// 0x30ab7629
- (id)init;	// 0x30ab7771
- (id)_allReferencedTracksWithReferenceType:(id)referenceType;	// 0x30ab8469
- (id)_assetTrackInspector;	// 0x30ab797d
- (id)_associatedSubtitleTrack;	// 0x30ab85b1
- (BOOL)_containsMixedSubtitles;	// 0x30ab7e11
- (BOOL)_containsOnlyForcedSubtitles;	// 0x30ab7df1
- (id)_fallbackTrack;	// 0x30ab8591
- (id)_firstReferencedTrackWithReferenceType:(id)referenceType;	// 0x30ab8371
- (BOOL)_hasMultipleNonEmptyEdits;	// 0x30aed25d
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x30ab7795
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x30ab7655
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x30ab77b9
- (BOOL)_isAuxiliaryContent;	// 0x30ab7c8d
- (BOOL)_isMainProgramContent;	// 0x30ab7d0d
- (id)_pairedForcedOnlySubtitlesTrack;	// 0x30ab89a9
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned)flags flagsMask:(unsigned)mask;	// 0x30ab7d31
- (id)_taggedCharacteristics;	// 0x30ab7b65
// declared property getter: - (id)asset;	// 0x30ab7951
- (id)availableMetadataFormats;	// 0x30ab82e5
- (id)commonMetadata;	// 0x30ab82b9
- (id)copyWithZone:(NSZone *)zone;	// 0x30ab77d9
- (void)dealloc;	// 0x30ab77e9
- (id)description;	// 0x30ab78cd
- (float)estimatedDataRate;	// 0x30ab8029
- (id)extendedLanguageTag;	// 0x30ab8081
- (void)finalize;	// 0x30ab7889
- (id)formatDescriptions;	// 0x30ab7a71
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x30ab7e31
- (unsigned)hash;	// 0x30ab8a35
- (BOOL)isEnabled;	// 0x30ab7ad1
- (BOOL)isEqual:(id)equal;	// 0x30ab89c9
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x30ab833d
- (BOOL)isPlayable;	// 0x30ab7a9d
- (BOOL)isSelfContained;	// 0x30ab7b05
- (id)languageCode;	// 0x30ab8055
- (int)layer;	// 0x30ab8155
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30ab7a11
- (id)locale;	// 0x30ab80ad
- (id)mediaCharacteristics;	// 0x30ab7f6d
- (id)mediaType;	// 0x30ab7a45
- (id)metadataForFormat:(id)format;	// 0x30ab8311
- (CGSize)naturalSize;	// 0x30ab80d9
- (int)naturalTimeScale;	// 0x30ab7ffd
- (float)nominalFrameRate;	// 0x30ab81ad
- (CGAffineTransform)preferredTransform;	// 0x30ab8115
- (float)preferredVolume;	// 0x30ab8181
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30ab8255
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x30ab8205
- (id)segments;	// 0x30ab81d9
- (int)statusOfValueForKey:(id)key;	// 0x30ab79c9
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30ab79dd
- (XXStruct_yD8eWC)timeRange;	// 0x30ab7fbd
- (long long)totalSampleDataLength;	// 0x30ab7b39
// declared property getter: - (int)trackID;	// 0x30ab799d
@end

