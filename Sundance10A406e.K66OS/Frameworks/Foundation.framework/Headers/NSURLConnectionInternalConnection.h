/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLConnectionInternal.h"
#import "Foundation-Structs.h"
#import "NSURLConnectionRequired.h"

@class NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
	int _cfConnLock;	// 36 = 0x24
	CFURLConnectionRef _cfConn;	// 40 = 0x28
	CFURLAuthChallengeRef _currCFChallenge;	// 44 = 0x2c
	NSURLAuthenticationChallenge *_currNSChallenge;	// 48 = 0x30
	CFStringRef _fileName;	// 52 = 0x34
	bool _shouldSkipCancelOnRelease;	// 56 = 0x38
	long long _totalBytes;	// 60 = 0x3c
	long long _expectedTotalBytes;	// 68 = 0x44
}
- (id)initWithInfo:(const InternalInit *)info;	// 0x35511a81
- (CFURLConnectionRef)_CFURLConnection;	// 0x355d1b31
- (CFURLConnectionRef)_atomic_CFURLConnection;	// 0x355128c1
- (void)_invalidate;	// 0x355126d9
- (void)_resumeLoading;	// 0x355d1cc9
- (CFURLConnectionRef)_retainCFURLConnection;	// 0x3551258d
- (void)_setDelegateQueue:(id)queue;	// 0x355d1b45
- (void)_setShouldSkipCancelOnRelease:(bool)_set;	// 0x355d1d01
- (void)_suspendLoading;	// 0x355d1c91
- (void)cancel;	// 0x355d1bdd
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x355d1e65
- (void)cleanupChallenges;	// 0x355d1d11
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x355d1df1
- (void)dealloc;	// 0x35512859
- (void)invokeForDelegate:(id)delegate;	// 0x35510a0d
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x355d1fed
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x355d205d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3551250d
- (void)sendCFChallenge:(CFURLAuthChallengeRef)challenge toSelector:(SEL)selector;	// 0x355d1195
- (void)start;	// 0x3551260d
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x355d1c3d
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x355d1d61
@end
