/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"


@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
	id _sbufCompletionBlock;	// 4 = 0x4
	id _iosurfaceCompletionBlock;	// 8 = 0x8
	int _stillImageOrientation;	// 12 = 0xc
	BOOL _stillImageMirrored;	// 16 = 0x10
	CGSize _previewImageSize;	// 20 = 0x14
	unsigned long _imageDataFormatType;	// 28 = 0x1c
	BOOL _isHDRImage;	// 32 = 0x20
	BOOL _isEV0Image;	// 33 = 0x21
	BOOL _chromaNoiseReductionEnabled;	// 34 = 0x22
	BOOL _suspendsVideoProcessing;	// 35 = 0x23
}
@property(assign) BOOL chromaNoiseReductionEnabled;	// G=0x30b041c1; S=0x30b041d1; @synthesize=_chromaNoiseReductionEnabled
@property(assign) unsigned long imageDataFormatType;	// G=0x30b040b1; S=0x30b040c1; @synthesize=_imageDataFormatType
@property(copy) id iosurfaceCompletionBlock;	// G=0x30b04149; S=0x30b0415d; @synthesize=_iosurfaceCompletionBlock
@property(assign) BOOL isEV0Image;	// G=0x30b041a1; S=0x30b041b1; @synthesize=_isEV0Image
@property(assign) BOOL isHDRImage;	// G=0x30b04181; S=0x30b04191; @synthesize=_isHDRImage
@property(assign) CGSize previewImageSize;	// G=0x30b04081; S=0x30b0409d; @synthesize=_previewImageSize
@property(copy) id sbufCompletionBlock;	// G=0x30b04111; S=0x30b04125; @synthesize=_sbufCompletionBlock
@property(assign, getter=isStillImageMirrored) BOOL stillImageMirrored;	// G=0x30b040d1; S=0x30b040e1; @synthesize=_stillImageMirrored
@property(assign) int stillImageOrientation;	// G=0x30b040f1; S=0x30b04101; @synthesize=_stillImageOrientation
@property(assign) BOOL suspendsVideoProcessing;	// G=0x30b041e1; S=0x30b041f1; @synthesize=_suspendsVideoProcessing
+ (id)request;	// 0x30b03e11
// declared property getter: - (BOOL)chromaNoiseReductionEnabled;	// 0x30b041c1
- (id)copyWithZone:(NSZone *)zone;	// 0x30b03e55
- (void)dealloc;	// 0x30b04029
// declared property getter: - (unsigned long)imageDataFormatType;	// 0x30b040b1
// declared property getter: - (id)iosurfaceCompletionBlock;	// 0x30b04149
// declared property getter: - (BOOL)isEV0Image;	// 0x30b041a1
// declared property getter: - (BOOL)isHDRImage;	// 0x30b04181
// declared property getter: - (BOOL)isStillImageMirrored;	// 0x30b040d1
// declared property getter: - (CGSize)previewImageSize;	// 0x30b04081
// declared property getter: - (id)sbufCompletionBlock;	// 0x30b04111
// declared property setter: - (void)setChromaNoiseReductionEnabled:(BOOL)enabled;	// 0x30b041d1
// declared property setter: - (void)setImageDataFormatType:(unsigned long)type;	// 0x30b040c1
// declared property setter: - (void)setIosurfaceCompletionBlock:(id)block;	// 0x30b0415d
// declared property setter: - (void)setIsEV0Image:(BOOL)image;	// 0x30b041b1
// declared property setter: - (void)setIsHDRImage:(BOOL)image;	// 0x30b04191
// declared property setter: - (void)setPreviewImageSize:(CGSize)size;	// 0x30b0409d
// declared property setter: - (void)setSbufCompletionBlock:(id)block;	// 0x30b04125
// declared property setter: - (void)setStillImageMirrored:(BOOL)mirrored;	// 0x30b040e1
// declared property setter: - (void)setStillImageOrientation:(int)orientation;	// 0x30b04101
// declared property setter: - (void)setSuspendsVideoProcessing:(BOOL)processing;	// 0x30b041f1
// declared property getter: - (int)stillImageOrientation;	// 0x30b040f1
// declared property getter: - (BOOL)suspendsVideoProcessing;	// 0x30b041e1
@end

