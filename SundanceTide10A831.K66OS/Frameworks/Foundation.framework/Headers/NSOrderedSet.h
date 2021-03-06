/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSOrderedSet.h> // Unknown library


@interface NSOrderedSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x325833e5
- (id)_countForKeyPath:(id)keyPath;	// 0x32583455
- (id)_maxForKeyPath:(id)keyPath;	// 0x3258348d
- (id)_minForKeyPath:(id)keyPath;	// 0x3258350d
- (id)_sumForKeyPath:(id)keyPath;	// 0x32583301
- (void)setValue:(id)value forKey:(id)key;	// 0x3258386d
- (id)valueForKey:(id)key;	// 0x3258358d
- (id)valueForKeyPath:(id)keyPath;	// 0x3258392d
@end

@interface NSOrderedSet (NSKeyValueCodingPrivate)
- (id)_mutableArrayValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32584a29
- (id)_mutableOrderedSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32584a59
- (id)_mutableSetValueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32584a89
- (void)_setValue:(id)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x32584ab9
- (BOOL)_validateValue:(inout id *)value forKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index error:(out id *)error;	// 0x32584aed
- (id)_valueForKeyPath:(id)keyPath ofObjectAtIndex:(unsigned)index;	// 0x325849f9
@end

@interface NSOrderedSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3258b479
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x3258b519
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x3258b4c9
@end

@interface NSOrderedSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x325a81d9
@end

@interface NSOrderedSet (NSPredicateSupport)
- (id)filteredOrderedSetUsingPredicate:(id)predicate;	// 0x325e350d
@end

