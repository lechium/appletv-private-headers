/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSString, AVMetadataItem;

__attribute__((visibility("hidden")))
@interface LTVideoImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_identifier;	// 4 = 0x4
	AVMetadataItem *_metadataItem;	// 8 = 0x8
}
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x65c55
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x65cb5
- (void).cxx_destruct;	// 0x6611d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x66115
- (id)defaultImageForImageSize:(int)imageSize;	// 0x660bd
- (id)imageForImageSize:(int)imageSize;	// 0x65d65
- (id)imageIDForImageSize:(int)imageSize;	// 0x65d51
- (id)object;	// 0x66119
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x66111
@end
