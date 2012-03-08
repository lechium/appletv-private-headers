/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


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

@interface NSObject (NSObject_AVShared)
- (void)allowSafePerformSelector;	// 0x338b372d
- (void)disallowSafePerformSelector;	// 0x338bf185
- (void)fromMainThreadPostNotificationName:(id)mainThreadPostNotificationName object:(id)object userInfo:(id)info;	// 0x338c8251
- (void)fromNotifySafeThreadPerformSelector:(SEL)notifySafeThreadPerformSelector withObject:(id)object;	// 0x338b934d
- (void)fromNotifySafeThreadPostNotificationName:(id)notifySafeThreadPostNotificationName object:(id)object userInfo:(id)info;	// 0x338b91d5
- (BOOL)okToNotifyFromThisThread;	// 0x338c8311
- (void)postNotificationWithDescription:(id)description;	// 0x338b93dd
@end

@interface NSObject (AVExternalAudioDelegate)
- (long)becomeActive;	// 0x338cd081
- (long)becomeInactive;	// 0x338cd085
@end

