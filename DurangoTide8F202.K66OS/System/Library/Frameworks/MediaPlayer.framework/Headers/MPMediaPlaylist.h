/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItemCollection.h"

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31db1c65; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x31db1c81; 
@property(readonly, assign, nonatomic) int playlistAttributes;	// G=0x31db1c39; 
+ (void)_createFilterableDictionary;	// 0x31db20cd
+ (BOOL)_isValidPlaylistProperty:(id)property;	// 0x31db22c9
+ (BOOL)canFilterByProperty:(id)property;	// 0x31db2049
- (id)initWithCoder:(id)coder;	// 0x31db1ec5
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x31db1f69
- (unsigned)count;	// 0x31db1b41
- (void)encodeWithCoder:(id)coder;	// 0x31db1e4d
- (BOOL)existsInLibrary;	// 0x31db1cad
- (id)geniusMixArtworkForSize:(CGSize)size;	// 0x31db1d29
- (unsigned)hash;	// 0x31db1f51
- (BOOL)isEqual:(id)equal;	// 0x31db1fb9
- (id)items;	// 0x31db1bbd
- (int)mediaTypes;	// 0x31db1ac5
// declared property getter: - (id)name;	// 0x31db1c65
// declared property getter: - (unsigned long long)persistentID;	// 0x31db1c81
// declared property getter: - (int)playlistAttributes;	// 0x31db1c39
- (id)representativeItem;	// 0x31db1a49
- (id)valueForProperty:(id)property;	// 0x31db1dad
@end

