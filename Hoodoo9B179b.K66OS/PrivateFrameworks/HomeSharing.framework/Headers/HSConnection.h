/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSDictionary, SSAccount, NSURL, HSFairPlayInfo, HSConnectionStream;

@interface HSConnection : NSObject {
@private
	SSAccount *_account;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	int _connectionState;	// 12 = 0xc
	HSConnectionStream *_connectionStream;	// 16 = 0x10
	HSConnectionStream *_concurrentConnectionStream;	// 20 = 0x14
	int _connectionType;	// 24 = 0x18
	dispatch_queue_s *_queue;	// 28 = 0x1c
	CFReadStreamRef _readStream;	// 32 = 0x20
	BOOL authenticationRequired;	// 36 = 0x24
	unsigned basePlaylistContainerID;	// 40 = 0x28
	NSString *buildIdentifier;	// 44 = 0x2c
	NSDictionary *cookies;	// 48 = 0x30
	unsigned databaseID;	// 52 = 0x34
	unsigned databaseRevision;	// 56 = 0x38
	HSFairPlayInfo *fairPlayInfo;	// 60 = 0x3c
	NSString *homeSharingGroupID;	// 64 = 0x40
	NSString *password;	// 68 = 0x44
	unsigned sessionID;	// 72 = 0x48
	NSString *userAgent;	// 76 = 0x4c
	NSString *username;	// 80 = 0x50
}
@property(retain) SSAccount *account;	// G=0x317aa129; S=0x317aa13d; @synthesize=_account
@property(assign, getter=isAuthenticationRequired) BOOL authenticationRequired;	// G=0x317aa161; S=0x317aa171; @synthesize
@property(assign) unsigned basePlaylistContainerID;	// G=0x317aa181; S=0x317aa191; @synthesize
@property(readonly, assign) NSURL *baseURL;	// G=0x317a7b49; 
@property(copy) NSString *buildIdentifier;	// G=0x317aa1a1; S=0x317aa1b5; @synthesize
@property(assign) int connectionState;	// G=0x317aa1d9; S=0x317aa1e9; @synthesize=_connectionState
@property(readonly, assign) int connectionType;	// G=0x317aa1f9; @synthesize=_connectionType
@property(copy) NSDictionary *cookies;	// G=0x317aa209; S=0x317aa21d; @synthesize
@property(assign) unsigned databaseID;	// G=0x317aa241; S=0x317aa251; @synthesize
@property(assign) unsigned databaseRevision;	// G=0x317aa261; S=0x317aa271; @synthesize
@property(retain) HSFairPlayInfo *fairPlayInfo;	// G=0x317aa281; S=0x317aa295; @synthesize
@property(copy) NSString *homeSharingGroupID;	// G=0x317aa2b9; S=0x317aa2cd; @synthesize
@property(copy) NSString *password;	// G=0x317aa2f1; S=0x317aa305; @synthesize
@property(assign) unsigned sessionID;	// G=0x317aa329; S=0x317aa339; @synthesize
@property(copy) NSString *userAgent;	// G=0x317aa349; S=0x317aa35d; @synthesize
@property(copy) NSString *username;	// G=0x317aa381; S=0x317aa395; @synthesize
- (id)initWithBaseURL:(id)baseURL;	// 0x317a7965
- (id)initWithBaseURL:(id)baseURL connectionType:(int)type;	// 0x317a7979
- (void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;	// 0x317a8845
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x317a8a8d
- (void)_notifyServerOfActivity;	// 0x317a93e1
- (void)_sendRequest:(id)request onConnectionStream:(id)stream withInternalResponseHandler:(id)internalResponseHandler;	// 0x317a947d
// declared property getter: - (id)account;	// 0x317aa129
// declared property getter: - (unsigned)basePlaylistContainerID;	// 0x317aa181
// declared property getter: - (id)baseURL;	// 0x317a7b49
// declared property getter: - (id)buildIdentifier;	// 0x317aa1a1
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;	// 0x317a8585
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x317a7b81
// declared property getter: - (int)connectionState;	// 0x317aa1d9
// declared property getter: - (int)connectionType;	// 0x317aa1f9
// declared property getter: - (id)cookies;	// 0x317aa209
// declared property getter: - (unsigned)databaseID;	// 0x317aa241
// declared property getter: - (unsigned)databaseRevision;	// 0x317aa261
- (void)dealloc;	// 0x317a7a6d
- (void)disconnect;	// 0x317a8119
// declared property getter: - (id)fairPlayInfo;	// 0x317aa281
// declared property getter: - (id)homeSharingGroupID;	// 0x317aa2b9
// declared property getter: - (BOOL)isAuthenticationRequired;	// 0x317aa161
// declared property getter: - (id)password;	// 0x317aa2f1
- (void)sendConcurrentRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x317a8471
- (void)sendRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x317a835d
// declared property getter: - (unsigned)sessionID;	// 0x317aa329
// declared property setter: - (void)setAccount:(id)account;	// 0x317aa13d
// declared property setter: - (void)setAuthenticationRequired:(BOOL)required;	// 0x317aa171
// declared property setter: - (void)setBasePlaylistContainerID:(unsigned)anId;	// 0x317aa191
// declared property setter: - (void)setBuildIdentifier:(id)identifier;	// 0x317aa1b5
// declared property setter: - (void)setConnectionState:(int)state;	// 0x317aa1e9
// declared property setter: - (void)setCookies:(id)cookies;	// 0x317aa21d
// declared property setter: - (void)setDatabaseID:(unsigned)anId;	// 0x317aa251
// declared property setter: - (void)setDatabaseRevision:(unsigned)revision;	// 0x317aa271
// declared property setter: - (void)setFairPlayInfo:(id)info;	// 0x317aa295
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x317aa2cd
// declared property setter: - (void)setPassword:(id)password;	// 0x317aa305
// declared property setter: - (void)setSessionID:(unsigned)anId;	// 0x317aa339
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x317aa35d
// declared property setter: - (void)setUsername:(id)username;	// 0x317aa395
// declared property getter: - (id)userAgent;	// 0x317aa349
// declared property getter: - (id)username;	// 0x317aa381
@end

