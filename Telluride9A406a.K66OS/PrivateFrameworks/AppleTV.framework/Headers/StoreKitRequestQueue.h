/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "RequestQueue.h"


__attribute__((visibility("hidden")))
@interface StoreKitRequestQueue : RequestQueue <ISSingleton> {
}
+ (void)setSharedInstance:(id)instance;	// 0x331c9c71
+ (id)sharedInstance;	// 0x331c9cb1
- (void)cancelRequestWithInfo:(id)info identity:(id)identity;	// 0x331c9ced
- (void)requestProductsWithInfo:(id)info identity:(id)identity;	// 0x331c9da1
- (void)sendError:(id)error forOperation:(id)operation;	// 0x331c9f15
- (void)sendResponseForOperation:(id)operation;	// 0x331ca0ad
@end
