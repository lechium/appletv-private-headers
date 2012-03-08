/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
@private
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x30cf4089; S=0x30d16755; converted property
@property(retain) id target;	// G=0x30d3ae11; S=0x30d1fdd5; converted property
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x30cf3e75
- (id)init;	// 0x30d97ea9
- (void)_addAttachedObject:(id)object;	// 0x30d980d1
- (BOOL)argumentsRetained;	// 0x30d980b9
- (id)copyWithZone:(NSZone *)zone;	// 0x30d98129
- (void)dealloc;	// 0x30cf5149
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x30cf40ad
- (void)getReturnValue:(void *)value;	// 0x30d356fd
- (void)invoke;	// 0x30cf4711
- (void)invokeSuper;	// 0x30d98619
- (void)invokeUsingIMP:(/*function-pointer*/ void *)imp;	// 0x30d9852d
- (void)invokeWithTarget:(id)target;	// 0x30cf439d
- (id)methodSignature;	// 0x30d165c5
- (void)retainArguments;	// 0x30d166b9
// converted property getter: - (SEL)selector;	// 0x30cf4089
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x30cf43d5
- (void)setReturnValue:(void *)value;	// 0x30d982a1
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x30d16755
// converted property setter: - (void)setTarget:(id)target;	// 0x30d1fdd5
// converted property getter: - (id)target;	// 0x30d3ae11
@end

