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
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3360dc65; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x3360dc81; 
@property(readonly, assign, nonatomic) int playlistAttributes;	// G=0x3360dc39; 
+ (void)_createFilterableDictionary;	// 0x3360e0cd
+ (BOOL)_isValidPlaylistProperty:(id)property;	// 0x3360e2c9
+ (BOOL)canFilterByProperty:(id)property;	// 0x3360e049
- (id)initWithCoder:(id)coder;	// 0x3360dec5
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x3360df69
- (unsigned)count;	// 0x3360db41
- (void)encodeWithCoder:(id)coder;	// 0x3360de4d
- (BOOL)existsInLibrary;	// 0x3360dcad
- (id)geniusMixArtworkForSize:(CGSize)size;	// 0x3360dd29
- (unsigned)hash;	// 0x3360df51
- (BOOL)isEqual:(id)equal;	// 0x3360dfb9
- (id)items;	// 0x3360dbbd
- (int)mediaTypes;	// 0x3360dac5
// declared property getter: - (id)name;	// 0x3360dc65
// declared property getter: - (unsigned long long)persistentID;	// 0x3360dc81
// declared property getter: - (int)playlistAttributes;	// 0x3360dc39
- (id)representativeItem;	// 0x3360da49
- (id)valueForProperty:(id)property;	// 0x3360ddad
@end
