/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class NSURLRequest, WebPolicyDecisionListener, NSString;
@protocol WebPluginContainerCheckController;

__attribute__((visibility("hidden")))
@interface WebPluginContainerCheck : NSObject {
@private
	NSURLRequest *_request;	// 4 = 0x4
	NSString *_target;	// 8 = 0x8
	id<WebPluginContainerCheckController> _controller;	// 12 = 0xc
	id _resultObject;	// 16 = 0x10
	SEL _resultSelector;	// 20 = 0x14
	id _contextInfo;	// 24 = 0x18
	BOOL _done;	// 28 = 0x1c
	WebPolicyDecisionListener *_listener;	// 32 = 0x20
}
@property(readonly, retain) id contextInfo;	// G=0x35075261; converted property
+ (id)checkWithRequest:(id)request target:(id)target resultObject:(id)object selector:(SEL)selector controller:(id)controller contextInfo:(id)info;	// 0x35074c91
- (id)initWithRequest:(id)request target:(id)target resultObject:(id)object selector:(SEL)selector controller:(id)controller contextInfo:(id)info;	// 0x35074bb5
- (id)_actionInformationWithURL:(id)url;	// 0x35074f5d
- (void)_askPolicyDelegate;	// 0x35074ff5
- (void)_continueWithPolicy:(int)policy;	// 0x35074d45
- (BOOL)_isForbiddenFileLoad;	// 0x35074db5
- (void)cancel;	// 0x35075181
// converted property getter: - (id)contextInfo;	// 0x35075261
- (void)dealloc;	// 0x35074d19
- (void)finalize;	// 0x35074ced
- (void)start;	// 0x35075149
@end

