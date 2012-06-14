/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


@interface CIContext : NSObject {
	CIContextInternal *_priv;	// 4 = 0x4
}
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b942b9
+ (id)_singletonContext;	// 0x36b93d91
+ (BOOL)applicationIsInForegroundState;	// 0x36b95709
+ (id)clContextOptions:(id)options;	// 0x36b95965
+ (id)context;	// 0x36b93dfd
+ (id)contextWithEAGLContext:(id)eaglcontext;	// 0x36b93f09
+ (id)contextWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36b93f51
+ (id)contextWithOptions:(id)options;	// 0x36b93e1d
+ (id)glesContextOptions:(id)options;	// 0x36b958fd
+ (Context *)glesInternalContextOptions:(id)options;	// 0x36b9571d
- (id)init;	// 0x36b941d1
- (id)initWithEAGLContext:(id)eaglcontext;	// 0x36b93f9d
- (id)initWithEAGLContext:(id)eaglcontext options:(id)options;	// 0x36b93fb1
- (CGColorSpaceRef)_colorspace;	// 0x36b95bb5
- (void)_gpuContextCheck;	// 0x36b95bc9
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x36b95b3d
- (void)_insertEventMarker:(const char *)marker;	// 0x36b94991
- (bool)_isEAGLBackedContext;	// 0x36b94961
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect;	// 0x36b953f1
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format;	// 0x36b95451
- (CGImageRef)createCGImage:(id)image fromRect:(CGRect)rect format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b954a1
- (IOSurfaceRef)createIOSurface:(id)surface;	// 0x36b94e39
- (IOSurfaceRef)createIOSurface:(id)surface fromRect:(CGRect)rect;	// 0x36b94e8d
- (void)dealloc;	// 0x36b94249
- (void)drawImage:(id)image atPoint:(CGPoint)point fromRect:(CGRect)rect;	// 0x36b949c1
- (void)drawImage:(id)image inRect:(CGRect)rect fromRect:(CGRect)rect3;	// 0x36b94a41
- (CGSize)inputImageMaximumSize;	// 0x36b956a1
- (void)lock;	// 0x36b93d69
- (unsigned long)maximumInputImageSize;	// 0x36b95671
- (unsigned long)maximumOutputImageSize;	// 0x36b95689
- (CGSize)outputImageMaximumSize;	// 0x36b956d5
- (void)render:(id)render toBitmap:(void *)bitmap rowBytes:(int)bytes bounds:(CGRect)bounds format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36b942e1
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36b94625
- (void)render:(id)render toCVPixelBuffer:(CVBufferRef)cvpixelBuffer bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b94699
- (void)render:(id)render toIOSurface:(IOSurfaceRef)iosurface bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b9500d
- (void)render:(id)render toTexture:(unsigned)texture bounds:(CGRect)bounds colorSpace:(CGColorSpaceRef)space;	// 0x36b94d41
- (void)unlock;	// 0x36b93d7d
@end

