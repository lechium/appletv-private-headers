/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"


@interface NSPointerFunctions : NSObject <NSCopying> {
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x32490411; S=0x32490471; 
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x3249041d; S=0x3249047d; 
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x32490435; S=0x32490495; 
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x32490429; S=0x32490489; 
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x32490405; S=0x32490465; 
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x32490441; S=0x324904a1; 
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x324903f9; S=0x32490459; 
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x324903ed; S=0x3249044d; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x3249050d
+ (id)pointerFunctionsWithOptions:(unsigned)options;	// 0x324904c5
- (id)initWithOptions:(unsigned)options;	// 0x324904b9
// declared property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x32490411
- (id)copyWithZone:(NSZone *)zone;	// 0x324904ad
// declared property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x3249041d
// declared property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x32490435
// declared property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x32490429
// declared property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x32490405
// declared property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x32490471
// declared property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x3249047d
// declared property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x32490495
// declared property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x32490489
// declared property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x32490465
// declared property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x324904a1
// declared property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x32490459
// declared property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x3249044d
// declared property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x32490441
// declared property getter: - (BOOL)usesStrongWriteBarrier;	// 0x324903f9
// declared property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x324903ed
@end

