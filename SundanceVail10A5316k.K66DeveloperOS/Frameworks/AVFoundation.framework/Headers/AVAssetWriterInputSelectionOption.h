/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVMediaSelectionOption.h"
#import "AVFoundation-Structs.h"

@class NSString, NSDictionary, AVAssetWriterInput, NSArray;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
@private
	AVAssetWriterInput *_input;	// 8 = 0x8
	NSString *_mediaType;	// 12 = 0xc
	NSDictionary *_outputSettings;	// 16 = 0x10
	opaqueCMFormatDescription *_sourceFormatHint;	// 20 = 0x14
	NSString *_languageCode;	// 24 = 0x18
	NSString *_extendedLanguageTag;	// 28 = 0x1c
	NSArray *_metadata;	// 32 = 0x20
	NSDictionary *_trackReferences;	// 36 = 0x24
	BOOL _displaysNonForcedSubtitles;	// 40 = 0x28
	BOOL _enabled;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) BOOL displaysNonForcedSubtitles;	// G=0x36733c11; @synthesize=_displaysNonForcedSubtitles
@property(readonly, assign, nonatomic) NSString *extendedLanguageTag;	// G=0x36733be1; @synthesize=_extendedLanguageTag
@property(readonly, assign, nonatomic) AVAssetWriterInput *input;	// G=0x36733b91; @synthesize=_input
@property(readonly, assign, nonatomic) NSString *languageCode;	// G=0x36733bd1; @synthesize=_languageCode
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x36733ba1; @synthesize=_mediaType
@property(readonly, assign, nonatomic) NSArray *metadata;	// G=0x36733bf1; @synthesize=_metadata
@property(readonly, assign, nonatomic) NSDictionary *outputSettings;	// G=0x36733bb1; @synthesize=_outputSettings
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *sourceFormatHint;	// G=0x36733bc1; @synthesize=_sourceFormatHint
@property(readonly, assign, nonatomic) NSDictionary *trackReferences;	// G=0x36733c01; @synthesize=_trackReferences
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)assetWriterInput;	// 0x36732c11
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)assetWriterInput displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x36732c59
- (id)initWithAssetWriterInput:(id)assetWriterInput;	// 0x36732ca5
- (id)initWithAssetWriterInput:(id)assetWriterInput displaysNonForcedSubtitles:(BOOL)subtitles;	// 0x36732cb9
- (id)_ancillaryDescription;	// 0x36733191
- (BOOL)_hasEqualValueForKey:(id)key asObject:(id)object;	// 0x36732f89
- (BOOL)_isAuxiliaryContent;	// 0x36733379
- (BOOL)_isDesignatedDefault;	// 0x367335d5
- (BOOL)_isMainProgramContent;	// 0x367333d5
- (id)_taggedCharacteristics;	// 0x36733311
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)mediaSelectionGroup;	// 0x367339a5
- (id)availableMetadataFormats;	// 0x367336a9
- (id)commonMetadata;	// 0x36733641
- (void)dealloc;	// 0x36732e69
// declared property getter: - (BOOL)displaysNonForcedSubtitles;	// 0x36733c11
// declared property getter: - (id)extendedLanguageTag;	// 0x36733be1
- (void)finalize;	// 0x36732f45
- (BOOL)hasMediaCharacteristic:(id)characteristic;	// 0x367333f9
- (unsigned)hash;	// 0x367330f1
// declared property getter: - (id)input;	// 0x36733b91
- (BOOL)isEqual:(id)equal;	// 0x36732fe5
- (BOOL)isPlayable;	// 0x36733571
// declared property getter: - (id)languageCode;	// 0x36733bd1
- (id)locale;	// 0x367335e5
- (id)mediaSubTypes;	// 0x3673319d
// declared property getter: - (id)mediaType;	// 0x36733ba1
// declared property getter: - (id)metadata;	// 0x36733bf1
- (id)metadataForFormat:(id)format;	// 0x3673382d
// declared property getter: - (id)outputSettings;	// 0x36733bb1
- (id)propertyList;	// 0x36733b8d
// declared property getter: - (opaqueCMFormatDescription *)sourceFormatHint;	// 0x36733bc1
// declared property getter: - (id)trackReferences;	// 0x36733c01
@end

