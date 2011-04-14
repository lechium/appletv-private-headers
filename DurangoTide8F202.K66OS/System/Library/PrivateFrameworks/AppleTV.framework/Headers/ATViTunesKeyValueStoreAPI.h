/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATViTunesKeyValueStoreAPI : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
	id _handler;	// 8 = 0x8
	dispatch_queue_s *_handlerQueue;	// 12 = 0xc
}
+ (void)getAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x33700f75
+ (void)putAllRequest:(id)request domain:(id)domain handler:(id)handler;	// 0x33700e5d
- (void)_getAllRequest:(id)request handler:(id)handler;	// 0x337016a9
- (id)_initWithDomain:(id)domain;	// 0x33701215
- (void)_putAllRequest:(id)request handler:(id)handler;	// 0x33701469
- (id)_requestWithURLString:(id)urlstring;	// 0x33700a61
- (void)_responseReady:(id)ready;	// 0x337012fd
- (void)dealloc;	// 0x33701265
@end

