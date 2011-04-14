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
}
@property(assign) int databaseVersion;	// G=0x33126289; S=0x33126299; converted property
@property(retain) NSDictionary *fullMetadata;	// G=0x331262a9; S=0x331264cd; converted property
@property(retain) NSMutableDictionary *mapData;	// G=0x331262dd; S=0x3312648d; converted property
@property(assign) unsigned long long primaryKeyGeneration;	// G=0x331262b9; S=0x331262c9; converted property
- (BOOL)_writeMetadataData:(id)data andMapDataData:(id)data2 toFile:(id)file error:(id *)error;	// 0x331277b1
- (void)clearCurrentValues;	// 0x3312643d
// converted property getter: - (int)databaseVersion;	// 0x33126289
- (void)dealloc;	// 0x3312650d
// converted property getter: - (id)fullMetadata;	// 0x331262a9
// converted property getter: - (id)mapData;	// 0x331262dd
// converted property getter: - (unsigned long long)primaryKeyGeneration;	// 0x331262b9
- (BOOL)readBinaryStoreFromData:(id)data originalPath:(id)path error:(id *)error;	// 0x33127355
- (BOOL)readFromFile:(id)file error:(id *)error;	// 0x33127185
- (BOOL)readMetadataFromFile:(id)file error:(id *)error;	// 0x33126631
// converted property setter: - (void)setDatabaseVersion:(int)version;	// 0x33126299
// converted property setter: - (void)setFullMetadata:(id)metadata;	// 0x331264cd
// converted property setter: - (void)setMapData:(id)data;	// 0x3312648d
// converted property setter: - (void)setPrimaryKeyGeneration:(unsigned long long)generation;	// 0x331262c9
- (BOOL)writeMetadataToFile:(id)file error:(id *)error;	// 0x33126cad
- (BOOL)writeToFile:(id)file error:(id *)error;	// 0x331262ed
@end

