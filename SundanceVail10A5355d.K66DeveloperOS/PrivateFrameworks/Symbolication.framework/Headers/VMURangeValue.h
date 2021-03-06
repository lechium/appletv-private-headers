/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUAddressRange.h"
#import "Symbolication-Structs.h"


@interface VMURangeValue : VMUAddressRange {
	int _value;	// 20 = 0x14
}
@property(readonly, assign) int value;	// G=0x34d7d701; converted property
+ (id)rangeValueWithRange:(VMURange)range value:(int)value;	// 0x34d7d61d
- (id)initWithRange:(VMURange)range value:(int)value;	// 0x34d7d671
- (VMURange)addressRange;	// 0x34d7d6d9
- (int)compare:(id)compare;	// 0x34d7d711
- (id)description;	// 0x34d7d771
// converted property getter: - (int)value;	// 0x34d7d701
@end

