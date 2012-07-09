/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary {
@private
	unsigned _used : 26;	// 4 = 0x4
@protected
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3 :(BOOL)arg4 :(BOOL)arg5;	// 0x36a2f7b9
+ (id)allocWithZone:(NSZone *)zone;	// 0x36a2fa79
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36a2fa75
- (id)copyWithZone:(NSZone *)zone;	// 0x36a2f7a9
- (unsigned)count;	// 0x36a2f48d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36a2f6a1
- (void)dealloc;	// 0x36a2f941
- (void)finalize;	// 0x36a2f9f5
- (void)getObjects:(id *)objects andKeys:(id *)keys count:(unsigned)count;	// 0x36a2f59d
- (id)keyEnumerator;	// 0x36a2f551
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36a2fa95
- (id)objectForKey:(id)key;	// 0x36a2f4a1
@end
