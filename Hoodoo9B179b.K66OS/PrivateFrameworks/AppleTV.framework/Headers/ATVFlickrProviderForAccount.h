/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFlickrProvider.h"

@class ATVInternetPhotosAccount;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForAccount : ATVFlickrProvider {
@private
	ATVInternetPhotosAccount *_account;	// 24 = 0x18
}
+ (id)providerForAccount:(id)account;	// 0x30176b61
- (id)initWithAccount:(id)account;	// 0x30176ba9
- (id)_data;	// 0x30176ded
- (BOOL)_handlesObject:(id)object;	// 0x30176e0d
- (void)dealloc;	// 0x30176ccd
- (id)hashForDataAtIndex:(long)index;	// 0x30176d8d
@end

