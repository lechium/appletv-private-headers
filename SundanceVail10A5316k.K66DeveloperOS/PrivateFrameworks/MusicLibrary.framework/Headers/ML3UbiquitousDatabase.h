/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3SqliteDatabase.h"
#import "MusicLibrary-Structs.h"
#import "ML3SqliteDatabaseSubclass.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ML3UbiquitousDatabase : ML3SqliteDatabase <ML3SqliteDatabaseSubclass> {
}
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x3463a255; S=0x3463a239; 
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x3463a1f1; S=0x3463a19d; 
+ (id)allSchemaSQL;	// 0x34639ca5
+ (int)currentUserVersion;	// 0x34639c99
+ (id)databasePath;	// 0x345e4b6d
+ (BOOL)migrateFromVersion:(int)version outUserVersion:(int *)version2 usingHandle:(sqlite3 *)handle;	// 0x34639d91
- (BOOL)_setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x34639f91
- (void)_updateUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x3463a271
- (id)_valueForDatabaseProperty:(id)databaseProperty;	// 0x34639d95
- (void)applyUbiqiutousBookmarkMetadataToTrack:(id)track;	// 0x3463ad91
- (void)insertUbiquitousBookmarkMetadataWithMetadataIdentifier:(id)metadataIdentifier propertyValues:(id)values timestamp:(double)timestamp;	// 0x3463a8d9
- (void)insertUbiquitousBookmarkMetadataWithValuesFromTrack:(id)track;	// 0x3463a939
- (void)removeUbiquitousBookmarkMetadataForTrack:(id)track;	// 0x3463ad31
- (void)resetUbiquitousMetadata;	// 0x3463b101
// declared property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x3463a239
// declared property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x3463a19d
// declared property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x3463a255
// declared property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x3463a1f1
@end

