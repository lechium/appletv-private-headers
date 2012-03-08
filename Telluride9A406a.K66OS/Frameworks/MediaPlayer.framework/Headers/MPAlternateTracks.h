/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary, MPAVItem;

@interface MPAlternateTracks : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSDictionary *_alternateTracks;	// 8 = 0x8
	NSMutableDictionary *_trackChangeDictionary;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;	// G=0x319c4ddd; 
- (id)initWithItem:(id)item;	// 0x319c4879
- (id)_keyForTrackType:(unsigned)trackType;	// 0x319c5af5
- (void)beginTrackChanges;	// 0x319c4929
- (void)commitTrackChanges;	// 0x319c4975
- (id)currentTrackForType:(unsigned)type;	// 0x319c4c19
- (void)dealloc;	// 0x319c48a5
- (BOOL)hasTracksForTypes:(unsigned)types;	// 0x319c4f59
- (unsigned)indexOfCurrentTrackForType:(unsigned)type;	// 0x319c4c6d
// declared property getter: - (BOOL)isLoaded;	// 0x319c4ddd
- (void)reloadData;	// 0x319c5045
- (void)setTrack:(id)track forType:(unsigned)type;	// 0x319c4df5
- (unsigned)trackCountForTypes:(unsigned)types;	// 0x319c4fc9
- (id)tracksForType:(unsigned)type;	// 0x319c4f15
@end

