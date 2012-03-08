/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSArray, NSString, NSSet;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
@private
	NSArray *_clientIdentifiers;	// 4 = 0x4
	unsigned _diskCapacity;	// 8 = 0x8
	NSSet *_fileExtensions;	// 12 = 0xc
	unsigned _memoryCapacity;	// 16 = 0x10
	NSString *_persistentIdentifier;	// 20 = 0x14
	NSArray *_urlPatterns;	// 24 = 0x18
}
@property(copy, nonatomic) NSArray *URLPatterns;	// G=0x341e3ad5; S=0x341e3ae5; @synthesize=_urlPatterns
@property(copy, nonatomic) NSArray *clientIdentifiers;	// G=0x341e39f9; S=0x341e3a09; @synthesize=_clientIdentifiers
@property(assign, nonatomic) unsigned diskCapacity;	// G=0x341e3a2d; S=0x341e3a3d; @synthesize=_diskCapacity
@property(copy, nonatomic) NSSet *fileExtensions;	// G=0x341e3a4d; S=0x341e3a5d; @synthesize=_fileExtensions
@property(assign, nonatomic) unsigned memoryCapacity;	// G=0x341e3a81; S=0x341e3a91; @synthesize=_memoryCapacity
@property(copy, nonatomic) NSString *persistentIdentifier;	// G=0x341e3aa1; S=0x341e3ab1; @synthesize=_persistentIdentifier
- (id)initWithPropertyList:(id)propertyList;	// 0x341e3155
// declared property getter: - (id)URLPatterns;	// 0x341e3ad5
- (void)_setClientIdentifiersFromPropertyList:(id)propertyList;	// 0x341e34f5
- (void)_setFileExtensionsFromPropertyList:(id)propertyList;	// 0x341e3689
- (void)_setURLPatternsFromPropertyList:(id)propertyList;	// 0x341e381d
// declared property getter: - (id)clientIdentifiers;	// 0x341e39f9
- (id)copyWithZone:(NSZone *)zone;	// 0x341e3401
- (void)dealloc;	// 0x341e3379
// declared property getter: - (unsigned)diskCapacity;	// 0x341e3a2d
// declared property getter: - (id)fileExtensions;	// 0x341e3a4d
// declared property getter: - (unsigned)memoryCapacity;	// 0x341e3a81
// declared property getter: - (id)persistentIdentifier;	// 0x341e3aa1
// declared property setter: - (void)setClientIdentifiers:(id)identifiers;	// 0x341e3a09
// declared property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x341e3a3d
// declared property setter: - (void)setFileExtensions:(id)extensions;	// 0x341e3a5d
// declared property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x341e3a91
// declared property setter: - (void)setPersistentIdentifier:(id)identifier;	// 0x341e3ab1
// declared property setter: - (void)setURLPatterns:(id)patterns;	// 0x341e3ae5
@end

