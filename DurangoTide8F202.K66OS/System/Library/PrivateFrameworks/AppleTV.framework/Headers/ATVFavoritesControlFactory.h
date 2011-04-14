/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


__attribute__((visibility("hidden")))
@interface ATVFavoritesControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x33684dc1
- (id)_collectionTypeForFavorite:(id)favorite;	// 0x336849f9
- (id)_menuItemForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x33684f05
- (id)_placeholderImageForFavorite:(id)favorite;	// 0x33684a29
- (id)_previewForFavoriteItem:(id)favoriteItem currentControl:(id)control requestedBy:(id)by;	// 0x33684ab5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x33684d0d
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x33684df1
@end

