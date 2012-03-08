/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface BRCappedFileCache : NSObject {
@private
	unsigned long long _maxSize;	// 4 = 0x4
	unsigned long long _currentSize;	// 12 = 0xc
	unsigned long long _purgeThreshold;	// 20 = 0x14
	unsigned long _purgeCount;	// 28 = 0x1c
	NSString *_cachePath;	// 32 = 0x20
	BOOL _purgingCache;	// 36 = 0x24
	NSMutableDictionary *_files;	// 40 = 0x28
}
@property(readonly, assign) unsigned long long currentSize;	// G=0x30359cb9; converted property
@property(readonly, assign) unsigned long long maxSize;	// G=0x30359cd1; converted property
@property(assign) unsigned long purgeCount;	// G=0x30359d51; S=0x30359d61; converted property
@property(assign) unsigned long long purgeThreshold;	// G=0x30359ce9; S=0x30359d01; converted property
- (id)initForPath:(id)path withMaxSize:(unsigned long long)maxSize;	// 0x30359a5d
- (void)_clearCacheFolder;	// 0x3035a6b9
- (id)_generateCacheFilePathForKey:(id)key extension:(id)extension;	// 0x3035a4f9
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x3035a5c9
- (void)_maintainCacheSize:(id)size;	// 0x3035a745
- (void)_terminateNotification:(id)notification;	// 0x3035aa5d
- (id)addFileForKey:(id)key size:(unsigned long long)size extension:(id)extension;	// 0x30359f81
// converted property getter: - (unsigned long long)currentSize;	// 0x30359cb9
- (void)dealloc;	// 0x30359c19
- (id)filePathForKey:(id)key;	// 0x30359d71
// converted property getter: - (unsigned long long)maxSize;	// 0x30359cd1
// converted property getter: - (unsigned long)purgeCount;	// 0x30359d51
// converted property getter: - (unsigned long long)purgeThreshold;	// 0x30359ce9
- (void)removedFileWithKey:(id)key;	// 0x3035a2c5
// converted property setter: - (void)setPurgeCount:(unsigned long)count;	// 0x30359d61
// converted property setter: - (void)setPurgeThreshold:(unsigned long long)threshold;	// 0x30359d01
@end

