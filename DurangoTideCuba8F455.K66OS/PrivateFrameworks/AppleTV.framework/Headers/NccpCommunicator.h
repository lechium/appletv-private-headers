/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

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
@property(readonly, retain) NccpTransactionResult *lastTransactionResult;	// G=0x308373ac; @synthesize
@property(readonly, assign, nonatomic) unsigned maxCdns;	// G=0x30835ee0; @synthesize
@property(readonly, assign, nonatomic) unsigned maxDownloadables;	// G=0x30835ef4; @synthesize
@property(readonly, assign) BOOL needCredentials;	// G=0x30835f08; @synthesize=mNeedCredentials
@property(readonly, assign) BOOL needRegister;	// G=0x30835f1c; @synthesize=mNeedRegister
+ (id)NFErrToNWErr:(unsigned)nwerr;	// 0x308360c4
+ (id)NFErrToString:(unsigned)string;	// 0x308362a8
+ (id)buildEsn:(int)esn;	// 0x30838bf0
+ (void)cleanUp;	// 0x308399c0
+ (BOOL)createWithDelegate:(id)delegate withTarget:(int)target useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x30836cdc
+ (id)deviceUserAgent;	// 0x30835d8c
+ (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x30837d7c
+ (void)enterShutdown;	// 0x30835d64
+ (const char *)esnPrefix:(int)prefix;	// 0x30837bd0
+ (id)esnPrefixAsNSString:(int)string;	// 0x30836de8
+ (void)inactivePurgeSystemDataFiles;	// 0x308376e4
+ (id)instance;	// 0x30835dc4
+ (BOOL)instantiated;	// 0x30835de8
+ (BOOL)isNccpLoggingToConsole;	// 0x30837bc0
+ (void)setDeviceUserAgent:(id)agent;	// 0x30836f04
+ (void)setDfxpURLsRequireRangeRequest:(BOOL)request;	// 0x30835db0
+ (void)setHashUDID:(BOOL)udid;	// 0x30835d9c
+ (void)setNccpLogToConsole:(BOOL)console;	// 0x30837ba4
+ (void)setOSVersion:(id)version;	// 0x308396c8
+ (void)setPlaydataPersistor;	// 0x3083e3c0
+ (void)setSubtitlesManagesUpdates:(BOOL)updates;	// 0x30835cf0
+ (void)setUIVersion:(id)version;	// 0x30839844
+ (void)setUniqueIdentifier:(id)identifier;	// 0x30836f78
+ (BOOL)subtitlesManagesUpdates;	// 0x30835cdc
+ (id)uniqueIdentifier;	// 0x30835d7c
- (id)initWithDelegate:(id)delegate;	// 0x30838044
- (id)availableSubtitleLanguages;	// 0x30838208
- (id)availableSubtitleLanguagesWithBCP47;	// 0x308384b8
- (BOOL)buildRankedCDNList:(AuthResponseData *)list withErrorMsg:(id *)errorMsg;	// 0x30839dd8
- (id)cdnDownloadDataWithCdnId:(unsigned)cdnId;	// 0x30836694
- (void)cleanUp;	// 0x3083785c
- (void)dealloc;	// 0x30836bac
- (void)disableSubtitles;	// 0x30837adc
- (void)doBookmarkTh;	// 0x30836a28
- (void)doRuntimeTh;	// 0x3083648c
- (void)enableSubtitlesWithLanguage:(id)language pos:(double)pos;	// 0x3083a960
- (id)extractClientHash:(id)hash;	// 0x308374e4
- (void)fillLicenseResponseData:(LicenseResponseData *)data;	// 0x30837b0c
- (int)getAuthorizationET;	// 0x30835d04
- (unsigned)getBookmark:(unsigned)bookmark;	// 0x3083b3e8
- (unsigned)getBookmarkTh:(unsigned)th;	// 0x30836b00
- (int)getCdnSelectionET;	// 0x30835d54
- (id)getCurrentMovieTitle;	// 0x30837d98
- (unsigned)getDownloadableIdForLicenseReq;	// 0x30835eb8
- (unsigned)getLastTriedAuthMovieId;	// 0x30835e50
- (id)getLicense;	// 0x30835ea8
- (int)getLicenseET;	// 0x30835d14
- (int)getMetaDataET;	// 0x30835d24
- (id)getNccpRequestMetrics;	// 0x30835e3c
- (int)getNccpRequestMetricsTotalTime;	// 0x30837970
- (id)getRankedCDNList;	// 0x30835e28
- (int)getRegisterET;	// 0x30835d34
- (double)getRunTime:(unsigned)time;	// 0x3083ba80
- (unsigned)getRunTimeTh:(unsigned)th;	// 0x30836570
- (id)getSubtitleText;	// 0x30837dd8
- (int)getUserMetaDataET;	// 0x30835d44
- (void)initializeForPlaylistGeneration;	// 0x30836344
- (void)invalidateAllResponseData;	// 0x30836b78
- (void)invalidateAuthorizationResponseData;	// 0x30835e00
- (void)invalidateLicenseResponseData;	// 0x30836618
- (BOOL)is3GPlaybackAllowed;	// 0x30835e64
// declared property getter: - (id)lastTransactionResult;	// 0x308373ac
// declared property getter: - (unsigned)maxCdns;	// 0x30835ee0
// declared property getter: - (unsigned)maxDownloadables;	// 0x30835ef4
// declared property getter: - (BOOL)needCredentials;	// 0x30835f08
// declared property getter: - (BOOL)needRegister;	// 0x30835f1c
- (BOOL)netflixIdsMatch:(id)match :(id)arg2;	// 0x30836e94
- (void)overRideSubtitleUrl:(BOOL)url url:(id)url2;	// 0x30838888
- (void)purgeUserRegistration;	// 0x3083780c
- (void)removePreviousUserStoredData;	// 0x30837908
- (BOOL)resendAuthorization;	// 0x3083831c
- (void)saveShopperId;	// 0x30838a5c
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x30837fb4
- (BOOL)sendAuthorization:(unsigned)authorization trackId:(int)anId withContentProfiles:(id)contentProfiles;	// 0x3083cfa0
- (BOOL)sendLicense:(id)license;	// 0x3083c8c0
- (BOOL)sendPing;	// 0x3083af5c
- (BOOL)sendRegister:(id)aRegister;	// 0x3083c07c
- (void)setCDNMeasurementMethod:(int)method;	// 0x30835e98
- (void)setCDNRankingMethod:(int)method;	// 0x30835e88
- (void)setCDNValue:(int)value;	// 0x30835e78
- (void)setNccpUrls:(int)urls useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp;	// 0x3083ac4c
- (void)setNeedCredentials;	// 0x30835ec8
- (void)setNeedRegister;	// 0x308365e8
- (bool)startNrdpWithServer:(int)server useTestEnv:(BOOL)env withTestNCCPIdentityURL:(id)testNCCPIdentityURL withTestNCCPDataURL:(id)testNCCPDataURL withTestNCCPLoggingURL:(id)testNCCPLoggingURL useStagingNCCP:(BOOL)nccp caFile:(id)file idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue;	// 0x3083e794
- (void)subtitleSeek:(double)seek;	// 0x30837e98
- (id)subtitlesAsNSArray;	// 0x3083e4c0
- (void)subtitlesDidFailWithError;	// 0x3083675c
- (void)subtitlesDidFinishLoad;	// 0x308367e8
- (void)subtitlesDidStartLoad;	// 0x30836874
- (void)triggerGetBookmark:(unsigned)bookmark;	// 0x30836954
- (void)triggerGetRuntime:(unsigned)runtime;	// 0x308363b8
- (BOOL)updateAuthorizationResponseData:(AuthResponseData *)data withErrorMsg:(id *)errorMsg;	// 0x30836900
- (BOOL)updateCTicket:(unsigned long long)ticket;	// 0x3083dba0
- (BOOL)updateId:(id)anId idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue forceUpdate:(BOOL)update;	// 0x30838f9c
- (void)updateLicenseResponseData:(LicenseResponseData *)data;	// 0x3083664c
- (void)updateOSVersion;	// 0x30838738
- (void)updatePTS:(double)pts;	// 0x30837f04
- (void)updateUIVersion;	// 0x30838604
@end
