/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DATask.h"
#import "NSURLConnectionDelegate.h"
#import "DAEAS-Structs.h"
#import <NSObject.h> // Unknown library

@class ASTaskManager, NSDate, NSHTTPURLResponse, NSURLConnection, NSURLRequest, ASItem, NSTimer, DATaskManager, ASParseContext, NSMutableSet, NSString, NSError;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x3442dfad; S=0x3442dfbd; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x3442df19; S=0x3442df29; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x3442df79; S=0x3442df89; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x3442def9; S=0x3442df09; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x3442df39; S=0x3442df49; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x3442df59; S=0x3442df69; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x3442dfcd; S=0x3442dfdd; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x344284bd; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x3442dee9; S=0x3442ddc1; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x3442e001; S=0x3442de91; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x34428505
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x344284f1
- (id)init;	// 0x34427f5d
- (id)_HTTPMethodForRequest:(id)request;	// 0x344284e1
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x3442b291
- (void)_continuePerformTask;	// 0x3442a1e9
- (id)_createBodyData;	// 0x34429c11
- (id)_easVersion;	// 0x344285b1
- (void)_failImmediately;	// 0x34429c39
- (void)_handleBadPasswordResponse;	// 0x3442b3dd
- (BOOL)_handleCertificateError:(id)error;	// 0x3442b5dd
- (BOOL)_handleRedirect:(id)redirect;	// 0x3442b699
- (void)_initFakeParseContext;	// 0x3442db7d
- (BOOL)_isWBXML;	// 0x344285f1
- (id)_policyKey;	// 0x344285d1
- (void)_popModal;	// 0x34429e21
- (void)_pushModalForReason:(int)reason;	// 0x34429dbd
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x344284dd
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x344284d9
- (void)_timeoutEnforcerFired:(id)fired;	// 0x34428ec5
- (id)_url;	// 0x34428575
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x3442dfad
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x3442abd9
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x3442b141
- (BOOL)checkForErrorInContext:(id)context;	// 0x34428765
- (id)command;	// 0x34428625
- (int)commandCode;	// 0x34428641
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3442cabd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3442d431
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3442cb59
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3442ba41
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3442d0f9
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x3442b9a5
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x3442c40d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x3442c469
- (int)connectionActionForResponse:(id)response;	// 0x34428dd9
- (void)connectionDidFinishLoading:(id)connection;	// 0x3442cd41
- (id)contentType;	// 0x34428da9
// declared property getter: - (void *)context;	// 0x3442df19
// declared property getter: - (id)currentlyParsingItem;	// 0x3442df79
- (void)dealloc;	// 0x344280a1
// declared property getter: - (id)delegate;	// 0x3442def9
- (id)description;	// 0x344282cd
- (void)didCallOutToDelegate;	// 0x3442ae4d
- (void)didProcessContext:(id)context;	// 0x34428db9
- (BOOL)expectsWBXML;	// 0x34428621
- (void)finishWithError:(id)error;	// 0x3442aed5
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x344286e1
- (void)handleTopLevelErrorStatus:(id)status;	// 0x3442d92d
- (id)httpMethod;	// 0x344284cd
// declared property getter: - (int)interfaceBinding;	// 0x3442df39
// declared property getter: - (BOOL)isExclusive;	// 0x3442df59
- (BOOL)isInCallOutToDelegate;	// 0x3442aec5
// declared property getter: - (id)lastKnownPassword;	// 0x3442dfcd
- (void)loadRequest:(id)request;	// 0x34428f99
- (int)numDownloadedElements;	// 0x3442dd31
- (id)parameterData;	// 0x3442868d
- (double)percentComplete;	// 0x34428c25
- (void)performTask;	// 0x34429ce5
- (BOOL)processContext:(id)context;	// 0x344286dd
- (void)reportStatusWithError:(id)error;	// 0x3442dd35
- (id)requestBody;	// 0x34428695
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x34428691
- (BOOL)requiresEASVersionInformaton;	// 0x34428dd1
- (void)reset;	// 0x3442dbfd
- (id)responseContentType;	// 0x3442847d
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x3442dfbd
// declared property setter: - (void)setContext:(void *)context;	// 0x3442df29
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x3442df89
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3442df09
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x3442df49
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x3442df69
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x3442dfdd
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x3442ddc1
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x3442de91
- (BOOL)shouldHandlePasswordErrors;	// 0x3442b9a1
- (BOOL)shouldHoldPowerAssertion;	// 0x34428dd5
- (BOOL)shouldLogIncomingData;	// 0x34428dcd
- (BOOL)shouldReportTimeInNetwork;	// 0x3442dd2d
- (void)startModal;	// 0x34429e65
// converted property getter: - (int)taskID;	// 0x344284bd
// declared property getter: - (id)taskManager;	// 0x3442dee9
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x3442a1a9
- (void)taskManagerDidFindEASVersion;	// 0x3442a089
- (void)taskManagerDidUpdatePolicyKey;	// 0x3442a119
- (int)taskStatusForError:(id)error;	// 0x34428c35
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x34428c31
- (void)tearDownResources;	// 0x34429b39
// declared property getter: - (id)timeoutEnforcer;	// 0x3442e001
- (double)timeoutInterval;	// 0x3442851d
- (void)willCallOutToDelegate;	// 0x3442ac9d
- (void)willProcessContext;	// 0x34428db5
@end

