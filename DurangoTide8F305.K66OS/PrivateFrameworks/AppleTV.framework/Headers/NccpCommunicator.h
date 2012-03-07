/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableArray, NccpTransactionResult;
@protocol NccpHandlerDelegate;

__attribute__((visibility("hidden")))
@interface NccpCommunicator : NSObject {
@private
	NSObject<NccpHandlerDelegate> *mNccpHandlerDelegate;	// 4 = 0x4
	BOOL mNeedRegister;	// 8 = 0x8
	BOOL mNeedsCredentials;	// 9 = 0x9
	int fujiTarget;	// 12 = 0xc
	unsigned maxDownloadables;	// 16 = 0x10
	unsigned maxCdns;	// 20 = 0x14
	NccpTransactionResult *lastTransactionResult;	// 24 = 0x18
	NSMutableArray *rankedCDNList;	// 28 = 0x1c
	NSMutableArray *nccpRequestMetrics;	// 32 = 0x20
	BOOL mNeedCredentials;	// 36 = 0x24
}
@property(readonly, retain) NccpTransactionResult *lastTransactionResult;	// G=0x308e94cc; @synthesize
@property(readonly, assign, nonatomic) unsigned maxCdns;	// G=0x308e8310; @synthesize
@property(readonly, assign, nonatomic) unsigned maxDownloadables;	// G=0x308e8324; @synthesize
@property(readonly, assign) BOOL needCredentials;	// G=0x308e8338; @synthesize=mNeedCredentials
@property(readonly, assign) BOOL needRegister;	// G=0x308e834c; @synthesize=mNeedRegister
+ (id)NFErrToNWErr:(unsigned)nwerr;	// 0x308e8488
+ (id)NFErrToString:(unsigned)string;	// 0x308e866c
+ (id)buildEsn:(int)esn;	// 0x308ea5b4
+ (void)cleanUp;	// 0x308ebf54
+ (BOOL)createWithDelegate:(id)delegate withTarget:(int)target useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x308e8efc
+ (id)deviceUserAgent;	// 0x308e81e4
+ (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x308e9da4
+ (void)enterShutdown;	// 0x308e81bc
+ (const char *)esnPrefix:(int)prefix;	// 0x308e9bf8
+ (id)esnPrefixAsNSString:(int)string;	// 0x308e9008
+ (void)inactivePurgeSystemDataFiles;	// 0x308e974c
+ (id)instance;	// 0x308e81f4
+ (BOOL)instantiated;	// 0x308e8218
+ (BOOL)isNccpLoggingToConsole;	// 0x308e9be8
+ (void)setDeviceUserAgent:(id)agent;	// 0x308e9124
+ (void)setNccpLogToConsole:(BOOL)console;	// 0x308e9bcc
+ (void)setOSVersion:(id)version;	// 0x308ea054
+ (void)setUIVersion:(id)version;	// 0x308ea1d0
+ (void)setUniqueIdentifier:(id)identifier;	// 0x308e9198
+ (id)uniqueIdentifier;	// 0x308e81d4
- (id)initWithDelegate:(id)delegate;	// 0x308e9e90
- (BOOL)buildRankedCDNList:(AuthResponseData *)list withErrorMsg:(id *)errorMsg;	// 0x308eb3d0
- (id)cdnDownloadDataWithCdnId:(unsigned)cdnId;	// 0x308e8a58
- (void)cleanUp;	// 0x308e98c4
- (void)dealloc;	// 0x308e8dcc
- (void)doBookmarkTh;	// 0x308e8c48
- (void)doRuntimeTh;	// 0x308e8850
- (id)extractClientHash:(id)hash;	// 0x308e954c
- (void)fillLicenseResponseData:(LicenseResponseData *)data;	// 0x308e9b34
- (int)getAuthorizationET;	// 0x308e815c
- (unsigned)getBookmark:(unsigned)bookmark;	// 0x308f06a4
- (unsigned)getBookmarkTh:(unsigned)th;	// 0x308e8d20
- (int)getCdnSelectionET;	// 0x308e81ac
- (id)getCurrentMovieTitle;	// 0x308e9dc0
- (unsigned)getDownloadableIdForLicenseReq;	// 0x308e82e8
- (unsigned)getLastTriedAuthMovieId;	// 0x308e8280
- (id)getLicense;	// 0x308e82d8
- (int)getLicenseET;	// 0x308e816c
- (int)getMetaDataET;	// 0x308e817c
- (id)getNccpRequestMetrics;	// 0x308e826c
- (int)getNccpRequestMetricsTotalTime;	// 0x308e99c8
- (id)getRankedCDNList;	// 0x308e8258
- (int)getRegisterET;	// 0x308e818c
- (double)getRunTime:(unsigned)time;	// 0x308ee790
- (unsigned)getRunTimeTh:(unsigned)th;	// 0x308e8934
- (int)getUserMetaDataET;	// 0x308e819c
- (void)initializeForPlaylistGeneration;	// 0x308e8708
- (void)invalidateAllResponseData;	// 0x308e8d98
- (void)invalidateAuthorizationResponseData;	// 0x308e8230
- (void)invalidateLicenseResponseData;	// 0x308e89dc
- (BOOL)is3GPlaybackAllowed;	// 0x308e8294
// declared property getter: - (id)lastTransactionResult;	// 0x308e94cc
// declared property getter: - (unsigned)maxCdns;	// 0x308e8310
// declared property getter: - (unsigned)maxDownloadables;	// 0x308e8324
// declared property getter: - (BOOL)needCredentials;	// 0x308e8338
// declared property getter: - (BOOL)needRegister;	// 0x308e834c
- (BOOL)netflixIdsMatch:(id)match :(id)arg2;	// 0x308e90b4
- (void)purgeUserRegistration;	// 0x308e9874
- (void)removePreviousUserStoredData;	// 0x308e9960
- (BOOL)resendAuthorization;	// 0x308eb200
- (void)saveShopperId;	// 0x308ea920
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x308e9e00
- (BOOL)sendAuthorization:(unsigned)authorization trackId:(int)anId withContentProfiles:(id)contentProfiles;	// 0x308efc58
- (BOOL)sendLicense:(id)license;	// 0x308eed8c
- (BOOL)sendPing;	// 0x308ecac4
- (BOOL)sendRegister:(id)aRegister;	// 0x308ec280
- (void)setCDNMeasurementMethod:(int)method;	// 0x308e82c8
- (void)setCDNRankingMethod:(int)method;	// 0x308e82b8
- (void)setCDNValue:(int)value;	// 0x308e82a8
- (void)setNccpUrls:(int)urls useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp;	// 0x308ecf50
- (void)setNeedCredentials;	// 0x308e82f8
- (void)setNeedRegister;	// 0x308e89ac
- (bool)startNrdpWithServer:(int)server useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x308ed294
- (void)triggerGetBookmark:(unsigned)bookmark;	// 0x308e8b74
- (void)triggerGetRuntime:(unsigned)runtime;	// 0x308e877c
- (BOOL)updateAuthorizationResponseData:(AuthResponseData *)data withErrorMsg:(id *)errorMsg;	// 0x308e8b20
- (BOOL)updateCTicket:(unsigned long long)ticket;	// 0x308ef46c
- (BOOL)updateId:(id)anId idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x308eaaec
- (void)updateLicenseResponseData:(LicenseResponseData *)data;	// 0x308e8a10
- (void)updateOSVersion;	// 0x308ea480
- (void)updateUIVersion;	// 0x308ea34c
@end
