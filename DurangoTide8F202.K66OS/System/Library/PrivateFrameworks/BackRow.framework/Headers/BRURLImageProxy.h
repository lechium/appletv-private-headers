/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class BRMediaType, NSDictionary, BRImage, NSURL, NSString;
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
@property(retain) BRImage *defaultImage;	// G=0x32969439; S=0x32969499; converted property
@property(readonly, retain) NSDictionary *headerFields;	// G=0x32969459; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x32969429; S=0x32969419; converted property
@property(retain) id object;	// G=0x32969455; S=0x32969451; converted property
@property(readonly, retain) NSURL *url;	// G=0x328b2a9d; converted property
@property(assign) BOOL writeToDisk;	// G=0x32969489; S=0x32969479; converted property
+ (id)proxyWithURL:(id)url;	// 0x329697f5
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x329697ad
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x32969765
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x32969715
- (id)initWithURL:(id)url;	// 0x329696f5
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x329696d5
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x329696b1
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x32969839
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3296944d
- (void)dealloc;	// 0x328b6a2d
- (id)decryptionAgent;	// 0x32969469
// converted property getter: - (id)defaultImage;	// 0x32969439
- (id)defaultImageForImageSize:(int)imageSize;	// 0x329694d1
// converted property getter: - (id)headerFields;	// 0x32969459
- (id)imageForImageSize:(int)imageSize;	// 0x32969511
- (id)imageIDForImageSize:(int)imageSize;	// 0x329698c9
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x32969429
// converted property getter: - (id)object;	// 0x32969455
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x32969499
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x32969419
// converted property setter: - (void)setObject:(id)object;	// 0x32969451
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x32969479
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x32969449
// converted property getter: - (id)url;	// 0x328b2a9d
// converted property getter: - (BOOL)writeToDisk;	// 0x32969489
@end

