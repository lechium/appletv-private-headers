/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray, CIImage;

@interface UIImage : NSObject <NSCoding> {
@private
	void *_imageRef;	// 4 = 0x4
	float _scale;	// 8 = 0x8
	struct {
		unsigned named : 1;
		unsigned imageOrientation : 3;
		unsigned cached : 1;
		unsigned hasBeenCached : 1;
		unsigned hasPattern : 1;
		unsigned isCIImage : 1;
	} _imageFlags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CGImageRef CGImage;	// G=0x350d0ba5; 
@property(readonly, assign, nonatomic) CIImage *CIImage;	// G=0x3526d49d; 
@property(readonly, assign, nonatomic) UIEdgeInsets capInsets;	// G=0x350cc679; 
@property(readonly, assign, nonatomic) double duration;	// G=0x350d4d21; 
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x350cc6a1; 
@property(readonly, assign, nonatomic) NSArray *images;	// G=0x350ea275; 
@property(readonly, assign, nonatomic) int leftCapWidth;	// G=0x350d4915; 
@property(readonly, assign, nonatomic) float scale;	// G=0x350cc1a9; 
@property(readonly, assign, nonatomic) CGSize size;	// G=0x350cc079; 
@property(readonly, assign, nonatomic) int topCapHeight;	// G=0x350d494d; 
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format;	// 0x3526efe1
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier format:(int)format scale:(float)scale;	// 0x3526f005
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier format:(int)format;	// 0x3526f079
+ (id)_applicationIconImageForBundleIdentifier:(id)bundleIdentifier roleIdentifier:(id)identifier format:(int)format scale:(float)scale;	// 0x3526f08d
+ (id)_backgroundGradientWithStartColor:(id)startColor andEndColor:(id)color;	// 0x3526da21
+ (id)_defaultBackgroundGradient;	// 0x3526db19
+ (void)_flushCacheOnMemoryWarning:(id)warning;	// 0x3526e80d
+ (void)_flushSharedImageCache;	// 0x35128cc5
+ (id)_iconForResourceProxy:(id)resourceProxy format:(int)format;	// 0x3526f121
+ (id)_iconForResourceProxy:(id)resourceProxy variant:(int)variant variantsScale:(float)scale;	// 0x3526f0b5
+ (int)_iconVariantForUIApplicationIconFormat:(int)uiapplicationIconFormat scale:(float *)scale;	// 0x3526ecdd
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint effectsImage:(id)image maskImage:(id)image4 style:(int)style;	// 0x35336fc9
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style;	// 0x3522b801
+ (id)_tintedImageForSize:(CGSize)size withTint:(id)tint maskImage:(id)image effectsImage:(id)image4 style:(int)style edgeInsets:(UIEdgeInsets)insets;	// 0x35337069
+ (id)animatedImageNamed:(id)named duration:(double)duration;	// 0x3526d4d1
+ (id)animatedImageWithImages:(id)images duration:(double)duration;	// 0x3526d775
+ (id)animatedResizableImageNamed:(id)named capInsets:(UIEdgeInsets)insets duration:(double)duration;	// 0x3526d719
+ (id)applicationImageNamed:(id)named;	// 0x3526d851
+ (id)imageAtPath:(id)path;	// 0x3526ded5
+ (id)imageFromAlbumArtData:(id)albumArtData height:(int)height width:(int)width bytesPerRow:(int)row cache:(BOOL)cache;	// 0x3526dbd1
+ (id)imageNamed:(id)named;	// 0x351497f1
+ (id)imageNamed:(id)named inBundle:(id)bundle;	// 0x350cb5fd
+ (id)imageWithCGImage:(CGImageRef)cgimage;	// 0x350d0bf1
+ (id)imageWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x350dae81
+ (id)imageWithCIImage:(id)ciimage;	// 0x3526ceb1
+ (id)imageWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x3526d921
+ (id)imageWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x3526dcbd
+ (id)imageWithContentsOfFile:(id)file;	// 0x350eb5e5
+ (id)imageWithData:(id)data;	// 0x3526ce1d
+ (id)imageWithData:(id)data scale:(float)scale;	// 0x3526ce65
+ (void)initialize;	// 0x350e9ad1
+ (id)kitImageNamed:(id)named;	// 0x350e9b59
+ (void)removeImageNameFromCache:(id)cache;	// 0x3526dedd
+ (void)setPreferredSharedImageScale:(float)scale;	// 0x3526decd
- (id)initWithCGImage:(CGImageRef)cgimage;	// 0x350d0c39
- (id)initWithCGImage:(CGImageRef)cgimage imageOrientation:(int)orientation;	// 0x35180e31
- (id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation;	// 0x350cbf25
- (id)initWithCIImage:(id)ciimage;	// 0x3526cf2d
- (id)initWithCIImage:(id)ciimage scale:(float)scale orientation:(int)orientation;	// 0x3526d975
- (id)initWithCoder:(id)coder;	// 0x3526d241
- (id)initWithContentsOfCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x3526dd0d
- (id)initWithContentsOfFile:(id)file;	// 0x350eb62d
- (id)initWithContentsOfFile:(id)file cache:(BOOL)cache;	// 0x35185501
- (id)initWithData:(id)data;	// 0x3517922d
- (id)initWithData:(id)data cache:(BOOL)cache;	// 0x3526dee5
- (id)initWithData:(id)data scale:(float)scale;	// 0x3526cef9
- (id)initWithIOSurface:(IOSurfaceRef)iosurface;	// 0x3526d90d
- (id)initWithImageRef:(CGImageRef)imageRef;	// 0x3526df81
// declared property getter: - (CGImageRef)CGImage;	// 0x350d0ba5
// declared property getter: - (id)CIImage;	// 0x3526d49d
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed;	// 0x3526f199
- (id)_applicationIconImageForFormat:(int)format precomposed:(BOOL)precomposed scale:(float)scale;	// 0x3526f1ed
- (id)_automationID;	// 0x351fe1b1
- (id)_bezeledImageWithShadowRed:(float)shadowRed green:(float)green blue:(float)blue alpha:(float)alpha fillRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 drawShadow:(BOOL)shadow;	// 0x3510d89d
- (CGRect)_contentStretchInPixels;	// 0x350d4e65
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)exteriorShadowRed green:(float)green blue:(float)blue alpha:(float)alpha interiorShadowRed:(float)red green:(float)green6 blue:(float)blue7 alpha:(float)alpha8 fillRed:(float)red9 green:(float)green10 blue:(float)blue11 alpha:(float)alpha12;	// 0x3526e8f5
- (id)_flatImageWithWhite:(float)white alpha:(float)alpha;	// 0x3526e821
- (BOOL)_hasBeenCached;	// 0x350d0e05
- (id)_imageScaledToProportion:(float)proportion interpolationQuality:(int)quality;	// 0x3526ebd1
- (id)_initWithData:(id)data preserveScale:(BOOL)scale;	// 0x3526d859
- (id)_initWithData:(id)data scale:(float)scale;	// 0x351791f9
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface imageOrientation:(int)orientation;	// 0x3523bedd
- (id)_initWithIOSurface:(IOSurfaceRef)iosurface scale:(float)scale orientation:(int)orientation;	// 0x350e2285
- (BOOL)_isCached;	// 0x350d9d0d
- (BOOL)_isNamed;	// 0x350d0df1
- (BOOL)_isResizable;	// 0x350d3dad
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x350cc69d
- (CGColorRef)_patternColor;	// 0x35185785
- (id)_selectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x3514d109
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x3526d4cd
- (void)_setCached:(BOOL)cached;	// 0x350cbfc5
- (void)_setNamed:(BOOL)named;	// 0x350cbfa9
- (id)_stretchableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x350ef949
- (id)_subimageInRect:(CGRect)rect;	// 0x352a4835
- (id)_unselectedTabBarItemImageWithTintColor:(id)tintColor;	// 0x3514ce6d
// declared property getter: - (UIEdgeInsets)capInsets;	// 0x350cc679
- (void)compositeToPoint:(CGPoint)point fromRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x3513deed
- (void)compositeToPoint:(CGPoint)point operation:(int)operation;	// 0x35258d59
- (void)compositeToPoint:(CGPoint)point operation:(int)operation fraction:(float)fraction;	// 0x35258d7d
- (void)compositeToRect:(CGRect)rect fromRect:(CGRect)rect2 operation:(int)operation fraction:(float)fraction;	// 0x3513d34d
- (id)copyWithZone:(NSZone *)zone;	// 0x3526d48d
- (void)dealloc;	// 0x350d0c5d
- (void)draw1PartImageInRect:(CGRect)rect;	// 0x351f93fd
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction;	// 0x3526e7a5
- (void)draw1PartImageInRect:(CGRect)rect fraction:(float)fraction operation:(int)operation;	// 0x35249fe9
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect;	// 0x351d0635
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x3526e6f5
- (void)draw3PartImageWithSliceRects:(XXStruct_UUz0SD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x3513dafd
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect;	// 0x3526df91
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect fraction:(float)fraction;	// 0x3526e4c9
- (void)draw9PartImageWithSliceRects:(XXStruct_4cr1oD)sliceRects inRect:(CGRect)rect operation:(int)operation fraction:(float)fraction;	// 0x3526e5dd
- (void)drawAsPatternInRect:(CGRect)rect;	// 0x3526d7ed
- (void)drawAtPoint:(CGPoint)point;	// 0x351552c9
- (void)drawAtPoint:(CGPoint)point blendMode:(int)mode alpha:(float)alpha;	// 0x350cbff9
- (void)drawInRect:(CGRect)rect;	// 0x3514d0d5
- (void)drawInRect:(CGRect)rect blendMode:(int)mode alpha:(float)alpha;	// 0x350cc1d5
// declared property getter: - (double)duration;	// 0x350d4d21
- (void)encodeWithCoder:(id)coder;	// 0x3526cf95
// declared property getter: - (int)imageOrientation;	// 0x350cc6a1
- (CGImageRef)imageRef;	// 0x35128e1d
// declared property getter: - (id)images;	// 0x350ea275
- (IOSurfaceRef)ioSurface;	// 0x352238c5
// declared property getter: - (int)leftCapWidth;	// 0x350d4915
- (id)patternColor;	// 0x3522f889
- (id)resizableImageWithCapInsets:(UIEdgeInsets)capInsets;	// 0x350ef985
// declared property getter: - (float)scale;	// 0x350cc1a9
// declared property getter: - (CGSize)size;	// 0x350cc079
- (id)stretchableImageWithLeftCapWidth:(int)leftCapWidth topCapHeight:(int)height;	// 0x350ef899
// declared property getter: - (int)topCapHeight;	// 0x350d494d
- (BOOL)writeToCPBitmapFile:(id)cpbitmapFile flags:(int)flags;	// 0x3526ddb9
@end

