/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface AVVideoCompositionRenderContextInternal : NSObject {
	NSDictionary *_basisProperties;	// 4 = 0x4
	CGSize _size;	// 8 = 0x8
	CGAffineTransform _renderTransform;	// 16 = 0x10
	float _renderScale;	// 40 = 0x28
	XXStruct_2PlTqB _pixelAspectRatio;	// 44 = 0x2c
	XXStruct_MnT3oC _edgeWidths;	// 52 = 0x34
	BOOL _highQualityRendering;	// 68 = 0x44
	NSDictionary *_clientRequiredPixelBufferAttributes;	// 72 = 0x48
	NSDictionary *_destinationDesiredPixelBufferAttributes;	// 76 = 0x4c
	CFDictionaryRef _pixelAspectRatioDict;	// 80 = 0x50
	CFDictionaryRef _cleanApertureDict;	// 84 = 0x54
	XXStruct_2PlTqB _destinationPixelBufferDimensions;	// 88 = 0x58
	NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;	// 96 = 0x60
	CVPixelBufferPoolRef _pixelBufferPool;	// 100 = 0x64
}
- (void)_willDeallocOrFinalize;	// 0x2c3297cd
- (void)dealloc;	// 0x2c329885
- (void)finalize;	// 0x2c329845
@end
