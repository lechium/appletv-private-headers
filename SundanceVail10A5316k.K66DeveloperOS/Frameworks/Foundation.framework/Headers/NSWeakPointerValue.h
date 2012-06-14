/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSValue.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSWeakPointerValue : NSValue {
@private
	void *_value;	// 4 = 0x4
	void *_weakValue;	// 8 = 0x8
}
- (id)initWithPointer:(void *)pointer;	// 0x31a8c48d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a8c559
- (void)getValue:(void *)value;	// 0x31a8c535
- (unsigned)hash;	// 0x31a8c519
- (BOOL)isEqualToValue:(id)value;	// 0x31a8c4d9
- (id)nonretainedObjectValue;	// 0x31a8c549
- (const char *)objCType;	// 0x31a8c529
@end

