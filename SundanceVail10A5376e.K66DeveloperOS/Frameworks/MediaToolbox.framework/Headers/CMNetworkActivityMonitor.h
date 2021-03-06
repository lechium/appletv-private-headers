/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h> // Unknown library

@class CMNetworkActivityObserver;
@protocol OS_dispatch_queue;

@interface CMNetworkActivityMonitor : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	CMNetworkActivityObserver *_cmObserver;	// 8 = 0x8
	int _showingNetworkActivityCount;	// 12 = 0xc
	int _monitoringActiveCount;	// 16 = 0x10
	BOOL _networkIsActive;	// 20 = 0x14
}
@property(retain, nonatomic, setter=setCMObserver:) CMNetworkActivityObserver *cmObserver;	// G=0x3270ee79; S=0x3270ebbd; @synthesize=_cmObserver
@property(assign, nonatomic) int monitoringActiveCount;	// G=0x3270eea9; S=0x3270eeb9; @synthesize=_monitoringActiveCount
@property(assign, nonatomic) BOOL networkIsActive;	// G=0x3270eec9; S=0x3270edd1; @synthesize=_networkIsActive
@property(assign, nonatomic) int showingNetworkActivityCount;	// G=0x3270ee89; S=0x3270ee99; @synthesize=_showingNetworkActivityCount
+ (id)sharedActivityMonitor;	// 0x3270eaad
- (id)init;	// 0x3270eb19
- (void)beginMonitoring;	// 0x3270ec11
// declared property getter: - (id)cmObserver;	// 0x3270ee79
- (void)dealloc;	// 0x3270eb69
- (void)endMonitoring;	// 0x3270ecf1
// declared property getter: - (int)monitoringActiveCount;	// 0x3270eea9
// declared property getter: - (BOOL)networkIsActive;	// 0x3270eec9
// declared property setter: - (void)setCMObserver:(id)observer;	// 0x3270ebbd
// declared property setter: - (void)setMonitoringActiveCount:(int)count;	// 0x3270eeb9
// declared property setter: - (void)setNetworkIsActive:(BOOL)active;	// 0x3270edd1
// declared property setter: - (void)setShowingNetworkActivityCount:(int)count;	// 0x3270ee99
// declared property getter: - (int)showingNetworkActivityCount;	// 0x3270ee89
@end

