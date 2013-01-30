/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetTrackInspector.h"
#import "AVFoundation-Structs.h"

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
	OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
	int _trackID;	// 12 = 0xc
	unsigned long _mediaType;	// 16 = 0x10
	AVWeakReference *_weakReferenceToAsset;	// 20 = 0x14
}
@property(readonly, assign) int trackID;	// G=0x302c94fd; converted property
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x302c9275
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x302c9571
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x302c9581
- (id)asset;	// 0x302c94dd
- (void)dealloc;	// 0x302c9435
- (CGSize)dimensions;	// 0x302c96e1
- (float)estimatedDataRate;	// 0x302c9675
- (id)extendedLanguageTag;	// 0x302c96ad
- (void)finalize;	// 0x302c9499
- (id)formatDescriptions;	// 0x302c95e1
- (unsigned)hash;	// 0x302c9841
- (BOOL)isEnabled;	// 0x302c9601
- (BOOL)isEqual:(id)equal;	// 0x302c9799
- (BOOL)isSelfContained;	// 0x302c9629
- (id)languageCode;	// 0x302c96a9
- (id)mediaType;	// 0x302c950d
- (CGSize)naturalSize;	// 0x302c96b1
- (int)naturalTimeScale;	// 0x302c966d
- (float)nominalFrameRate;	// 0x302c9751
- (CGAffineTransform)preferredTransform;	// 0x302c9711
- (float)preferredVolume;	// 0x302c9749
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x302c9771
- (XXStruct_yD8eWC)timeRange;	// 0x302c9635
- (long long)totalSampleDataLength;	// 0x302c962d
// converted property getter: - (int)trackID;	// 0x302c94fd
@end
