/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"
#import "BBSettingsGatewayRemoteInterface.h"


@interface BBSettingsGateway : NSObject <BBSettingsGatewayRemoteInterface, XPCProxyTarget> {
	id _serverProxy;	// 4 = 0x4
	id _overrideStatusChangeHandler;	// 8 = 0x8
	id _activeOverrideTypesChangedHandler;	// 12 = 0xc
}
+ (void)initialize;	// 0x3356d49d
- (id)init;	// 0x3356d4a1
- (void)activeBehaviorOverrideTypesChanged:(unsigned)changed;	// 0x3356dddd
- (void)behaviorOverrideStatusChanged:(int)changed;	// 0x3356ddc1
- (void)dealloc;	// 0x3356d619
- (void)getBehaviorOverridesEnabledWithCompletion:(id)completion;	// 0x3356ddf9
- (void)getBehaviorOverridesWithCompletion:(id)completion;	// 0x3356d851
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)completion;	// 0x3356da0d
- (void)getPrivilegedSenderTypesWithCompletion:(id)completion;	// 0x3356d925
- (void)getSectionInfoWithCompletion:(id)completion;	// 0x3356d6a1
- (void)getSectionOrderRuleWithCompletion:(id)completion;	// 0x3356d775
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3356dd75
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)handler;	// 0x3356dbf9
- (void)setBehaviorOverrideStatus:(int)status;	// 0x3356dcfd
- (void)setBehaviorOverrideStatusChangeHandler:(id)handler;	// 0x3356db91
- (void)setBehaviorOverrides:(id)overrides;	// 0x3356dcd9
- (void)setBehaviorOverridesEnabled:(BOOL)enabled;	// 0x3356de69
- (void)setOrderedSectionIDs:(id)ids;	// 0x3356dc85
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;	// 0x3356dd45
- (void)setPrivilegedSenderTypes:(unsigned)types;	// 0x3356dd21
- (void)setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x3356dca9
- (void)setSectionOrderRule:(unsigned)rule;	// 0x3356dc61
@end
