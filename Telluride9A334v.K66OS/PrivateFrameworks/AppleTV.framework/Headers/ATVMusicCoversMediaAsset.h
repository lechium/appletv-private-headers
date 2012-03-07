/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaAsset.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVMusicCoversMediaAsset : BRBaseMediaAsset {
@private
	id<BRMediaAsset> _asset;	// 8 = 0x8
}
+ (id)assetWrapperWithAsset:(id)asset;	// 0x33131ca1
- (id)initWithAsset:(id)asset;	// 0x33131ced
- (id)assetID;	// 0x33131d91
- (void)dealloc;	// 0x33131d45
- (id)imageProxy;	// 0x33131db1
- (id)mediaType;	// 0x33131dd1
@end
