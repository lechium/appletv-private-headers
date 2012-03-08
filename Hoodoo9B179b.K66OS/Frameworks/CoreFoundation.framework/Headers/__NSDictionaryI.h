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
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x30d92bfd
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d92c5d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d92c59
- (id)copyWithZone:(NSZone *)zone;	// 0x30d92bed
- (unsigned)count;	// 0x30d92af9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30d92b11
- (void)dealloc;	// 0x30d92c01
- (void)finalize;	// 0x30d92c2d
- (id)keyEnumerator;	// 0x30d92b0d
- (id)objectForKey:(id)key;	// 0x30d92b09
@end

