/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPTimeMarker, MPVideoChapterCellContentView, MPImageCache;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 296 = 0x128
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x34852701; S=0x348526e1; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x348525b9; S=0x348525dd; 
@property(assign, nonatomic) unsigned index;	// G=0x34852599; S=0x348525fd; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x3485267d; S=0x3485261d; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x348526a1; S=0x3485263d; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x348526c1; S=0x3485265d; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x348523c1
// declared property getter: - (id)artworkImageCache;	// 0x34852701
- (void)dealloc;	// 0x348524f5
// declared property getter: - (unsigned)index;	// 0x34852599
// declared property getter: - (BOOL)isCurrent;	// 0x348525b9
- (void)prepareForReuse;	// 0x34852741
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x348526e1
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x34852721
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x348525dd
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x348525fd
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x34852545
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x3485261d
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x3485263d
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x3485265d
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x3485267d
// declared property getter: - (float)timeColumnWidth;	// 0x348526a1
// declared property getter: - (id)timeMarker;	// 0x348526c1
@end

