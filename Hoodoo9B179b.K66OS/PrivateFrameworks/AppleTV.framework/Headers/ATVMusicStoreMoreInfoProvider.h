/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x301954c1
- (id)initWithCatalogItem:(id)catalogItem;	// 0x301954fd
- (id)_flattenMoreInfoSection:(id)section;	// 0x301957b1
- (void)_loadMoreInfoData;	// 0x301956dd
- (void)_loadMoreInfoFromURL:(id)url;	// 0x301958b9
- (void)_supplementalResponseReceived:(id)received;	// 0x30195a01
- (id)controlFactory;	// 0x3019567d
- (id)dataAtIndex:(long)index;	// 0x301956b9
- (long)dataCount;	// 0x30195699
- (void)dealloc;	// 0x301955ed
- (id)hashForDataAtIndex:(long)index;	// 0x301956d9
@end

