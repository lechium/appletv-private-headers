/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"
#import <NSObject.h> // Unknown library

@class NSTimer, PCPersistentTimer, PCInterfaceUsabilityMonitor, NSRecursiveLock, NSString;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceUsabilityMonitorDelegate> {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	PCInterfaceUsabilityMonitor *_wwanMonitor;	// 36 = 0x24
	PCInterfaceUsabilityMonitor *_wifiMonitor;	// 40 = 0x28
	void *_ctServerConnection;	// 44 = 0x2c
	void *_interfaceAssertion;	// 48 = 0x30
	void *_wifiManager;	// 52 = 0x34
	long _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	BOOL _isWWANInterfaceDataActive;	// 65 = 0x41
	BOOL _isWWANInHomeCountry;	// 66 = 0x42
	BOOL _hasWWANStatusIndicator;	// 67 = 0x43
	BOOL _isPowerStateDetectionSupported;	// 68 = 0x44
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 69 = 0x45
	BOOL _isWWANInterfaceActivationPermitted;	// 70 = 0x46
	double _lastActivationTime;	// 72 = 0x48
	int _wwanRSSI;	// 80 = 0x50
	BOOL _isInCall;	// 84 = 0x54
	BOOL _isWakeOnWiFiSupported;	// 85 = 0x55
	BOOL _isWakeOnWiFiEnabled;	// 86 = 0x56
	BOOL _shouldOverrideOnCallBehavior;	// 87 = 0x57
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x34a53495; 
@property(readonly, assign) NSString *WiFiInterfaceName;	// G=0x34a53501; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x34a53865; 
@property(readonly, assign, nonatomic) NSString *currentLinkQualityString;	// G=0x34a52fd1; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x34a53559; 
@property(readonly, assign) BOOL isInCall;	// G=0x34a536c9; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x34a53771; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x34a537c1; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x34a535a9; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x34a53681; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x34a53639; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x34a535f1; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x34a5344d; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x34a5381d; 
+ (id)sharedInstance;	// 0x34a51489
- (id)init;	// 0x34a514fd
// declared property getter: - (id)WWANInterfaceName;	// 0x34a53495
// declared property getter: - (id)WiFiInterfaceName;	// 0x34a53501
- (void)_adjustWakeOnWiFi;	// 0x34a54769
- (void)_adjustWakeOnWiFiLocked;	// 0x34a547b5
- (void)_adjustWiFiAutoAssociation;	// 0x34a543c9
- (void)_adjustWiFiAutoAssociationLocked;	// 0x34a54415
- (BOOL)_allowBindingToWWAN;	// 0x34a54d0d
- (void)_createCTConnection;	// 0x34a5198d
- (void)_createWiFiManager;	// 0x34a53e0d
- (void)_ctConnectionWasInvalidated;	// 0x34a51f11
- (BOOL)_isInternetReachableLocked;	// 0x34a53711
- (void)_mainThreadDelayedInvalidation;	// 0x34a51e85
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x34a532b5
- (void)_populateWakeOnWiFiCapability;	// 0x34a54055
- (void)_populateWakeOnWiFiCapabilityLocked;	// 0x34a540a1
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x34a53091
- (void)_serverCallback:(id)callback info:(id)info;	// 0x34a52101
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x34a52161
- (void)_updateWWANInterfaceAssertions;	// 0x34a53c29
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x34a53c75
- (void)_updateWWANInterfaceUpState;	// 0x34a52f85
- (void)_updateWWANInterfaceUpStateLocked;	// 0x34a52da1
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x34a53b61
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x34a54731
- (BOOL)_wifiIsPoorLinkQuality;	// 0x34a5306d
- (BOOL)_wwanIsPoorLinkQuality;	// 0x34a53049
- (BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;	// 0x34a52d21
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x34a518e1
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x34a53865
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x34a54f19
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x34a55069
- (void)bindSocket:(int)socket toWWANInterface:(BOOL)wwaninterface;	// 0x34a54dbd
- (void)bindSocketToWWANInterface:(int)wwaninterface;	// 0x34a54f05
// declared property getter: - (id)currentLinkQualityString;	// 0x34a52fd1
- (void)dealloc;	// 0x34a51791
- (id)dhcpHalfLeaseExpirationDate;	// 0x34a54ad9
- (id)dhcpT1RenewalDate;	// 0x34a548f1
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x34a53559
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x34a545b1
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x34a54259
- (void)handleMachMessage:(void *)message;	// 0x34a520f9
- (void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;	// 0x34a52081
- (void)interfaceReachabilityChanged:(id)changed;	// 0x34a520bd
// declared property getter: - (BOOL)isInCall;	// 0x34a536c9
// declared property getter: - (BOOL)isInternetReachable;	// 0x34a53771
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x34a537c1
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x34a535a9
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x34a53681
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x34a53639
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x34a535f1
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x34a5344d
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x34a5381d
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x34a539e1
- (void)removeDelegate:(id)delegate;	// 0x34a5193d
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x34a5507d
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x34a55321
@end
