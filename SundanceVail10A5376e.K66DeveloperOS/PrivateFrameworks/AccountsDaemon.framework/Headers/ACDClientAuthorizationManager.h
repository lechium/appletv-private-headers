/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library

@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject {
	ACDDatabase *_database;	// 4 = 0x4
}
- (id)initWithDatabase:(id)database;	// 0x3660ca11
- (void).cxx_destruct;	// 0x3660e8ad
- (id)_csvStringFromSet:(id)set;	// 0x3660e7c5
- (id)_setFromCSVString:(id)csvstring;	// 0x3660e84d
- (id)allAuthorizationsForAccountType:(id)accountType;	// 0x3660dfd1
- (id)authorizationForClient:(id)client accountType:(id)type;	// 0x3660ca71
- (id)removeAllClientAuthorizationsForAccountType:(id)accountType;	// 0x3660e295
- (id)removeAuthorizationForClient:(id)client accountType:(id)type;	// 0x3660d935
- (id)setAuthorization:(id)authorization forClient:(id)client onAccountType:(id)type;	// 0x3660d069
@end

