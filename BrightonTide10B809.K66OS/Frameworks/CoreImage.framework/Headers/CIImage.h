/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"


@interface CIImage : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
}
+ (id)emptyImage;	// 0x314f44dd
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x314f34c1
+ (id)imageWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x314f3459
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x314f29a9
+ (id)imageWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x314f29c9
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x314f3ed5
+ (id)imageWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x314f3ef5
+ (id)imageWithColor:(id)color;	// 0x314f4029
+ (id)imageWithContentsOfFile:(id)file;	// 0x314f4951
+ (id)imageWithContentsOfFile:(id)file options:(id)options;	// 0x314f4971
+ (id)imageWithContentsOfURL:(id)url;	// 0x314f4889
+ (id)imageWithContentsOfURL:(id)url options:(id)options;	// 0x314f489d
+ (id)imageWithData:(id)data;	// 0x314f46cd
+ (id)imageWithData:(id)data options:(id)options;	// 0x314f4719
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface;	// 0x314f2441
+ (id)imageWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x314f2461
+ (id)imageWithInternalRepresentation:(void *)internalRepresentation;	// 0x314f5969
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x314f39a1
+ (id)imageWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x314f3a01
+ (id)noiseImage;	// 0x314f41ed
+ (id)noiseImagePadded;	// 0x314f4355
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format colorSpace:(CGColorSpaceRef)space;	// 0x314f3649
- (id)initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x314f36dd
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x314f2a15
- (id)initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x314f2db1
- (id)initWithCGImageSource:(CGImageSourceRef)cgimageSource index:(unsigned long)index options:(id)options;	// 0x314f31b9
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer;	// 0x314f3f41
- (id)initWithCVPixelBuffer:(CVBufferRef)cvpixelBuffer options:(id)options;	// 0x314f3f55
- (id)initWithCoder:(id)coder;	// 0x314f56e1
- (id)initWithColor:(id)color;	// 0x314f4155
- (id)initWithColorR:(float)colorR G:(float)g B:(float)b A:(float)a;	// 0x314f4071
- (id)initWithContentsOfFile:(id)file;	// 0x314f49bd
- (id)initWithContentsOfFile:(id)file options:(id)options;	// 0x314f49d1
- (id)initWithContentsOfURL:(id)url;	// 0x314f48e9
- (id)initWithContentsOfURL:(id)url options:(id)options;	// 0x314f48fd
- (id)initWithData:(id)data;	// 0x314f4765
- (id)initWithData:(id)data options:(id)options;	// 0x314f4779
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x314f24ad
- (id)initWithIOSurface:(IOSurfaceRef)iosurface options:(id)options;	// 0x314f24c1
- (id)initWithTexture:(unsigned)texture size:(CGSize)size flipped:(BOOL)flipped colorSpace:(CGColorSpaceRef)space;	// 0x314f3a59
- (id)initWithTexture:(unsigned)texture size:(CGSize)size options:(id)options;	// 0x314f3b49
- (id)_autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties context:(id)context options:(id)options;	// 0x31513ec1
- (id)_dictForFeature:(id)feature scale:(float)scale imageHeight:(float)height;	// 0x31513839
- (id)_initWithBitmapData:(id)bitmapData bytesPerRow:(unsigned long)row size:(CGSize)size format:(int)format options:(id)options;	// 0x314f3529
- (id)_initWithCGImage:(CGImageRef)cgimage options:(id)options;	// 0x314f2a29
- (id)_initWithInternalRepresentation:(void *)internalRepresentation;	// 0x314f59b1
- (void *)_internalRepresentation;	// 0x314f5a11
- (id)_scaleImageToMaxDimension:(unsigned)maxDimension;	// 0x31512ba1
- (id)autoAdjustmentFilters;	// 0x315137f1
- (id)autoAdjustmentFiltersWithImageProperties:(id)imageProperties options:(id)options;	// 0x31512c61
- (id)autoAdjustmentFiltersWithOptions:(id)options;	// 0x31513805
- (id)autoRedEyeFilterWithFeatures:(id)features imageProperties:(id)properties options:(id)options;	// 0x315143bd
- (id)autoRedEyeFilterWithFeatures:(id)features options:(id)options;	// 0x315143e9
- (id)copyWithZone:(NSZone *)zone;	// 0x314f54d1
- (void)dealloc;	// 0x314f5305
- (id)description;	// 0x314f5349
- (void)encodeWithCoder:(id)coder;	// 0x314f54e1
- (CGRect)extent;	// 0x314f52e9
- (id)filteredImage:(id)image keysAndValues:(id)values;	// 0x314f5441
- (id)imageByApplyingBlur:(double)blur;	// 0x314f5051
- (id)imageByApplyingGamma:(double)gamma;	// 0x314f4ef9
- (id)imageByApplyingLanczosScale:(double)scale aspectRatio:(double)ratio;	// 0x314f5199
- (id)imageByApplyingOrientation:(int)orientation;	// 0x314f4665
- (id)imageByApplyingTransform:(CGAffineTransform)transform;	// 0x314f4a11
- (id)imageByCroppingToRect:(CGRect)rect;	// 0x314f4b99
- (id)imageByPremultiplying;	// 0x314f4d15
- (id)imageByUnpremultiplying;	// 0x314f4e01
- (CGAffineTransform)imageTransformForOrientation:(int)orientation;	// 0x314f4531
- (id)properties;	// 0x314f542d
- (CGRect)regionOfInterestForImage:(id)image inRect:(CGRect)rect;	// 0x314f5a21
@end

