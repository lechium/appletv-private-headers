/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexSet, NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyValueObservingRegistry : XXUnknownSuperclass {
	NSIndexSet *_indexesToRemove;	// 4 = 0x4
	NSArray *_observationEntries;	// 8 = 0x8
}
@property(retain) NSArray *observationEntries;	// G=0x3a11c5; S=0x3a11d9; @synthesize=_observationEntries
- (id)init;	// 0x3a0bd1
- (void)_addObservationEntry:(id)entry options:(unsigned)options;	// 0x3a11e9
- (void)_removeObservationEntriesAtIndexes:(id)indexes inDealloc:(BOOL)dealloc;	// 0x3a1275
- (void)dealloc;	// 0x3a0c5d
// declared property getter: - (id)observationEntries;	// 0x3a11c5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3a1109
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath handler:(id)handler;	// 0x3a0cf5
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath options:(unsigned)options handler:(id)handler;	// 0x3a0d25
// declared property setter: - (void)setObservationEntries:(id)entries;	// 0x3a11d9
- (void)unregisterAll;	// 0x3a10a9
- (void)unregisterObserver:(id)observer;	// 0x3a0e51
- (void)unregisterObserversOfObject:(id)object;	// 0x3a0ef9
- (void)unregisterObserversOfObject:(id)object forKeyPath:(id)keyPath;	// 0x3a0fa1
@end

