/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "WebPolicyDecisionListener.h"

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
- (id)_initWithTarget:(id)target action:(SEL)action;	// 0x350766f1
- (void)_invalidate;	// 0x350767e9
- (void)_usePolicy:(int)policy;	// 0x350767b5
- (void)dealloc;	// 0x35076769
- (void)download;	// 0x35076845
- (void)ignore;	// 0x35076831
- (void)use;	// 0x3507681d
@end

