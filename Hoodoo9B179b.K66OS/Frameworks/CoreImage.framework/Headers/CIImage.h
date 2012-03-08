/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library


@interface CIImage : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
}
+ (id)emptyImage;	// 0x36d59ad9
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36d5938d
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36d59325
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x36d58845
+ (id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36d58865
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36d59835
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x36d59855
+ (id)imageWithColor:(id)color;	// 0x36d59911
+ (id)imageWithContentsOfFile:(id)file;	// 0x36d59f39
+ (id)imageWithContentsOfFile:(id)file options:(id)options;	// 0x36d59f59
+ (id)imageWithContentsOfURL:(id)url;	// 0x36d59e71
+ (id)imageWithContentsOfURL:(id)url options:(id)options;	// 0x36d59e85
+ (id)imageWithData:(id)data;	// 0x36d59ca9
+ (id)imageWithData:(id)data options:(id)options;	// 0x36d59cf5
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface;	// 0x36d583ed
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x36d5840d
+ (id)imageWithInternalRepresentation:(void *)internalRepresentation;	// 0x36d5a779
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x36d59511
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36d595a5
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x36d588b1
- (id)initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36d58bd1
- (id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;	// 0x36d590b5
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x36d598a1
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x36d598b5
- (id)initWithCoder:(id)coder;	// 0x36d5a4e1
- (id)initWithColor:(id)color;	// 0x36d59a41
- (id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;	// 0x36d59959
- (id)initWithContentsOfFile:(id)file;	// 0x36d59fa5
- (id)initWithContentsOfFile:(id)file options:(id)options;	// 0x36d59fb9
- (id)initWithContentsOfURL:(id)url;	// 0x36d59ed1
- (id)initWithContentsOfURL:(id)url options:(id)options;	// 0x36d59ee5
- (id)initWithData:(id)data;	// 0x36d59d41
- (id)initWithData:(id)data options:(id)options;	// 0x36d59d55
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x36d58459
- (id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x36d5846d
- (id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;	// 0x36d729e9
- (id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;	// 0x36d72355
- (id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x36d593f5
- (id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x36d588c5
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x36d5a7c1
- (void *)_internalRepresentation;	// 0x36d5a821
- (id)_scaleImageToMaxDimension:(unsigned)maxDimension;	// 0x36d716f5
- (IOSurfaceRef)_surfaceAndFormat:(int *)format;	// 0x36d5a869
- (IOSurfaceRef)_surfaceWithFormat:(int)format;	// 0x36d5a831
- (id)autoAdjustmentFilters;	// 0x36d7230d
- (id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;	// 0x36d717b1
- (id)autoAdjustmentFiltersWithOptions:(id)options;	// 0x36d72321
- (id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;	// 0x36d72ec5
- (id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;	// 0x36d72ef1
- (id)copyWithZone:(NSZone *)zone;	// 0x36d5a2c5
- (void)dealloc;	// 0x36d5a0f9
- (id)description;	// 0x36d5a13d
- (void)encodeWithCoder:(id)coder;	// 0x36d5a2d5
- (CGRect)extent;	// 0x36d5a0dd
- (id)filteredImage:(id)image keysAndValues:(id)values;	// 0x36d5a235
- (id)imageByApplyingOrientation:(int)orientation;	// 0x36d59c45
- (id)imageByApplyingTransform:(CGAffineTransform)transform;	// 0x36d59ff9
- (id)imageByCroppingToRect:(CGRect)rect;	// 0x36d5a075
- (CGAffineTransform)imageTransformForOrientation:(int)orientation;	// 0x36d59b2d
- (id)properties;	// 0x36d5a221
@end

