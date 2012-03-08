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
@property(copy, nonatomic) NSArray *URLPatterns;	// G=0x36965745; S=0x36965755; @synthesize=_urlPatterns
@property(copy, nonatomic) NSArray *clientIdentifiers;	// G=0x36965669; S=0x36965679; @synthesize=_clientIdentifiers
@property(assign, nonatomic) unsigned diskCapacity;	// G=0x3696569d; S=0x369656ad; @synthesize=_diskCapacity
@property(copy, nonatomic) NSSet *fileExtensions;	// G=0x369656bd; S=0x369656cd; @synthesize=_fileExtensions
@property(assign, nonatomic) unsigned memoryCapacity;	// G=0x369656f1; S=0x36965701; @synthesize=_memoryCapacity
@property(copy, nonatomic) NSString *persistentIdentifier;	// G=0x36965711; S=0x36965721; @synthesize=_persistentIdentifier
- (id)initWithPropertyList:(id)propertyList;	// 0x36964dc5
// declared property getter: - (id)URLPatterns;	// 0x36965745
- (void)_setClientIdentifiersFromPropertyList:(id)propertyList;	// 0x36965165
- (void)_setFileExtensionsFromPropertyList:(id)propertyList;	// 0x369652f9
- (void)_setURLPatternsFromPropertyList:(id)propertyList;	// 0x3696548d
// declared property getter: - (id)clientIdentifiers;	// 0x36965669
- (id)copyWithZone:(NSZone *)zone;	// 0x36965071
- (void)dealloc;	// 0x36964fe9
// declared property getter: - (unsigned)diskCapacity;	// 0x3696569d
// declared property getter: - (id)fileExtensions;	// 0x369656bd
// declared property getter: - (unsigned)memoryCapacity;	// 0x369656f1
// declared property getter: - (id)persistentIdentifier;	// 0x36965711
// declared property setter: - (void)setClientIdentifiers:(id)identifiers;	// 0x36965679
// declared property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x369656ad
// declared property setter: - (void)setFileExtensions:(id)extensions;	// 0x369656cd
// declared property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x36965701
// declared property setter: - (void)setPersistentIdentifier:(id)identifier;	// 0x36965721
// declared property setter: - (void)setURLPatterns:(id)patterns;	// 0x36965755
@end

