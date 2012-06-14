/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {
	NSMutableArray *stillImageRequests;	// 4 = 0x4
	CGSize previewImageSize;	// 8 = 0x8
	unsigned long imageDataFormatType;	// 16 = 0x10
	long long imageMaxDataSize;	// 20 = 0x14
	float jpegQuality;	// 28 = 0x1c
	BOOL jpegQualitySpecified;	// 32 = 0x20
	BOOL HDRCaptureEnabled;	// 33 = 0x21
	BOOL EV0CaptureEnabled;	// 34 = 0x22
	BOOL chromaNoiseReductionEnabled;	// 35 = 0x23
	BOOL suspendsVideoProcessingDuringCapture;	// 36 = 0x24
	NSDictionary *outputSettings;	// 40 = 0x28
	BOOL isCapturingPhoto;	// 44 = 0x2c
	BOOL rawCaptureEnabled;	// 45 = 0x2d
}
- (id)init;	// 0x3676aa39
- (void)dealloc;	// 0x3676ab5d
@end

