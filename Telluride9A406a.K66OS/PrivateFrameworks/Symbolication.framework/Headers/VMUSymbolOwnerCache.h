/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMUSymbolOwnerCache : NSObject {
}
+ (void)addSymbolOwner:(id)owner;	// 0x32caf3c1
+ (void)flush;	// 0x32caee45
+ (void)initialize;	// 0x32caeca5
+ (unsigned)memoryLimit;	// 0x32caee11
+ (void)removeSignature:(id)signature;	// 0x32caf1f5
+ (void)setMemoryLimit:(unsigned)limit;	// 0x32caed51
+ (void)shrinkCacheToSize:(unsigned long long)size;	// 0x32caef49
+ (id)symbolOwnerForSignature:(id)signature;	// 0x32caf6e9
+ (id)symbolOwners;	// 0x32caf0cd
@end

