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
@property(readonly, assign, nonatomic) CFUUIDRef UUID;	// G=0x34abed41; @synthesize=_UUID
- (id)initWithUUID:(CFUUIDRef)uuid;	// 0x34abeb79
// declared property getter: - (CFUUIDRef)UUID;	// 0x34abed41
- (id)copyWithZone:(NSZone *)zone;	// 0x34abec01
- (void)dealloc;	// 0x34abebc1
- (id)description;	// 0x34abece1
- (BOOL)isEqual:(id)equal;	// 0x34abec61
- (void)setUUID:(CFUUIDRef)uuid;	// 0x34abecbd
@end

