/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MPPipelineJPEGDecoder : NSObject {
	StackItem *stackTopBGRA;	// 4 = 0x4
	StackItem *stackTop420;	// 8 = 0x8
	StackItem *stackTopJPEG;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *stackQueueBGRA;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *stackQueue420;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *stackQueueJPEG;	// 24 = 0x18
	CFDictionaryRef acceleratorOptions;	// 28 = 0x1c
	CFDictionaryRef surfaceBGRAOptions;	// 32 = 0x20
	CGSize imageSize;	// 36 = 0x24
	unsigned requestedImageCount;	// 44 = 0x2c
	int currentBGRASurfaceCount;	// 48 = 0x30
	unsigned maxJPEGSize;	// 52 = 0x34
}
@property(assign) unsigned maxJPEGSize;	// G=0x350502d5; S=0x350502e9; @synthesize
+ (IOSurfaceAcceleratorRef)_createAccelerator;	// 0x3504f9a1
+ (IOSurfaceAcceleratorRef)_popSurfaceAccelerator;	// 0x3504fa39
+ (void)_pushSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;	// 0x3504f9c9
+ (id)_stackQueueTransferSession;	// 0x3504f949
- (id)initWithSize:(CGSize)size cachedCount:(int)count;	// 0x3504f12d
- (IOSurfaceRef)_create420Surface;	// 0x3504fadd
- (IOSurfaceRef)_createBGRASurface;	// 0x3504fc1d
- (IOSurfaceRef)_createJPEGSurface;	// 0x3504fb0d
- (void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;	// 0x35050161
- (id)_newImageFrom420Surface:(IOSurfaceRef)a420Surface;	// 0x3505008d
- (IOSurfaceRef)_pop420Surface;	// 0x3504fce9
- (IOSurfaceRef)_popBGRASurface;	// 0x3504ff75
- (IOSurfaceRef)_popJPEGSurfaceOfSize:(unsigned)size;	// 0x3504fe01
- (void)_push420Surface:(IOSurfaceRef)surface;	// 0x3504fd89
- (void)_pushBGRASurface:(IOSurfaceRef)surface;	// 0x35050015
- (void)_pushJPEGSurface:(IOSurfaceRef)surface;	// 0x3504fefd
- (void)_receivedMemoryWarning:(id)warning;	// 0x35050211
- (BOOL)_removeBGRASurface;	// 0x3504fc51
- (void)dealloc;	// 0x3504f805
// declared property getter: - (unsigned)maxJPEGSize;	// 0x350502d5
- (id)newImageFrom420Data:(id)a420Data;	// 0x3504f641
- (id)newImageFromJPEGData:(id)jpegdata;	// 0x3504f759
// declared property setter: - (void)setMaxJPEGSize:(unsigned)size;	// 0x350502e9
@end

