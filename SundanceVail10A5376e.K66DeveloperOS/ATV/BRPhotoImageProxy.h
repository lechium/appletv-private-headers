/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class BRPhotoMediaAsset, BRPhotoMediaCollection;

__attribute__((visibility("hidden")))
@interface BRPhotoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x2911fd; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x290ba9
+ (id)imageProxyWithCollection:(id)collection;	// 0x290c4d
- (id)initWithAsset:(id)asset;	// 0x290bf5
- (id)initWithCollection:(id)collection;	// 0x290c99
// converted property getter: - (id)asset;	// 0x2911fd
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x290ff5
- (void)dealloc;	// 0x290d4d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x290fa5
- (id)imageForImageSize:(int)imageSize;	// 0x290e15
- (id)imageIDForImageSize:(int)imageSize;	// 0x290db1
- (id)object;	// 0x2911d5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x290ff1
@end

