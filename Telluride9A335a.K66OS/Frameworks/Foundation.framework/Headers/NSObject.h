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
- (Class)classForArchiver;	// 0x3201d21d
- (id)replacementObjectForArchiver:(id)archiver;	// 0x3202ea51
@end

@interface NSObject (NSKeyValueCoding)
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x32038841
+ (BOOL)accessInstanceVariablesDirectly;	// 0x320383ed
- (id)dictionaryWithValuesForKeys:(id)keys;	// 0x3207dd51
- (id)mutableArrayValueForKey:(id)key;	// 0x3207d415
- (id)mutableArrayValueForKeyPath:(id)keyPath;	// 0x3207d72d
- (id)mutableOrderedSetValueForKey:(id)key;	// 0x3203d921
- (id)mutableOrderedSetValueForKeyPath:(id)keyPath;	// 0x3207d869
- (id)mutableSetValueForKey:(id)key;	// 0x3207d4fd
- (id)mutableSetValueForKeyPath:(id)keyPath;	// 0x3207d9a5
- (void)setNilValueForKey:(id)key;	// 0x3207dd01
- (void)setValue:(id)value forKey:(id)key;	// 0x32029d4d
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32003e95
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x3207dbf1
- (void)setValuesForKeysWithDictionary:(id)dictionary;	// 0x3202177d
- (BOOL)validateValue:(inout id *)value forKey:(id)key error:(out id *)error;	// 0x3207d375
- (BOOL)validateValue:(inout id *)value forKeyPath:(id)keyPath error:(out id *)error;	// 0x3207d5e5
- (id)valueForKey:(id)key;	// 0x32006825
- (id)valueForKeyPath:(id)keyPath;	// 0x32003d59
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3207dae1
@end

@interface NSObject (NSKeyValueCodingPrivate)
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x32039191
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x320398b9
+ (id)_createOtherValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3203b979
+ (id)_createOtherValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x320385fd
+ (id)_createValueGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3201b711
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x3203b7c1
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x32038445
+ (id)_createValueSetterWithContainerClassID:(id)containerClassID key:(id)key;	// 0x32029e3d
@end

@interface NSObject (NSKeyValueObserverNotifying)
- (BOOL)_isKVOA;	// 0x32085469
@end

@interface NSObject (NSKeyValueObserving)
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32085d21
@end

@interface NSObject (NSKeyValueObserverRegistration)
- (void)_addObserver:(id)observer forProperty:(id)property options:(unsigned)options context:(void *)context;	// 0x32022645
- (void)_removeObserver:(id)observer forProperty:(id)property;	// 0x3204d345
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x32022389
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x3204d1ed
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x32051cdd
@end

@interface NSObject (NSKeyValueObserverNotification)
- (void)didChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x320525dd
- (void)didChangeValueForKey:(id)key;	// 0x32003949
- (void)didChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x3205138d
- (void)willChange:(unsigned)change valuesAtIndexes:(id)indexes forKey:(id)key;	// 0x320522fd
- (void)willChangeValueForKey:(id)key;	// 0x320037a9
- (void)willChangeValueForKey:(id)key withSetMutation:(unsigned)setMutation usingObjects:(id)objects;	// 0x32050f99
@end

@interface NSObject (NSKeyValueObservingCustomization)
@property(assign) void *observationInfo;	// G=0x32003925; S=0x32022b75; converted property
+ (id)_keysForValuesAffectingValueForKey:(id)key;	// 0x3200f0b5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32037981
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3200efdd
// converted property getter: - (void *)observationInfo;	// 0x32003925
// converted property setter: - (void)setObservationInfo:(void *)info;	// 0x32022b75
@end

@interface NSObject (NSDeprecatedKeyValueObservingCustomization)
+ (void)setKeys:(id)keys triggerChangeNotificationsForDependentKey:(id)dependentKey;	// 0x32086665
@end

@interface NSObject (NSKeyValueObservingPrivate)
+ (BOOL)_shouldAddObservationForwardersForKey:(id)key;	// 0x3204e925
- (void)_changeValueForKey:(id)key key:(id)key2 key:(id)key3 usingBlock:(id)block;	// 0x32010ba1
- (void)_changeValueForKey:(id)key usingBlock:(id)block;	// 0x32010b7d
- (void)_didChangeValuesForKeys:(id)keys;	// 0x32086e11
- (id)_implicitObservationInfo;	// 0x32003945
- (void)_notifyObserversForKeyPath:(id)keyPath change:(id)change;	// 0x32086755
- (void)_willChangeValuesForKeys:(id)keys;	// 0x32086b11
@end

@interface NSObject (NSKeyedArchiverObjectSubstitution)
+ (id)classFallbacksForKeyedArchiver;	// 0x3201d399
- (Class)classForKeyedArchiver;	// 0x3201d20d
- (id)replacementObjectForKeyedArchiver:(id)keyedArchiver;	// 0x3201cfad
@end

@interface NSObject (NSKeyedUnarchiverObjectSubstitution)
+ (Class)classForKeyedUnarchiver;	// 0x32015119
@end

@interface NSObject (NSObject)
+ (BOOL)implementsSelector:(SEL)selector;	// 0x32091825
+ (void)initialize;	// 0x32007a0d
+ (BOOL)instancesImplementSelector:(SEL)selector;	// 0x320917b9
+ (void)load;	// 0x32021ba9
+ (void)setVersion:(int)version;	// 0x320356a9
+ (int)version;	// 0x32091905
- (BOOL)allowsWeakReference;	// 0x32034a91
- (id)awakeAfterUsingCoder:(id)coder;	// 0x32015ced
- (Class)classForCoder;	// 0x3201d22d
- (BOOL)implementsSelector:(SEL)selector;	// 0x32091895
- (id)replacementObjectForCoder:(id)coder;	// 0x3201cfe1
- (BOOL)retainWeakReference;	// 0x32040619
@end

@interface NSObject (NSDiscardableContentProxy)
- (id)autoContentAccessingProxy;	// 0x32091999
@end

@interface NSObject (NSDelayedPerforming)
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target;	// 0x3201dccd
+ (void)cancelPreviousPerformRequestsWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3200493d
- (void)performSelector:(SEL)selector object:(id)object afterDelay:(double)delay;	// 0x3209c755
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay;	// 0x320031a9
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;	// 0x32003205
@end

@interface NSObject (NSThreadPerformAdditions)
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x3202df49
- (void)performSelector:(SEL)selector onThread:(id)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x320050ad
- (void)performSelectorInBackground:(SEL)background withObject:(id)object;	// 0x32050399
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done;	// 0x32004dc1
- (void)performSelectorOnMainThread:(SEL)thread withObject:(id)object waitUntilDone:(BOOL)done modes:(id)modes;	// 0x32023ca9
@end

