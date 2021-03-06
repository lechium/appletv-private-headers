/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import "CMLogItem.h"

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) CMAttitude *attitude;	// G=0x31c1e321; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB gravity;	// G=0x31c1e375; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB rotationRate;	// G=0x31c1e33d; 
@property(readonly, assign, nonatomic) XXStruct_taVrlB userAcceleration;	// G=0x31c1e3ad; 
- (id)initWithCoder:(id)coder;	// 0x31c1ebad
- (id)initWithDeviceMotion:(XXStruct_U9ijYB)deviceMotion andTimestamp:(double)timestamp;	// 0x31c1e745
// declared property getter: - (id)attitude;	// 0x31c1e321
- (id)copyWithZone:(NSZone *)zone;	// 0x31c1e93d
- (void)dealloc;	// 0x31c1e995
- (id)description;	// 0x31c1e815
- (void)encodeWithCoder:(id)coder;	// 0x31c1e9e1
// declared property getter: - (XXStruct_taVrlB)gravity;	// 0x31c1e375
// declared property getter: - (XXStruct_taVrlB)rotationRate;	// 0x31c1e33d
// declared property getter: - (XXStruct_taVrlB)userAcceleration;	// 0x31c1e3ad
@end

