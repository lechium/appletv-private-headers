/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebQuotaManager.h"
#import <NSObject.h> // Unknown library

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager> {
@private
	WebSecurityOrigin *_origin;	// 4 = 0x4
}
@property(readonly, retain) WebSecurityOrigin *origin;	// G=0x30d84f7d; converted property
@property(assign) unsigned long long quota;	// G=0x30d85019; S=0x30d84fd1; converted property
- (id)initWithOrigin:(id)origin;	// 0x30d84f8d
// converted property getter: - (id)origin;	// 0x30d84f7d
// converted property getter: - (unsigned long long)quota;	// 0x30d85019
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x30d84fd1
- (unsigned long long)usage;	// 0x30d85051
@end
