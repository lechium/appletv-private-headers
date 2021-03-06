/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface Nflxhls : NSObject {
@private
	NSString *crashFormat;	// 4 = 0x4
	NSString *crashReport;	// 8 = 0x8
	double lastPingTime;	// 12 = 0xc
}
@property(assign) BOOL supportPlaylist302Redirects;	// G=0x3374bba0; S=0x3374bb84; converted property
@property(retain) id userId;	// G=0x3374bbec; S=0x3374bbfc; converted property
+ (int)defaultCDNMeasurementMethod;	// 0x3374bb44
+ (int)defaultCDNRankingMethod;	// 0x3374bb08
+ (BOOL)defaultSupportPlaylist302Redirects;	// 0x3374bb98
+ (void)enterShutdown;	// 0x3375233c
+ (id)instance;	// 0x337522a8
- (id)init;	// 0x33755200
- (void)initAndStartNccp;	// 0x337502bc
- (BOOL)LogCollectorBackgroundProcessingEnabled;	// 0x3374bc48
- (void)_logout;	// 0x3375237c
- (void)appLogError:(id)error withInfoMessage:(id)infoMessage withException:(id)exception withStacktrace:(id)stacktrace;	// 0x3374be14
- (id)cdnMeasurementMethodAsNSString:(int)string;	// 0x3374bb5c
- (id)cdnRankingMethodAsNSString:(int)string;	// 0x3374bb20
- (BOOL)configBackgroundProcessingEnabled;	// 0x3374bc5c
- (BOOL)configure:(id)configure forView:(id)view;	// 0x33753cfc
- (void)configureWithFujiConfig:(id)fujiConfig;	// 0x33750924
- (id)cookieExpiresForNameKey:(id)nameKey;	// 0x3374f1a8
- (id)cookieValueForNameKey:(id)nameKey;	// 0x337529dc
- (id)countryDomain;	// 0x33751328
- (id)createURLRequest:(id)request;	// 0x3374d530
- (void)dealloc;	// 0x33754e94
- (void)debugHttp:(BOOL)http;	// 0x3374bdd4
- (void)debugNfhlsProtocol:(BOOL)protocol;	// 0x3374bda8
- (void)deleteConfig;	// 0x3375205c
- (void)deleteNetflixCookies;	// 0x33756274
- (void)deleteNflxId;	// 0x337521ac
- (void)deleteUserExistence;	// 0x3374eef4
- (void)didEnterBackground;	// 0x3374f36c
- (void)enableConfigBackgroundProcessing:(BOOL)processing;	// 0x337511d4
- (void)enableLogCollectorBackgroundProcessing:(BOOL)processing;	// 0x3375122c
- (void)enableOutputtingOfNCCPTransactionResponse:(BOOL)nccptransactionResponse;	// 0x3374bd7c
- (void)enablePeriodicWorkerTimer:(BOOL)timer;	// 0x3374bec8
- (id)encodedURLParameterString:(id)string;	// 0x3375638c
- (id)esn;	// 0x33750998
- (const char *)esnPrefix;	// 0x33750a00
- (id)esnPrefixAsNSString;	// 0x337509cc
- (void)generateNewUUIDStartTime;	// 0x33750f28
- (id)genericFeedURL;	// 0x33750aa8
- (id)getAPIRequestContextParameters;	// 0x33750b8c
- (int)getCDNMeasurementMethod;	// 0x3374bb4c
- (int)getCDNRankingMethod;	// 0x3374bb10
- (id)getConfigurationFromAPI;	// 0x33752454
- (id)getCountry;	// 0x3374bcdc
- (id)getCurrentBitrate;	// 0x33751770
- (id)getLanguage;	// 0x3374bcec
- (id)getLocalhost;	// 0x3374bbb4
- (id)getNflxIdKey;	// 0x3374ba9c
- (id)getNflxIdValue;	// 0x3374baac
- (id)getNflxSecretKey;	// 0x3374babc
- (id)getNflxSecretValue;	// 0x3374bacc
- (id)getNflxUserId;	// 0x3374ba8c
- (int)getTarget;	// 0x3374bd50
- (id)getTestNCCPDataURL;	// 0x3374bc70
- (id)getTestNCCPIdentityURL;	// 0x3374bc80
- (id)getTestNCCPLoggingURL;	// 0x3374bc90
- (id)getUUID;	// 0x33750da4
- (void)installPeriodicWorkerTimer:(id)timer;	// 0x3374bf5c
- (BOOL)isLoggingToConsole;	// 0x33757388
- (BOOL)isNato;	// 0x33754c84
- (BOOL)isUsingPeriodicWorkerTimer;	// 0x3374bd3c
- (BOOL)isUsingStagingNCCP;	// 0x3374bca0
- (BOOL)isUsingTestEnv;	// 0x3374bc0c
- (BOOL)login:(id)login password:(id)password error:(id *)error;	// 0x3374cf3c
- (BOOL)loginRequired:(id *)required;	// 0x3374d324
- (void)logout;	// 0x3374d2cc
- (void)nccpSendPing;	// 0x33750740
- (BOOL)nccpStarted;	// 0x3374badc
- (void)notifyErrorMessage:(BOOL)message message:(id)message2;	// 0x3374c014
- (void)notifyLogin;	// 0x3374d234
- (void)notifyNetworkStatus:(id)status;	// 0x3374c244
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec;	// 0x3374c1e4
- (void)notifyNetworkStatus:(id)status netspec:(id)netspec mcc:(id)mcc mnc:(id)mnc carrier:(id)carrier;	// 0x3374c17c
- (BOOL)notifyPlayerEnd:(double)end reason:(id)reason error:(id *)error;	// 0x3374c8cc
- (void)notifyPlayerLoadState:(double)state playing:(BOOL)playing;	// 0x3374c820
- (void)notifyPlayerPause:(double)pause;	// 0x3374c664
- (void)notifyPlayerResume:(double)resume;	// 0x3374c78c
- (void)notifyPlayerSeek:(double)seek;	// 0x3374c5d0
- (BOOL)notifyPlayerStartFailed:(double)failed reason:(id)reason error:(id *)error;	// 0x3374c29c
- (BOOL)notifyPlayerStartSucceeded:(double)succeeded error:(id *)error;	// 0x3374c448
- (void)notifyProgress:(double)progress;	// 0x3374c6f8
- (void)notifyScreenSelection:(int)selection;	// 0x3374c13c
- (id)oAuthSignRequest:(id)request params:(id)params withHTTPMethod:(id)httpmethod;	// 0x33756ec4
- (void)periodicWorkerThreadFunc:(id)func;	// 0x33751c8c
- (void)periodicWorkerTrigger:(id)trigger;	// 0x33751f58
- (BOOL)preparePlayList:(id)list returningPlayUrl:(id *)url audioEncoding:(int *)encoding position:(double *)position duration:(double *)duration error:(id *)error;	// 0x3374ca5c
- (id)pseudoLocalizeString:(id)string withValue:(id)value;	// 0x337515b4
- (void)queueReconfigure;	// 0x337510a4
- (BOOL)reconfigure:(id)reconfigure;	// 0x33752fc4
- (void)reconfigureIfNecessary;	// 0x33751100
- (void)registerCrashReport:(id)report report:(id)report2;	// 0x337508c4
- (void)registerNfhlsProtocol;	// 0x3374f430
- (void)reportAndAssignAuthorizationToken:(id)token;	// 0x3374e028
- (void)requestAccessToken:(id)token didFailWithError:(id)error;	// 0x3374d64c
- (void)requestAccessToken:(id)token didFinishWithData:(id)data;	// 0x3374d754
- (void)requestAccessTokenWorker;	// 0x3374dc58
- (void)requestAuthorizationToken:(id)token didFailWithError:(id)error;	// 0x3374e06c
- (void)requestAuthorizationToken:(id)token didFinishWithData:(id)data;	// 0x3374ddc0
- (void)requestAuthorizationTokenWorker;	// 0x3374e174
- (void)requestNetflixLogin;	// 0x33755ab4
- (BOOL)restoreNeededConfigCookies:(BOOL)cookies;	// 0x3374e2c4
- (BOOL)restoreNeededLoginCookies;	// 0x3374e870
- (BOOL)saveNeededConfigCookies:(id)cookies;	// 0x3374e4ac
- (BOOL)saveNeededLoginCookies:(id)cookies;	// 0x3374ebf4
- (void)setCDNMeasurementMethod:(int)method;	// 0x3374bb34
- (void)setCDNRankingMethod:(int)method;	// 0x3374baf8
- (void)setCDNValue:(int)value;	// 0x337522fc
- (void)setCountryCode:(id)code;	// 0x337513ac
- (void)setCred:(id)cred idtype:(id)idtype secid:(id)secid secidtype:(id)secidtype;	// 0x33751b68
- (BOOL)setCredentialFromCookie;	// 0x337518cc
- (BOOL)setCredentialUsingCookie;	// 0x33751c5c
- (void)setDeviceUserAgent:(id)agent;	// 0x33751418
- (void)setDownloadableContentProfile:(int)profile;	// 0x337514e4
- (void)setExpiresThreshold:(double)threshold;	// 0x3374bcfc
- (void)setInitialBitrate3G:(unsigned)g;	// 0x337517a8
- (void)setInitialBitrateWifi:(unsigned)wifi;	// 0x337517e8
- (void)setKeyUseCustom:(BOOL)custom;	// 0x33751524
- (void)setLanguage:(id)language;	// 0x33750a34
- (void)setLogToConsole:(BOOL)console;	// 0x3375734c
- (void)setOSVersion:(id)version;	// 0x3374c0ec
- (void)setPlayListUseCustom:(BOOL)custom;	// 0x33751564
// converted property setter: - (void)setSupportPlaylist302Redirects:(BOOL)redirects;	// 0x3374bb84
- (void)setUIVersion:(id)version;	// 0x3374c114
- (void)setUseHttp:(BOOL)http;	// 0x33751828
- (void)setUsePseudoLocalizedString:(BOOL)string;	// 0x33751720
// converted property setter: - (void)setUserId:(id)anId;	// 0x3374bbfc
- (void)setUsing3g:(BOOL)g;	// 0x3374c0ac
- (void)setm3u8bandwithSource:(int)source;	// 0x337514a4
- (void)setupFujiTarget:(int)target;	// 0x33754cb8
- (void)showCookies;	// 0x3374f044
- (void)startWithParams:(id)params;	// 0x33755598
- (void)startWithParams:(id)params withSettings:(id)settings;	// 0x33750288
- (void)startWithParamsPrologue:(id)paramsPrologue;	// 0x3375017c
- (void)startWithParamsPrologue:(id)paramsPrologue withSettings:(id)settings;	// 0x3375024c
- (void)stop;	// 0x33752c18
- (BOOL)supportDD5_1;	// 0x3374bc20
// converted property getter: - (BOOL)supportPlaylist302Redirects;	// 0x3374bba0
- (id)uibootURL;	// 0x3374bcb4
- (void)unregisterNfhlsProtocol;	// 0x3374f408
- (void)updateParams:(id)params;	// 0x3374f458
- (BOOL)useDD5_1_profiles_v2;	// 0x3374bc34
- (BOOL)usePseudoLocalizedStrings;	// 0x3374bb70
- (void)useStagingNCCP:(BOOL)nccp;	// 0x33751000
- (void)useTestEnv:(BOOL)env;	// 0x33751284
// converted property getter: - (id)userId;	// 0x3374bbec
- (id)version;	// 0x33751fa8
- (long long)webServiceGetLogTimeInMS;	// 0x3374be74
- (void)webServiceLogActivity:(id)activity forAction:(id)action onView:(id)view withStartTimeInMS:(long long)ms withResponseTimeInMS:(long long)ms5;	// 0x33756b7c
- (void)webServiceLogError:(id)error withNSError:(id)nserror withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x33756764
- (void)webServiceLogError:(id)error withSubCodeError:(int)subCodeError withInfoMessage:(id)infoMessage forAction:(id)action onView:(id)view;	// 0x337563e4
- (void)willEnterForeground;	// 0x3374f2a0
@end

