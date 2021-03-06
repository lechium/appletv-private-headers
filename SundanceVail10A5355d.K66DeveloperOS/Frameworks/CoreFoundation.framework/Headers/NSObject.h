/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
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

@interface NSObject (NSObject)
+ (id)init;	// 0x35d64991
+ (id)__allocWithZone_OA:(NSZone *)zone_OA;	// 0x35d648d9
+ (id)_copyDescription;	// 0x35d64795
+ (void)dealloc;	// 0x35d64a3d
+ (id)description;	// 0x35d646ad
+ (void)doesNotRecognizeSelector:(SEL)selector;	// 0x35d642ed
+ (void)finalize;	// 0x35d64ad5
+ (id)instanceMethodSignatureForSelector:(SEL)selector;	// 0x35d644fd
+ (void)load;	// 0x35d64249
+ (id)methodSignatureForSelector:(SEL)selector;	// 0x35d64611
- (BOOL)___tryRetain_OA;	// 0x35d64845
- (id)__autorelease_OA;	// 0x35d64899
- (void)__dealloc_zombie;	// 0x35d648f9
- (oneway void)__release_OA;	// 0x35d64871
- (id)__retain_OA;	// 0x35d6481d
- (id)_copyDescription;	// 0x35d647d9
- (id)description;	// 0x35d64715
- (void)doesNotRecognizeSelector:(SEL)selector;	// 0x35d64451
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35d64659
@end

@interface NSObject (__NSIsKinds)
- (BOOL)isNSArray__;	// 0x35ce18e9
- (BOOL)isNSData__;	// 0x35ce18ed
- (BOOL)isNSDate__;	// 0x35cef441
- (BOOL)isNSDictionary__;	// 0x35ce18e5
- (BOOL)isNSNumber__;	// 0x35cea1ed
- (BOOL)isNSOrderedSet__;	// 0x35d64b6d
- (BOOL)isNSSet__;	// 0x35ce9f41
- (BOOL)isNSString__;	// 0x35cdeef1
- (BOOL)isNSTimeZone__;	// 0x35d64b71
- (BOOL)isNSValue__;	// 0x35d64b75
@end

@interface NSObject (__NSCFType)
- (unsigned long)_cfTypeID;	// 0x35cb07b9
@end

