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
@private
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
@property(assign, nonatomic, setter=setkd:) float kd;	// G=0x36b4a959; S=0x36b4a831; @synthesize
@property(assign, nonatomic, setter=setki:) float ki;	// G=0x36b4a949; S=0x36b4a811; @synthesize
@property(assign, nonatomic, setter=setkp:) float kp;	// G=0x36b4a939; S=0x36b4a7f1; @synthesize
@property(assign) bool override;	// G=0x36b4a909; S=0x36b4a921; @synthesize
@property(assign, nonatomic, setter=setPriority:) double priority;	// G=0x36b4a991; S=0x36b4a8e5; @synthesize
@property(assign, nonatomic, setter=setSampleRate:) double sampleRate;	// G=0x36b4a979; S=0x36b4a871; @synthesize
@property(assign, nonatomic, setter=setSetpoint:) float setpoint;	// G=0x36b4a969; S=0x36b4a851; @synthesize
- (id)initWithInputBlock:(id)inputBlock outputBlock:(id)block sampleRate:(double)rate setpoint:(float)setpoint kp:(float)kp ki:(float)ki kd:(float)kd priority:(double)priority;	// 0x36b4a2d1
- (void)dealloc;	// 0x36b4a44d
// declared property getter: - (float)kd;	// 0x36b4a959
// declared property getter: - (float)ki;	// 0x36b4a949
// declared property getter: - (float)kp;	// 0x36b4a939
// declared property getter: - (bool)override;	// 0x36b4a909
- (void)pidSelector;	// 0x36b4a5b5
// declared property getter: - (double)priority;	// 0x36b4a991
- (void)reset;	// 0x36b4a571
// declared property getter: - (double)sampleRate;	// 0x36b4a979
// declared property setter: - (void)setOverride:(bool)override;	// 0x36b4a921
// declared property setter: - (void)setPriority:(double)priority;	// 0x36b4a8e5
// declared property setter: - (void)setSampleRate:(double)rate;	// 0x36b4a871
// declared property setter: - (void)setSetpoint:(float)setpoint;	// 0x36b4a851
// declared property setter: - (void)setkd:(float)setkd;	// 0x36b4a831
// declared property setter: - (void)setki:(float)setki;	// 0x36b4a811
// declared property setter: - (void)setkp:(float)setkp;	// 0x36b4a7f1
// declared property getter: - (float)setpoint;	// 0x36b4a969
- (void)start;	// 0x36b4a48d
- (void)stop;	// 0x36b4a52d
@end

