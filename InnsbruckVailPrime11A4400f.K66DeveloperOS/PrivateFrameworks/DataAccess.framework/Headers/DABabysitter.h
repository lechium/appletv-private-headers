/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import </libobjc.A.h>

@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {
	NSString *_buildVersion;	// 4 = 0x4
	NSMutableDictionary *_refreshingWaiters;	// 8 = 0x8
	NSMutableDictionary *_failedWaiters;	// 12 = 0xc
	NSMutableDictionary *_restrictedWaiters;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *buildVersion;	// G=0x308322e5; S=0x308322f5; @synthesize=_buildVersion
@property(retain, nonatomic) NSMutableDictionary *failedWaiters;	// G=0x30832325; S=0x30832335; @synthesize=_failedWaiters
@property(retain, nonatomic) NSMutableDictionary *refreshingWaiters;	// G=0x30832305; S=0x30832315; @synthesize=_refreshingWaiters
@property(retain, nonatomic) NSMutableDictionary *restrictedWaiters;	// G=0x30832345; S=0x30832355; @synthesize=_restrictedWaiters
+ (id)sharedBabysitter;	// 0x30830a7d
- (id)init;	// 0x308318d9
- (void)_decrementRefreshCountForWaiter:(id)waiter forOperationWithName:(id)name;	// 0x30831b3d
- (void)_decrementRefreshCountForWaiterID:(id)waiterID operationName:(id)name;	// 0x30831c45
- (void)_incrementRefreshCountForWaiterID:(id)waiterID operationName:(id)name;	// 0x308319f5
- (id)_init;	// 0x3083184d
- (void)_reloadBabysitterProperties;	// 0x30830ae9
- (BOOL)accountShouldContinue:(id)account;	// 0x308320c5
- (BOOL)accountWithIDShouldContinue:(id)accountWithID;	// 0x30831f45
// declared property getter: - (id)buildVersion;	// 0x308322e5
- (void)dealloc;	// 0x30831955
// declared property getter: - (id)failedWaiters;	// 0x30832325
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x3083212d
// declared property getter: - (id)refreshingWaiters;	// 0x30832305
- (BOOL)registerAccount:(id)account forOperationWithName:(id)name;	// 0x30831e81
// declared property getter: - (id)restrictedWaiters;	// 0x30832345
// declared property setter: - (void)setBuildVersion:(id)version;	// 0x308322f5
// declared property setter: - (void)setFailedWaiters:(id)waiters;	// 0x30832335
// declared property setter: - (void)setRefreshingWaiters:(id)waiters;	// 0x30832315
// declared property setter: - (void)setRestrictedWaiters:(id)waiters;	// 0x30832355
- (void)unregisterAccount:(id)account forOperationWithName:(id)name;	// 0x30831ee5
@end
