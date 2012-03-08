/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
@private
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x30320389; S=0x303203a9; converted property
- (id)initWithURL:(id)url;	// 0x30320185
- (SecurityOrigin *)_core;	// 0x3031fb99
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x302c59b1
- (id)applicationCacheQuotaManager;	// 0x3031fbb9
- (id)databaseIdentifier;	// 0x3031fe21
- (id)databaseQuotaManager;	// 0x3031fc05
- (void)dealloc;	// 0x302c59fd
- (id)domain;	// 0x3031fba9
- (void)finalize;	// 0x3031fc51
- (id)host;	// 0x3031ff2d
- (BOOL)isEqual:(id)equal;	// 0x3031fca9
- (unsigned short)port;	// 0x3031fb85
- (id)protocol;	// 0x30320059
// converted property getter: - (unsigned long long)quota;	// 0x30320389
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x303203a9
- (id)toString;	// 0x3031fd15
- (unsigned long long)usage;	// 0x30320369
@end

