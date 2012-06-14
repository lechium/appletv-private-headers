/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSURL, NSArray, AVMediaFileType;

@interface AVAssetWriterConfigurationState : NSObject {
@private
	NSURL *_URL;	// 4 = 0x4
	AVMediaFileType *_mediaFileType;	// 8 = 0x8
	XXStruct_pwHToB _movieFragmentInterval;	// 12 = 0xc
	BOOL _shouldOptimizeForNetworkUse;	// 36 = 0x24
	NSArray *_metadataItems;	// 40 = 0x28
	int _movieTimeScale;	// 44 = 0x2c
	NSArray *_inputs;	// 48 = 0x30
}
@property(copy, nonatomic) NSURL *URL;	// G=0x30e90371; S=0x30e90989; @synthesize=_URL
@property(copy, nonatomic) NSArray *inputs;	// G=0x30e902a5; S=0x30e909f5; @synthesize=_inputs
@property(copy, nonatomic) AVMediaFileType *mediaFileType;	// G=0x30e90361; S=0x30e909ad; @synthesize=_mediaFileType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x30e902d5; S=0x30e909d1; @synthesize=_metadataItems
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x30e90305; S=0x30e90335; @synthesize=_movieFragmentInterval
@property(assign, nonatomic) int movieTimeScale;	// G=0x30e902b5; S=0x30e902c5; @synthesize=_movieTimeScale
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x30e902e5; S=0x30e902f5; @synthesize=_shouldOptimizeForNetworkUse
// declared property getter: - (id)URL;	// 0x30e90371
- (void)dealloc;	// 0x30e90a19
// declared property getter: - (id)inputs;	// 0x30e902a5
// declared property getter: - (id)mediaFileType;	// 0x30e90361
// declared property getter: - (id)metadataItems;	// 0x30e902d5
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x30e90305
// declared property getter: - (int)movieTimeScale;	// 0x30e902b5
// declared property setter: - (void)setInputs:(id)inputs;	// 0x30e909f5
// declared property setter: - (void)setMediaFileType:(id)type;	// 0x30e909ad
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x30e909d1
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x30e90335
// declared property setter: - (void)setMovieTimeScale:(int)scale;	// 0x30e902c5
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x30e902f5
// declared property setter: - (void)setURL:(id)url;	// 0x30e90989
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x30e902e5
@end
