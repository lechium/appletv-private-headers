/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3075bb75
- (BOOL)_isDeallocating;	// 0x3075bb21
- (BOOL)_tryRetain;	// 0x3075bb0d
- (void)addCharactersInRange:(NSRange)range;	// 0x30715141
- (void)addCharactersInString:(id)string;	// 0x30727da1
- (id)bitmapRepresentation;	// 0x3075bba9
- (BOOL)characterIsMember:(unsigned short)member;	// 0x30711931
- (Class)classForCoder;	// 0x3075bbf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3070ed85
- (void)encodeWithCoder:(id)coder;	// 0x3075bc21
- (void)finalize;	// 0x3075bb31
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x3075bbe5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x3070e2c5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x3075bb99
- (unsigned)hash;	// 0x3075bb09
- (void)invert;	// 0x3070e141
- (id)invertedSet;	// 0x30727f1d
- (BOOL)isEqual:(id)equal;	// 0x3075baf1
- (BOOL)isSupersetOfSet:(id)set;	// 0x3075bb89
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x3075bb79
- (void)makeCharacterSetCompact;	// 0x3075bbed
- (void)makeCharacterSetFast;	// 0x3075bbf1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3070e11d
- (oneway void)release;	// 0x3070eda9
- (void)removeCharactersInRange:(NSRange)range;	// 0x3075bbd5
- (void)removeCharactersInString:(id)string;	// 0x3075bbdd
- (id)retain;	// 0x307153a9
- (unsigned)retainCount;	// 0x3075bb2d
@end
