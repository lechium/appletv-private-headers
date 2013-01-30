/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x36f046dd; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x36f046a9; 
@property(readonly, assign, nonatomic) int playlistAttributes;	// G=0x36f046f9; 
+ (void)_createFilterableDictionary;	// 0x36f0472d
+ (BOOL)_isValidPlaylistProperty:(id)property;	// 0x36f04921
+ (BOOL)canFilterByProperty:(id)property;	// 0x36f043f1
- (id)initWithCoder:(id)coder;	// 0x36f042e5
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x36f041d9
- (unsigned)count;	// 0x36f049e1
- (void)encodeWithCoder:(id)coder;	// 0x36f04375
- (BOOL)existsInLibrary;	// 0x36f0462d
- (unsigned)hash;	// 0x36f04235
- (BOOL)isEqual:(id)equal;	// 0x36f0424d
- (id)items;	// 0x36f04965
- (id)loadGeniusMixArtworkWithTileLength:(float)tileLength completionBlock:(id)block;	// 0x36f04525
- (int)mediaTypes;	// 0x36f04a5d
// declared property getter: - (id)name;	// 0x36f046dd
// declared property getter: - (unsigned long long)persistentID;	// 0x36f046a9
// declared property getter: - (int)playlistAttributes;	// 0x36f046f9
- (id)representativeItem;	// 0x36f04add
- (id)valueForProperty:(id)property;	// 0x36f0447d
@end
