/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTimeMarker.h"

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {
	unsigned _chapterIndex;	// 40 = 0x28
	NSArray *_chapters;	// 44 = 0x2c
	BOOL _hasArtworkAtPlaybackTime;	// 48 = 0x30
}
@property(assign, nonatomic) unsigned chapterIndex;	// G=0x341d8c71; S=0x341d8c81; @synthesize=_chapterIndex
@property(retain, nonatomic) NSArray *chapters;	// G=0x341d8c91; S=0x341d8ca1; @synthesize=_chapters
@property(assign, nonatomic) BOOL hasArtworkAtPlaybackTime;	// G=0x341d8cb1; S=0x341d8cc1; @synthesize=_hasArtworkAtPlaybackTime
// declared property getter: - (unsigned)chapterIndex;	// 0x341d8c71
// declared property getter: - (id)chapters;	// 0x341d8c91
- (void)dealloc;	// 0x341d8c25
// declared property getter: - (BOOL)hasArtworkAtPlaybackTime;	// 0x341d8cb1
// declared property setter: - (void)setChapterIndex:(unsigned)index;	// 0x341d8c81
// declared property setter: - (void)setChapters:(id)chapters;	// 0x341d8ca1
// declared property setter: - (void)setHasArtworkAtPlaybackTime:(BOOL)playbackTime;	// 0x341d8cc1
@end

