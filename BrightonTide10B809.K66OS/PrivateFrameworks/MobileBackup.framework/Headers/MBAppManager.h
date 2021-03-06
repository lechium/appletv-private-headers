/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library

@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
	MBSettingsContext *_settingsContext;	// 4 = 0x4
	NSMutableDictionary *_appsByBundleID;	// 8 = 0x8
}
+ (id)appManager;	// 0x345c8831
+ (id)appManagerWithSettingsContext:(id)settingsContext;	// 0x345c8879
- (id)initWithSettingsContext:(id)settingsContext;	// 0x345c88c1
- (id)_appsWithPlists:(id)plists error:(id *)error;	// 0x345c8f69
- (id)_safeHarborsWithError:(id *)error;	// 0x345c8ec5
- (id)_userAppsWithError:(id *)error;	// 0x345c8e21
- (id)allApps;	// 0x345c90e9
- (id)allDisabledDomainNames;	// 0x345c8979
- (id)allRestrictedDomainNames;	// 0x345c8afd
- (id)appWithBundleID:(id)bundleID;	// 0x345c9109
- (id)createSafeHarborForApp:(id)app error:(id *)error;	// 0x345c9421
- (void)dealloc;	// 0x345c8915
- (BOOL)isDomainNameEnabled:(id)enabled;	// 0x345c8a11
- (BOOL)loadAppsWithSafeHarbors:(BOOL)safeHarbors error:(id *)error;	// 0x345c8c5d
- (BOOL)processRestoredAppsWithBundleIDs:(id)bundleIDs error:(id *)error;	// 0x345c9849
- (void)removeAllDisabledDomainNames;	// 0x345c89e5
- (void)removeOldSafeHarbors;	// 0x345c9129
- (void)setEnabled:(BOOL)enabled forDomainName:(id)domainName;	// 0x345c8a49
@end

