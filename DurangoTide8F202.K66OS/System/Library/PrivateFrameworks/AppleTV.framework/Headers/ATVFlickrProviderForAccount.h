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
+ (id)providerForAccount:(id)account;	// 0x3369f6dd
- (id)initWithAccount:(id)account;	// 0x336a161d
- (id)_data;	// 0x3369f5b9
- (BOOL)_handlesObject:(id)object;	// 0x3369f4c1
- (void)dealloc;	// 0x3369f631
- (id)hashForDataAtIndex:(long)index;	// 0x3369f5d9
@end

