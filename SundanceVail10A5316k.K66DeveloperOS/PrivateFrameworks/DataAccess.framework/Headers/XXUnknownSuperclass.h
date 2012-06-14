/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (AccountsdPrivate)
- (id)_initHoppingBasicAccount;	// 0x33554c19
@end

@interface XXUnknownSuperclass (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x33567e31
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x33567d49
@end

@interface XXUnknownSuperclass (DAMMeExtras)
- (BOOL)hasActiveDAMMeAccounts;	// 0x335708b1
@end

@interface XXUnknownSuperclass (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x33570985
- (id)subscribedCalendarRecords;	// 0x33570a41
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
- (BOOL)hasActiveIMAPNotesAccounts;	// 0x335748b9
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x33574a31
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x3357498d
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x33574afd
- (BOOL)isValidIMAPNotesAccount;	// 0x33574b79
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
- (BOOL)hasActiveCalDAVChildAccounts;	// 0x3357554d
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x335756c5
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x33575621
- (BOOL)isValidCalDAVChildAccount;	// 0x3357578d
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
- (BOOL)hasActiveCardDAVChildAccounts;	// 0x3357588d
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x335759c5
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x33575961
- (BOOL)isValidCardDAVChildAccount;	// 0x33575a55
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
- (BOOL)hasActiveBookmarkDAVChildAccounts;	// 0x3357baf5
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x3357bc05
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x3357bbc9
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x3357bc95
@end

