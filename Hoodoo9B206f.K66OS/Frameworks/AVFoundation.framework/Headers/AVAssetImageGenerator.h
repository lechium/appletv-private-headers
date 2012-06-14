/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetImageGeneratorInternal, AVVideoComposition, NSString;

@interface AVAssetImageGenerator : NSObject {
@private
	AVAssetImageGeneratorInternal *_priv;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *apertureMode;	// G=0x326901f1; S=0x32690195; 
@property(assign, nonatomic) BOOL appliesPreferredTrackTransform;	// G=0x32690121; S=0x32690101; 
@property(assign, nonatomic) CGSize maximumSize;	// G=0x32690169; S=0x32690141; 
@property(assign, nonatomic) XXStruct_pwHToB requestedTimeToleranceAfter;	// G=0x32690435; S=0x326903f5; 
@property(assign, nonatomic) XXStruct_pwHToB requestedTimeToleranceBefore;	// G=0x326903b1; S=0x32690371; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x32690351; S=0x32690211; 
+ (id)assetImageGeneratorWithAsset:(id)asset;	// 0x3268e93d
- (id)init;	// 0x3268e985
- (id)initWithAsset:(id)asset;	// 0x3268e999
- (id)_NSErrorForError:(long)error;	// 0x3269126d
- (CGImageRef)_copyCGImageAtTime:(XXStruct_pwHToB)time usingAssetReader:(id)reader error:(id *)error;	// 0x3269101d
- (CFDictionaryRef)_createPixelBufferAttributesWithSize:(CGSize)size;	// 0x3268f2b9
- (void)_didGenerateCGImage:(id)image;	// 0x326906b1
- (void)_ensureFigAssetImageGenerator;	// 0x3268f145
- (void)_failedToGenerateCGImage:(id)generateCGImage;	// 0x326908b1
- (id)_makeAutoreleasedAssetReader;	// 0x3268f305
- (id)_optionsDictionary;	// 0x32690479
- (id)_requestWithRequestID:(id)requestID;	// 0x32690d4d
- (CGSize)_scaledSizeForRenderSize:(CGSize)renderSize;	// 0x32690f45
- (void)_serverDied;	// 0x32690b0d
// declared property getter: - (id)apertureMode;	// 0x326901f1
// declared property getter: - (BOOL)appliesPreferredTrackTransform;	// 0x32690121
- (void)cancelAllCGImageGeneration;	// 0x3269009d
- (CGImageRef)copyCGImageAtTime:(XXStruct_pwHToB)time actualTime:(XXStruct_pwHToB *)time2 error:(id *)error;	// 0x3268f595
- (void)dealloc;	// 0x3268ebf9
- (void)finalize;	// 0x3268ef71
- (void)generateCGImagesAsynchronouslyForTimes:(id)times completionHandler:(id)handler;	// 0x3268f761
// declared property getter: - (CGSize)maximumSize;	// 0x32690169
// declared property getter: - (XXStruct_pwHToB)requestedTimeToleranceAfter;	// 0x32690435
// declared property getter: - (XXStruct_pwHToB)requestedTimeToleranceBefore;	// 0x326903b1
// declared property setter: - (void)setApertureMode:(id)mode;	// 0x32690195
// declared property setter: - (void)setAppliesPreferredTrackTransform:(BOOL)transform;	// 0x32690101
// declared property setter: - (void)setMaximumSize:(CGSize)size;	// 0x32690141
// declared property setter: - (void)setRequestedTimeToleranceAfter:(XXStruct_pwHToB)after;	// 0x326903f5
// declared property setter: - (void)setRequestedTimeToleranceBefore:(XXStruct_pwHToB)before;	// 0x32690371
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x32690211
// declared property getter: - (id)videoComposition;	// 0x32690351
@end
