/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import "CardDAVAccount.h"

@class BasicAccount;

@interface CardDAVChildAccount : CardDAVAccount {
	BasicAccount *_parent;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x33517051; @synthesize=_parent
+ (Class)accountClass;	// 0x33516759
+ (Class)clientClass;	// 0x33516ed9
+ (id)supportedDataclasses;	// 0x33516ef5
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x335166b5
- (id)accountPropertyForKey:(id)key;	// 0x33516bcd
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x33516d95
- (void)dealloc;	// 0x3351670d
- (BOOL)handlePasswordPromptDirectly;	// 0x33516ced
- (BOOL)isChildAccount;	// 0x33516769
- (BOOL)isDisabled;	// 0x33516f31
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x33516f35
- (id)localizedInvalidPasswordMessage;	// 0x33516fa1
// declared property getter: - (id)parent;	// 0x33517051
- (id)password;	// 0x335167e5
- (id)persistentUUID;	// 0x33516c75
- (void)removeAccountPropertyForKey:(id)key;	// 0x33516b49
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x33516cf1
- (void)saveAccountProperties;	// 0x33516949
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x33516851
- (id)scheduleIdentifier;	// 0x33516c85
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x335169f9
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3351684d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x33516f21
- (id)username;	// 0x3351676d
@end

