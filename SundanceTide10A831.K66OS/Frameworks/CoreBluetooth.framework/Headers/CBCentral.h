/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "CoreBluetooth-Structs.h"


@interface CBCentral : NSObject <NSCopying> {
	CFUUIDRef _UUID;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CFUUIDRef UUID;	// G=0x35b7dc39; @synthesize=_UUID
- (id)initWithUUID:(CFUUIDRef)uuid;	// 0x35b7dacd
// declared property getter: - (CFUUIDRef)UUID;	// 0x35b7dc39
- (id)copyWithZone:(NSZone *)zone;	// 0x35b7db55
- (void)dealloc;	// 0x35b7db15
- (id)description;	// 0x35b7dbd9
- (void)setUUID:(CFUUIDRef)uuid;	// 0x35b7dbb5
@end

