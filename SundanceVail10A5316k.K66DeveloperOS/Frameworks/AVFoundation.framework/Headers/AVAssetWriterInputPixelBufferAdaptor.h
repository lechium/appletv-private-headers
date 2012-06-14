/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetWriterInputPixelBufferAdaptorInternal, NSDictionary, AVAssetWriterInput;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject {
@private
	AVAssetWriterInputPixelBufferAdaptorInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetWriterInput *assetWriterInput;	// G=0x367384a9; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x36738519; 
@property(readonly, assign, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x367384c9; 
+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x367380d5
+ (id)keyPathsForValuesAffectingPixelBufferPool;	// 0x367384f1
- (id)init;	// 0x36738125
- (id)initWithAssetWriterInput:(id)assetWriterInput sourcePixelBufferAttributes:(id)attributes;	// 0x36738139
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x36738541
// declared property getter: - (id)assetWriterInput;	// 0x367384a9
- (void)dealloc;	// 0x36738375
- (id)description;	// 0x36738425
- (void)finalize;	// 0x367383e1
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x36738519
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x367384c9
@end

