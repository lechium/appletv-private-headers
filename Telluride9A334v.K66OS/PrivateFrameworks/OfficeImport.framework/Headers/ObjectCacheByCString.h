/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ObjectCacheByCString : NSObject {
@private
	CFDictionaryRef _dictionary;	// 4 = 0x4
}
- (id)init;	// 0x355a72bd
- (void)dealloc;	// 0x357b249d
- (id)getObjectForCStringKey:(char *)cstringKey;	// 0x354e8079
- (void)setObject:(id)object forCStringKey:(char *)cstringKey;	// 0x3558188d
@end
