/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


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

@interface NSObject (NSArchiverCallBack)
- (Class)classForArchiver;	// 0x319fbf85
- (id)replacementObjectForArchiver:(id)archiver;	// 0x31a0d8bd
@end

@interface NSObject (NSKeyValueCoding)
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a17815
+ (BOOL)accessInstanceVariablesDirectly;	// 0x31a17361
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x31a61501
- (id)mutableArrayValueForKey:(id)key;	// 0x31a60c0d
- (id)mutableArrayValueForKeyPath:(id)keyPath;	// 0x31a60f01
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x31a1c95d
- (id)mutableOrderedSetValueForKeyPath:(id)keyPath;	// 0x31a61031
- (id)mutableSetValueForKey:(id)key;	// 0x31a60ce9
- (id)mutableSetValueForKeyPath:(id)keyPath;	// 0x31a61161
- (void)setNilValueForKey:(id)key;	// 0x31a614b1
- (void)setValue:(id)value forKey:(id)key;	// 0x31a08b81
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x319e2a09
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x31a613a1
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x31a006c1
- (BOOL)validateValue:(inout id *)value forKey:(id)key error:(out id *)error;	// 0x31a60b45
- (BOOL)validateValue:(inout id *)value forKeyPath:(id)keyPath error:(out id *)error;	// 0x31a60dc5
- (id)valueForKey:(id)key;	// 0x319e5491
- (id)valueForKeyPath:(id)keyPath;	// 0x319e28d9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x31a61291
@end

@interface NSObject (NSKeyValueCodingPrivate)
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a18171
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a18869
+ (id)_createOtherValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a1a925
+ (id)_createOtherValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a175c1
+ (id)_createValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x319fa4d1
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a1a745
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a173e1
+ (id)_createValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31a08c5d
@end

@interface NSObject (NSKeyValueObserverNotifying)
- (BOOL)_isKVOA;	// 0x31a68e89
@end

@interface NSObject (NSKeyValueObserving)
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31a69761
@end

@interface NSObject (NSKeyValueObserverRegistration)
- (void)_addObserver:(id)observer forProperty:(id)property options:(unsigned)options context:(void *)context;	// 0x31a01575
- (void)_removeObserver:(id)observer forProperty:(id)property;	// 0x31a2c2e5
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31a012d9
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x31a2c199
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x31a30c8d
@end

@interface NSObject (NSKeyValueObserverNotification)
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x31a315a9
- (void)didChangeValueForKey:(id)key;	// 0x319e24c5
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x31a30335
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x31a312c9
- (void)willChangeValueForKey:(id)key;	// 0x319e232d
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x31a2ffc9
@end

@interface NSObject (NSKeyValueObservingCustomization)
@property(assign) void *observationInfo;	// G=0x319e24a5; S=0x31a01a91; converted property
+ (id)_keysForValuesAffectingValueForKey:(id)key;	// 0x319ee1c5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a168cd
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x319ee0c5
// converted property getter: - (void *)observationInfo;	// 0x319e24a5
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31a01a91
@end

@interface NSObject (NSDeprecatedKeyValueObservingCustomization)
+ (void)setKeys:(id)keys triggerChangeNotificationsForDependentKey:(id)dependentKey;	// 0x31a6a0a5
@end

@interface NSObject (NSKeyValueObservingPrivate)
+ (BOOL)_shouldAddObservationForwardersForKey:(id)key;	// 0x31a2d875
- (void)_changeValueForKey:(id)key key:(id)key2 key:(id)key3 usingBlock:(id)block;	// 0x319efde5
- (void)_changeValueForKey:(id)key usingBlock:(id)block;	// 0x319efdc1
- (void)_didChangeValuesForKeys:(id)keys;	// 0x31a6a665
- (id)_implicitObservationInfo;	// 0x319e24c1
- (void)_notifyObserversForKeyPath:(id)keyPath change:(id)change;	// 0x31a6a195
- (void)_willChangeValuesForKeys:(id)keys;	// 0x31a6a54d
@end

@interface NSObject (NSKeyedArchiverObjectSubstitution)
+ (id)classFallbacksForKeyedArchiver;	// 0x319fc10d
- (Class)classForKeyedArchiver;	// 0x319fbf75
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x319fbd25
@end

@interface NSObject (NSKeyedUnarchiverObjectSubstitution)
+ (Class)classForKeyedUnarchiver;	// 0x319f43c9
@end

@interface NSObject (NSObject)
+ (BOOL)implementsSelector:(SEL)selector;	// 0x31a75771
+ (BOOL)instancesImplementSelector:(SEL)selector;	// 0x31a75705
+ (void)load;	// 0x31a00ad1
+ (void)setVersion:(int)version;	// 0x31a14281
+ (int)version;	// 0x31a75851
- (BOOL)_allowsDirectEncoding;	// 0x31a75701
- (id)awakeAfterUsingCoder:(id)coder;	// 0x319f5355
- (Class)classForCoder;	// 0x319fbf95
- (BOOL)implementsSelector:(SEL)selector;	// 0x31a757e1
- (id)replacementObjectForCoder:(id)coder;	// 0x319fbd65
@end

@interface NSObject (NSDiscardableContentProxy)
- (id)autoContentAccessingProxy;	// 0x31a758e9
@end

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target;	// 0x319fca51
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x319e3521
- (void)performSelector:(SEL)selector object:(id)object afterDelay:(double)delay;	// 0x31a810d1
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay;	// 0x319e1c8d
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;	// 0x319e1ce9
@end

@interface NSObject (NSThreadPerformAdditions)
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x31a0cdb1
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x319e3cd9
- (void)performSelectorInBackground:(SEL)background withObject:(id)object;	// 0x31a2f359
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x319e39f5
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x31a02bb9
@end

@interface NSObject (NSObjectPortCoding)
+ (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b335bd
- (Class)classForPortCoder;	// 0x31b33579
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b33589
@end

