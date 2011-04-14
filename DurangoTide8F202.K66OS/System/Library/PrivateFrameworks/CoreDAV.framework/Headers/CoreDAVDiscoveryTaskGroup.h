/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVSVRLookupTaskDelegate.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSArray, NSMutableArray, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate, CoreDAVSVRLookupTaskDelegate> {
	NSArray *_wellKnownPaths;	// 44 = 0x2c
	NSString *_requiredComplianceClass;	// 48 = 0x30
	NSArray *_httpPorts;	// 52 = 0x34
	NSArray *_httpsPorts;	// 56 = 0x38
	NSString *_httpServiceString;	// 60 = 0x3c
	NSString *_httpsServiceString;	// 64 = 0x40
	BOOL _didReceiveAuthenticationError;	// 68 = 0x44
	NSMutableArray *_discoveries;	// 72 = 0x48
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;	// 76 = 0x4c
}
@property(assign, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;	// @dynamic
@property(assign) BOOL didReceiveAuthenticationError;	// G=0x317a1db5; S=0x317a1dc5; @synthesize=_didReceiveAuthenticationError
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// G=0x317a2f09; S=0x317a3041; @synthesize=_discoveredAccountInfo
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x317a1fc1
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x317a2455
- (void)addToDiscoveryArray:(id *)discoveryArray discovery:(id)discovery;	// 0x317a1dd5
- (id)allDiscoveryPaths:(id)paths;	// 0x317a1e11
- (id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;	// 0x317a1e89
- (void)cancelTaskGroup;	// 0x317a353d
- (void)cancelTasks;	// 0x317a1f69
- (id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;	// 0x317a33d9
- (void)completeDiscovery:(id)discovery gotPrincipalURL:(id)url error:(id)error;	// 0x317a3611
- (void)dealloc;	// 0x317a238d
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x317a1db5
// declared property getter: - (id)discoveredAccountInfo;	// 0x317a2f09
- (void)getDiscoveryStatus:(id)status priorFailed:(id *)failed subsequentFailed:(id *)failed3 priorIncomplete:(id *)incomplete subsequentIncomplete:(id *)incomplete5 priorSuccess:(id *)success subsequentSuccess:(id *)success7;	// 0x317a327d
- (void)optionsTask:(id)task error:(id)error;	// 0x317a42e1
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x317a3dad
// declared property setter: - (void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;	// 0x317a1dc5
// declared property setter: - (void)setDiscoveredAccountInfo:(id)info;	// 0x317a3041
- (id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;	// 0x317a4bcd
- (void)srvLookupTask:(id)task host:(id)host port:(int)port error:(id)error;	// 0x317a54a9
- (void)startOptionsTask:(id)task;	// 0x317a48d1
- (void)startPropfindTask:(id)task;	// 0x317a45ed
- (void)startSRVLookup:(id)lookup serviceString:(id)string;	// 0x317a4a55
- (void)startTaskGroup;	// 0x317a4f71
- (void)syncAway;	// 0x317a1f55
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x317a1f7d
@end

