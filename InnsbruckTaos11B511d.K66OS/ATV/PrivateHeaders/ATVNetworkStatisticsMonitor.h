/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVRouteDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVNetworkStatisticsMonitor : XXUnknownSuperclass <ATVRouteDelegate> {
	NSDictionary *_tcpStatistics;	// 4 = 0x4
	NSDictionary *_ipStatistics;	// 8 = 0x8
	NSDictionary *_interfaceStatistics;	// 12 = 0xc
	NSTimer *_monitorTimer;	// 16 = 0x10
	int _packetsReceived;	// 20 = 0x14
	int _inputErrors;	// 24 = 0x18
	int _packetsSent;	// 28 = 0x1c
	int _outputErrors;	// 32 = 0x20
	int _bytesReceived;	// 36 = 0x24
	int _bytesSent;	// 40 = 0x28
	int _packetsDropped;	// 44 = 0x2c
	BOOL _shouldIncludeIPStats;	// 48 = 0x30
	BOOL _shouldIncludeInterfaceStats;	// 49 = 0x31
	NSMutableArray *_addedRoutes;	// 52 = 0x34
	NStatManager *_statManager;	// 56 = 0x38
}
@property(readonly, assign) int bytesReceived;	// G=0x21a48d; @synthesize=_bytesReceived
@property(readonly, assign) int bytesSent;	// G=0x21a4a1; @synthesize=_bytesSent
@property(readonly, assign) int inputErrors;	// G=0x21a451; @synthesize=_inputErrors
@property(readonly, retain) NSDictionary *interfaceStatistics;	// G=0x219fcd; converted property
@property(readonly, retain) NSDictionary *ipStatistics;	// G=0x219fbd; converted property
@property(readonly, assign) int outputErrors;	// G=0x21a479; @synthesize=_outputErrors
@property(readonly, assign) int packetsDropped;	// G=0x21a4b5; @synthesize=_packetsDropped
@property(readonly, assign) int packetsReceived;	// G=0x21a43d; @synthesize=_packetsReceived
@property(readonly, assign) int packetsSent;	// G=0x21a465; @synthesize=_packetsSent
@property(assign) BOOL shouldIncludeIPStats;	// G=0x21a3dd; S=0x21a3f5; @synthesize=_shouldIncludeIPStats
@property(assign) BOOL shouldIncludeInterfaceStats;	// G=0x21a40d; S=0x21a425; @synthesize=_shouldIncludeInterfaceStats
@property(readonly, retain) NSDictionary *tcpStatistics;	// G=0x219fad; converted property
- (id)init;	// 0x219ecd
- (id)_defaultRoutes;	// 0x21ad09
- (void)_gatherIPStatistics;	// 0x21aa05
- (void)_gatherInterfaceStatistics;	// 0x21ab9d
- (void)_gatherNetStatistics;	// 0x21a4c9
- (void)_gatherTCPStatistics;	// 0x21a52d
- (id)_outboundRoutes;	// 0x21ae05
- (void)_routeAdded:(NStatSource *)added;	// 0x21afdd
- (void)_startRouteMonitoring;	// 0x21ae55
- (void)_stopRouteMonitoring;	// 0x21afb9
- (id)activeDefaultRouteStatistics;	// 0x21a0ad
- (id)activeRouteStatistics;	// 0x21a04d
// declared property getter: - (int)bytesReceived;	// 0x21a48d
// declared property getter: - (int)bytesSent;	// 0x21a4a1
- (id)cumulativeDefaultRouteStatistics;	// 0x21a10d
- (id)cumulativeRouteStatistics;	// 0x21a16d
- (void)dealloc;	// 0x219e41
- (void)gatherStats;	// 0x21a29d
// declared property getter: - (int)inputErrors;	// 0x21a451
// converted property getter: - (id)interfaceStatistics;	// 0x219fcd
// converted property getter: - (id)ipStatistics;	// 0x219fbd
// declared property getter: - (int)outputErrors;	// 0x21a479
// declared property getter: - (int)packetsDropped;	// 0x21a4b5
// declared property getter: - (int)packetsReceived;	// 0x21a43d
// declared property getter: - (int)packetsSent;	// 0x21a465
- (void)resetStats;	// 0x21a2ad
- (void)routeRemoved:(id)removed;	// 0x21b11d
- (id)routeStatisticsForHost:(id)host;	// 0x21a1cd
// declared property setter: - (void)setShouldIncludeIPStats:(BOOL)includeIPStats;	// 0x21a3f5
// declared property setter: - (void)setShouldIncludeInterfaceStats:(BOOL)includeInterfaceStats;	// 0x21a425
// declared property getter: - (BOOL)shouldIncludeIPStats;	// 0x21a3dd
// declared property getter: - (BOOL)shouldIncludeInterfaceStats;	// 0x21a40d
- (void)startMonitoring;	// 0x21a1f1
- (void)startRouteMonitoring;	// 0x21a1d1
- (void)stopMonitoring;	// 0x21a269
- (void)stopRouteMonitoring;	// 0x21a1e1
// converted property getter: - (id)tcpStatistics;	// 0x219fad
- (void)updateRouteCounts;	// 0x219fdd
- (void)updateRouteCountsForDefaultRoute;	// 0x219ffd
- (void)updateRouteCountsForRoutes:(id)routes;	// 0x21a02d
@end

