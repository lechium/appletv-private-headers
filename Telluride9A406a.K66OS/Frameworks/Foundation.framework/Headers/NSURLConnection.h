/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"
#import "Foundation-Structs.h"

@class NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
@private
	NSURLConnectionInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL defersCallbacks;	// G=0x35e98a59; S=0x35e98a21; converted property
+ (void)_resourceLoadLoop:(id)loop;	// 0x35de2a95
+ (void)_setLoaderThreadPriority:(int)priority;	// 0x35e986bd
+ (void)_setMIMETypesWithNoSizeLimit:(id)noSizeLimit;	// 0x35e982c1
+ (void)_setSweeperInterval:(unsigned)interval;	// 0x35e98b31
+ (unsigned)_sweeperInterval;	// 0x35e98b2d
+ (BOOL)canHandleRequest:(id)request;	// 0x35dfee19
+ (id)connectionWithRequest:(id)request delegate:(id)delegate;	// 0x35defcc9
+ (CFRunLoopRef)resourceLoaderRunLoop;	// 0x35de39a9
+ (void)sendAsynchronousRequest:(id)request queue:(id)queue completionHandler:(id)handler;	// 0x35e987a9
+ (id)sendSynchronousRequest:(id)request returningResponse:(id *)response error:(id *)error;	// 0x35de23c5
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x35defd15
- (id)initWithRequest:(id)request delegate:(id)delegate startImmediately:(BOOL)immediately;	// 0x35e98771
- (id)_cfInternal;	// 0x35e98ab1
- (id)_dlInternal;	// 0x35e98a5d
- (id)_initWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x35defd45
- (void)_resumeLoading;	// 0x35e98b19
- (void)_suspendLoading;	// 0x35e98b05
- (void)cancel;	// 0x35e0cc79
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x35e98711
- (id)connectionProperties;	// 0x35e98a01
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x35e986f1
- (id)currentRequest;	// 0x35e989d1
- (void)dealloc;	// 0x35df0ed1
// converted property getter: - (BOOL)defersCallbacks;	// 0x35e98a59
- (void)download;	// 0x35e989f1
- (id)originalRequest;	// 0x35e989b1
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x35e98731
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x35e98751
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x35df03ed
// converted property setter: - (void)setDefersCallbacks:(BOOL)callbacks;	// 0x35e98a21
- (void)setDelegateQueue:(id)queue;	// 0x35e98971
- (void)start;	// 0x35df047d
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x35e98991
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x35e986d1
@end

