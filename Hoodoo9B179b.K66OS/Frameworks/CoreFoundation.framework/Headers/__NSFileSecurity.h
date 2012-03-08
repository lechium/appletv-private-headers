/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
@private
	filesec *_filesec;	// 4 = 0x4
}
+ (id)__new:(filesec *)aNew;	// 0x30dc1eed
+ (id)allocWithZone:(NSZone *)zone;	// 0x30dc2489
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30dc2485
- (id)initWithCoder:(id)coder;	// 0x30dc268d
- (filesec *)_filesec;	// 0x30dc1f09
- (BOOL)copyAccessControlList:(acl **)list;	// 0x30dc20e5
- (id)copyWithZone:(NSZone *)zone;	// 0x30dc2425
- (void)dealloc;	// 0x30dc2145
- (id)description;	// 0x30dc21dd
- (void)encodeWithCoder:(id)coder;	// 0x30dc24a5
- (void)finalize;	// 0x30dc2189
- (BOOL)getGroup:(unsigned *)group;	// 0x30dc1f75
- (BOOL)getGroupUUID:(unsigned char (*)[16])uuid;	// 0x30dc208d
- (BOOL)getMode:(unsigned short *)mode;	// 0x30dc1fd1
- (BOOL)getOwner:(unsigned *)owner;	// 0x30dc1f19
- (BOOL)getOwnerUUID:(unsigned char (*)[16])uuid;	// 0x30dc2035
- (unsigned)hash;	// 0x30dc21cd
- (BOOL)isEqual:(id)equal;	// 0x30dc21d1
- (BOOL)setAccessControlList:(acl *)list;	// 0x30dc2109
- (BOOL)setGroup:(unsigned)group;	// 0x30dc1fa5
- (BOOL)setGroupUUID:(unsigned char [16])uuid;	// 0x30dc20c1
- (BOOL)setMode:(unsigned short)mode;	// 0x30dc2005
- (BOOL)setOwner:(unsigned)owner;	// 0x30dc1f49
- (BOOL)setOwnerUUID:(unsigned char [16])uuid;	// 0x30dc2069
@end

