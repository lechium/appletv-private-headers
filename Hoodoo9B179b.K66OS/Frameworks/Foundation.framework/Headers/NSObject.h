/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


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

@interface NSObject (NSArchiverCallBack)
- (Class)classForArchiver;	// 0x3101d20d
- (id)replacementObjectForArchiver:(id)archiver;	// 0x3102ea41
@end

@interface NSObject (NSKeyValueCoding)
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31038831
+ (BOOL)accessInstanceVariablesDirectly;	// 0x310383dd
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x3107dd41
- (id)mutableArrayValueForKey:(id)key;	// 0x3107d405
- (id)mutableArrayValueForKeyPath:(id)keyPath;	// 0x3107d71d
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x3103d911
- (id)mutableOrderedSetValueForKeyPath:(id)keyPath;	// 0x3107d859
- (id)mutableSetValueForKey:(id)key;	// 0x3107d4ed
- (id)mutableSetValueForKeyPath:(id)keyPath;	// 0x3107d995
- (void)setNilValueForKey:(id)key;	// 0x3107dcf1
- (void)setValue:(id)value forKey:(id)key;	// 0x31029d3d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x31003e85
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x3107dbe1
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x3102176d
- (BOOL)validateValue:(inout id *)value forKey:(id)key error:(out id *)error;	// 0x3107d365
- (BOOL)validateValue:(inout id *)value forKeyPath:(id)keyPath error:(out id *)error;	// 0x3107d5d5
- (id)valueForKey:(id)key;	// 0x31006815
- (id)valueForKeyPath:(id)keyPath;	// 0x31003d49
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3107dad1
@end

@interface NSObject (NSKeyValueCodingPrivate)
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31039181
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x310398a9
+ (id)_createOtherValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3103b969
+ (id)_createOtherValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x310385ed
+ (id)_createValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3101b701
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3103b7b1
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31038435
+ (id)_createValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x31029e2d
@end

@interface NSObject (NSKeyValueObserverNotifying)
- (BOOL)_isKVOA;	// 0x31085459
@end

@interface NSObject (NSKeyValueObserving)
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31085d11
@end

@interface NSObject (NSKeyValueObserverRegistration)
- (void)_addObserver:(id)observer forProperty:(id)property options:(unsigned)options context:(void *)context;	// 0x31022635
- (void)_removeObserver:(id)observer forProperty:(id)property;	// 0x3104d335
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31022379
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x3104d1dd
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x31051ccd
@end

@interface NSObject (NSKeyValueObserverNotification)
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x310525cd
- (void)didChangeValueForKey:(id)key;	// 0x31003939
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x3105137d
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x310522ed
- (void)willChangeValueForKey:(id)key;	// 0x31003799
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x31050f89
@end

@interface NSObject (NSKeyValueObservingCustomization)
@property(assign) void *observationInfo;	// G=0x31003915; S=0x31022b65; converted property
+ (id)_keysForValuesAffectingValueForKey:(id)key;	// 0x3100f0a5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31037971
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3100efcd
// converted property getter: - (void *)observationInfo;	// 0x31003915
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x31022b65
@end

@interface NSObject (NSDeprecatedKeyValueObservingCustomization)
+ (void)setKeys:(id)keys triggerChangeNotificationsForDependentKey:(id)dependentKey;	// 0x31086655
@end

@interface NSObject (NSKeyValueObservingPrivate)
+ (BOOL)_shouldAddObservationForwardersForKey:(id)key;	// 0x3104e915
- (void)_changeValueForKey:(id)key key:(id)key2 key:(id)key3 usingBlock:(id)block;	// 0x31010b91
- (void)_changeValueForKey:(id)key usingBlock:(id)block;	// 0x31010b6d
- (void)_didChangeValuesForKeys:(id)keys;	// 0x31086e01
- (id)_implicitObservationInfo;	// 0x31003935
- (void)_notifyObserversForKeyPath:(id)keyPath change:(id)change;	// 0x31086745
- (void)_willChangeValuesForKeys:(id)keys;	// 0x31086b01
@end

@interface NSObject (NSKeyedArchiverObjectSubstitution)
+ (id)classFallbacksForKeyedArchiver;	// 0x3101d389
- (Class)classForKeyedArchiver;	// 0x3101d1fd
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x3101cf9d
@end

@interface NSObject (NSKeyedUnarchiverObjectSubstitution)
+ (Class)classForKeyedUnarchiver;	// 0x31015109
@end

@interface NSObject (NSObject)
+ (BOOL)implementsSelector:(SEL)selector;	// 0x31091815
+ (void)initialize;	// 0x310079fd
+ (BOOL)instancesImplementSelector:(SEL)selector;	// 0x310917a9
+ (void)load;	// 0x31021b99
+ (void)setVersion:(int)version;	// 0x31035699
+ (int)version;	// 0x310918f5
- (BOOL)allowsWeakReference;	// 0x31034a81
- (id)awakeAfterUsingCoder:(id)coder;	// 0x31015cdd
- (Class)classForCoder;	// 0x3101d21d
- (BOOL)implementsSelector:(SEL)selector;	// 0x31091885
- (id)replacementObjectForCoder:(id)coder;	// 0x3101cfd1
- (BOOL)retainWeakReference;	// 0x31040609
@end

@interface NSObject (NSDiscardableContentProxy)
- (id)autoContentAccessingProxy;	// 0x31091989
@end

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target;	// 0x3101dcbd
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3100492d
- (void)performSelector:(SEL)selector object:(id)object afterDelay:(double)delay;	// 0x3109c745
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay;	// 0x31003199
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;	// 0x310031f5
@end

@interface NSObject (NSThreadPerformAdditions)
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x3102df39
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x3100509d
- (void)performSelectorInBackground:(SEL)background withObject:(id)object;	// 0x31050389
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x31004db1
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x31023c99
@end

