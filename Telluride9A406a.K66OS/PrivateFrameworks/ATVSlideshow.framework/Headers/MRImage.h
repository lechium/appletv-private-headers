/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class EAGLContext, NSDictionary, NSMutableDictionary, NSString, MRImageManager, MRTexture;

@interface MRImage : NSObject {
	MRImageManager *mImageManager;	// 4 = 0x4
	unsigned long mWidth;	// 8 = 0x8
	unsigned long mHeight;	// 12 = 0xc
	MRImage *mRefImage;	// 16 = 0x10
	NSString *mImageBufferKey;	// 20 = 0x14
	MRTexture *mTexture;	// 24 = 0x18
	unsigned long mPixelFormat;	// 28 = 0x1c
	float mCenterX;	// 32 = 0x20
	float mCenterY;	// 36 = 0x24
	float mScale;	// 40 = 0x28
	float mRotationAngle;	// 44 = 0x2c
	NSString *mFilterID;	// 48 = 0x30
	NSDictionary *mShader;	// 52 = 0x34
	int mClampMode;	// 56 = 0x38
	double mSourceTimeStamp;	// 60 = 0x3c
	double mRenderTime;	// 68 = 0x44
	int mRetainByUserCount;	// 76 = 0x4c
	float mColor[4];	// 80 = 0x50
	IOSurfaceRef mIOSurface;	// 96 = 0x60
	CGContextRef mCGContext;	// 100 = 0x64
	void *mData;	// 104 = 0x68
	unsigned long mDataSize;	// 108 = 0x6c
	unsigned long mDataRowBytes;	// 112 = 0x70
	unsigned long mDataWidth;	// 116 = 0x74
	unsigned long mDataHeight;	// 120 = 0x78
	unsigned char mOrientation;	// 124 = 0x7c
	NSMutableDictionary *mUserData;	// 128 = 0x80
	unsigned long mFlags;	// 132 = 0x84
}
@property(readonly, assign) float aspectRatio;	// G=0x349f6dfd; 
@property(assign) float centerX;	// G=0x349f7a79; S=0x349f7a89; @synthesize=mCenterX
@property(assign) float centerY;	// G=0x349f7a99; S=0x349f7aa9; @synthesize=mCenterY
@property(assign) int clampMode;	// G=0x349f7c25; S=0x349f7c35; @synthesize=mClampMode
@property(copy, nonatomic) NSString *filterID;	// G=0x349f733d; S=0x349f7af9; @synthesize=mFilterID
@property(assign) BOOL filtersNearest;	// G=0x349f6bb5; S=0x349f6bc9; 
@property(readonly, assign) BOOL hasKBOrShader;	// G=0x349f7365; 
@property(assign) BOOL hasKenBurns;	// G=0x349f6cad; S=0x349f6cc1; 
@property(readonly, assign) unsigned long height;	// G=0x349f7a59; @synthesize=mHeight
@property(readonly, assign) NSString *imageBufferKey;	// G=0x349f6c71; 
@property(readonly, assign) MRImageManager *imageManager;	// G=0x349f7a39; @synthesize=mImageManager
@property(readonly, assign) BOOL isEmpty;	// G=0x349f6e35; 
@property(readonly, assign) BOOL isMonochromatic;	// G=0x349f6ba1; 
@property(readonly, assign) BOOL isOpaque;	// G=0x349f6bed; 
@property(readonly, assign) BOOL isPremultiplied;	// G=0x349f6b8d; 
@property(readonly, assign) BOOL isYUV;	// G=0x349f73fd; 
@property(readonly, assign) unsigned long pixelFormat;	// G=0x349f7a69; @synthesize=mPixelFormat
@property(assign) BOOL preservesAspectRatio;	// G=0x349f6c39; S=0x349f6c4d; 
@property(assign) double renderTime;	// G=0x349f7bbd; S=0x349f7bf1; @synthesize=mRenderTime
@property(assign) float rotationAngle;	// G=0x349f7ad9; S=0x349f7ae9; @synthesize=mRotationAngle
@property(assign) float scale;	// G=0x349f7ab9; S=0x349f7ac9; @synthesize=mScale
@property(retain) NSDictionary *shader;	// G=0x349f7b1d; S=0x349f7b31; @synthesize=mShader
@property(assign) double sourceTimeStamp;	// G=0x349f7b55; S=0x349f7b89; @synthesize=mSourceTimeStamp
@property(readonly, assign) MRTexture *texture;	// G=0x349f792d; 
@property(readonly, assign) unsigned textureName;	// G=0x349f7459; 
@property(readonly, assign) unsigned textureTarget;	// G=0x349f7981; 
@property(readonly, assign) EAGLContext *updateGLContext;	// G=0x349f79dd; 
@property(readonly, assign) NSMutableDictionary *userData;	// G=0x349f6ce5; 
@property(assign) BOOL usesBackgroundColorAsBorderColor;	// G=0x349f6b55; S=0x349f6b69; 
@property(assign) BOOL usesMipmapping;	// G=0x349f6c01; S=0x349f6c15; 
@property(readonly, assign) unsigned long width;	// G=0x349f7a49; @synthesize=mWidth
- (id)init;	// 0x349f5e2d
- (id)initWithCGContext:(CGContextRef)cgcontext imageManager:(id)manager;	// 0x349f66a5
- (id)initWithCGContext:(CGContextRef)cgcontext size:(CGSize)size imageManager:(id)manager;	// 0x349f6589
- (id)initWithCGImage:(CGImageRef)cgimage textureSize:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager monochromatic:(BOOL)monochromatic;	// 0x349f6279
- (id)initWithIOSurface:(IOSurfaceRef)iosurface imageBufferKey:(id)key imageManager:(id)manager;	// 0x349f6219
- (id)initWithIOSurface:(IOSurfaceRef)iosurface size:(CGSize)size orientation:(int)orientation imageBufferKey:(id)key imageManager:(id)manager;	// 0x349f6135
- (id)initWithImage:(id)image;	// 0x349f60b1
- (id)initWithSize:(CGSize)size andColor:(const float *)color imageBufferKey:(id)key imageManager:(id)manager options:(id)options;	// 0x349f5e91
- (id)initWithTexture:(id)texture;	// 0x349f6031
// declared property getter: - (float)aspectRatio;	// 0x349f6dfd
// declared property getter: - (float)centerX;	// 0x349f7a79
// declared property getter: - (float)centerY;	// 0x349f7a99
// declared property getter: - (int)clampMode;	// 0x349f7c25
- (void)cleanup;	// 0x349f677d
- (void)dealloc;	// 0x349f66fd
// declared property getter: - (id)filterID;	// 0x349f733d
// declared property getter: - (BOOL)filtersNearest;	// 0x349f6bb5
- (void)finalize;	// 0x349f673d
- (void)getMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x349f6fb9
// declared property getter: - (BOOL)hasKBOrShader;	// 0x349f7365
// declared property getter: - (BOOL)hasKenBurns;	// 0x349f6cad
// declared property getter: - (unsigned long)height;	// 0x349f7a59
// declared property getter: - (id)imageBufferKey;	// 0x349f6c71
// declared property getter: - (id)imageManager;	// 0x349f7a39
- (id)insertingInCollection;	// 0x349f6a31
// declared property getter: - (BOOL)isEmpty;	// 0x349f6e35
// declared property getter: - (BOOL)isMonochromatic;	// 0x349f6ba1
// declared property getter: - (BOOL)isOpaque;	// 0x349f6bed
// declared property getter: - (BOOL)isPremultiplied;	// 0x349f6b8d
// declared property getter: - (BOOL)isYUV;	// 0x349f73fd
- (void)kenburnsMatrix:(float [16])matrix forReferenceAspectRatio:(float)referenceAspectRatio;	// 0x349f6e61
// declared property getter: - (unsigned long)pixelFormat;	// 0x349f7a69
// declared property getter: - (BOOL)preservesAspectRatio;	// 0x349f6c39
- (CGSize)relativeSizeInContextPixelSize:(CGSize)contextPixelSize;	// 0x349f72dd
- (void)releaseByUser;	// 0x349f69e5
- (void)removingFromCollection;	// 0x349f6a5d
// declared property getter: - (double)renderTime;	// 0x349f7bbd
- (id)retainByUser;	// 0x349f69b5
- (id)retainedByUserImage;	// 0x349f6a85
- (id)retainedByUserImageWithShader:(id)shader;	// 0x349f6ae1
// declared property getter: - (float)rotationAngle;	// 0x349f7ad9
// declared property getter: - (float)scale;	// 0x349f7ab9
// declared property setter: - (void)setCenterX:(float)x;	// 0x349f7a89
// declared property setter: - (void)setCenterY:(float)y;	// 0x349f7aa9
// declared property setter: - (void)setClampMode:(int)mode;	// 0x349f7c35
// declared property setter: - (void)setFilterID:(id)anId;	// 0x349f7af9
// declared property setter: - (void)setFiltersNearest:(BOOL)nearest;	// 0x349f6bc9
// declared property setter: - (void)setHasKenBurns:(BOOL)burns;	// 0x349f6cc1
- (void)setOnContext:(id)context onTextureUnit:(unsigned)unit withReferenceAspectRatio:(float)referenceAspectRatio state:(XXStruct_S04vsC *)state;	// 0x349f72a5
// declared property setter: - (void)setPreservesAspectRatio:(BOOL)ratio;	// 0x349f6c4d
// declared property setter: - (void)setRenderTime:(double)time;	// 0x349f7bf1
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x349f7ae9
// declared property setter: - (void)setScale:(float)scale;	// 0x349f7ac9
// declared property setter: - (void)setShader:(id)shader;	// 0x349f7b31
// declared property setter: - (void)setSourceTimeStamp:(double)stamp;	// 0x349f7b89
// declared property setter: - (void)setUsesBackgroundColorAsBorderColor:(BOOL)color;	// 0x349f6b69
// declared property setter: - (void)setUsesMipmapping:(BOOL)mipmapping;	// 0x349f6c15
// declared property getter: - (id)shader;	// 0x349f7b1d
// declared property getter: - (double)sourceTimeStamp;	// 0x349f7b55
// declared property getter: - (id)texture;	// 0x349f792d
// declared property getter: - (unsigned)textureName;	// 0x349f7459
// declared property getter: - (unsigned)textureTarget;	// 0x349f7981
- (void)unsetOnContext:(id)context onTextureUnit:(unsigned)unit state:(const XXStruct_S04vsC *)state;	// 0x349f72c1
// declared property getter: - (id)updateGLContext;	// 0x349f79dd
// declared property getter: - (id)userData;	// 0x349f6ce5
// declared property getter: - (BOOL)usesBackgroundColorAsBorderColor;	// 0x349f6b55
// declared property getter: - (BOOL)usesMipmapping;	// 0x349f6c01
// declared property getter: - (unsigned long)width;	// 0x349f7a49
@end

