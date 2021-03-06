/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "CFXPreferencesSource.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesPropertyListSource : CFXPreferencesSource {
@private
	CFArrayRef _dirtyKeys;	// 16 = 0x10
	CFURLRef _url;	// 20 = 0x14
	int _formatToWrite;	// 24 = 0x18
	CFXPreferencesStatInfo _statInfo;	// 28 = 0x1c
	unsigned short _mode;	// 52 = 0x34
	unsigned _owner;	// 56 = 0x38
	unsigned _group;	// 60 = 0x3c
	BOOL _checkedOnce;	// 64 = 0x40
}
- (id)init;	// 0x32e3b999
- (unsigned char)_backingPlistChangedSinceLastSync;	// 0x32e29d21
- (void)_reenableSuddenTermination;	// 0x32e2a199
- (CFDictionaryRef)copyDictionary;	// 0x32e5bd61
- (CFArrayRef)copyKeyList;	// 0x32e3ee19
- (void *)createPlistFromDisk;	// 0x32e3bb79
- (void)dealloc;	// 0x32ea0841
- (void)finalize;	// 0x32ea07d5
- (void *)getValueForKey:(CFStringRef)key;	// 0x32e19b59
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x32e297ad
- (unsigned char)synchronize;	// 0x32e299e1
- (unsigned char)writePlistToDisk;	// 0x32e3426d
@end

