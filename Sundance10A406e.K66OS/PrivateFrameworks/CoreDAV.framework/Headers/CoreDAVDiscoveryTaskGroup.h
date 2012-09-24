/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"

@class NSMutableArray, NSString, NSArray;
@protocol CoreDAVAccountInfoProvider, CoreDAVDiscoveryTaskGroupDelegate;

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
@property(assign) BOOL didReceiveAuthenticationError;	// G=0x303b8e2d; S=0x303b8e45; @synthesize=_didReceiveAuthenticationError
@property(retain) id<CoreDAVAccountInfoProvider> discoveredAccountInfo;	// G=0x303b8e5d; S=0x303b8e71; @synthesize=_discoveredAccountInfo
@property(retain, nonatomic) NSArray *potentialContextPaths;	// G=0x303b8ea1; S=0x303b8eb1; @synthesize=_potentialContextPaths
@property(retain, nonatomic) NSString *wellKnownPath;	// G=0x303b8e81; S=0x303b8e91; @synthesize=_wellKnownPath
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x303b433d
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPath:(id)path potentialContextPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x303b41a1
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager httpPorts:(id)ports httpsPorts:(id)ports4 httpServiceString:(id)string httpsServiceString:(id)string6 wellKnownPaths:(id)paths requiredComplianceClass:(id)aClass;	// 0x303b42ed
- (void)addToDiscoveryArray:(id *)discoveryArray discovery:(id)discovery;	// 0x303b8b4d
- (id)allDiscoveryPaths:(id)paths;	// 0x303b550d
- (id)allDiscoveryPorts:(id)ports withScheme:(id)scheme;	// 0x303b5439
- (void)cancelTaskGroup;	// 0x303b450d
- (id)cleanedStringsFromResponseHeaders:(id)responseHeaders forHeader:(id)header;	// 0x303b89d5
- (void)completeDiscovery:(id)discovery error:(id)error;	// 0x303b7711
- (void)completeOptionsTask:(id)task error:(id)error;	// 0x303b7169
- (void)dealloc;	// 0x303b43d1
// declared property getter: - (BOOL)didReceiveAuthenticationError;	// 0x303b8e2d
// declared property getter: - (id)discoveredAccountInfo;	// 0x303b8e5d
- (id)extractPrincipalURLFromPropFindTask:(id)propFindTask error:(id *)error;	// 0x303b85d1
- (void)getDiscoveryStatus:(id)status priorFailed:(id *)failed subsequentFailed:(id *)failed3 priorIncomplete:(id *)incomplete subsequentIncomplete:(id *)incomplete5 priorSuccess:(id *)success subsequentSuccess:(id *)success7;	// 0x303b8b95
- (void)optionsTask:(id)task error:(id)error;	// 0x303b7451
// declared property getter: - (id)potentialContextPaths;	// 0x303b8ea1
- (id)propFindProperties;	// 0x303b83f1
- (void)propFindTaskFinished:(id)finished;	// 0x303b74b9
// declared property setter: - (void)setDidReceiveAuthenticationError:(BOOL)receiveAuthenticationError;	// 0x303b8e45
// declared property setter: - (void)setDiscoveredAccountInfo:(id)info;	// 0x303b8e71
// declared property setter: - (void)setPotentialContextPaths:(id)paths;	// 0x303b8eb1
// declared property setter: - (void)setWellKnownPath:(id)path;	// 0x303b8e91
- (id)setupDiscoveries:(id)discoveries withSchemes:(id)schemes;	// 0x303b5079
- (void)srvLookupTask:(id)task error:(id)error;	// 0x303b6881
- (void)startOptionsTask:(id)task;	// 0x303b63ed
- (void)startPropfindTask:(id)task;	// 0x303b6585
- (void)startSRVLookup:(id)lookup serviceString:(id)string;	// 0x303b5591
- (void)startTaskGroup;	// 0x303b45f5
- (void)startWellKnownFallbackHeadTask:(id)task withURL:(id)url;	// 0x303b5cfd
- (void)startWellKnownLocationTask:(id)task withURL:(id)url;	// 0x303b5735
- (void)syncAway;	// 0x303b5069
- (void)task:(id)task didFinishWithError:(id)error;	// 0x303b6825
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x303b44c1
// declared property getter: - (id)wellKnownPath;	// 0x303b8e81
@end
