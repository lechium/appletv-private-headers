/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableDictionary.h> // Unknown library


@interface NSMutableDictionary (NSMutableDictionary)
- (id)initWithContentsOfFile:(id)file;	// 0x319159ed
- (id)initWithContentsOfURL:(id)url;	// 0x31915a29
- (Class)classForCoder;	// 0x318f586d
@end

@interface NSMutableDictionary (NSKeyValueCoding)
- (void)setValue:(id)value forKey:(id)key;	// 0x318c18bd
@end

@interface NSMutableDictionary (NSURLExtras)
- (void)_web_setBool:(BOOL)aBool forKey:(id)key;	// 0x3196b3d5
- (void)_web_setInt:(int)int forKey:(id)key;	// 0x3196b36d
- (void)_web_setObject:(id)object forUncopiedKey:(id)uncopiedKey;	// 0x3196b43d
@end
