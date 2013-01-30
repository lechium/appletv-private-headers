/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCGrowthAlgorithm.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
	double _currentKeepAliveInterval;	// 4 = 0x4
	double _minimumKeepAliveInterval;	// 12 = 0xc
	double _maximumKeepAliveInterval;	// 20 = 0x14
	double _lastKeepAliveInterval;	// 28 = 0x1c
	int _growthStage;	// 36 = 0x24
	double _highWatermark;	// 40 = 0x28
	double _initialGrowthStageHighWatermark;	// 48 = 0x30
	double _initialGrowthStageLastAttempt;	// 56 = 0x38
	NSDate *_leaveSteadyStateDate;	// 64 = 0x40
	NSString *_loggingIdentifier;	// 68 = 0x44
	NSString *_algorithmName;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x352bdeed; @synthesize=_currentKeepAliveInterval
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x352bdf35; @synthesize=_loggingIdentifier
@property(assign, nonatomic) double maximumKeepAliveInterval;	// G=0x352bdf1d; S=0x352bcf69; @synthesize=_maximumKeepAliveInterval
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x352bdf05; S=0x352bcff1; @synthesize=_minimumKeepAliveInterval
+ (void)_loadDefaultValue:(double *)value forKey:(CFStringRef)key;	// 0x352bdd01
+ (void)_loadDefaults;	// 0x352bdb91
- (id)initWithKeepAliveInterval:(double)keepAliveInterval loggingIdentifier:(id)identifier algorithmName:(id)name;	// 0x352bcdf1
- (void)_processBackoffAction:(int)action;	// 0x352bd5e1
- (void)_processInitialGrowthAction:(int)action;	// 0x352bd3e1
- (void)_processRefinedGrowthAction:(int)action;	// 0x352bd909
- (void)_processSteadyStateAction:(int)action;	// 0x352bd645
- (void)_resetAlgorithmToInterval:(double)interval;	// 0x352bd19d
- (void)_setCurrentKeepAliveInterval:(double)interval;	// 0x352bd079
- (double)_steadyStateTimeout;	// 0x352bdae1
- (id)_stringForAction:(int)action;	// 0x352bde6d
- (id)_stringForStage:(int)stage;	// 0x352bdead
// declared property getter: - (double)currentKeepAliveInterval;	// 0x352bdeed
- (void)dealloc;	// 0x352bcef1
- (id)description;	// 0x352bddc1
// declared property getter: - (id)loggingIdentifier;	// 0x352bdf35
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x352bdf1d
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x352bdf05
- (void)processNextAction:(int)action;	// 0x352bd245
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x352bcf69
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x352bcff1
@end
