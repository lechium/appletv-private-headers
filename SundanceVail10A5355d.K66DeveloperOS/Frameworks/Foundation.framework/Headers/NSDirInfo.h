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
- (id)init;	// 0x3473f4c1
- (id)initWithCapacity:(unsigned)capacity;	// 0x3473f649
- (id)initWithContentsOfFile:(id)file;	// 0x3473f5fd
- (id)initWithDictionary:(id)dictionary;	// 0x3473f5b1
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x3473f561
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x3473f509
- (unsigned)count;	// 0x3473f6e1
- (void)dealloc;	// 0x3473f695
- (id)keyEnumerator;	// 0x3473f721
- (id)objectForKey:(id)key;	// 0x3473f701
- (void)removeObjectForKey:(id)key;	// 0x3473f761
- (id)serializeToData;	// 0x3473f785
- (void)setObject:(id)object forKey:(id)key;	// 0x3473f741
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x3473f781
@end

