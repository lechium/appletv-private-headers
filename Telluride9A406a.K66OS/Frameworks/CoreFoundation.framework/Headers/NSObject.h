/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)debugDescription;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject <NSObject> {
	Class isa;	// 0 = 0x0
}
+ (id)init;	// 0x340e1d19
+ (id)_copyDescription;	// 0x340e1c7d
+ (BOOL)_isDeallocating;	// 0x340e1cc5
+ (BOOL)_tryRetain;	// 0x340e1cc1
+ (id)alloc;	// 0x34027401
+ (id)allocWithZone:(NSZone *)zone;	// 0x34032bbd
+ (BOOL)allowsWeakReference;	// 0x340e1cc9
+ (id)autorelease;	// 0x340e1d0d
+ (Class)class;	// 0x34027b6d
+ (BOOL)conformsToProtocol:(id)protocol;	// 0x3407f1c5
+ (id)copy;	// 0x340e1f15
+ (id)copyWithZone:(NSZone *)zone;	// 0x3406fcf5
+ (void)dealloc;	// 0x340e1dc5
+ (id)debugDescription;	// 0x340e1c5d
+ (id)description;	// 0x340645f1
+ (void)doesNotRecognizeSelector:(SEL)selector;	// 0x340e18b1
+ (void)finalize;	// 0x340e1e71
+ (void)forwardInvocation:(id)invocation;	// 0x340e1be9
+ (id)forwardingTargetForSelector:(SEL)selector;	// 0x340e1c59
+ (unsigned)hash;	// 0x3406fcf9
+ (void)initialize;	// 0x340e185d
+ (/*function-pointer*/ void *)instanceMethodForSelector:(SEL)selector;	// 0x3404cac1
+ (id)instanceMethodSignatureForSelector:(SEL)selector;	// 0x3403b695
+ (BOOL)instancesRespondToSelector:(SEL)selector;	// 0x34079671
+ (BOOL)isAncestorOfObject:(id)object;	// 0x340e187d
+ (BOOL)isEqual:(id)equal;	// 0x3406f3a5
+ (BOOL)isFault;	// 0x340e18ad
+ (BOOL)isKindOfClass:(Class)aClass;	// 0x340663c9
+ (BOOL)isMemberOfClass:(Class)aClass;	// 0x340e1865
+ (BOOL)isProxy;	// 0x3406d825
+ (BOOL)isSubclassOfClass:(Class)aClass;	// 0x34059c8d
+ (void)load;	// 0x3404dfad
+ (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x34059db9
+ (id)methodSignatureForSelector:(SEL)selector;	// 0x34082e65
+ (id)mutableCopy;	// 0x340e1f19
+ (id)mutableCopyWithZone:(NSZone *)zone;	// 0x340e1f1d
+ (id)new;	// 0x3403cb75
+ (id)performSelector:(SEL)selector;	// 0x34061ff1
+ (id)performSelector:(SEL)selector withObject:(id)object;	// 0x3406cef5
+ (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x340e1acd
+ (oneway void)release;	// 0x340361b9
+ (BOOL)resolveClassMethod:(SEL)method;	// 0x34056c25
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x340375d9
+ (BOOL)respondsToSelector:(SEL)selector;	// 0x34055195
+ (id)retain;	// 0x34035b4d
+ (unsigned)retainCount;	// 0x340e1d11
+ (BOOL)retainWeakReference;	// 0x340e1ccd
+ (id)self;	// 0x34030909
+ (Class)superclass;	// 0x3403eaf5
+ (NSZone *)zone;	// 0x340e1f11
- (id)init;	// 0x34032c8d
- (unsigned long)_cfTypeID;	// 0x340375dd
- (id)_copyDescription;	// 0x34056f61
- (BOOL)_isDeallocating;	// 0x3406f1f9
- (BOOL)_tryRetain;	// 0x340762c1
- (BOOL)allowsWeakReference;	// 0x340e1cd1
- (id)autorelease;	// 0x340278d9
- (Class)class;	// 0x34027b9d
- (BOOL)conformsToProtocol:(id)protocol;	// 0x3403d22d
- (id)copy;	// 0x34032c91
- (void)dealloc;	// 0x34034605
- (id)debugDescription;	// 0x340e1c6d
- (id)description;	// 0x3406689d
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x340e1a1d
- (void)finalize;	// 0x340e1f0d
- (void)forwardInvocation:(id)invocation;	// 0x340e1c21
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x3403b691
- (unsigned)hash;	// 0x34036e1d
- (BOOL)isEqual:(id)equal;	// 0x3403d275
- (BOOL)isFault;	// 0x34088259
- (BOOL)isKindOfClass:(Class)aClass;	// 0x34027b71
- (BOOL)isMemberOfClass:(Class)aClass;	// 0x3406f3cd
- (BOOL)isNSArray__;	// 0x34068cad
- (BOOL)isNSData__;	// 0x34068cb1
- (BOOL)isNSDate__;	// 0x340763b9
- (BOOL)isNSDictionary__;	// 0x34068ca9
- (BOOL)isNSNumber__;	// 0x34070e69
- (BOOL)isNSOrderedSet__;	// 0x340e1f21
- (BOOL)isNSSet__;	// 0x34070b35
- (BOOL)isNSString__;	// 0x34065f71
- (BOOL)isNSTimeZone__;	// 0x340e1f25
- (BOOL)isNSValue__;	// 0x340e1f29
- (BOOL)isProxy;	// 0x3406d829
- (/*function-pointer*/ void *)methodForSelector:(SEL)selector;	// 0x3404c1f1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34067459
- (id)mutableCopy;	// 0x34037099
- (id)performSelector:(SEL)selector;	// 0x3403d7dd
- (id)performSelector:(SEL)selector withObject:(id)object;	// 0x3403d201
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;	// 0x34038401
- (oneway void)release;	// 0x34033ad5
- (BOOL)respondsToSelector:(SEL)selector;	// 0x34032e5d
- (id)retain;	// 0x34030419
- (unsigned)retainCount;	// 0x34046bbd
- (BOOL)retainWeakReference;	// 0x340e1cf5
- (id)self;	// 0x340e1861
- (Class)superclass;	// 0x3406f3b1
- (NSZone *)zone;	// 0x340471ed
@end
