/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRImageProxyProvider : NSObject <BRProvider> {
@private
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x3304253d
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x330424a9
- (id)initWithAssets:(id)assets;	// 0x33042579
- (id)initWithImageProxies:(id)imageProxies;	// 0x330424e5
- (id)controlFactory;	// 0x3304261d
- (id)dataAtIndex:(long)index;	// 0x33042641
- (long)dataCount;	// 0x33042621
- (void)dealloc;	// 0x330425d1
- (id)hashForDataAtIndex:(long)index;	// 0x330426e1
@end

