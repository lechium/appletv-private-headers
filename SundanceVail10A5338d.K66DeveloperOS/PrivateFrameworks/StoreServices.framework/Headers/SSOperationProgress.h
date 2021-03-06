/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
	BOOL _canPause;	// 4 = 0x4
	double _changeRate;	// 8 = 0x8
	long long _currentValue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
	double _estimatedTimeRemaining;	// 28 = 0x1c
	long long _maxValue;	// 36 = 0x24
	long long _normalizedCurrentValue;	// 44 = 0x2c
	long long _normalizedMaxValue;	// 52 = 0x34
	int _operationType;	// 60 = 0x3c
	NSMutableArray *_snapshotTimes;	// 64 = 0x40
	NSMutableArray *_snapshotValues;	// 68 = 0x44
	int _units;	// 72 = 0x48
}
@property(assign) BOOL canPause;	// G=0x3233d595; S=0x3233dd81; 
@property(assign) double changeRate;	// G=0x3233d665; S=0x3233de01; 
@property(assign) long long currentValue;	// G=0x3233d755; S=0x3233de99; 
@property(assign) double estimatedTimeRemaining;	// G=0x3233d839; S=0x3233df31; 
@property(assign) long long maxValue;	// G=0x3233d92d; S=0x3233dfc9; 
@property(assign) long long normalizedCurrentValue;	// G=0x3233da11; S=0x3233e061; 
@property(assign) long long normalizedMaxValue;	// G=0x3233db0d; S=0x3233e0f9; 
@property(assign) int operationType;	// G=0x3233dc09; S=0x3233e191; 
@property(assign) int units;	// G=0x3233e495; S=0x3233e211; 
- (id)init;	// 0x3233d2a9
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3233e91d
- (void)_updateStatisticsFromSnapshots;	// 0x3233eab9
// declared property getter: - (BOOL)canPause;	// 0x3233d595
// declared property getter: - (double)changeRate;	// 0x3233d665
- (id)copyWithZone:(NSZone *)zone;	// 0x3233d3c1
- (id)copyXPCEncoding;	// 0x3233e7cd
// declared property getter: - (long long)currentValue;	// 0x3233d755
- (void)dealloc;	// 0x3233d34d
- (id)description;	// 0x3233e561
// declared property getter: - (double)estimatedTimeRemaining;	// 0x3233d839
// declared property getter: - (long long)maxValue;	// 0x3233d92d
// declared property getter: - (long long)normalizedCurrentValue;	// 0x3233da11
// declared property getter: - (long long)normalizedMaxValue;	// 0x3233db0d
// declared property getter: - (int)operationType;	// 0x3233dc09
- (void)resetSnapshots;	// 0x3233dcd5
// declared property setter: - (void)setCanPause:(BOOL)pause;	// 0x3233dd81
// declared property setter: - (void)setChangeRate:(double)rate;	// 0x3233de01
// declared property setter: - (void)setCurrentValue:(long long)value;	// 0x3233de99
// declared property setter: - (void)setEstimatedTimeRemaining:(double)remaining;	// 0x3233df31
// declared property setter: - (void)setMaxValue:(long long)value;	// 0x3233dfc9
// declared property setter: - (void)setNormalizedCurrentValue:(long long)value;	// 0x3233e061
// declared property setter: - (void)setNormalizedMaxValue:(long long)value;	// 0x3233e0f9
// declared property setter: - (void)setOperationType:(int)type;	// 0x3233e191
// declared property setter: - (void)setUnits:(int)units;	// 0x3233e211
- (void)snapshot;	// 0x3233e291
// declared property getter: - (int)units;	// 0x3233e495
@end

