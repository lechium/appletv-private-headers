/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


@interface VMUClassInfoMap : NSObject <NSCoding> {
@private
	void *_cppMap;	// 4 = 0x4
}
+ (id)infoMap;	// 0x30be71a5
+ (void)initialize;	// 0x30be71dd
- (id)init;	// 0x30be73c1
- (id)initWithCoder:(id)coder;	// 0x30be7279
- (void)addClassInfo:(id)info forAddress:(unsigned long long)address;	// 0x30be721d
- (void)addClassInfosFromMap:(id)map;	// 0x30be7049
- (id)classInfoForAddress:(unsigned long long)address;	// 0x30be70d9
- (unsigned)count;	// 0x30be6fb9
- (void)dealloc;	// 0x30be7125
- (void)encodeWithCoder:(id)coder;	// 0x30be7335
- (void)enumerateWithBlock:(id)block;	// 0x30be7035
@end
