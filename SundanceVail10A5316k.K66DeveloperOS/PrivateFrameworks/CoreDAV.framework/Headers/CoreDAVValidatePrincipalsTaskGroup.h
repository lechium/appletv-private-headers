/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSSet, NSURL, NSMutableSet;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	NSMutableSet *_urlsToExamine;	// 44 = 0x2c
	NSMutableSet *_principalURLs;	// 48 = 0x30
	NSURL *_urlBeingExamined;	// 52 = 0x34
	BOOL _authError;	// 56 = 0x38
}
@property(readonly, assign) BOOL didReceiveAuthenticationError;	// G=0x35f7e321; @synthesize=_authError
@property(retain) NSMutableSet *principalURLs;	// G=0x35f7e2d9; S=0x35f7e2ed; @synthesize=_principalURLs
@property(readonly, assign) NSSet *resultPrincipalURLs;	// G=0x35f7de65; 
@property(retain) NSURL *urlBeingExamined;	// G=0x35f7e2fd; S=0x35f7e311; @synthesize=_urlBeingExamined
@property(retain) NSMutableSet *urlsToExamine;	// G=0x35f7e2b5; S=0x35f7e2c9; @synthesize=_urlsToExamine
- (id)initWithAccountInfoProvider:(id)accountInfoProvider urls:(id)urls taskManager:(id)manager;	// 0x35f7dd49
- (void)_fetchNextURL;	// 0x35f7dead
- (void)_finishWithError:(id)error;	// 0x35f7de9d
- (void)cancelTaskGroup;	// 0x35f7e271
- (void)dealloc;	// 0x35f7dded
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x35f7e321
// declared property getter: - (id)principalURLs;	// 0x35f7e2d9
// declared property getter: - (id)resultPrincipalURLs;	// 0x35f7de65
// declared property setter: - (void)setPrincipalURLs:(id)urls;	// 0x35f7e2ed
// declared property setter: - (void)setUrlBeingExamined:(id)examined;	// 0x35f7e311
// declared property setter: - (void)setUrlsToExamine:(id)examine;	// 0x35f7e2c9
- (void)startTaskGroup;	// 0x35f7e261
- (void)task:(id)task didFinishWithError:(id)error;	// 0x35f7e0d9
// declared property getter: - (id)urlBeingExamined;	// 0x35f7e2fd
// declared property getter: - (id)urlsToExamine;	// 0x35f7e2b5
@end

