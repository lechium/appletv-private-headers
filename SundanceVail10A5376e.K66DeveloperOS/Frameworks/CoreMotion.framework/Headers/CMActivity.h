/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"


@interface CMActivity : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int confidence;	// G=0x307e8ea9; 
@property(readonly, assign, nonatomic) BOOL isDriving;	// G=0x307e8f41; 
@property(readonly, assign, nonatomic) BOOL isMoving;	// G=0x307e8ec9; 
@property(readonly, assign, nonatomic) BOOL isRunning;	// G=0x307e8f19; 
@property(readonly, assign, nonatomic) BOOL isWalking;	// G=0x307e8ef1; 
- (id)initWithCoder:(id)coder;	// 0x307e8c71
- (id)initWithMotionActivity:(CLMotionActivity)motionActivity andTimestamp:(double)timestamp;	// 0x307e8bd9
- (CLMotionActivity)activity;	// 0x307e8e71
// declared property getter: - (int)confidence;	// 0x307e8ea9
- (id)copyWithZone:(NSZone *)zone;	// 0x307e8e11
- (void)dealloc;	// 0x307e8dc5
- (id)description;	// 0x307e8e6d
- (void)encodeWithCoder:(id)coder;	// 0x307e8d31
// declared property getter: - (BOOL)isDriving;	// 0x307e8f41
// declared property getter: - (BOOL)isMoving;	// 0x307e8ec9
// declared property getter: - (BOOL)isRunning;	// 0x307e8f19
// declared property getter: - (BOOL)isWalking;	// 0x307e8ef1
@end

