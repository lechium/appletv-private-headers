/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSDictionary, ATVFavoritesControlFactory;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreFavoriteListItemProvider : XXUnknownSuperclass <BRProvider> {
	ATVFavoritesControlFactory *_factory;	// 4 = 0x4
	NSDictionary *_catalogItem;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1f06f5
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1f0731
- (id)controlFactory;	// 0x1f0851
- (id)dataAtIndex:(long)index;	// 0x1f0829
- (long)dataCount;	// 0x1f0839
- (void)dealloc;	// 0x1f07b9
- (id)hashForDataAtIndex:(long)index;	// 0x1f081d
@end
