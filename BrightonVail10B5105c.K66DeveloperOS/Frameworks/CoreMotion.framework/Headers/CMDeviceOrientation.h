/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CMLogItem.h"
#import "CoreMotion-Structs.h"


@interface CMDeviceOrientation : CMLogItem {
	id _internal;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int orientation;	// G=0x33db8c7d; 
- (id)initWithCoder:(id)coder;	// 0x33db899d
- (id)initWithOrientation:(int)orientation andTimestamp:(double)timestamp;	// 0x33db8925
- (id)copyWithZone:(NSZone *)zone;	// 0x33db8add
- (void)dealloc;	// 0x33db8a91
- (id)description;	// 0x33db8bc5
- (void)encodeWithCoder:(id)coder;	// 0x33db8a29
// declared property getter: - (int)orientation;	// 0x33db8c7d
- (id)orientationString;	// 0x33db8b39
@end

