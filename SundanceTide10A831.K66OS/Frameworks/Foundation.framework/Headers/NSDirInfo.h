/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableDictionary.h> // Unknown library


@interface NSDirInfo : NSMutableDictionary {
	NSMutableDictionary *dict;	// 4 = 0x4
}
- (id)init;	// 0x3260c199
- (id)initWithCapacity:(unsigned)capacity;	// 0x3260c321
- (id)initWithContentsOfFile:(id)file;	// 0x3260c2d5
- (id)initWithDictionary:(id)dictionary;	// 0x3260c289
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x3260c239
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x3260c1e1
- (unsigned)count;	// 0x3260c3b9
- (void)dealloc;	// 0x3260c36d
- (id)keyEnumerator;	// 0x3260c3f9
- (id)objectForKey:(id)key;	// 0x3260c3d9
- (void)removeObjectForKey:(id)key;	// 0x3260c439
- (id)serializeToData;	// 0x3260c45d
- (void)setObject:(id)object forKey:(id)key;	// 0x3260c419
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x3260c459
@end
