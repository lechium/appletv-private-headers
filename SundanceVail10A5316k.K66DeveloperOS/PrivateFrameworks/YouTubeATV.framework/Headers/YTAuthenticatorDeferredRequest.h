/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableURLRequest;

@interface YTAuthenticatorDeferredRequest : NSObject {
	NSMutableURLRequest *_request;	// 4 = 0x4
	BOOL _accountAuthRequired;	// 8 = 0x8
}
@property(assign) BOOL accountAuthRequired;	// G=0x35e6cb45; S=0x35e6cb35; converted property
@property(retain) NSMutableURLRequest *request;	// G=0x35e6cb25; S=0x35e6cae1; converted property
// converted property getter: - (BOOL)accountAuthRequired;	// 0x35e6cb45
- (void)dealloc;	// 0x35e6ca95
// converted property getter: - (id)request;	// 0x35e6cb25
// converted property setter: - (void)setAccountAuthRequired:(BOOL)required;	// 0x35e6cb35
// converted property setter: - (void)setRequest:(id)request;	// 0x35e6cae1
@end

