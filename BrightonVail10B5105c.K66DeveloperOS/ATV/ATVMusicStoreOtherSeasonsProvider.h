/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVMusicStoreOtherSeasonsControlFactory;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x2008fd
- (id)initWithCatalogItem:(id)catalogItem;	// 0x200939
- (id)controlFactory;	// 0x200ab5
- (id)dataAtIndex:(long)index;	// 0x200a25
- (long)dataCount;	// 0x200a35
- (void)dealloc;	// 0x2009c1
- (id)hashForDataAtIndex:(long)index;	// 0x200ac5
@end

