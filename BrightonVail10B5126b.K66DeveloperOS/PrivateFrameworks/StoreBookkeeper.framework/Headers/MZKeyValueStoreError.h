/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSError.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreError : NSError {
	MZKeyValueStoreTransaction *_transaction;	// 20 = 0x14
}
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x35490105; S=0x35490115; @synthesize=_transaction
+ (id)delegateCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fee9
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548f2a9
+ (id)keyValueStoreErrorWithCode:(int)code localizedDescription:(id)description transaction:(id)transaction underlyingError:(id)error;	// 0x3548f03d
+ (id)killSwitchErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548f9cd
+ (id)networkingBlockedErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548f981
+ (id)noStoreAccountErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fd39
+ (id)serverClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x35490009
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)previousStoreAccountText currentStoreAccontText:(id)text transaction:(id)transaction underlyingError:(id)error;	// 0x3548fae1
+ (id)storeAccountSessionExpiredWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fd79
+ (id)storeGenericErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fbbd
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)previousStoreAccountText transaction:(id)transaction underlyingError:(id)error;	// 0x3548fa19
+ (id)storeValidationErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fc35
+ (id)transactionCancelledErrorWithTransaction:(id)transaction code:(int)code underlyingError:(id)error;	// 0x3548fe5d
+ (id)transactionCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fec9
+ (id)transactionMissingDomainErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fdc5
+ (id)transactionMissingURLErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fe11
+ (id)transactionTimeoutErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fea5
+ (id)unknownErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548f161
+ (id)userCancelledSignInErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fcad
+ (id)userClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;	// 0x3548ff0d
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)transaction underlyingError:(id)error;	// 0x3548fced
- (id)copyWithZone:(NSZone *)zone;	// 0x3548efe5
- (id)currentStoreAccountKey;	// 0x3548ef6d
- (void)dealloc;	// 0x3548ed6d
- (id)description;	// 0x3548edbd
- (BOOL)isAccountsChangedError;	// 0x3548ee49
- (BOOL)isAuthenticationError;	// 0x3548ee25
- (BOOL)isClampError;	// 0x3548eecd
- (BOOL)isRecoverableError;	// 0x3548ee71
- (BOOL)isTransactionCancelledError;	// 0x3548eef1
- (BOOL)isTransactionMissingInformationError;	// 0x3548ef15
- (id)previousStoreAccountKey;	// 0x3548ef39
- (double)retrySeconds;	// 0x3548efa1
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x35490115
// declared property getter: - (id)transaction;	// 0x35490105
@end

