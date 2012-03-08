/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMMagnetometerData : CMLogItem {
@private
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB magneticField;	// G=0x34dcc289; 
- (id)initWithCoder:(id)coder;	// 0x34dcbf7d
- (id)initWithMagneticField:(XXStruct_ZUkpeA)magneticField andTimestamp:(double)timestamp;	// 0x34dcbef5
- (id)copyWithZone:(NSZone *)zone;	// 0x34dcc179
- (void)dealloc;	// 0x34dcc12d
- (id)description;	// 0x34dcc1dd
- (void)encodeWithCoder:(id)coder;	// 0x34dcc06d
// declared property getter: - (XXStruct_taVrlB)magneticField;	// 0x34dcc289
@end

