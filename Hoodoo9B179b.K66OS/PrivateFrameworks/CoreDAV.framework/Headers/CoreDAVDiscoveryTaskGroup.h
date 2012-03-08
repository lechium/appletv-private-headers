/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSString, NSArray, NSMutableArray;
@protocol CoreDAVDiscoveryTaskGroupDelegate, CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
	NSString *_requiredComplianceClass;	// 44 = 0x2c
	NSArray *_httpPorts;	// 48 = 0x30
	NSArray *_httpsPorts;	// 52 = 0x34
	NSString *_httpServiceString;	// 56 = 0x38
	NSString *_httpsServiceString;	// 60 = 0x3c
	NSString *_wellKnownPath;	// 64 = 0x40
	NSArray *_potentialContextPaths;	// 68 = 0x44
	NSMutableArray *_discoveries;	// 72 = 0x48
	BOOL _didReceiveAuthenticationError;	// 76 = 0x4c
	id<CoreDAVAccountInfoProvider> _discoveredAccountInfo;	// 80 = 0x50
}
@property(assign, nonatomic) id<CoreDAVDiscoveryTaskGroupDelegate> delegate;	// @dynamic
@property(assign) BOOL didReceiveAuthenticationError;	// G=0x30ca20ad; S=0x30ca20bd; @synthesize=_didReceiveAuthenticationError
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// G=0x30ca20cd; S=0x30ca20e1; @synthesize=_discoveredAccountInfo
@property(retain, nonatomic) NSArray *potentialContextPaths;	// G=0x30ca2139; S=0x30ca2149; @synthesize=_potentialContextPaths
@property(retain, nonatomic) NSString *wellKnownPath;	// G=0x30ca2105; S=0x30ca2115; @synthesize=_wellKnownPath
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x30c9d629
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPath:(id)path potentialContextPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x30c9d481
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x30c9d5d9
- (void)addToDiscoveryArray:(id *)discoveryArray discovery:(id)discovery;	// 0x30ca1e25
- (id)allDiscoveryPaths:(id)paths;	// 0x30c9e7c5
- (id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;	// 0x30c9e6e9
- (void)cancelTaskGroup;	// 0x30c9d7f1
- (id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;	// 0x30ca1cd9
- (void)completeDiscovery:(id)discovery error:(id)error;	// 0x30ca0985
- (void)completeOptionsTask:(id)task error:(id)error;	// 0x30ca03c5
- (void)dealloc;	// 0x30c9d6b9
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x30ca20ad
// declared property getter: - (id)discoveredAccountInfo;	// 0x30ca20cd
- (id)extractPrincipalURLFromPropFindTask:(id)propFindTask error:(id *)error;	// 0x30ca1881
- (void)getDiscoveryStatus:(id)status priorFailed:(id *)failed subsequentFailed:(id *)failed3 priorIncomplete:(id *)incomplete subsequentIncomplete:(id *)incomplete5 priorSuccess:(id *)success subsequentSuccess:(id *)success7;	// 0x30ca1e6d
- (void)optionsTask:(id)task error:(id)error;	// 0x30ca06cd
// declared property getter: - (id)potentialContextPaths;	// 0x30ca2139
- (id)propFindProperties;	// 0x30ca1671
- (void)propFindTaskFinished:(id)finished;	// 0x30ca0735
// declared property setter: - (void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;	// 0x30ca20bd
// declared property setter: - (void)setDiscoveredAccountInfo:(id)info;	// 0x30ca20e1
// declared property setter: - (void)setPotentialContextPaths:(id)paths;	// 0x30ca2149
// declared property setter: - (void)setWellKnownPath:(id)path;	// 0x30ca2115
- (id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;	// 0x30c9e375
- (void)srvLookupTask:(id)task error:(id)error;	// 0x30c9fb01
- (void)startOptionsTask:(id)task;	// 0x30c9f669
- (void)startPropfindTask:(id)task;	// 0x30c9f805
- (void)startSRVLookup:(id)lookup serviceString:(id)string;	// 0x30c9e849
- (void)startTaskGroup;	// 0x30c9d8b5
- (void)startWellKnownFallbackHeadTask:(id)task withURL:(id)url;	// 0x30c9ef8d
- (void)startWellKnownLocationTask:(id)task withURL:(id)url;	// 0x30c9e9ed
- (void)syncAway;	// 0x30c9e365
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30c9faa5
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30c9d7a5
// declared property getter: - (id)wellKnownPath;	// 0x30ca2105
@end

