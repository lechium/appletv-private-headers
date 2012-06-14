/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"


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
@property(assign, nonatomic) int chapterType;	// G=0x346c0655; S=0x346c0665; @synthesize=_chapterType
@property(assign, nonatomic) unsigned indexInChaptersWithAnyType;	// G=0x346c0615; S=0x346c0625; @synthesize=_indexInChaptersWithAnyType
@property(assign, nonatomic) unsigned indexInChaptersWithSameType;	// G=0x346c0635; S=0x346c0645; @synthesize=_indexInChaptersWithSameType
@property(assign, nonatomic) double playbackDuration;	// G=0x346c0675; S=0x346c068d; @synthesize=_playbackDuration
@property(assign, nonatomic) double playbackTime;	// G=0x346c06a1; S=0x346c06b9; @synthesize=_playbackTime
@property(retain, nonatomic) id value;	// G=0x346c057d; S=0x346c06cd; @synthesize=_value
@property(copy, nonatomic) id valueLoader;	// G=0x346c06f1; S=0x346c0701; @synthesize=_valueLoader
- (id)initWithCoder:(id)coder;	// 0x346c03bd
- (int)_sortByChapterIndex:(id)index;	// 0x346be089
// declared property getter: - (int)chapterType;	// 0x346c0655
- (void)dealloc;	// 0x346c00f9
- (id)description;	// 0x346c0159
- (double)duration;	// 0x346c05fd
- (void)encodeWithCoder:(id)coder;	// 0x346c024d
// declared property getter: - (unsigned)indexInChaptersWithAnyType;	// 0x346c0615
// declared property getter: - (unsigned)indexInChaptersWithSameType;	// 0x346c0635
// declared property getter: - (double)playbackDuration;	// 0x346c0675
// declared property getter: - (double)playbackTime;	// 0x346c06a1
// declared property setter: - (void)setChapterType:(int)type;	// 0x346c0665
// declared property setter: - (void)setIndexInChaptersWithAnyType:(unsigned)anyType;	// 0x346c0625
// declared property setter: - (void)setIndexInChaptersWithSameType:(unsigned)sameType;	// 0x346c0645
// declared property setter: - (void)setPlaybackDuration:(double)duration;	// 0x346c068d
// declared property setter: - (void)setPlaybackTime:(double)time;	// 0x346c06b9
// declared property setter: - (void)setValue:(id)value;	// 0x346c06cd
// declared property setter: - (void)setValueLoader:(id)loader;	// 0x346c0701
- (id)title;	// 0x346c05a9
// declared property getter: - (id)value;	// 0x346c057d
// declared property getter: - (id)valueLoader;	// 0x346c06f1
@end
