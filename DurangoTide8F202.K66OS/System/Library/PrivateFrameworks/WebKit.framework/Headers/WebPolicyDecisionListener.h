/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"
#import "WebPolicyDecisionListener.h"
#import <NSObject.h> // Unknown library

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
- (void)download;
- (void)ignore;
- (void)use;
@end

__attribute__((visibility("hidden")))
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
@private
	WebPolicyDecisionListenerPrivate *_private;	// 4 = 0x4
}
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x32c6edd5
- (void)_invalidate;	// 0x32c6ee9d
- (void)_usePolicy:(int)policy;	// 0x32c6eed1
- (void)dealloc;	// 0x32c6ef05
- (void)download;	// 0x32c6ee55
- (void)ignore;	// 0x32c6ee6d
- (void)use;	// 0x32c6ee85
@end

