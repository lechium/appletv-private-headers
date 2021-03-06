/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import "IMNetworkManager.h"

@class NSMutableSet, NSRecursiveLock, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager {
	NSRecursiveLock *_lock;	// 4 = 0x4
	NSMutableSet *_disableFastDormancyTokens;	// 8 = 0x8
	NSMutableSet *_wiFiAutoAssociationTokens;	// 12 = 0xc
	NSMutableSet *_cellAutoAssociationTokens;	// 16 = 0x10
	void *_serverConnection;	// 20 = 0x14
	void *_suspendDormancyAssertion;	// 24 = 0x18
	void *_wifiManager;	// 28 = 0x1c
	SCPreferencesRef _prefs;	// 32 = 0x20
	CTServerConnectionRef _ctServerConnection;	// 36 = 0x24
	BOOL _cachedAirplaneMode;	// 40 = 0x28
	void *_cellAssertion;	// 44 = 0x2c
	BOOL _isCachedAirplaneModeValid;	// 48 = 0x30
	int _applySkipCount;	// 52 = 0x34
	BOOL _registered;	// 56 = 0x38
	BOOL _shouldBringUpDataContext;	// 57 = 0x39
	BOOL _dataContextActive;	// 58 = 0x3a
}
@property(assign, nonatomic) int _applySkipCount;	// G=0x32d69975; S=0x32d69985; @synthesize
@property(assign, nonatomic) BOOL _cachedAirplaneMode;	// G=0x32d69915; S=0x32d69925; @synthesize
@property(assign, nonatomic) void *_cellAssertion;	// G=0x32d69935; S=0x32d69945; @synthesize
@property(assign, nonatomic) CTServerConnectionRef _ctServerConnection;	// G=0x32d698f5; S=0x32d69905; @synthesize
@property(assign, nonatomic) BOOL _isCachedAirplaneModeValid;	// G=0x32d69955; S=0x32d69965; @synthesize
@property(assign, nonatomic) SCPreferencesRef _prefs;	// G=0x32d698d5; S=0x32d698e5; @synthesize
@property(assign, nonatomic) void *_serverConnection;	// G=0x32d69875; S=0x32d69885; @synthesize
@property(assign, nonatomic) void *_suspendDormancyAssertion;	// G=0x32d69895; S=0x32d698a5; @synthesize
@property(readonly, assign, nonatomic) BOOL autoAssociateCellular;	// G=0x32d68791; 
@property(readonly, assign, nonatomic) BOOL autoAssociateWiFi;	// G=0x32d68539; 
@property(retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens;	// G=0x32d69855; S=0x32d69865; @synthesize=_cellAutoAssociationTokens
@property(readonly, assign, nonatomic) BOOL dataConnectionExists;	// G=0x32d6955d; 
@property(assign, nonatomic) BOOL dataContextActive;	// G=0x32d699d5; S=0x32d699e5; @synthesize=_dataContextActive
@property(readonly, assign, nonatomic) BOOL disableFastDormancy;	// G=0x32d67b3d; 
@property(retain, nonatomic) NSMutableSet *disableFastDormancyTokens;	// G=0x32d69815; S=0x32d69825; @synthesize=_disableFastDormancyTokens
@property(readonly, assign, nonatomic) BOOL has2GDataConnection;	// G=0x32d69569; 
@property(readonly, assign, nonatomic) BOOL hasLTEDataConnection;	// G=0x32d69649; 
@property(readonly, assign, nonatomic) BOOL inValidSIMState;	// G=0x32d69475; 
@property(readonly, assign, nonatomic) BOOL isAirplaneModeEnabled;	// G=0x32d67299; 
@property(readonly, assign, nonatomic) BOOL isDataConnectionActive;	// G=0x32d6974d; 
@property(readonly, assign, nonatomic) BOOL isDataSwitchEnabled;	// G=0x32d696ed; 
@property(readonly, assign, nonatomic) BOOL isHostingWiFiHotSpot;	// G=0x32d67d51; 
@property(readonly, assign, nonatomic) BOOL isWiFiAssociated;	// G=0x32d6838d; 
@property(readonly, assign, nonatomic) BOOL isWiFiEnabled;	// G=0x32d684c9; 
@property(retain, nonatomic) NSRecursiveLock *lock;	// G=0x32d697f5; S=0x32d69805; @synthesize=_lock
@property(assign, nonatomic) BOOL registered;	// G=0x32d69995; S=0x32d699a5; @synthesize=_registered
@property(assign, nonatomic) BOOL shouldBringUpDataContext;	// G=0x32d699b5; S=0x32d699c5; @synthesize=_shouldBringUpDataContext
@property(retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;	// G=0x32d69835; S=0x32d69845; @synthesize=_wiFiAutoAssociationTokens
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRSSI;	// G=0x32d680cd; 
@property(readonly, assign, nonatomic) NSNumber *wiFiScaledRate;	// G=0x32d6822d; 
@property(readonly, assign, nonatomic) NSNumber *wiFiSignalStrength;	// G=0x32d67f6d; 
@property(assign, nonatomic) void *wifiManager;	// G=0x32d698b5; S=0x32d698c5; @synthesize=_wifiManager
@property(readonly, assign, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;	// G=0x32d67dd9; 
@property(readonly, assign, nonatomic) BOOL willTryToSearchForWiFiNetwork;	// G=0x32d67edd; 
- (id)init;	// 0x32d66e71
- (void)__adjustFastDormancyTokens;	// 0x32d67ac1
- (void)_adjustCelluarAutoAssociation;	// 0x32d67855
- (void)_adjustCellularAutoAssociation;	// 0x32d67701
- (void)_adjustFastDormancyTokens;	// 0x32d67af1
- (void)_adjustWiFiAutoAssociation;	// 0x32d676b5
- (void)_adjustWiFiAutoAssociationLocked;	// 0x32d67561
// declared property getter: - (int)_applySkipCount;	// 0x32d69975
// declared property getter: - (BOOL)_cachedAirplaneMode;	// 0x32d69915
// declared property getter: - (void *)_cellAssertion;	// 0x32d69935
- (void)_createCTServerConnection;	// 0x32d68d19
- (void)_createWiFiManager;	// 0x32d67335
- (void)_ctServerCallBack:(id)back object:(id)object userInfo:(id)info;	// 0x32d689a1
// declared property getter: - (CTServerConnectionRef)_ctServerConnection;	// 0x32d698f5
- (void *)_getValueForKey:(id)key;	// 0x32d67285
- (void)_initializeSCPrefs:(id)prefs;	// 0x32d670ad
// declared property getter: - (BOOL)_isCachedAirplaneModeValid;	// 0x32d69955
- (BOOL)_isDataConnectionAvailable;	// 0x32d690c9
- (void)_makeDataConnectionAvailable:(BOOL)available;	// 0x32d69285
- (void)_notifyTarget:(unsigned)target;	// 0x32d67231
// declared property getter: - (SCPreferencesRef)_prefs;	// 0x32d698d5
- (void)_releaseCTServerConnection;	// 0x32d68fb9
// declared property getter: - (void *)_serverConnection;	// 0x32d69875
- (void)_setFastDormancySuspended:(BOOL)suspended;	// 0x32d678a1
// declared property getter: - (void *)_suspendDormancyAssertion;	// 0x32d69895
- (void)_synchronize;	// 0x32d67099
- (void)addCellularAutoAssociationClientToken:(id)token;	// 0x32d687f1
- (void)addFastDormancyDisableToken:(id)token;	// 0x32d67b9d
- (void)addWiFiAutoAssociationClientToken:(id)token;	// 0x32d68565
// declared property getter: - (BOOL)autoAssociateCellular;	// 0x32d68791
// declared property getter: - (BOOL)autoAssociateWiFi;	// 0x32d68539
// declared property getter: - (id)cellularAutoAssociationTokens;	// 0x32d69855
// declared property getter: - (BOOL)dataConnectionExists;	// 0x32d6955d
// declared property getter: - (BOOL)dataContextActive;	// 0x32d699d5
- (void)dealloc;	// 0x32d66f15
// declared property getter: - (BOOL)disableFastDormancy;	// 0x32d67b3d
// declared property getter: - (id)disableFastDormancyTokens;	// 0x32d69815
// declared property getter: - (BOOL)has2GDataConnection;	// 0x32d69569
// declared property getter: - (BOOL)hasLTEDataConnection;	// 0x32d69649
// declared property getter: - (BOOL)inValidSIMState;	// 0x32d69475
// declared property getter: - (BOOL)isAirplaneModeEnabled;	// 0x32d67299
// declared property getter: - (BOOL)isDataConnectionActive;	// 0x32d6974d
// declared property getter: - (BOOL)isDataSwitchEnabled;	// 0x32d696ed
// declared property getter: - (BOOL)isHostingWiFiHotSpot;	// 0x32d67d51
// declared property getter: - (BOOL)isWiFiAssociated;	// 0x32d6838d
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x32d684c9
// declared property getter: - (id)lock;	// 0x32d697f5
- (void)refresh;	// 0x32d67315
// declared property getter: - (BOOL)registered;	// 0x32d69995
- (void)removeCellularAutoAssociationClientToken:(id)token;	// 0x32d688e5
- (void)removeFastDormancyDisableToken:(id)token;	// 0x32d67c95
- (void)removeWiFiAutoAssociationClientToken:(id)token;	// 0x32d6865d
// declared property setter: - (void)setCellularAutoAssociationTokens:(id)tokens;	// 0x32d69865
- (void)setDataConnectionActive:(BOOL)active;	// 0x32d69775
// declared property setter: - (void)setDataContextActive:(BOOL)active;	// 0x32d699e5
// declared property setter: - (void)setDisableFastDormancyTokens:(id)tokens;	// 0x32d69825
// declared property setter: - (void)setLock:(id)lock;	// 0x32d69805
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x32d699a5
// declared property setter: - (void)setShouldBringUpDataContext:(BOOL)bringUpDataContext;	// 0x32d699c5
// declared property setter: - (void)setWiFiAutoAssociationTokens:(id)tokens;	// 0x32d69845
// declared property setter: - (void)setWifiManager:(void *)manager;	// 0x32d698c5
// declared property setter: - (void)set_applySkipCount:(int)count;	// 0x32d69985
// declared property setter: - (void)set_cachedAirplaneMode:(BOOL)mode;	// 0x32d69925
// declared property setter: - (void)set_cellAssertion:(void *)assertion;	// 0x32d69945
// declared property setter: - (void)set_ctServerConnection:(CTServerConnectionRef)connection;	// 0x32d69905
// declared property setter: - (void)set_isCachedAirplaneModeValid:(BOOL)valid;	// 0x32d69965
// declared property setter: - (void)set_prefs:(SCPreferencesRef)prefs;	// 0x32d698e5
// declared property setter: - (void)set_serverConnection:(void *)connection;	// 0x32d69885
// declared property setter: - (void)set_suspendDormancyAssertion:(void *)assertion;	// 0x32d698a5
// declared property getter: - (BOOL)shouldBringUpDataContext;	// 0x32d699b5
- (void)showNetworkOptions;	// 0x32d68719
// declared property getter: - (id)wiFiAutoAssociationTokens;	// 0x32d69835
// declared property getter: - (id)wiFiScaledRSSI;	// 0x32d680cd
// declared property getter: - (id)wiFiScaledRate;	// 0x32d6822d
// declared property getter: - (id)wiFiSignalStrength;	// 0x32d67f6d
// declared property getter: - (void *)wifiManager;	// 0x32d698b5
// declared property getter: - (BOOL)willTryToAutoAssociateWiFiNetwork;	// 0x32d67dd9
// declared property getter: - (BOOL)willTryToSearchForWiFiNetwork;	// 0x32d67edd
@end

