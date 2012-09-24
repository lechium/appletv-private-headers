/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSThread;

@interface OSDPIDController : NSObject {
	bool override;	// 4 = 0x4
	float kp;	// 8 = 0x8
	float ki;	// 12 = 0xc
	float kd;	// 16 = 0x10
	double sampleRate;	// 20 = 0x14
	float setpoint;	// 28 = 0x1c
	double priority;	// 32 = 0x20
	float outputMin;	// 40 = 0x28
	float outputMax;	// 44 = 0x2c
	id inputBlock;	// 48 = 0x30
	id outputBlock;	// 52 = 0x34
	NSThread *pidThread;	// 56 = 0x38
}
@property(assign, nonatomic, setter=setkd:) float kd;	// G=0x377ae835; S=0x377ae70d; @synthesize
@property(assign, nonatomic, setter=setki:) float ki;	// G=0x377ae825; S=0x377ae6ed; @synthesize
@property(assign, nonatomic, setter=setkp:) float kp;	// G=0x377ae815; S=0x377ae6cd; @synthesize
@property(assign) bool override;	// G=0x377ae7e5; S=0x377ae7fd; @synthesize
@property(assign, nonatomic, setter=setPriority:) double priority;	// G=0x377ae86d; S=0x377ae7c1; @synthesize
@property(assign, nonatomic, setter=setSampleRate:) double sampleRate;	// G=0x377ae855; S=0x377ae74d; @synthesize
@property(assign, nonatomic, setter=setSetpoint:) float setpoint;	// G=0x377ae845; S=0x377ae72d; @synthesize
- (id)initWithInputBlock:(id)inputBlock outputBlock:(id)block sampleRate:(double)rate setpoint:(float)setpoint kp:(float)kp ki:(float)ki kd:(float)kd priority:(double)priority;	// 0x377ae1ad
- (void)dealloc;	// 0x377ae329
// declared property getter: - (float)kd;	// 0x377ae835
// declared property getter: - (float)ki;	// 0x377ae825
// declared property getter: - (float)kp;	// 0x377ae815
// declared property getter: - (bool)override;	// 0x377ae7e5
- (void)pidSelector;	// 0x377ae491
// declared property getter: - (double)priority;	// 0x377ae86d
- (void)reset;	// 0x377ae44d
// declared property getter: - (double)sampleRate;	// 0x377ae855
// declared property setter: - (void)setOverride:(bool)override;	// 0x377ae7fd
// declared property setter: - (void)setPriority:(double)priority;	// 0x377ae7c1
// declared property setter: - (void)setSampleRate:(double)rate;	// 0x377ae74d
// declared property setter: - (void)setSetpoint:(float)setpoint;	// 0x377ae72d
// declared property setter: - (void)setkd:(float)setkd;	// 0x377ae70d
// declared property setter: - (void)setki:(float)setki;	// 0x377ae6ed
// declared property setter: - (void)setkp:(float)setkp;	// 0x377ae6cd
// declared property getter: - (float)setpoint;	// 0x377ae845
- (void)start;	// 0x377ae369
- (void)stop;	// 0x377ae409
@end
