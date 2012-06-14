/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class ATVMusicStoreOtherSeasonsControlFactory, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x3019c69d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x3019c6d9
- (id)controlFactory;	// 0x3019c855
- (id)dataAtIndex:(long)index;	// 0x3019c7bd
- (long)dataCount;	// 0x3019c7cd
- (void)dealloc;	// 0x3019c75d
- (id)hashForDataAtIndex:(long)index;	// 0x3019c865
@end
