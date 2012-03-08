/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"

@class CFXPreferencesPropertyListSource;

__attribute__((visibility("hidden")))
@interface CFXPreferencesPropertyListSourceSynchronizer : NSObject {
@private
	unsigned short _mode;	// 4 = 0x4
	unsigned _owner;	// 8 = 0x8
	CFXPreferencesPropertyListSource *_source;	// 12 = 0xc
	CFDictionaryRef _dict;	// 16 = 0x10
	CFArrayRef _dirtyKeys;	// 20 = 0x14
	CFDictionaryRef _pendingMutations;	// 24 = 0x18
	CFURLRef _url;	// 28 = 0x1c
	long _formatToWrite;	// 32 = 0x20
	CFXPreferencesStatInfo _statInfo;	// 36 = 0x24
	unsigned _group;	// 60 = 0x3c
	long _generationCount;	// 64 = 0x40
}
- (id)initWithPropertyListSource:(id)propertyListSource forLockedSynchronize:(BOOL)lockedSynchronize;	// 0x30cfe259
- (unsigned char)_backingPlistChangedSinceLastSync;	// 0x30cfe6d1
- (void *)createPlistFromDisk;	// 0x30d0e071
- (void)dealloc;	// 0x30cfead9
- (void)finalize;	// 0x30d859e9
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x30d85975
- (unsigned char)synchronize;	// 0x30cfe429
- (unsigned char)synchronizeAlreadyFlocked;	// 0x30cfe441
- (unsigned char)writePlistToDisk;	// 0x30d01e2d
@end

