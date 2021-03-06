/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x3194a039; S=0x31949f91; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x3194a025; S=0x318c8261; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x31949ffd; S=0x318c8275; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x3194a011; S=0x318c8249; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x3194a04d; S=0x31949fa5; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x31949fe9; S=0x31949f7d; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x3194a061; S=0x31949fb9; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x3194a075; S=0x31949fd1; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(BOOL)sentinel compactable:(BOOL)compactable;	// 0x318b2085
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x318b1e09
- (id)initWithOptions:(unsigned)options;	// 0x318c81ed
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x3194a039
- (id)copyWithZone:(NSZone *)zone;	// 0x31949f29
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x3194a025
- (unsigned)hash;	// 0x31949f6d
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x31949ffd
- (BOOL)isEqual:(id)equal;	// 0x31949f71
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x3194a011
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x3194a04d
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x31949f91
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x318c8261
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x318c8275
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x318c8249
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x31949fa5
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x31949f7d
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x31949fb9
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x31949fd1
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x31949fe9
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x3194a061
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x3194a075
@end

