/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "BRSingleton.h"

@class NSString, NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRAccountManager : BRSingleton <ATVSettingsSaver> {
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	long _accountTypesLazyInitializationGuard;	// 20 = 0x14
	NSMutableDictionary *_preferredAccounts;	// 24 = 0x18
	NSMutableArray *_pendingAccounts;	// 28 = 0x1c
}
+ (void)initialize;	// 0x350a19
+ (void)setSingleton:(id)singleton;	// 0x350a09
+ (id)singleton;	// 0x3509f9
- (id)init;	// 0x350ac9
- (void)_accountDirty:(id)dirty;	// 0x352b65
- (void)_deleteAccount:(id)account;	// 0x352a45
- (void)_load;	// 0x351f69
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x3528f1
- (void)_save;	// 0x3524f5
- (void)_saveAccount:(id)account;	// 0x352665
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x352679
- (void)_savePrefs;	// 0x352831
- (id)accountWithName:(id)name ofType:(id)type;	// 0x351731
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x351755
- (id)accountsOfType:(id)type;	// 0x3518f9
- (void)addPathsToSaveTo:(id)to;	// 0x350d3d
- (id)allAccounts;	// 0x3518cd
- (void)clearPreferredAccountForType:(id)type;	// 0x3512d1
- (void)dealloc;	// 0x350c5d
- (void)evaluatePendingAccounts;	// 0x350f0d
- (BOOL)isAccountManaged:(id)managed;	// 0x35194d
- (void)manageAccount:(id)account;	// 0x351a21
- (void)markAsPreferredAccount:(id)account;	// 0x351449
- (void)markAsPreferredAccount:(id)account silently:(BOOL)silently;	// 0x35145d
- (id)preferredAccountForType:(id)type;	// 0x351141
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x351dd5
- (void)removeAccount:(id)account;	// 0x351b85
@end
