/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCoding.h"


@interface VMUAddressRange : NSObject <NSCoding> {
	VMURange _addressRange;	// 4 = 0x4
}
- (id)initWithCoder:(id)coder;	// 0x34d32031
- (void)encodeWithCoder:(id)coder;	// 0x34d320b1
- (void)setAddressRange:(VMURange)range;	// 0x34d359a5
@end

