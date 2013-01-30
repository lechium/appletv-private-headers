/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, ATVDataClient;

__attribute__((visibility("hidden")))
@interface BRATVDataImageProxy : XXUnknownSuperclass <BRImageProxy> {
	id _mediaObject;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
	NSMutableArray *_savedTokens;	// 12 = 0xc
	BOOL _usesScreenSaverImageManager;	// 16 = 0x10
}
+ (id)imageProxyWithMediaObject:(id)mediaObject;	// 0x2a7a91
- (id)initWithMediaObject:(id)mediaObject;	// 0x2a7acd
- (void)_cancelImageForImageID:(id)imageID;	// 0x2a8359
- (id)_imageIDForImageSize:(int)imageSize;	// 0x2a8465
- (id)_imageIDStringForSize:(int)size;	// 0x2a841d
- (id)_imageManager;	// 0x2a8735
- (id)_mediaID;	// 0x2a87b9
- (void)_removeTokenForImageID:(id)imageID;	// 0x2a82fd
- (void)_saveToken:(id)token forImageID:(id)imageID;	// 0x2a82ad
- (id)_tokenInfoForImageID:(id)imageID;	// 0x2a8231
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x2a8109
- (void)dealloc;	// 0x2a7c0d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x2a80d5
- (id)imageForImageSize:(int)imageSize;	// 0x2a7c95
- (BOOL)imageForImageSizeIsAvailable:(int)imageSizeIsAvailable;	// 0x2a81e1
- (id)imageIDForImageSize:(int)imageSize;	// 0x2a7c85
- (id)object;	// 0x2a81d1
- (void)setUsesScreenSaverImageManager:(BOOL)manager;	// 0x2a8221
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x2a8105
@end
