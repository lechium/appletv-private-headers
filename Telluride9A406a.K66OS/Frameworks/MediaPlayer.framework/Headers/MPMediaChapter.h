/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface MPMediaChapter : NSObject <NSCoding> {
@private
	int _chapterType;	// 4 = 0x4
	id _value;	// 8 = 0x8
	id _valueLoader;	// 12 = 0xc
	unsigned _indexInChaptersWithAnyType;	// 16 = 0x10
	unsigned _indexInChaptersWithSameType;	// 20 = 0x14
	double _playbackTime;	// 24 = 0x18
	double _playbackDuration;	// 32 = 0x20
}
@property(assign, nonatomic) int chapterType;	// G=0x31a48235; S=0x31a48245; @synthesize=_chapterType
@property(assign, nonatomic) unsigned indexInChaptersWithAnyType;	// G=0x31a481f5; S=0x31a48205; @synthesize=_indexInChaptersWithAnyType
@property(assign, nonatomic) unsigned indexInChaptersWithSameType;	// G=0x31a48215; S=0x31a48225; @synthesize=_indexInChaptersWithSameType
@property(assign, nonatomic) double playbackDuration;	// G=0x31a48255; S=0x31a4826d; @synthesize=_playbackDuration
@property(assign, nonatomic) double playbackTime;	// G=0x31a48281; S=0x31a48299; @synthesize=_playbackTime
@property(retain, nonatomic) id value;	// G=0x31a48101; S=0x31a482ad; @synthesize=_value
@property(copy, nonatomic) id valueLoader;	// G=0x31a482d1; S=0x31a482e1; @synthesize=_valueLoader
- (id)initWithCoder:(id)coder;	// 0x31a47f41
- (int)_sortByChapterIndex:(id)index;	// 0x31a45fad
// declared property getter: - (int)chapterType;	// 0x31a48235
- (void)dealloc;	// 0x31a47c7d
- (id)description;	// 0x31a47cdd
- (double)duration;	// 0x31a481dd
- (void)encodeWithCoder:(id)coder;	// 0x31a47dd1
// declared property getter: - (unsigned)indexInChaptersWithAnyType;	// 0x31a481f5
// declared property getter: - (unsigned)indexInChaptersWithSameType;	// 0x31a48215
// declared property getter: - (double)playbackDuration;	// 0x31a48255
// declared property getter: - (double)playbackTime;	// 0x31a48281
// declared property setter: - (void)setChapterType:(int)type;	// 0x31a48245
// declared property setter: - (void)setIndexInChaptersWithAnyType:(unsigned)anyType;	// 0x31a48205
// declared property setter: - (void)setIndexInChaptersWithSameType:(unsigned)sameType;	// 0x31a48225
// declared property setter: - (void)setPlaybackDuration:(double)duration;	// 0x31a4826d
// declared property setter: - (void)setPlaybackTime:(double)time;	// 0x31a48299
// declared property setter: - (void)setValue:(id)value;	// 0x31a482ad
// declared property setter: - (void)setValueLoader:(id)loader;	// 0x31a482e1
- (id)title;	// 0x31a48189
// declared property getter: - (id)value;	// 0x31a48101
// declared property getter: - (id)valueLoader;	// 0x31a482d1
@end

