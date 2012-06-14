/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : NSObject {
@private
	int _databaseVersion;	// 4 = 0x4
	NSDictionary *_fullMetadata;	// 8 = 0x8
	unsigned long long _primaryKeyGeneration;	// 12 = 0xc
	NSMutableDictionary *_mapData;	// 20 = 0x14
	NSDictionary *_storeOptions;	// 24 = 0x18
}
@property(assign) int databaseVersion;	// G=0x32d53b09; S=0x32d53b19; converted property
@property(retain) NSDictionary *fullMetadata;	// G=0x32d53b29; S=0x32d53b39; converted property
@property(retain) NSMutableDictionary *mapData;	// G=0x32d53ba9; S=0x32d53bb9; converted property
@property(assign) unsigned long long primaryKeyGeneration;	// G=0x32d53b7d; S=0x32d53b95; converted property
- (BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id *)error;	// 0x32d554d1
- (void)clearCurrentValues;	// 0x32d53bfd
// converted property getter: - (int)databaseVersion;	// 0x32d53b09
- (void)dealloc;	// 0x32d53a79
// converted property getter: - (id)fullMetadata;	// 0x32d53b29
// converted property getter: - (id)mapData;	// 0x32d53ba9
// converted property getter: - (unsigned long long)primaryKeyGeneration;	// 0x32d53b7d
- (BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id *)error;	// 0x32d53c59
- (BOOL)readFromFile:(id)file error:(id *)error;	// 0x32d542b1
- (BOOL)readMetadataFromFile:(id)file error:(id *)error;	// 0x32d54be5
// converted property setter: - (void)setDatabaseVersion:(int)version;	// 0x32d53b19
// converted property setter: - (void)setFullMetadata:(id)metadata;	// 0x32d53b39
// converted property setter: - (void)setMapData:(id)data;	// 0x32d53bb9
// converted property setter: - (void)setPrimaryKeyGeneration:(unsigned long long)generation;	// 0x32d53b95
- (BOOL)writeMetadataToFile:(id)file error:(id *)error;	// 0x32d544b1
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x32d559f1
@end

