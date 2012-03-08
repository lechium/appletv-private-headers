/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "SubCalURLRequestDelegate.h"
#import "SubCalDATask.h"

@class NSData, NSString, NSURL, SubCalURLRequest;
@protocol SubCalValidationTaskDelegate;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate> {
	id<SubCalValidationTaskDelegate> _delegate;	// 16 = 0x10
	SubCalURLRequest *_request;	// 20 = 0x14
	NSURL *_subscriptionURL;	// 24 = 0x18
	NSString *_username;	// 28 = 0x1c
	NSString *_password;	// 32 = 0x20
	BOOL _performQuickValidation;	// 36 = 0x24
	NSData *_icsData;	// 40 = 0x28
	NSString *_calendarName;	// 44 = 0x2c
	BOOL _foundBeginVCal;	// 48 = 0x30
	BOOL _foundCalName;	// 49 = 0x31
	unsigned _searchIndex;	// 52 = 0x34
}
@property(assign) id<SubCalValidationTaskDelegate> delegate;	// G=0x35418f45; S=0x35418f55; @synthesize=_delegate
@property(retain, nonatomic) NSString *password;	// G=0x35418fcd; S=0x35418fdd; @synthesize=_password
@property(assign) BOOL performQuickValidation;	// G=0x35419001; S=0x35419011; @synthesize=_performQuickValidation
@property(retain, nonatomic) NSURL *subscriptionURL;	// G=0x35418f65; S=0x35418f75; @synthesize=_subscriptionURL
@property(retain, nonatomic) NSString *username;	// G=0x35418f99; S=0x35418fa9; @synthesize=_username
- (BOOL)_isInvalidVCalBeginningForData:(id)data;	// 0x35418bc1
- (id)_searchForCalNameInConnectionData:(id)connectionData;	// 0x35418ce5
- (id)_stringBeforeNewline:(const char *)newline length:(unsigned)length;	// 0x35418c3d
- (void)_tryQuickValidationCurrentData:(id)data;	// 0x35418de5
- (void)dealloc;	// 0x35418771
// declared property getter: - (id)delegate;	// 0x35418f45
- (void)didFinish;	// 0x354188b5
- (void)handleTrustChallenge:(id)challenge forSubCalURLRequest:(id)subCalURLRequest;	// 0x35418a3d
// declared property getter: - (id)password;	// 0x35418fcd
- (void)performDelegateCallbackWithError:(id)error;	// 0x35418861
// declared property getter: - (BOOL)performQuickValidation;	// 0x35419001
- (void)performTask;	// 0x35418905
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35418f55
// declared property setter: - (void)setPassword:(id)password;	// 0x35418fdd
// declared property setter: - (void)setPerformQuickValidation:(BOOL)validation;	// 0x35419011
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x35418f75
// declared property setter: - (void)setUsername:(id)username;	// 0x35418fa9
- (void)subCalURLRequest:(id)request finishedWithData:(id)data error:(id)error;	// 0x35418a89
- (void)subCalURLRequest:(id)request updatedData:(id)data;	// 0x35418a5d
// declared property getter: - (id)subscriptionURL;	// 0x35418f65
// declared property getter: - (id)username;	// 0x35418f99
- (void)willFinish;	// 0x35418821
@end

