/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRImageProxy.h"

@class NSString;

@interface BRInternetRadioImageProxy : NSObject <BRImageProxy> {
@private
	NSString *_category;	// 4 = 0x4
}
- (id)initWithCategory:(id)category;	// 0x329a61c1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x329a63fd
- (void)dealloc;	// 0x329a6219
- (id)defaultImageForImageSize:(int)imageSize;	// 0x329a63a5
- (id)imageForImageSize:(int)imageSize;	// 0x329a62a9
- (id)imageIDForImageSize:(int)imageSize;	// 0x329a6265
- (id)object;	// 0x329a6401
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x329a63e5
@end
