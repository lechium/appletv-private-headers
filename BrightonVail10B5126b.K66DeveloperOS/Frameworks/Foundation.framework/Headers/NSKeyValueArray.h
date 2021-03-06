/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSArray.h> // Unknown library
#import "NSKeyValueProxyCaching.h"

@class NSObject, NSKeyValueNonmutatingArrayMethodSet, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching> {
	NSObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSKeyValueNonmutatingArrayMethodSet *_methods;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x3192d049
+ (id)_proxyShare;	// 0x3192d059
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x3192d089
- (XXStruct_OzJQfB)_proxyLocator;	// 0x3192d135
- (void)_proxyNonGCFinalize;	// 0x3192d159
- (unsigned)count;	// 0x3192d1fd
- (void)dealloc;	// 0x3192d1c5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3192d22d
- (id)objectAtIndex:(unsigned)index;	// 0x3192d2a5
- (id)objectsAtIndexes:(id)indexes;	// 0x3192d369
@end

