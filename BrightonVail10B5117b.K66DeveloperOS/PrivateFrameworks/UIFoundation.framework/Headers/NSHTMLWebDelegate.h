/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSHTMLWebDelegate : NSObject {
	BOOL _loadDidFinish;	// 4 = 0x4
	BOOL _loadDidSucceed;	// 5 = 0x5
	NSURL *_baseURL;	// 8 = 0x8
}
@property(readonly, assign) BOOL loadDidFinish;	// G=0x35cba04d; converted property
@property(readonly, assign) BOOL loadDidSucceed;	// G=0x35cba05d; converted property
- (id)init;	// 0x35cb9f79
- (id)initWithBaseURL:(id)baseURL;	// 0x35cb9fc5
- (void)dealloc;	// 0x35cba001
- (void)decidePolicyForRequest:(id)request decisionListener:(id)listener;	// 0x35cba175
// converted property getter: - (BOOL)loadDidFinish;	// 0x35cba04d
// converted property getter: - (BOOL)loadDidSucceed;	// 0x35cba05d
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x35cba2b9
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x35cba2a5
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x35cba291
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x35cba071
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x35cba0f9
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x35cba075
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x35cba0b1
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x35cba06d
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x35cba135
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x35cba171
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x35cba16d
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x35cba13d
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x35cba139
@end
