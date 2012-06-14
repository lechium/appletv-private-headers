/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class NSFileHandle, NSDate, DAStatusReport, NSTimer, NSString, NSURL, NSURLConnection, NSMutableData;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate> {
	NSURL *_url;	// 4 = 0x4
	id<SubCalURLRequestDelegate> _delegate;	// 8 = 0x8
	NSString *_username;	// 12 = 0xc
	NSString *_password;	// 16 = 0x10
	double _timestamp;	// 20 = 0x14
	NSURLConnection *_connection;	// 28 = 0x1c
	NSMutableData *_connectionData;	// 32 = 0x20
	BOOL _useFileCache;	// 36 = 0x24
	NSString *_filePath;	// 40 = 0x28
	NSFileHandle *_fileHandle;	// 44 = 0x2c
	BOOL _sendDataUpdateCallback;	// 48 = 0x30
	NSDate *_startTime;	// 52 = 0x34
	DAStatusReport *_statusReport;	// 56 = 0x38
	NSTimer *_idleTimer;	// 60 = 0x3c
	NSString *_startRunloopDescriptionString;	// 64 = 0x40
}
@property(retain, nonatomic) NSMutableData *connectionData;	// G=0x360f03ed; S=0x360f03fd; @synthesize=_connectionData
@property(assign, nonatomic) id<SubCalURLRequestDelegate> delegate;	// G=0x360f02cd; S=0x360ef1cd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString *filePath;	// G=0x360f03bd; @synthesize=_filePath
@property(copy, nonatomic) NSString *password;	// G=0x360f0301; S=0x360f0315; @synthesize=_password
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x360f03cd; S=0x360f03dd; @synthesize=_statusReport
@property(assign) double timestamp;	// G=0x360f0325; S=0x360f0359; @synthesize=_timestamp
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x360f02bd; @synthesize=_url
@property(assign) BOOL useFileCache;	// G=0x360f038d; S=0x360f03a5; @synthesize=_useFileCache
@property(copy, nonatomic) NSString *username;	// G=0x360f02dd; S=0x360f02f1; @synthesize=_username
+ (id)_cachedICSFilesDirectory;	// 0x360eff59
+ (void)_initializeFileCache;	// 0x360effd1
- (id)initWithURL:(id)url;	// 0x360ee481
- (void)_cancelIdleTimer;	// 0x360eebc9
- (void)_createIdleTimer;	// 0x360eead1
- (void)_extendIdleTimer;	// 0x360eeb71
- (void)_finishWithError:(id)error;	// 0x360ef0b1
- (void)_idleTimerFired;	// 0x360ee919
- (void)_markEndTime;	// 0x360ee895
- (void)_markStartTime;	// 0x360ee851
- (void)_openFileHandle;	// 0x360ef929
- (void)_receivedDataForFile:(id)file;	// 0x360efab5
- (void)_respondToChallenge:(id)challenge withCredential:(id)credential noCredentialBehavior:(int)behavior;	// 0x360ef301
- (void)_setHeadersOnRequest:(id)request;	// 0x360ee691
- (void)cancel;	// 0x360eef69
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x360ef215
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x360efe49
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x360ef465
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x360efca1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x360ef765
// declared property getter: - (id)connectionData;	// 0x360f03ed
- (void)connectionDidFinishLoading:(id)connection;	// 0x360efd55
- (void)dealloc;	// 0x360ee579
// declared property getter: - (id)delegate;	// 0x360f02cd
// declared property getter: - (id)filePath;	// 0x360f03bd
// declared property getter: - (id)password;	// 0x360f0301
// declared property setter: - (void)setConnectionData:(id)data;	// 0x360f03fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x360ef1cd
// declared property setter: - (void)setPassword:(id)password;	// 0x360f0315
// declared property setter: - (void)setStatusReport:(id)report;	// 0x360f03dd
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x360f0359
// declared property setter: - (void)setUseFileCache:(BOOL)cache;	// 0x360f03a5
// declared property setter: - (void)setUsername:(id)username;	// 0x360f02f1
- (void)startConnection;	// 0x360eec3d
// declared property getter: - (id)statusReport;	// 0x360f03cd
// declared property getter: - (double)timestamp;	// 0x360f0325
// declared property getter: - (id)url;	// 0x360f02bd
// declared property getter: - (BOOL)useFileCache;	// 0x360f038d
// declared property getter: - (id)username;	// 0x360f02dd
@end

