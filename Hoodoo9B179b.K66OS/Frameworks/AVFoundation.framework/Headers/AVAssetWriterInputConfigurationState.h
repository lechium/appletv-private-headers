/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVOutputSettings, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputConfigurationState : NSObject {
@private
	NSString *_mediaType;	// 4 = 0x4
	AVOutputSettings *_outputSettings;	// 8 = 0x8
	opaqueCMFormatDescription *_sampleBufferFormatHint;	// 12 = 0xc
	NSDictionary *_sourcePixelBufferAttributes;	// 16 = 0x10
	BOOL _attachedToPixelBufferAdaptor;	// 20 = 0x14
	NSArray *_metadataItems;	// 24 = 0x18
	CGAffineTransform _transform;	// 28 = 0x1c
	int _mediaTimeScale;	// 52 = 0x34
	BOOL _expectsMediaDataInRealTime;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL attachedToPixelBufferAdaptor;	// G=0x30ad91a5; S=0x30ad91b5; @synthesize=_attachedToPixelBufferAdaptor
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x30ad9281; S=0x30ad9291; @synthesize=_expectsMediaDataInRealTime
@property(assign, nonatomic) int mediaTimeScale;	// G=0x30ad9261; S=0x30ad9271; @synthesize=_mediaTimeScale
@property(copy, nonatomic) NSString *mediaType;	// G=0x30ad90d5; S=0x30ad90e5; @synthesize=_mediaType
@property(copy, nonatomic) NSArray *metadataItems;	// G=0x30ad91c5; S=0x30ad91d5; @synthesize=_metadataItems
@property(copy, nonatomic) AVOutputSettings *outputSettings;	// G=0x30ad9109; S=0x30ad9119; @synthesize=_outputSettings
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x30ad913d; S=0x30ad914d; @synthesize=_sampleBufferFormatHint
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x30ad9171; S=0x30ad9181; @synthesize=_sourcePixelBufferAttributes
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x30ad91f9; S=0x30ad922d; @synthesize=_transform
// declared property getter: - (BOOL)attachedToPixelBufferAdaptor;	// 0x30ad91a5
- (void)dealloc;	// 0x30ad9035
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x30ad9281
// declared property getter: - (int)mediaTimeScale;	// 0x30ad9261
// declared property getter: - (id)mediaType;	// 0x30ad90d5
// declared property getter: - (id)metadataItems;	// 0x30ad91c5
// declared property getter: - (id)outputSettings;	// 0x30ad9109
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x30ad913d
// declared property setter: - (void)setAttachedToPixelBufferAdaptor:(BOOL)pixelBufferAdaptor;	// 0x30ad91b5
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x30ad9291
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x30ad9271
// declared property setter: - (void)setMediaType:(id)type;	// 0x30ad90e5
// declared property setter: - (void)setMetadataItems:(id)items;	// 0x30ad91d5
// declared property setter: - (void)setOutputSettings:(id)settings;	// 0x30ad9119
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x30ad914d
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x30ad9181
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x30ad922d
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x30ad9171
// declared property getter: - (CGAffineTransform)transform;	// 0x30ad91f9
@end

