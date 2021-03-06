/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	id mFirst;	// 4 = 0x4
	id mSecond;	// 8 = 0x8
}
+ (id)pair;	// 0x32b055e5
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x32a20259
+ (id)pairWithPair:(id)pair;	// 0x32b0561d
- (id)init;	// 0x32b059a1
- (id)initWithCoder:(id)coder;	// 0x32b05959
- (id)initWithFirst:(id)first second:(id)second;	// 0x32a20299
- (id)initWithPair:(id)pair;	// 0x32b059b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32b0570d
- (void)dealloc;	// 0x32a205b1
- (id)description;	// 0x32b057b5
- (void)encodeWithCoder:(id)coder;	// 0x32b058fd
- (id)first;	// 0x32a20399
- (BOOL)isEqual:(id)equal;	// 0x32b05835
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b05659
- (void)p_SetFirst:(id)first;	// 0x32a202f9
- (void)p_SetSecond:(id)second;	// 0x32a20341
- (id)second;	// 0x32a20389
@end

