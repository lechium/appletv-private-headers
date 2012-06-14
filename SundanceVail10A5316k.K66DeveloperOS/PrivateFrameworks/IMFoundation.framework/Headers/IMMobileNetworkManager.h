/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import "IMNetworkManager.h"

@class NSMutableSet, NSNumber, NSLock;

@interface IMMobileNetworkManager : IMNetworkManager {
	NSLock *_lock;	// 4 = 0x4
	NSMutableSet *_wiFiAutoAssociationTokens;	// 8 = 0x8
	NSMutableSet *_cellAutoAssociationTokens;	// 12 = 0xc
	void *_wifiManager;	// 16 = 0x10
	SCPreferencesRef _prefs;	// 20 = 0x14
	CTServerConnectionRef _ctServerConnection;	// 24 = 0x18
	BOOL _cachedAirplaneMode;	// 28 = 0x1c
	void *_cellAssertion;	// 32 = 0x20
	BOOL _isCachedAirplaneModeValid;	// 36 = 0x24
	int _applySkipCount;	// 40 = 0x28
	BOOL _registered;	// 44 = 0x2c
	BOOL _shouldBringUpDataContext;	// 45 = 0x2d
	BOOL _dataContextActive;	// 46 = 0x2e
}
@property(assign, nonatomic) int _applySkipCount;	// G=0x34a92a69; S=0x34a92a79; @synthesize
@property(assign, nonatomic) BOOL _cachedAirplaneMode;	// G=0x34a92a09; S=0x34a92a19; @synthesize
@property(assign, nonatomic) void *_cellAssertion;	// G=0x34a92a29; S=0x34a92a39; @synthesize
@property(assign, nonatomic) CTServerConnectionRef _ctServerConnection;	// G=0x34a929e9; S=0x34a929f9; @synthesize
@property(assign, nonatomic) BOOL _isCachedAirplaneModeValid;	// G=0x34a92a49; S=0x34a92a59; @synthesize
@property(assign, nonatomic) SCPreferencesRef _prefs;	// G=0x34a929c9; S=0x34a929d9; @synthesize
@property(readonly, assign, nonatomic) BOOL autoAssociateCellular;	// G=0x34a91d69; 
@property(readonly, assign, nonatomic) BOOL autoAssociateWiFi;	// G=0x34a91bed; 
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;	// G=0x34a92989; S=0x34a92999; @synthesize=_cellAutoAssociationTokens
@property(readonly, assign, nonatomic) BOOL dataConnectionExists;	// G=0x34a927c1; 
@property(assign, nonatomic) BOOL dataContextActive;	// G=0x34a92ac9; S=0x34a92ad9; @synthesize=_dataContextActive
@property(readonly, assign, nonatomic) BOOL has2GDataConnection;	// G=0x34a927cd; 
@property(readonly, assign, nonatomic) BOOL isAirplaneModeEnabled;	// G=0x34a90e09; 
@property(readonly, assign, nonatomic) BOOL isDataConnectionActive;	// G=0x34a928a1; 
@property(readonly, assign, nonatomic) BOOL isHostingWiFiHotSpot;	// G=0x34a91411; 
@property(readonly, assign, nonatomic) BOOL isWiFiAssociated;	// G=0x34a91a41; 
@property(readonly, assign, nonatomic) BOOL isWiFiEnabled;	// G=0x34a91b7d; 
@property(retain, nonatomic) NSLock *lock;	// G=0x34a92949; S=0x34a92959; @synthesize=_lock
@property(assign, nonatomic) BOOL registered;	// G=0x34a92a89; S=0x34a92a99; @synthesize=_registered
@property(assign, nonatomic) BOOL shouldBringUpDataContext;	// G=0x34a92aa9; S=0x34a92ab9; @synthesize=_shouldBringUpDataContext
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;	// G=0x34a92969; S=0x34a92979; @synthesize=_wiFiAutoAssociationTokens
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRSSI;	// G=0x34a91789; 
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRate;	// G=0x34a918e5; 
@property(readonly, assign, nonatomic) NSNumber *wiFiSignalStrength;	// G=0x34a9162d; 
@property(assign, nonatomic) void *wifiManager;	// G=0x34a929a9; S=0x34a929b9; @synthesize=_wifiManager
@property(readonly, assign, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;	// G=0x34a91499; 
@property(readonly, assign, nonatomic) BOOL willTryToSearchForWiFiNetwork;	// G=0x34a9159d; 
- (id)init;	// 0x34a90a41
- (void)_adjustCelluarAutoAssociation;	// 0x34a913c5
- (void)_adjustCellularAutoAssociation;	// 0x34a91271
- (void)_adjustWiFiAutoAssociation;	// 0x34a91225
- (void)_adjustWiFiAutoAssociationLocked;	// 0x34a910d1
// declared property getter: - (int)_applySkipCount;	// 0x34a92a69
// declared property getter: - (BOOL)_cachedAirplaneMode;	// 0x34a92a09
// declared property getter: - (void *)_cellAssertion;	// 0x34a92a29
- (void)_createCTServerConnection;	// 0x34a92199
- (void)_createWiFiManager;	// 0x34a90ea5
- (void)_ctServerCallBack:(id)back object:(id)object userInfo:(id)info;	// 0x34a91ee5
// declared property getter: - (CTServerConnectionRef)_ctServerConnection;	// 0x34a929e9
- (void *)_getValueForKey:(id)key;	// 0x34a90df5
- (void)_initializeSCPrefs:(id)prefs;	// 0x34a90c1d
// declared property getter: - (BOOL)_isCachedAirplaneModeValid;	// 0x34a92a49
- (BOOL)_isDataConnectionAvailable;	// 0x34a9245d
- (void)_makeDataConnectionAvailable:(BOOL)available;	// 0x34a925d1
- (void)_notifyTarget:(unsigned)target;	// 0x34a90da1
// declared property getter: - (SCPreferencesRef)_prefs;	// 0x34a929c9
- (void)_releaseCTServerConnection;	// 0x34a9234d
- (void)_synchronize;	// 0x34a90c09
- (void)addCellularAutoAssociationClientToken:(id)token;	// 0x34a91d95
- (void)addWiFiAutoAssociationClientToken:(id)token;	// 0x34a91c19
// declared property getter: - (BOOL)autoAssociateCellular;	// 0x34a91d69
// declared property getter: - (BOOL)autoAssociateWiFi;	// 0x34a91bed
// declared property getter: - (id)cellularAutoAssociationTokens;	// 0x34a92989
// declared property getter: - (BOOL)dataConnectionExists;	// 0x34a927c1
// declared property getter: - (BOOL)dataContextActive;	// 0x34a92ac9
- (void)dealloc;	// 0x34a90ae5
// declared property getter: - (BOOL)has2GDataConnection;	// 0x34a927cd
// declared property getter: - (BOOL)isAirplaneModeEnabled;	// 0x34a90e09
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x34a928a1
// declared property getter: - (BOOL)isHostingWiFiHotSpot;	// 0x34a91411
// declared property getter: - (BOOL)isWiFiAssociated;	// 0x34a91a41
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x34a91b7d
// declared property getter: - (id)lock;	// 0x34a92949
- (void)refresh;	// 0x34a90e85
// declared property getter: - (BOOL)registered;	// 0x34a92a89
- (void)removeCellularAutoAssociationClientToken:(id)token;	// 0x34a91e59
- (void)removeWiFiAutoAssociationClientToken:(id)token;	// 0x34a91cdd
// declared property setter: - (void)setCellularAutoAssociationTokens:(id)tokens;	// 0x34a92999
- (void)setDataConnectionActive:(BOOL)active;	// 0x34a928c9
// declared property setter: - (void)setDataContextActive:(BOOL)active;	// 0x34a92ad9
// declared property setter: - (void)setLock:(id)lock;	// 0x34a92959
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x34a92a99
// declared property setter: - (void)setShouldBringUpDataContext:(BOOL)bringUpDataContext;	// 0x34a92ab9
// declared property setter: - (void)setWiFiAutoAssociationTokens:(id)tokens;	// 0x34a92979
// declared property setter: - (void)setWifiManager:(void *)manager;	// 0x34a929b9
// declared property setter: - (void)set_applySkipCount:(int)count;	// 0x34a92a79
// declared property setter: - (void)set_cachedAirplaneMode:(BOOL)mode;	// 0x34a92a19
// declared property setter: - (void)set_cellAssertion:(void *)assertion;	// 0x34a92a39
// declared property setter: - (void)set_ctServerConnection:(CTServerConnectionRef)connection;	// 0x34a929f9
// declared property setter: - (void)set_isCachedAirplaneModeValid:(BOOL)valid;	// 0x34a92a59
// declared property setter: - (void)set_prefs:(SCPreferencesRef)prefs;	// 0x34a929d9
// declared property getter: - (BOOL)shouldBringUpDataContext;	// 0x34a92aa9
// declared property getter: - (id)wiFiAutoAssociationTokens;	// 0x34a92969
// declared property getter: - (id)wiFiScaledRSSI;	// 0x34a91789
// declared property getter: - (id)wiFiScaledRate;	// 0x34a918e5
// declared property getter: - (id)wiFiSignalStrength;	// 0x34a9162d
// declared property getter: - (void *)wifiManager;	// 0x34a929a9
// declared property getter: - (BOOL)willTryToAutoAssociateWiFiNetwork;	// 0x34a91499
// declared property getter: - (BOOL)willTryToSearchForWiFiNetwork;	// 0x34a9159d
@end

