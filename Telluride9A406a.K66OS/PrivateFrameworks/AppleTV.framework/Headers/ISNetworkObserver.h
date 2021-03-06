/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "SSDownloadQueueObserver.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	double _lastNetworkTypeChangeTime;	// 8 = 0x8
	int _networkUsageCount;	// 16 = 0x10
	int _networkType;	// 20 = 0x14
	NSMutableSet *_observedDownloadQueues;	// 24 = 0x18
	SCNetworkReachabilityRef _reachability;	// 28 = 0x1c
}
@property(readonly, assign) NSString *connectionTypeHeader;	// G=0x331af7e1; 
@property(readonly, assign) double lastNetworkTypeChangeTime;	// G=0x331af881; 
@property(assign) int networkType;	// G=0x331afa55; S=0x331afb31; 
@property(readonly, assign) BOOL shouldShowCellularAutomaticDownloadsSwitch;	// G=0x331afb25; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x331af979; 
@property(readonly, assign, getter=isWiFiEnabled) BOOL wifiEnabled;	// G=0x331afb29; 
+ (void)set3GEnabled:(BOOL)enabled;	// 0x331aff31
+ (void)setAirplaneModeEnabled:(BOOL)enabled;	// 0x331aff35
+ (void)setSharedInstance:(id)instance;	// 0x331af709
+ (void)setWiFiEnabled:(BOOL)enabled;	// 0x331aff39
+ (id)sharedInstance;	// 0x331af75d
- (id)init;	// 0x331af37d
- (int)_currentNetworkType;	// 0x331afe05
- (void)_dataStatusChangedNotification:(id)notification;	// 0x331afd05
- (int)_networkTypeFromDataIndicator:(id)dataIndicator;	// 0x331afe09
- (BOOL)_ntsIsUsingNetwork;	// 0x331afe0d
- (void)_postTypeChangedNotificationFromValue:(int)value toValue:(int)value2;	// 0x331afe11
- (void)_postUsageChangedToValue:(BOOL)value;	// 0x331afe15
- (void)_reloadNetworkType;	// 0x331afe19
- (int)_setNetworkType:(int)type;	// 0x331afed5
- (void)_telephonyObserverAvailableNotification:(id)notification;	// 0x331afd85
- (void)beginObservingDownloadQueue:(id)queue;	// 0x331af7d9
- (void)beginUsingNetwork;	// 0x331af7dd
// declared property getter: - (id)connectionTypeHeader;	// 0x331af7e1
- (id)copyValueForCarrierBundleKey:(id)carrierBundleKey;	// 0x331af875
- (void)dealloc;	// 0x331af665
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0x331afcad
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0x331afcb1
- (void)endObservingDownloadQueue:(id)queue;	// 0x331af879
- (void)endUsingNetwork;	// 0x331af87d
// declared property getter: - (BOOL)isUsingNetwork;	// 0x331af979
// declared property getter: - (BOOL)isWiFiEnabled;	// 0x331afb29
// declared property getter: - (double)lastNetworkTypeChangeTime;	// 0x331af881
// declared property getter: - (int)networkType;	// 0x331afa55
- (void)reloadNetworkType;	// 0x331afb2d
// declared property setter: - (void)setNetworkType:(int)type;	// 0x331afb31
// declared property getter: - (BOOL)shouldShowCellularAutomaticDownloadsSwitch;	// 0x331afb25
@end

