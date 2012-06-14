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
@interface __NSPlaceholderFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
}
+ (id)immutablePlaceholder;	// 0x37161601
+ (void)initialize;	// 0x37161585
- (id)init;	// 0x37161641
- (id)initWithCoder:(id)coder;	// 0x37161681
- (id)initWithFileSec:(filesec *)fileSec;	// 0x37161611
- (id)copyWithZone:(NSZone *)zone;	// 0x371618cd
- (void)dealloc;	// 0x3716167d
- (void)encodeWithCoder:(id)coder;	// 0x3716184d
- (oneway void)release;	// 0x37161671
- (id)retain;	// 0x3716166d
- (unsigned)retainCount;	// 0x37161675
@end

