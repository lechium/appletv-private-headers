/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MZKeyValueStoreClampsController : NSObject <NSCoding> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSMutableDictionary *_transactionClamps;	// 8 = 0x8
	double _dsidCheckTimestamp;	// 12 = 0xc
	double _authenticationNeededTimestamp;	// 20 = 0x14
	double _userAcceptedSyncTimestamp;	// 28 = 0x1c
	double _networkingBlockedUntil;	// 36 = 0x24
	double _backOffUntil;	// 44 = 0x2c
	double _userCancelledSignInBackOffUntil;	// 52 = 0x34
	NSData *_pendingUserDefaultArchivedData;	// 60 = 0x3c
	double _nextUserCancelBackOffInterval;	// 64 = 0x40
}
@property(assign) double authenticationNeededTimestamp;	// G=0x3548a049; S=0x3548a07d; @synthesize=_authenticationNeededTimestamp
@property(assign) double backOffUntil;	// G=0x3548a181; S=0x3548a1b5; @synthesize=_backOffUntil
@property(assign) double dsidCheckTimestamp;	// G=0x35489fe1; S=0x3548a015; @synthesize=_dsidCheckTimestamp
@property(assign) double networkingBlockedUntil;	// G=0x3548a119; S=0x3548a14d; @synthesize=_networkingBlockedUntil
@property(assign) double nextUserCancelBackOffInterval;	// G=0x3548a275; S=0x3548a2a9; @synthesize=_nextUserCancelBackOffInterval
@property(retain) NSData *pendingUserDefaultArchivedData;	// G=0x3548a251; S=0x3548a265; @synthesize=_pendingUserDefaultArchivedData
@property(retain, nonatomic) NSMutableDictionary *transactionClamps;	// G=0x35489fc1; S=0x35489fd1; @synthesize=_transactionClamps
@property(assign) double userAcceptedSyncTimestamp;	// G=0x3548a0b1; S=0x3548a0e5; @synthesize=_userAcceptedSyncTimestamp
@property(assign) double userCancelledSignInBackOffUntil;	// G=0x3548a1e9; S=0x3548a21d; @synthesize=_userCancelledSignInBackOffUntil
+ (id)sharedClampsController;	// 0x35488599
- (id)init;	// 0x35488695
- (id)initWithCoder:(id)coder;	// 0x3548889d
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)networkingBlocked error:(id *)error;	// 0x35489ab9
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)off error:(id *)error;	// 0x35489cb9
- (BOOL)_canScheduleTransactionBasedOnDSIDCheck:(id)check error:(id *)error;	// 0x35489bc9
- (BOOL)_canScheduleTransactionBasedOnType:(id)type error:(id *)error;	// 0x35489941
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)anIn error:(id *)error;	// 0x35489e39
- (id)_keyForTransaction:(id)transaction;	// 0x3548989d
- (double)_rightNow;	// 0x35489869
// declared property getter: - (double)authenticationNeededTimestamp;	// 0x3548a049
- (void)backOffForTimeInterval:(double)timeInterval;	// 0x354896e1
// declared property getter: - (double)backOffUntil;	// 0x3548a181
- (BOOL)canScheduleTransaction:(id)transaction error:(id *)error;	// 0x35488f59
- (void)clearAuthenticationRequest;	// 0x354892a1
- (void)clearBackOff;	// 0x35489739
- (void)clearDSIDCheckTimestamp;	// 0x35489219
- (void)clearNetworkingBlocked;	// 0x354897d1
- (void)clearTimestampForTransaction:(id)transaction;	// 0x35489179
- (void)clearUserAcceptedSyncTimestamp;	// 0x35489451
- (void)clearUserCancelledSignIn;	// 0x35489681
- (void)dealloc;	// 0x35488d69
- (id)description;	// 0x35488df1
// declared property getter: - (double)dsidCheckTimestamp;	// 0x35489fe1
- (void)encodeWithCoder:(id)coder;	// 0x3548872d
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)transaction error:(id *)error;	// 0x354892e1
- (BOOL)hasUserRecentlyAcceptedSync;	// 0x35489491
- (BOOL)isNetworkingBlocked;	// 0x354897f1
// declared property getter: - (double)networkingBlockedUntil;	// 0x3548a119
// declared property getter: - (double)nextUserCancelBackOffInterval;	// 0x3548a275
// declared property getter: - (id)pendingUserDefaultArchivedData;	// 0x3548a251
- (void)reset;	// 0x35488ff5
- (void)saveToUserDefaults;	// 0x354889d1
// declared property setter: - (void)setAuthenticationNeededTimestamp:(double)timestamp;	// 0x3548a07d
- (void)setAuthenticationRequest;	// 0x35489259
// declared property setter: - (void)setBackOffUntil:(double)until;	// 0x3548a1b5
- (void)setDSIDCheckTimestamp;	// 0x354891d1
// declared property setter: - (void)setDsidCheckTimestamp:(double)timestamp;	// 0x3548a015
- (void)setNetworkingBlocked;	// 0x35489779
// declared property setter: - (void)setNetworkingBlockedUntil:(double)until;	// 0x3548a14d
// declared property setter: - (void)setNextUserCancelBackOffInterval:(double)interval;	// 0x3548a2a9
// declared property setter: - (void)setPendingUserDefaultArchivedData:(id)data;	// 0x3548a265
- (void)setTimestampForTransaction:(id)transaction;	// 0x35489115
// declared property setter: - (void)setTransactionClamps:(id)clamps;	// 0x35489fd1
- (void)setUserAcceptedSyncTimestamp;	// 0x3548940d
// declared property setter: - (void)setUserAcceptedSyncTimestamp:(double)timestamp;	// 0x3548a0e5
- (void)setUserCancelledSignIn;	// 0x35489539
// declared property setter: - (void)setUserCancelledSignInBackOffUntil:(double)backOffUntil;	// 0x3548a21d
// declared property getter: - (id)transactionClamps;	// 0x35489fc1
// declared property getter: - (double)userAcceptedSyncTimestamp;	// 0x3548a0b1
// declared property getter: - (double)userCancelledSignInBackOffUntil;	// 0x3548a1e9
@end

