/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSNumber.h"


__attribute__((visibility("hidden")))
@interface NSPlaceholderValue : NSNumber {
@private
	NSZone *zoneForInstance;	// 4 = 0x4
}
- (id)init;	// 0x324a03ad
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x3244b719
- (id)initWithCoder:(id)coder;	// 0x324a30ed
- (id)autorelease;	// 0x324a0391
- (void)dealloc;	// 0x324a03a5
- (void)finalize;	// 0x324a03a9
- (void)getValue:(void *)value;	// 0x324a0c3d
- (const char *)objCType;	// 0x324a0c95
- (oneway void)release;	// 0x324a03a1
- (id)retain;	// 0x324a0395
- (unsigned)retainCount;	// 0x324a0399
@end

