/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString;

@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
	long long _albumArtistPersisentID;	// 4 = 0x4
	NSData *_groupingKey;	// 12 = 0xc
	NSString *_feedURL;	// 16 = 0x10
	int _seasonNumber;	// 20 = 0x14
	BOOL _compilation;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) long long albumArtistPersisentID;	// G=0x346d3299; @synthesize=_albumArtistPersisentID
@property(readonly, assign, nonatomic) BOOL compilation;	// G=0x346d32e9; @synthesize=_compilation
@property(readonly, assign, nonatomic) NSString *feedURL;	// G=0x346d32c5; @synthesize=_feedURL
@property(readonly, assign, nonatomic) NSData *groupingKey;	// G=0x346d32b1; @synthesize=_groupingKey
@property(readonly, assign, nonatomic) int seasonNumber;	// G=0x346d32d9; @synthesize=_seasonNumber
- (id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation inLibrary:(id)library;	// 0x346d2ebd
- (id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID groupingKey:(id)key feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation;	// 0x346d2f49
- (void).cxx_destruct;	// 0x346d32f9
// declared property getter: - (long long)albumArtistPersisentID;	// 0x346d3299
// declared property getter: - (BOOL)compilation;	// 0x346d32e9
- (id)copyWithZone:(NSZone *)zone;	// 0x346d3295
- (id)description;	// 0x346d301d
// declared property getter: - (id)feedURL;	// 0x346d32c5
// declared property getter: - (id)groupingKey;	// 0x346d32b1
- (unsigned)hash;	// 0x346d3209
- (BOOL)isEqual:(id)equal;	// 0x346d3101
// declared property getter: - (int)seasonNumber;	// 0x346d32d9
@end

