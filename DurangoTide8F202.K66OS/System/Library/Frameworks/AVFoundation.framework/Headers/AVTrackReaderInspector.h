/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetTrackInspector.h"
#import "AVFoundation-Structs.h"

@class AVAsset;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
	OpaqueFigTrackReader *_trackReader;	// 4 = 0x4
	int _trackID;	// 8 = 0x8
	unsigned _mediaType;	// 12 = 0xc
	AVAsset *_asset;	// 16 = 0x10
}
@property(readonly, retain) AVAsset *asset;	// G=0x3041c1d1; converted property
@property(readonly, assign) int trackID;	// G=0x3041c1e1; converted property
- (id)init;	// 0x3041c559
- (XXStruct_pwHToB)_CMTimeForProperty:(CFStringRef)property;	// 0x3041dbf5
- (long)_SInt32ForProperty:(CFStringRef)property;	// 0x3041dba1
- (unsigned char)_booleanForProperty:(CFStringRef)property;	// 0x3041db4d
- (float)_floatForProperty:(CFStringRef)property;	// 0x3041da95
- (id)_initWithAsset:(id)asset trackID:(int)anId;	// 0x3041c535
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x3041c7d5
- (id)_initWithAsset:(id)asset trackIndex:(long)index;	// 0x3041c515
- (long long)_longLongForProperty:(CFStringRef)property;	// 0x3041dae9
- (id)_stringForProperty:(CFStringRef)property;	// 0x3041d5a5
- (OpaqueFigTrackReader *)_trackReader;	// 0x3041c1f1
// converted property getter: - (id)asset;	// 0x3041c1d1
- (id)availableMetadataFormats;	// 0x3041dda5
- (id)commonMetadata;	// 0x3041d5f5
- (id)copyWithZone:(NSZone *)zone;	// 0x3041c501
- (void)dealloc;	// 0x3041cb11
- (float)estimatedDataRate;	// 0x3041c449
- (id)extendedLanguageTag;	// 0x3041c409
- (void)finalize;	// 0x3041cad1
- (id)formatDescriptions;	// 0x3041e3dd
- (unsigned)hash;	// 0x3041d2f1
- (BOOL)isEnabled;	// 0x3041c4dd
- (BOOL)isEqual:(id)equal;	// 0x3041d22d
- (BOOL)isExcludedFromAutoselectionInTrackGroup;	// 0x3041c3a5
- (BOOL)isSelfContained;	// 0x3041c4b9
- (id)languageCode;	// 0x3041c429
- (id)mediaType;	// 0x3041cb51
- (id)metadataForFormat:(id)format;	// 0x3041dc75
- (CGSize)naturalSize;	// 0x3041e379
- (int)naturalTimeScale;	// 0x3041c479
- (float)nominalFrameRate;	// 0x3041c3c9
- (CGAffineTransform)preferredTransform;	// 0x3041e2ed
- (float)preferredVolume;	// 0x3041c3e9
- (XXStruct_pwHToB)samplePresentationTimeForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3041cffd
- (id)segmentForTrackTime:(XXStruct_pwHToB)trackTime;	// 0x3041df09
- (id)segments;	// 0x3041e0ad
- (XXStruct_yD8eWC)timeRange;	// 0x3041ce21
- (long long)totalSampleDataLength;	// 0x3041c499
// converted property getter: - (int)trackID;	// 0x3041c1e1
@end

