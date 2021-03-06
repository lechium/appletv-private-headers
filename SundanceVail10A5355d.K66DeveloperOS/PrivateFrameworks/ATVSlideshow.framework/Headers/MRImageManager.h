/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, MRContext, EAGLContext, NSMutableSet, NSMutableDictionary;

@interface MRImageManager : NSObject {
	MRContext *mBaseContext;	// 4 = 0x4
	EAGLContext *mImageGLContext;	// 8 = 0x8
	NSMutableDictionary *mImageInfos;	// 12 = 0xc
	NSLock *mImageInfosLock;	// 16 = 0x10
	NSMutableDictionary *mFBOs;	// 20 = 0x14
	NSMutableSet *mAvailableFBOs;	// 24 = 0x18
	NSMutableSet *mRecyclableFBOs;	// 28 = 0x1c
	NSMutableSet *mRemoteKeysToRelease;	// 32 = 0x20
	NSMutableDictionary *_assetMasters;	// 36 = 0x24
	unsigned long long mHostTime;	// 40 = 0x28
}
@property(readonly, assign) MRContext *baseContext;	// G=0x3211f735; @synthesize=mBaseContext
@property(assign, nonatomic) unsigned long long hostTime;	// G=0x3211f75d; S=0x3211f775; @synthesize=mHostTime
@property(readonly, assign) EAGLContext *imageGLContext;	// G=0x3211f749; @synthesize=mImageGLContext
+ (void)cleanupPictureCache;	// 0x32120491
+ (void)initialize;	// 0x3211d4d1
- (id)initWithBaseContext:(id)baseContext;	// 0x3211d551
- (CGImageRef)CGImageWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x3212013d
- (CGImageRef)CGImageWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x32120489
- (CGImageRef)CGImageWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x3211fdc1
- (IOSurfaceRef)IOSurfaceWithData:(id)data withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x3211f9a1
- (IOSurfaceRef)IOSurfaceWithMoviePath:(id)moviePath withOriginalSize:(CGSize)originalSize forSize:(CGSize)size atTime:(double)time orientation:(char *)orientation;	// 0x3211fdbd
- (IOSurfaceRef)IOSurfaceWithPath:(id)path withOriginalSize:(CGSize)originalSize forSize:(CGSize)size orientation:(char *)orientation;	// 0x3211f7e9
// declared property getter: - (id)baseContext;	// 0x3211f735
- (BOOL)configureMovieAtPath:(id)path forSize:(CGSize)size time:(double)time intoImageInfo:(id)info;	// 0x32120749
- (void)dealloc;	// 0x3211d70d
- (id)fboTextureWithSize:(CGSize)size;	// 0x3211dab1
// declared property getter: - (unsigned long long)hostTime;	// 0x3211f75d
- (id)imageFromMovieWithImageInfo:(id)imageInfo atTime:(double)time;	// 0x321207e5
// declared property getter: - (id)imageGLContext;	// 0x3211f749
- (id)optimizedPath:(id)path forSize:(CGSize)size;	// 0x3211f789
- (void)play:(BOOL)play forImageKey:(id)imageKey;	// 0x3211f4b1
- (void)purgeResources:(BOOL)resources;	// 0x3211d831
- (void)recycleFBOTexture:(id)texture;	// 0x3211dcdd
- (void)releaseImageBufferForImage:(id)image;	// 0x3211f261
- (void)releaseStuffForRemoteKey:(id)remoteKey;	// 0x321208c5
- (id)retainedByUserImageForAsset:(id)asset atSize:(CGSize)size andTime:(double)time previousImageBufferKey:(id)key options:(id)options;	// 0x3211dcfd
- (id)retainedByUserImageWithCGContext:(CGContextRef)cgcontext;	// 0x3211f661
- (id)retainedByUserImageWithSize:(CGSize)size andColor:(const float *)color;	// 0x3211f6c1
// declared property setter: - (void)setHostTime:(unsigned long long)time;	// 0x3211f775
- (void)setTime:(double)time forImageKey:(id)imageKey;	// 0x3211f589
@end

