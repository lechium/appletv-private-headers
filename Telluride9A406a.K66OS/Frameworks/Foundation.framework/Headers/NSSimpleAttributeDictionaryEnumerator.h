/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library

@class NSSimpleAttributeDictionary;

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
@private
	NSSimpleAttributeDictionary *dictionary;	// 4 = 0x4
	unsigned nextElement;	// 8 = 0x8
}
- (id)initWithAttributeDictionary:(id)attributeDictionary;	// 0x35eb6a1d
- (void)dealloc;	// 0x35eb6ae9
- (void)finalize;	// 0x35eb6b35
- (id)nextObject;	// 0x35eb6a81
@end

