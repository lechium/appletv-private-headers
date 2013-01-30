/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPVideoChapterCellContentView, MPTimeMarker, MPImageCache;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 300 = 0x12c
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x31cf48e9; S=0x31cf48c9; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x31cf47a1; S=0x31cf47c5; 
@property(assign, nonatomic) unsigned index;	// G=0x31cf4781; S=0x31cf47e5; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x31cf4865; S=0x31cf4805; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x31cf4889; S=0x31cf4825; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x31cf48a9; S=0x31cf4845; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x31cf45a9
// declared property getter: - (id)artworkImageCache;	// 0x31cf48e9
- (void)dealloc;	// 0x31cf46dd
// declared property getter: - (unsigned)index;	// 0x31cf4781
// declared property getter: - (BOOL)isCurrent;	// 0x31cf47a1
- (void)prepareForReuse;	// 0x31cf4929
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x31cf48c9
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x31cf4909
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x31cf47c5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x31cf47e5
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x31cf472d
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x31cf4805
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x31cf4825
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x31cf4845
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x31cf4865
// declared property getter: - (float)timeColumnWidth;	// 0x31cf4889
// declared property getter: - (id)timeMarker;	// 0x31cf48a9
@end
