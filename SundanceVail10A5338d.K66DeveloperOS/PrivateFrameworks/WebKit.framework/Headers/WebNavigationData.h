/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
	WebNavigationDataPrivate *_private;	// 4 = 0x4
}
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x316b8f71
- (id)clientRedirectSource;	// 0x316b9131
- (void)dealloc;	// 0x316b9151
- (BOOL)hasSubstituteData;	// 0x316b9111
- (id)originalRequest;	// 0x316b90d1
- (id)response;	// 0x316b90f1
- (id)title;	// 0x316b90b1
- (id)url;	// 0x316b9091
@end

