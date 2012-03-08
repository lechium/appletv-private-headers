/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject {
@private
	id key;	// 4 = 0x4
	id value;	// 8 = 0x8
	unsigned hash;	// 12 = 0xc
}
@property(readonly, assign) unsigned hash;	// G=0x35e8ab8d; converted property
@property(retain) id key;	// G=0x35e8ab15; S=0x35e8aa8d; converted property
@property(retain) id value;	// G=0x35e8ab25; S=0x35e8aad1; converted property
+ (id)pair;	// 0x35e8a905
+ (id)pairWithKey:(id)key value:(id)value;	// 0x35e8a94d
- (id)initWithKey:(id)key value:(id)value;	// 0x35e8a999
- (void)dealloc;	// 0x35e8aa2d
- (id)description;	// 0x35e8ab35
// converted property getter: - (unsigned)hash;	// 0x35e8ab8d
- (BOOL)isEqual:(id)equal;	// 0x35e8ab9d
// converted property getter: - (id)key;	// 0x35e8ab15
// converted property setter: - (void)setKey:(id)key;	// 0x35e8aa8d
// converted property setter: - (void)setValue:(id)value;	// 0x35e8aad1
// converted property getter: - (id)value;	// 0x35e8ab25
@end

