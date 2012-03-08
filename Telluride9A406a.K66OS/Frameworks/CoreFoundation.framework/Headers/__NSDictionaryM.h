/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x340dada5
+ (id)allocWithZone:(NSZone *)zone;	// 0x340dae05
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340dae01
- (unsigned)count;	// 0x340daca9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x340dacc1
- (void)dealloc;	// 0x340dada9
- (void)finalize;	// 0x340dadd5
- (id)keyEnumerator;	// 0x340dacbd
- (id)objectForKey:(id)key;	// 0x340dacb9
- (void)removeObjectForKey:(id)key;	// 0x340dada1
- (void)setObject:(id)object forKey:(id)key;	// 0x340dad9d
@end

