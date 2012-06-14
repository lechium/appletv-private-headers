/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "XPCProxyTarget.h"
#import "ABPredicateDelegate.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDate, ABFavoritesList, NSMutableDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_source, BBPushDataProviderFactory;

@interface BBServer : NSObject <ABPredicateDelegate, XPCProxyTarget> {
@private
	NSMutableSet *_observers;	// 4 = 0x4
	NSMutableSet *_listObservers;	// 8 = 0x8
	NSMutableSet *_modalAlertObservers;	// 12 = 0xc
	NSMutableSet *_bannerObservers;	// 16 = 0x10
	NSMutableSet *_lockscreenObservers;	// 20 = 0x14
	NSMutableSet *_soundObservers;	// 24 = 0x18
	NSMutableSet *_settingsObservers;	// 28 = 0x1c
	NSMutableSet *_settingsGateways;	// 32 = 0x20
	NSMutableArray *_sortedSectionIDs;	// 36 = 0x24
	unsigned _sectionOrderRule;	// 40 = 0x28
	NSMutableDictionary *_sectionInfoByID;	// 44 = 0x2c
	NSMutableDictionary *_sectionParametersByID;	// 48 = 0x30
	NSMutableDictionary *_sectionSortDescriptorsByID;	// 52 = 0x34
	NSMutableDictionary *_bulletinsByID;	// 56 = 0x38
	NSMutableDictionary *_bulletinIDsBySectionID;	// 60 = 0x3c
	NSMutableDictionary *_transactionsByObserver;	// 64 = 0x40
	NSMutableDictionary *_listBulletinIDsBySectionID;	// 68 = 0x44
	NSArray *_behaviorOverrides;	// 72 = 0x48
	int _behaviorOverrideStatus;	// 76 = 0x4c
	NSDate *_behaviorOverrideStatusEffectiveTime;	// 80 = 0x50
	NSObject<OS_dispatch_source> *_behaviorOverridesTimer;	// 84 = 0x54
	NSDate *_behaviorOverridesWakeTime;	// 88 = 0x58
	unsigned _activeBehaviorOverrides;	// 92 = 0x5c
	NSMutableArray *_behaviorOverrideStatusChangeClients;	// 96 = 0x60
	NSMutableArray *_activeBehaviorOverrideTypesChangeClients;	// 100 = 0x64
	unsigned _privilegedSenderTypes;	// 104 = 0x68
	int _privilegedAddressBookGroupRecordID;	// 108 = 0x6c
	NSString *_privilegedAddressBookGroupName;	// 112 = 0x70
	NSMutableDictionary *_lastContactTimeForSender;	// 116 = 0x74
	NSMutableArray *_privilegedSenderFilteringStateChangeClients;	// 120 = 0x78
	BOOL _privilegedSenderFilteringNecessary;	// 124 = 0x7c
	NSMutableArray *_interruptingBulletinIDs;	// 128 = 0x80
	NSMutableArray *_expiringBulletinIDs;	// 132 = 0x84
	NSObject<OS_dispatch_source> *_expirationTimer;	// 136 = 0x88
	NSMutableArray *_eventBasedExpiringBulletinIDs;	// 140 = 0x8c
	NSDate *_nextScheduledExpirationTimerFireDate;	// 144 = 0x90
	NSMutableDictionary *_dataProvidersBySection;	// 148 = 0x94
	NSMutableSet *_pushDataProviders;	// 152 = 0x98
	NSMutableDictionary *_clearedSections;	// 156 = 0x9c
	id<BBPushDataProviderFactory> _pushDataProviderFactory;	// 160 = 0xa0
	NSMutableDictionary *_dataProviderFactoriesBySection;	// 164 = 0xa4
	int _demo_lockscreen_token;	// 168 = 0xa8
	unsigned _currentSystemState;	// 172 = 0xac
@protected
	NSMutableDictionary *_bulletinRequestsByID;	// 176 = 0xb0
@private
	void *_addressBook;	// 180 = 0xb4
	ABFavoritesList *_favoritesList;	// 184 = 0xb8
	BOOL _entryFound;	// 188 = 0xbc
}
+ (void)initialize;	// 0x36b69c35
- (id)init;	// 0x36b69c39
- (unsigned)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)state;	// 0x36b702f1
- (void)_addBulletin:(id)bulletin;	// 0x36b6c031
- (void)_addDataProvider:(id)provider forFactory:(id)factory sortNowAndNotifyObservers:(BOOL)observers;	// 0x36b741f5
- (void)_addDataProvider:(id)provider sortSectionsNow:(BOOL)now;	// 0x36b73f89
- (void)_addInterruptingBulletin:(id)bulletin;	// 0x36b6ea95
- (void)_addObserverWithConnection:(id)connection;	// 0x36b6add1
- (void)_addPushDataProvider:(id)provider sortNowAndNotifyObservers:(BOOL)observers;	// 0x36b742f1
- (void)_addSettingsGatewayWithConnection:(id)connection;	// 0x36b6b255
- (void)_addSortedSectionID:(id)anId sortNow:(BOOL)now;	// 0x36b73eed
- (void *)_addressBook;	// 0x36b81701
- (id)_addressBookPredicateForDestinationID:(id)destinationID;	// 0x36b81959
- (unsigned)_adjustedBehaviorOverrideTypes:(unsigned)types basedOnSystemState:(unsigned)state;	// 0x36b702c9
- (id)_allBulletinsForSectionID:(id)sectionID;	// 0x36b6cd2d
- (void)_assignIDToBulletinRequest:(id)bulletinRequest;	// 0x36b7e905
- (void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;	// 0x36b7e961
- (void)_behaviorOverrideStatusChanged;	// 0x36b705b9
- (void)_behaviorOverridesChanged;	// 0x36b70395
- (id)_behaviorOverridesPath;	// 0x36b757dd
- (id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;	// 0x36b6e30d
- (id)_bulletinRequestsForIDs:(id)ids;	// 0x36b7e7e9
- (id)_bulletinsForIDs:(id)ids;	// 0x36b6cbe5
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)destinationID;	// 0x36b81b71
- (void)_checkPrivilegedSenderFilteringState;	// 0x36b706d5
- (void)_clearBehaviorOverridesTimer;	// 0x36b70b0d
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;	// 0x36b6d7d5
- (void)_clearBulletins:(id)bulletins forSectionID:(id)sectionID;	// 0x36b6c2fd
- (void)_clearExpirationTimer;	// 0x36b6de4d
- (void)_clearSection:(id)section;	// 0x36b6c429
- (id)_clearedInfoForSectionID:(id)sectionID;	// 0x36b72931
- (id)_clearedSectionsPath;	// 0x36b7563d
- (id)_configureSectionInfoForDataProvider:(id)dataProvider;	// 0x36b739a1
- (id)_copyDefaultEnabledWeeAppIDs;	// 0x36b74f5d
- (unsigned)_countForSectionID:(id)sectionID;	// 0x36b728f1
- (id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;	// 0x36b6ca25
- (id)_dataDirectoryPath;	// 0x36b755b1
- (id)_defaultSectionInfoForSection:(id)section;	// 0x36b761e9
- (BOOL)_doesAddressBookContainDestinationID:(id)anId;	// 0x36b81dad
- (BOOL)_doesFavoritesListContainDestinationID:(id)anId;	// 0x36b81cb9
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)anId;	// 0x36b81b45
- (id)_effectiveSectionInfoForSectionInfo:(id)sectionInfo;	// 0x36b6d611
- (id)_enabledSectionIDsForDataProvider:(id)dataProvider;	// 0x36b720a5
- (void)_ensureDataDirectoryExists;	// 0x36b755cd
- (void)_expireBulletins;	// 0x36b6e6e5
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;	// 0x36b6e169
- (void)_expireBulletinsDueToSystemEvent:(unsigned)systemEvent;	// 0x36b6e511
- (void)_expireInterruptions;	// 0x36b6ece9
- (id)_favoritesList;	// 0x36b818fd
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations;	// 0x36b6c595
- (unsigned)_filtersForSectionID:(id)sectionID;	// 0x36b728ed
- (void)_handleSignificantTimeChange;	// 0x36b6de01
- (void)_handleSystemSleep;	// 0x36b6ddc1
- (void)_handleSystemStateConnection:(id)connection;	// 0x36b6b845
- (void)_handleSystemWake;	// 0x36b6ddd1
- (void)_handleUtilitiesConnection:(id)connection;	// 0x36b6b639
- (unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;	// 0x36b6cb1d
- (unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;	// 0x36b6e461
- (id)_interruptingBulletinIDsForFeeds:(unsigned)feeds;	// 0x36b6eef9
- (BOOL)_isDestinationID:(id)anId inAddressBookGroupWithRecordID:(int)recordID;	// 0x36b819d1
- (id)_listBulletinsForSectionID:(id)sectionID;	// 0x36b6ccfd
- (void)_loadAllDataProviderPluginBundles;	// 0x36b729a5
- (void)_loadAllWeeAppSections;	// 0x36b74ff5
- (void)_loadBehaviorOverrides;	// 0x36b75cc9
- (void)_loadClearedSections;	// 0x36b75671
- (void)_loadDataProviderPluginBundle:(id)bundle;	// 0x36b72f75
- (void)_loadDataProvidersAndSettings;	// 0x36b71ced
- (void)_loadSavedSectionInfo;	// 0x36b75971
- (void)_modifyBulletin:(id)bulletin;	// 0x36b6c10d
- (id)_nextExpireBulletinsDate;	// 0x36b6e059
- (id)_nextExpireInterruptionsDate;	// 0x36b6e0d1
- (void)_noteSystemStateChanged;	// 0x36b702e1
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)dataProvider;	// 0x36b743e1
- (id)_observersForFeeds:(unsigned)feeds;	// 0x36b6ba6d
- (void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations;	// 0x36b728b1
- (void)_publishBulletinsForAllDataProviders;	// 0x36b71f11
- (void)_readSavedSectionOrder:(id *)order andRule:(unsigned *)rule;	// 0x36b75811
- (id)_removalsForListSection:(id)listSection addition:(id)addition keepAddition:(BOOL *)addition3;	// 0x36b7ea7d
- (void)_removeBulletin:(id)bulletin;	// 0x36b6c2e9
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected;	// 0x36b6c14d
- (void)_removeDataProvider:(id)provider forFactory:(id)factory;	// 0x36b7468d
- (void)_removeObserver:(id)observer;	// 0x36b6b01d
- (void)_removePushDataProvider:(id)provider;	// 0x36b7466d
- (void)_removeSection:(id)section;	// 0x36b6c45d
- (void)_removeSettingsGateway:(id)gateway;	// 0x36b6b451
- (void)_scheduleExpirationForBulletin:(id)bulletin;	// 0x36b6e929
- (void)_scheduleTimerForDate:(id)date;	// 0x36b6de99
- (id)_sectionInfoArray:(BOOL)array;	// 0x36b6d6d5
- (id)_sectionInfoForSectionID:(id)sectionID effective:(BOOL)effective;	// 0x36b6d68d
- (id)_sectionInfoPath;	// 0x36b757a9
- (id)_sectionOrderPath;	// 0x36b75775
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36b6bb55
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36b6bce1
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x36b6be89
- (void)_sendUpdateSectionInfo:(id)info;	// 0x36b6b4d1
- (void)_sendUpdateSectionOrder;	// 0x36b6b9cd
- (void)_sendUpdateSectionOrderRule;	// 0x36b6ba09
- (void)_setBehaviorOverridesTimer;	// 0x36b6ffa5
- (void)_setClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x36b72951
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x36b6da59
- (void)_sortSectionIDsUsingDefaultOrder;	// 0x36b6cd5d
- (void)_sortSectionIDsUsingGuideArray:(id)array;	// 0x36b6d0a5
- (void)_updateBehaviorOverrides;	// 0x36b7082d
- (void)_updateBulletinsForDataProvider:(id)dataProvider;	// 0x36b725e1
- (void)_updateBulletinsForDataProvider:(id)dataProvider enabledSectionIDs:(id)ids;	// 0x36b72271
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x36b72221
- (void)_updatePushSettingsForPushDataProvider:(id)pushDataProvider;	// 0x36b744dd
- (void)_updateSectionInfo:(id)info withDefaultInfo:(id)defaultInfo;	// 0x36b73859
- (void)_updateSectionInfo:(id)info withSectionDisplayProperties:(id)sectionDisplayProperties;	// 0x36b737c1
- (void)_updateSectionInfoForDataProvider:(id)dataProvider;	// 0x36b72819
- (void)_updateSectionParametersForDataProvider:(id)dataProvider;	// 0x36b72615
- (id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;	// 0x36b6f911
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;	// 0x36b71fe9
- (void)_weeApp:(id)app setHiddenFromUser:(BOOL)user;	// 0x36b754b1
- (BOOL)_weeAppIsHiddenFromUser:(id)user callback:(id)callback;	// 0x36b7544d
- (void)_writeBehaviorOverrides;	// 0x36b75f8d
- (void)_writeClearedSections;	// 0x36b756f9
- (void)_writeSectionInfo;	// 0x36b75b69
- (void)_writeSectionOrder;	// 0x36b75abd
- (id)allBulletinIDsForSectionID:(id)sectionID;	// 0x36b6ad59
- (void)dealloc;	// 0x36b6a215
- (void)deliverResponse:(id)response;	// 0x36b7dbf1
- (void)demo_lockscreen:(unsigned long long)lockscreen;	// 0x36b7626d
- (void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;	// 0x36b6f1f9
- (void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;	// 0x36b6f105
- (void)getSectionOrderRuleWithHandler:(id)handler;	// 0x36b6f045
- (void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;	// 0x36b6f0c1
- (void)getShouldPresentNotificationFromSenderWithDestinationID:(id)get handler:(id)handler;	// 0x36b70fd9
- (void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;	// 0x36b6f08d
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned)activeBehaviorOverrides privilegedSenderTypes:(unsigned)types;	// 0x36b81f91
- (unsigned)listBulletinCapForSectionID:(id)sectionID;	// 0x36b6ad79
- (id)listBulletinIDsForSectionID:(id)sectionID;	// 0x36b6ad39
- (void)noteChangeOfState:(unsigned)state newValue:(BOOL)value;	// 0x36b82235
- (void)noteFinishedWithBulletinID:(id)bulletinID;	// 0x36b7dbd1
- (void)noteOccurrenceOfEvent:(unsigned)event;	// 0x36b82275
- (void)observer:(id)observer clearBulletinIDs:(id)ids inSection:(id)section;	// 0x36b6f79d
- (void)observer:(id)observer clearSection:(id)section;	// 0x36b6f751
- (void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;	// 0x36b6f5b1
- (void)observer:(id)observer getActiveAlertBehaviorOverridesWithHandler:(id)handler;	// 0x36b6fc19
- (void)observer:(id)observer getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withHandler:(id)handler;	// 0x36b6fb75
- (void)observer:(id)observer getSectionInfoWithHandler:(id)handler;	// 0x36b6f8e5
- (void)observer:(id)observer handleResponse:(id)response;	// 0x36b6f431
- (void)observer:(id)observer requestListBulletinsForSectionID:(id)sectionID;	// 0x36b6fa8d
- (void)observer:(id)observer setObserverFeed:(unsigned)feed;	// 0x36b6f2f1
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x36b81fa5
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x36b81fa9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x36b6a511
- (void)publishBulletin:(id)bulletin destinations:(int)destinations;	// 0x36b6aab9
- (void)publishBulletinRequest:(id)request destinations:(int)destinations;	// 0x36b7dc59
- (void)removeBulletinID:(id)anId fromListSection:(id)listSection;	// 0x36b6accd
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x36b71125
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x36b71051
- (void)settingsGateway:(id)gateway getBehaviorOverridesEnabledWithHandler:(id)handler;	// 0x36b6fcb1
- (void)settingsGateway:(id)gateway getBehaviorOverridesWithHandler:(id)handler;	// 0x36b6fc91
- (void)settingsGateway:(id)gateway getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)handler;	// 0x36b6fd41
- (void)settingsGateway:(id)gateway getPrivilegedSenderTypesWithHandler:(id)handler;	// 0x36b6fcf9
- (void)settingsGateway:(id)gateway getSectionInfoWithHandler:(id)handler;	// 0x36b6fc65
- (void)settingsGateway:(id)gateway setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)enabled;	// 0x36b70f01
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatus:(int)status;	// 0x36b70c49
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)enabled;	// 0x36b70e31
- (void)settingsGateway:(id)gateway setBehaviorOverrides:(id)overrides;	// 0x36b70ba5
- (void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids;	// 0x36b6fe09
- (void)settingsGateway:(id)gateway setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;	// 0x36b70d85
- (void)settingsGateway:(id)gateway setPrivilegedSenderTypes:(unsigned)types;	// 0x36b70d0d
- (void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x36b6fe51
- (void)settingsGateway:(id)gateway setSectionOrderRule:(unsigned)rule;	// 0x36b6fdbd
- (BOOL)shouldPresentNotificationFromSenderWithDestinationID:(id)destinationID;	// 0x36b81e69
- (id)sortDescriptorsForSectionID:(id)sectionID;	// 0x36b6adb1
- (void)updateListSection:(id)section withBulletinRequests:(id)bulletinRequests;	// 0x36b7e259
- (void)withdrawBulletinID:(id)anId;	// 0x36b6ac89
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;	// 0x36b7e6b9
- (void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;	// 0x36b7e589
@end

