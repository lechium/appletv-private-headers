/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {
@private
	NSLock *_lock;	// 4 = 0x4
	NSMutableDictionary *_reachabilityRequests;	// 8 = 0x8
	unsigned _networkReachability;	// 12 = 0xc
	SCNetworkReachabilityRef _networkReach;	// 16 = 0x10
	CFDictionaryRef _networkObservers;	// 20 = 0x14
	SCPreferencesRef _wifiPreferences;	// 24 = 0x18
	CFDictionaryRef _wifiObservers;	// 28 = 0x1c
	BOOL _networkNotified;	// 32 = 0x20
	BOOL _networkReachable;	// 33 = 0x21
	BOOL _wifiNotified;	// 34 = 0x22
	BOOL _wifiEnabled;	// 35 = 0x23
}
@property(readonly, assign, getter=isNetworkReachable) BOOL networkReachable;	// G=0x3406d0b5; converted property
+ (id)sharedNetworkObserver;	// 0x3406cafd
- (id)init;	// 0x3406ca99
- (void)_networkObserversInitialize;	// 0x3406d351
- (void)_networkReachableCallBack:(unsigned)back;	// 0x3406d155
- (void)_networkReachableFirstCallBack:(id)back;	// 0x3406d121
- (void)_wifiCallBack:(unsigned)back;	// 0x3406ccc1
- (void)_wifiFirstCallBack:(id)back;	// 0x3406cc8d
- (void)_wifiObserversInitialize;	// 0x3406ce75
- (void)addNetworkReachableObserver:(id)observer selector:(SEL)selector;	// 0x3406d035
- (void)addObserver:(id)observer selector:(SEL)selector forHostname:(id)hostname;	// 0x3406d6c1
- (void)addWiFiObserver:(id)observer selector:(SEL)selector;	// 0x3406cba1
- (void)dealloc;	// 0x3406d801
// converted property getter: - (BOOL)isNetworkReachable;	// 0x3406d0b5
- (BOOL)isWiFiEnabled;	// 0x3406cc21
- (void)removeNetworkReachableObserver:(id)observer;	// 0x3406cfbd
- (void)removeObserver:(id)observer;	// 0x3406d595
- (void)removeObserver:(id)observer forHostname:(id)hostname;	// 0x3406d48d
- (void)removeWiFiObserver:(id)observer;	// 0x3406cb29
@end

