/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PersistentConnection-Structs.h"
#import "PCGrowthAlgorithm.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate;

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
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x33225275; @synthesize=_currentKeepAliveInterval
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x332252bd; @synthesize=_loggingIdentifier
@property(assign, nonatomic) double maximumKeepAliveInterval;	// G=0x332252a5; S=0x332242f1; @synthesize=_maximumKeepAliveInterval
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x3322528d; S=0x33224379; @synthesize=_minimumKeepAliveInterval
+ (void)_loadDefaultValue:(double *)value forKey:(CFStringRef)key;	// 0x33225089
+ (void)_loadDefaults;	// 0x33224f19
- (id)initWithKeepAliveInterval:(double)keepAliveInterval loggingIdentifier:(id)identifier algorithmName:(id)name;	// 0x33224179
- (void)_processBackoffAction:(int)action;	// 0x33224969
- (void)_processInitialGrowthAction:(int)action;	// 0x33224769
- (void)_processRefinedGrowthAction:(int)action;	// 0x33224c91
- (void)_processSteadyStateAction:(int)action;	// 0x332249cd
- (void)_resetAlgorithmToInterval:(double)interval;	// 0x33224525
- (void)_setCurrentKeepAliveInterval:(double)interval;	// 0x33224401
- (double)_steadyStateTimeout;	// 0x33224e69
- (id)_stringForAction:(int)action;	// 0x332251f5
- (id)_stringForStage:(int)stage;	// 0x33225235
// declared property getter: - (double)currentKeepAliveInterval;	// 0x33225275
- (void)dealloc;	// 0x33224279
- (id)description;	// 0x33225149
// declared property getter: - (id)loggingIdentifier;	// 0x332252bd
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x332252a5
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x3322528d
- (void)processNextAction:(int)action;	// 0x332245cd
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x332242f1
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x33224379
@end
