/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOThrottleState : NSObject {
	unsigned _requestCount;	// 4 = 0x4
	double _lastResetTime;	// 8 = 0x8
}
@property(assign, nonatomic) double lastResetTime;	// G=0x34bfe505; S=0x34bfe51d; @synthesize=_lastResetTime
@property(assign, nonatomic) unsigned requestCount;	// G=0x34bfe4e5; S=0x34bfe4f5; @synthesize=_requestCount
// declared property getter: - (double)lastResetTime;	// 0x34bfe505
// declared property getter: - (unsigned)requestCount;	// 0x34bfe4e5
// declared property setter: - (void)setLastResetTime:(double)time;	// 0x34bfe51d
// declared property setter: - (void)setRequestCount:(unsigned)count;	// 0x34bfe4f5
@end

