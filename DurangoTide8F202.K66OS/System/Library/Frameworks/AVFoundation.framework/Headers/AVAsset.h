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

@class NSArray, AVAssetInternal;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVAssetInternal *_assetInternal;	// 4 = 0x4
}
@property(readonly, assign) NSArray *availableChapterLocales;	// G=0x303c9389; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x303ca415; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x303ca385; 
@property(readonly, assign, nonatomic) float preferredRate;	// G=0x303c9da1; 
@property(readonly, assign, nonatomic) CGAffineTransform preferredTransform;	// G=0x303ca3e9; 
@property(readonly, assign, nonatomic) float preferredVolume;	// G=0x303c9d7d; 
- (id)init;	// 0x303ca219
- (CFURLRef)_URL;	// 0x303c9381
- (id)_assetInspector;	// 0x303ca355
- (id)_assetInspectorLoader;	// 0x303c937d
- (id)_comparisonToken;	// 0x303ca0b1
- (id)_firstTrackGroupWithMediaType:(id)mediaType;	// 0x303ca8e9
- (OpaqueFigFormatReader *)_formatReader;	// 0x303ca325
- (OpaqueFigFormatReaderLoader *)_formatReaderLoader;	// 0x303c9e69
- (BOOL)_isReadyForBasicInspection;	// 0x303c9df9
- (BOOL)_isStreaming;	// 0x303c9dc5
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x303c9e39
- (void)_serverHasDied;	// 0x303c9ab9
- (void)_tracksDidChange;	// 0x303c9385
- (id)_weakReference;	// 0x303c9361
- (id)alternateTrackGroups;	// 0x303c9cd1
- (id)audioAlternatesTrackGroup;	// 0x303c9d15
// declared property getter: - (id)availableChapterLocales;	// 0x303c9389
- (id)availableMetadataFormats;	// 0x303c9c19
- (void)cancelLoading;	// 0x303c9e99
- (id)chapterMetadataGroupsWithTitleLocale:(id)titleLocale containingItemsWithCommonKeys:(id)commonKeys;	// 0x303c938d
- (id)commonMetadata;	// 0x303c9c3d
- (id)compatibleTrackForCompositionTrack:(id)compositionTrack;	// 0x303c9ae9
- (id)copyWithZone:(NSZone *)zone;	// 0x303ca205
- (void)dealloc;	// 0x303ca0f5
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x303ca415
- (BOOL)hasProtectedContent;	// 0x303c9a95
- (unsigned)hash;	// 0x303c9f61
- (BOOL)isComposable;	// 0x303c99b9
- (BOOL)isEqual:(id)equal;	// 0x303c9fdd
- (BOOL)isExportable;	// 0x303c9a25
- (BOOL)isPlayable;	// 0x303c9a5d
- (BOOL)isReadable;	// 0x303c99ed
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x303c9ebd
- (id)lyrics;	// 0x303c9c61
- (id)metadataForFormat:(id)format;	// 0x303c9bf1
// declared property getter: - (CGSize)naturalSize;	// 0x303ca385
- (int)naturalTimeScale;	// 0x303c9d59
// declared property getter: - (float)preferredRate;	// 0x303c9da1
// declared property getter: - (CGAffineTransform)preferredTransform;	// 0x303ca3e9
// declared property getter: - (float)preferredVolume;	// 0x303c9d7d
- (BOOL)providesPreciseDurationAndTiming;	// 0x303c9d35
- (void)release;	// 0x303ca155
- (id)retain;	// 0x303ca1ad
- (int)statusOfValueForKey:(id)key;	// 0x303c9f49
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x303c9f05
- (id)subtitleAlternatesTrackGroup;	// 0x303c9cf5
- (id)trackGroups;	// 0x303caa25
- (id)trackReferences;	// 0x303c9cad
- (id)trackWithTrackID:(int)trackID;	// 0x303ca82d
- (id)tracks;	// 0x303ca2f5
- (id)tracksWithMediaCharacteristic:(id)mediaCharacteristic;	// 0x303c9b41
- (id)tracksWithMediaType:(id)mediaType;	// 0x303c9b99
- (int)unusedTrackID;	// 0x303f00ed
@end

