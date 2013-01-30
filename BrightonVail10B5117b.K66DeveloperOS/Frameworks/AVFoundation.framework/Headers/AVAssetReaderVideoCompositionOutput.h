/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetReaderOutput.h"

@class AVVideoComposition, AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
	AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;	// 8 = 0x8
}
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x30272255; S=0x30272275; 
@property(readonly, assign, nonatomic) NSDictionary *videoSettings;	// G=0x30272229; 
@property(readonly, assign, nonatomic) NSArray *videoTracks;	// G=0x30272209; 
+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30271bf1
- (id)init;	// 0x30271c41
- (id)initWithVideoTracks:(id)videoTracks videoSettings:(id)settings;	// 0x30271c55
- (id)_asset;	// 0x30272441
- (BOOL)_enableTrackExtractionReturningError:(id *)error;	// 0x30272619
- (BOOL)_prepareForReadingReturningError:(id *)readingReturningError;	// 0x3027247d
- (BOOL)alwaysCopiesSampleData;	// 0x30272165
- (void)dealloc;	// 0x30272089
- (id)description;	// 0x302721a1
- (void)finalize;	// 0x30272121
- (id)mediaType;	// 0x302723f9
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x30272275
// declared property getter: - (id)videoComposition;	// 0x30272255
// declared property getter: - (id)videoSettings;	// 0x30272229
// declared property getter: - (id)videoTracks;	// 0x30272209
@end
