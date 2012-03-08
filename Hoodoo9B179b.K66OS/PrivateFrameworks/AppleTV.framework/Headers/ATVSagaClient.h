/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVSagaClient : NSObject {
@private
	BOOL _active;	// 4 = 0x4
	xpc_connection_s *_connection;	// 8 = 0x8
	void *_connectionData;	// 12 = 0xc
	dispatch_queue_s *_connectionQueue;	// 16 = 0x10
	id _deauthenticationCompletionHandler;	// 20 = 0x14
}
- (id)init;	// 0x303cd479
- (void)_handleMessage:(unsigned long long)message withResponse:(void *)response;	// 0x303ce9f9
- (void)dealloc;	// 0x303cd791
- (void)deauthenticateWithCompletionHandler:(id)completionHandler;	// 0x303ce8d5
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x303ce155
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x303ce3f5
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x303cdf71
- (void)setAccount:(id)account urlBag:(id)bag appData:(id)data cookieHeaders:(id)headers;	// 0x303cd821
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x303ce689
- (void)updateSagaLibraryWithCompletionHandler:(id)completionHandler;	// 0x303cdd09
- (void)uploadItemProperties;	// 0x303ce84d
@end

