/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class NSURL, BRMediaType, BRImage, NSDictionary, NSString;
@protocol BRMusicStoreImageDecryptionAgent;

@interface BRURLImageProxy : NSObject <BRImageProxy> {
@private
	NSString *_imageID;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 16 = 0x10
	BRMediaType *_mediaTypeForDefaultImage;	// 20 = 0x14
	BRImage *_defaultImage;	// 24 = 0x18
	BOOL _writeToDisk;	// 28 = 0x1c
}
@property(retain) id decryptionAgent;	// G=0x342c9505; S=0x342c9515; converted property
@property(retain) BRImage *defaultImage;	// G=0x342c9485; S=0x342c9445; converted property
@property(retain) NSDictionary *headerFields;	// G=0x342c94b5; S=0x342c94c5; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x342c93e9; S=0x342c93d9; converted property
@property(retain) id object;	// G=0x342c94a1; S=0x342c949d; converted property
@property(readonly, retain) NSURL *url;	// G=0x342c94a5; converted property
@property(assign) BOOL writeToDisk;	// G=0x342c9535; S=0x342c9525; converted property
+ (id)proxyWithURL:(id)url;	// 0x342c8e51
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x342c8e9d
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x342c8eed
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x342c8f3d
- (id)initWithURL:(id)url;	// 0x342c8f95
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x342c8fb5
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x342c8fd5
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x342c8ff9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x342c9499
- (void)dealloc;	// 0x342c9099
// converted property getter: - (id)decryptionAgent;	// 0x342c9505
// converted property getter: - (id)defaultImage;	// 0x342c9485
- (id)defaultImageForImageSize:(int)imageSize;	// 0x342c93f9
// converted property getter: - (id)headerFields;	// 0x342c94b5
- (id)imageForImageSize:(int)imageSize;	// 0x342c9241
- (id)imageIDForImageSize:(int)imageSize;	// 0x342c9121
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x342c93e9
// converted property getter: - (id)object;	// 0x342c94a1
// converted property setter: - (void)setDecryptionAgent:(id)agent;	// 0x342c9515
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x342c9445
// converted property setter: - (void)setHeaderFields:(id)fields;	// 0x342c94c5
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x342c93d9
// converted property setter: - (void)setObject:(id)object;	// 0x342c949d
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x342c9525
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x342c9495
// converted property getter: - (id)url;	// 0x342c94a5
// converted property getter: - (BOOL)writeToDisk;	// 0x342c9535
@end

