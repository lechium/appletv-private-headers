/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"

@class NSObject;
@protocol OS_dispatch_queue, MSSearchDelegate;

@interface MSSearch : MSMailDefaultService {
@private
	NSObject<OS_dispatch_queue> *_resultsQueue;	// 32 = 0x20
	NSObject<MSSearchDelegate> *_delegate;	// 36 = 0x24
}
@property(assign, nonatomic) NSObject<MSSearchDelegate> *delegate;	// G=0x3444b99d; S=0x3444b301; @synthesize=_delegate
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server delegate:(id)delegate;	// 0x3444b159
+ (id)findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes delegate:(id)delegate;	// 0x3444b191
+ (void)setUnitTestingResultsArray:(id)array;	// 0x3444b9ad
- (void)_delegateDidFindResults:(id)_delegate;	// 0x3444b7a5
- (void)_delegateDidFinishWithError:(id)_delegate;	// 0x3444b741
- (void)_findMessageData:(id)data matchingCriterion:(id)criterion shouldFetch:(BOOL)fetch onServer:(BOOL)server onlyInboxes:(BOOL)inboxes;	// 0x3444b4a5
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x3444b829
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x3444b85d
- (id)_initWithDelegate:(id)delegate;	// 0x3444b205
- (BOOL)_unitTestsAreEnabled;	// 0x3444b819
- (void)dealloc;	// 0x3444b2b1
// declared property getter: - (id)delegate;	// 0x3444b99d
- (void)responseConnection:(id)connection handleError:(id)error;	// 0x3444b335
- (void)responseConnection:(id)connection handleResponse:(id)response;	// 0x3444b389
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3444b301
@end

