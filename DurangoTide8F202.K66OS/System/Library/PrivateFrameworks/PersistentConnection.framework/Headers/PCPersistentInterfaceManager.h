/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import <NSObject.h> // Unknown library

@class NSTimer, NSMachPort, NSRecursiveLock, PCPersistentTimer, NSString;

@interface PCPersistentInterfaceManager : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	CFDictionaryRef _delegatesAndRunLoops;	// 8 = 0x8
	CFSetRef _WWANInterfaceAssertionDelegates;	// 12 = 0xc
	NSTimer *_WWANInterfaceAssertionDisableTimer;	// 16 = 0x10
	CFSetRef _WiFiAutoAssociationDelegates;	// 20 = 0x14
	PCPersistentTimer *_WiFiAutoAssociationDisableTimer;	// 24 = 0x18
	CFSetRef _wakeOnWiFiDelegates;	// 28 = 0x1c
	PCPersistentTimer *_wakeOnWiFiDisableTimer;	// 32 = 0x20
	void *_ctServerConnection;	// 36 = 0x24
	NSMachPort *_machPort;	// 40 = 0x28
	void *_interfaceAssertion;	// 44 = 0x2c
	void *_wifiManager;	// 48 = 0x30
	void *_reachability;	// 52 = 0x34
	int _WWANContextIdentifier;	// 56 = 0x38
	NSString *_WWANInterfaceName;	// 60 = 0x3c
	BOOL _isWWANInterfaceUp;	// 64 = 0x40
	BOOL _isWWANInterfaceDataActive;	// 65 = 0x41
	BOOL _isWWANInHomeCountry;	// 66 = 0x42
	BOOL _isPowerStateDetectionSupported;	// 67 = 0x43
	BOOL _isWWANInterfaceInProlongedHighPowerState;	// 68 = 0x44
	BOOL _isWWANInterfaceActivationPermitted;	// 69 = 0x45
	double _lastActivationTime;	// 72 = 0x48
	int _wwanRSSI;	// 80 = 0x50
	BOOL _belowRSSIThreshold;	// 84 = 0x54
	BOOL _isInCall;	// 85 = 0x55
	BOOL _isInternetReachable;	// 86 = 0x56
	BOOL _isInternetReachableViaWiFi;	// 87 = 0x57
	BOOL _isWakeOnWiFiSupported;	// 88 = 0x58
	BOOL _isWakeOnWiFiEnabled;	// 89 = 0x59
}
@property(readonly, assign) NSString *WWANInterfaceName;	// G=0x3169fb25; 
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;	// G=0x316a17cd; 
@property(readonly, assign) BOOL doesWWANInterfaceExist;	// G=0x3169fadd; 
@property(readonly, assign) BOOL isInCall;	// G=0x3169f989; 
@property(readonly, assign) BOOL isInternetReachable;	// G=0x3169f945; 
@property(readonly, assign) BOOL isInternetReachableViaWiFi;	// G=0x3169f901; 
@property(readonly, assign) BOOL isPowerStateDetectionSupported;	// G=0x3169fa99; 
@property(readonly, assign) BOOL isWWANInHomeCountry;	// G=0x3169f9cd; 
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;	// G=0x3169fa11; 
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;	// G=0x3169fa55; 
@property(readonly, assign) BOOL isWWANInterfaceUp;	// G=0x3169fb85; 
@property(readonly, assign) BOOL isWakeOnWiFiSupported;	// G=0x3169f8bd; 
+ (id)sharedInstance;	// 0x316a271d
- (id)init;	// 0x316a005d
// declared property getter: - (id)WWANInterfaceName;	// 0x3169fb25
- (id)WiFiInterfaceName;	// 0x316a178d
- (void)_adjustWakeOnWiFi;	// 0x3169f749
- (void)_adjustWakeOnWiFiLocked;	// 0x316a2209
- (void)_adjustWiFiAutoAssociation;	// 0x3169f78d
- (void)_adjustWiFiAutoAssociationLocked;	// 0x316a2129
- (BOOL)_allowBindingToWWAN;	// 0x3169f6dd
- (void)_createCTConnection;	// 0x316a03c1
- (void)_createReachabilityMonitor;	// 0x316a09ad
- (void)_createWiFiManager;	// 0x316a1f35
- (void)_ctConnectionWasInvalidated;	// 0x316a0239
- (void)_mainThreadDelayedInvalidation;	// 0x3169ffa1
- (void)_performCalloutsForSelectorValue:(id)selectorValue;	// 0x316a161d
- (void)_populateWakeOnWiFiCapabliity;	// 0x3169f7d1
- (void)_populateWakeOnWiFiCapabliityLocked;	// 0x316a2015
- (void)_reachabilityCallback:(unsigned)callback;	// 0x3169fcd1
- (void)_reachabilityCallbackLocked:(unsigned)locked;	// 0x3169fbc9
- (void)_scheduleCalloutsForSelector:(SEL)selector;	// 0x316a1419
- (void)_serverCallback:(id)callback info:(id)info;	// 0x3169fe25
- (void)_serverCallbackLocked:(id)locked info:(id)info;	// 0x316a0ae1
- (void)_updateWWANInterfaceAssertions;	// 0x3169f879
- (void)_updateWWANInterfaceAssertionsLocked;	// 0x316a1d95
- (void)_updateWWANInterfaceUpStateLocked;	// 0x3169fd6d
- (BOOL)_wantsWWANInterfaceAssertion;	// 0x316a1d29
- (BOOL)_wantsWakeOnWiFiEnabled;	// 0x316a1b99
- (BOOL)_wwanRSSIBelowThresholdAndWoWAvailableLocked;	// 0x3169f3d5
- (void)addDelegate:(id)delegate callbackRunLoop:(id)loop;	// 0x316a019d
// declared property getter: - (BOOL)areAllNetworkInterfacesDisabled;	// 0x316a17cd
- (void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;	// 0x316a25fd
- (void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;	// 0x3169f6ad
- (void)bindSocket:(int)socket toWWANInterface:(BOOL)wwaninterface;	// 0x316a24cd
- (void)bindSocketToWWANInterface:(int)wwaninterface;	// 0x3169f6c5
- (id)dhcpLeaseExpirationDate;	// 0x316a22d9
// declared property getter: - (BOOL)doesWWANInterfaceExist;	// 0x3169fadd
- (void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;	// 0x316a18d5
- (void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;	// 0x316a1bcd
- (void)handleMachMessage:(void *)message;	// 0x316a0ad5
// declared property getter: - (BOOL)isInCall;	// 0x3169f989
// declared property getter: - (BOOL)isInternetReachable;	// 0x3169f945
// declared property getter: - (BOOL)isInternetReachableViaWiFi;	// 0x3169f901
// declared property getter: - (BOOL)isPowerStateDetectionSupported;	// 0x3169fa99
// declared property getter: - (BOOL)isWWANInHomeCountry;	// 0x3169f9cd
// declared property getter: - (BOOL)isWWANInterfaceActivationPermitted;	// 0x3169fa11
// declared property getter: - (BOOL)isWWANInterfaceInProlongedHighPowerState;	// 0x3169fa55
// declared property getter: - (BOOL)isWWANInterfaceUp;	// 0x3169fb85
// declared property getter: - (BOOL)isWakeOnWiFiSupported;	// 0x3169f8bd
- (void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;	// 0x316a1a31
- (void)removeDelegate:(id)delegate;	// 0x316a01f1
- (id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x3169f449
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;	// 0x3169f40d
@end

