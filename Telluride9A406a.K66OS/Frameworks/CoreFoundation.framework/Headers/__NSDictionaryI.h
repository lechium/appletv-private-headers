/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x340dac2d
+ (id)allocWithZone:(NSZone *)zone;	// 0x340dac8d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340dac89
- (id)copyWithZone:(NSZone *)zone;	// 0x340dac1d
- (unsigned)count;	// 0x340dab29
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x340dab41
- (void)dealloc;	// 0x340dac31
- (void)finalize;	// 0x340dac5d
- (id)keyEnumerator;	// 0x340dab3d
- (id)objectForKey:(id)key;	// 0x340dab39
@end

