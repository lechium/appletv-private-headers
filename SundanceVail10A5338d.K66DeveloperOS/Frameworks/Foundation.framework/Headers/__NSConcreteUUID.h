/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSUUID.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSConcreteUUID : NSUUID {
	unsigned char _uuidBytes[16];	// 4 = 0x4
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x37468629
- (id)init;	// 0x3746862d
- (id)initWithUUIDBytes:(unsigned char [16])uuidbytes;	// 0x374686ed
- (id)initWithUUIDString:(id)uuidstring;	// 0x37468671
- (id)UUIDString;	// 0x3746887d
- (XXStruct_eX1N7A)_cfUUIDBytes;	// 0x374687f1
- (Class)classForCoder;	// 0x37468941
- (id)copyWithZone:(NSZone *)zone;	// 0x3746895d
- (id)description;	// 0x374688d9
- (void)getUUIDBytes:(unsigned char [16])bytes;	// 0x374687dd
- (BOOL)isEqual:(id)equal;	// 0x37468735
@end

