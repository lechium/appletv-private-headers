/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStoreAPI : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	dispatch_queue_s *_handlerQueue;	// 12 = 0xc
}
+ (void)getAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x32fbd3e5
+ (void)putAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x32fbd4b1
- (void)_getAllRequest:(id)request handler:(id)handler;	// 0x32fbd6e9
- (id)_initWithDomain:(id)domain;	// 0x32fbd695
- (void)_putAllRequest:(id)request handler:(id)handler;	// 0x32fbdad5
- (id)_requestWithURLString:(id)urlstring;	// 0x32fbe0d5
- (void)_responseReady:(id)ready;	// 0x32fbdeed
- (void)dealloc;	// 0x32fbd5ed
@end

