/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import "ControlBits.h"


@interface ControlBits_Legacy_0v0 : ControlBits {
}
+ (int)readControlBits:(unsigned char)bits status:(int *)status failCount:(int *)count secure:(BOOL *)secure;	// 0x32ea5f61
+ (int)writeControlBits:(unsigned char)bits status:(int)status;	// 0x32ea5d3d
@end

