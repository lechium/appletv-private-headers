/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileWirelessSync.framework/MobileWirelessSync
 */

#import <NSObject.h> // Unknown library
#import "AccountRefreshProtocol.h"
#import "MobileWirelessSync-Structs.h"

@class NSString, NSSet;

@interface MWSAccountRefresh : NSObject <AccountRefreshProtocol> {
	NSString *_username;	// 4 = 0x4
	NSString *_accountId;	// 8 = 0x8
	NSSet *_subscribedCalendarIds;	// 12 = 0xc
}
+ (id)accountToRefreshForBasicAccount:(id)basicAccount;	// 0x343c8099
- (id)init;	// 0x343c7f11
- (BOOL)_hasSubscribedCalendarWithIdentifier:(id)identifier;	// 0x343c810d
- (BOOL)_hasSubscribedCalendars;	// 0x343c80e5
- (id)_initWithBasicAccount:(id)basicAccount;	// 0x343c8275
- (BOOL)_isConfiguredSyncAccount;	// 0x343c8401
- (CFStringRef)_mwsDataclassNameForDataclass:(id)dataclass;	// 0x343c7f29
- (BOOL)_refreshDataclass:(id)dataclass;	// 0x343c83a9
- (BOOL)_refreshSubscribedCalendarWithIdentifier:(id)identifier;	// 0x343c8181
- (BOOL)_refreshSubscribedCalendars;	// 0x343c8135
- (id)_username;	// 0x343c7f19
- (void)dealloc;	// 0x343c8201
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x343c7f15
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x343c8081
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x343c7f9d
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x343c8011
@end

