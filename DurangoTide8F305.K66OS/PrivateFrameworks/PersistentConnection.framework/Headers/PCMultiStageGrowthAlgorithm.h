/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PCGrowthAlgorithm.h"
#import <NSObject.h> // Unknown library
#import "PersistentConnection-Structs.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
@private
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
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x3025a7f1; @synthesize=_currentKeepAliveInterval
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3025a7c1; @synthesize=_loggingIdentifier
@property(assign, nonatomic) double maximumKeepAliveInterval;	// G=0x3025a7d1; S=0x3025b049; @synthesize=_maximumKeepAliveInterval
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x3025a7e1; S=0x3025afc5; @synthesize=_minimumKeepAliveInterval
+ (void)_loadDefaultValue:(double *)value forKey:(CFStringRef)key;	// 0x3025b671
+ (void)_loadDefaults;	// 0x3025b61d
- (id)initWithKeepAliveInterval:(double)keepAliveInterval loggingIdentifier:(id)identifier algorithmName:(id)name;	// 0x3025b1dd
- (void)_processBackoffAction:(int)action;	// 0x3025ac31
- (void)_processInitialGrowthAction:(int)action;	// 0x3025b479
- (void)_processRefinedGrowthAction:(int)action;	// 0x3025b2f9
- (void)_processSteadyStateAction:(int)action;	// 0x3025a98d
- (void)_resetAlgorithmToInterval:(double)interval;	// 0x3025ae0d
- (void)_setCurrentKeepAliveInterval:(double)interval;	// 0x3025aead
- (double)_steadyStateTimeout;	// 0x3025a8d5
- (id)_stringForAction:(int)action;	// 0x3025a749
- (id)_stringForStage:(int)stage;	// 0x3025a785
// declared property getter: - (double)currentKeepAliveInterval;	// 0x3025a7f1
- (void)dealloc;	// 0x3025b171
- (id)description;	// 0x3025b0cd
// declared property getter: - (id)loggingIdentifier;	// 0x3025a7c1
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x3025a7d1
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x3025a7e1
- (void)processNextAction:(int)action;	// 0x3025ac91
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x3025b049
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x3025afc5
@end
