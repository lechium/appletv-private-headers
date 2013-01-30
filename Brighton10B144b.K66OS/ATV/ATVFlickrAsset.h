/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaAsset.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrAsset : BRPhotoMediaAsset {
	NSDictionary *_assetInfo;	// 40 = 0x28
}
+ (id)assetWithAssetInfo:(id)assetInfo;	// 0x1b3ee9
- (id)initWithAssetInfo:(id)assetInfo;	// 0x1b3f25
- (id)_imagePathWithSize:(int)size;	// 0x1b40fd
- (void)dealloc;	// 0x1b4045
- (id)flickrIdentifier;	// 0x1b40b1
- (id)imageProxy;	// 0x1b40dd
- (BOOL)isLocal;	// 0x1b4091
- (id)mediaType;	// 0x1b4095
@end
