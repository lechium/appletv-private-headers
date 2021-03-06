/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <Foundation/NSCoder.h>


@interface NSCoder (XPCSafeDecoding)
- (id)_safeDecodeContainerForKey:(id)key containerClass:(Class)aClass valueClass:(Class)aClass3;	// 0x33a973a5
- (id)safeDecodeArrayForKey:(id)key valueClass:(Class)aClass;	// 0x33a97479
- (id)safeDecodeDateForKey:(id)key;	// 0x33a97325
- (id)safeDecodeDictionaryForKey:(id)key keyClass:(Class)aClass valueClass:(Class)aClass3;	// 0x33a97501
- (id)safeDecodeNumberForKey:(id)key;	// 0x33a97365
- (id)safeDecodeObjectForKey:(id)key expectedClass:(Class)aClass;	// 0x33a972ad
- (id)safeDecodeSetForKey:(id)key valueClass:(Class)aClass;	// 0x33a974bd
- (id)safeDecodeStringForKey:(id)key;	// 0x33a972e5
@end

