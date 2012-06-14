/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFNumber : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a2b41d
- (long)_cfNumberType;	// 0x31a2b501
- (unsigned long)_cfTypeID;	// 0x31a2b4fd
- (unsigned char)_getValue:(void *)value forType:(long)type;	// 0x31a2b5c5
- (BOOL)_isDeallocating;	// 0x31a2b3c9
- (int)_reverseCompare:(id)compare;	// 0x31a2b695
- (BOOL)_tryRetain;	// 0x31a2b3b5
- (BOOL)boolValue;	// 0x319c9981
- (BOOL)charValue;	// 0x31a0622d
- (int)compare:(id)compare;	// 0x319d9c8d
- (id)copyWithZone:(NSZone *)zone;	// 0x319dffb1
- (id)description;	// 0x319f6e39
- (id)descriptionWithLocale:(id)locale;	// 0x319e4809
- (double)doubleValue;	// 0x319b591d
- (void)finalize;	// 0x31a2b3d9
- (float)floatValue;	// 0x319d7e19
- (void)getValue:(void *)value;	// 0x31a2b421
- (unsigned)hash;	// 0x319ed7c5
- (int)intValue;	// 0x319c4ccd
- (int)integerValue;	// 0x319ddcfd
- (BOOL)isEqual:(id)equal;	// 0x319d9c11
- (BOOL)isEqualToNumber:(id)number;	// 0x319d9c5d
- (BOOL)isNSNumber__;	// 0x319d9c59
- (long long)longLongValue;	// 0x319d9fed
- (long)longValue;	// 0x319ddd0d
- (const char *)objCType;	// 0x319d9ef5
- (oneway void)release;	// 0x319ac35d
- (id)retain;	// 0x319bb265
- (unsigned)retainCount;	// 0x31a2b3d5
- (short)shortValue;	// 0x319f3509
- (id)stringValue;	// 0x319e47a1
- (unsigned char)unsignedCharValue;	// 0x31a2b485
- (unsigned)unsignedIntValue;	// 0x319ca1fd
- (unsigned)unsignedIntegerValue;	// 0x319edccd
- (unsigned long long)unsignedLongLongValue;	// 0x319dc53d
- (unsigned long)unsignedLongValue;	// 0x319edcdd
- (unsigned short)unsignedShortValue;	// 0x31a2b4c1
@end
