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
+ (id)imageProxyWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5ea5d
- (id)initWithIdentifier:(id)identifier metadataItem:(id)item;	// 0x5eabd
- (void).cxx_destruct;	// 0x5ef25
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x5ef1d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x5eec5
- (id)imageForImageSize:(int)imageSize;	// 0x5eb6d
- (id)imageIDForImageSize:(int)imageSize;	// 0x5eb59
- (id)object;	// 0x5ef21
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x5ef19
@end

