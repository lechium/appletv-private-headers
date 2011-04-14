/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSArray, BRDividerControl, NSNumber, BRImageControl;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 44 = 0x2c
	BRTextControl *_titleSubtextLayer;	// 48 = 0x30
	BRTextControl *_priceLayer;	// 52 = 0x34
	BRControl *_formatControl;	// 56 = 0x38
	BRTextControl *_releaseDateLayer;	// 60 = 0x3c
	BRTextControl *_lengthLayer;	// 64 = 0x40
	BRTextControl *_studioNameLayer;	// 68 = 0x44
	BRImageControl *_ratingImageLayer;	// 72 = 0x48
	BRControl *_userRatingControl;	// 76 = 0x4c
	BRImageControl *_topRightImageLayer;	// 80 = 0x50
	BRTextControl *_summaryLayer;	// 84 = 0x54
	BRTextControl *_copyrightLayer;	// 88 = 0x58
	NSNumber *_trackNumber;	// 92 = 0x5c
	BRDividerControl *_topDivider;	// 96 = 0x60
	BRDividerControl *_bottomDivider;	// 100 = 0x64
	NSArray *_metadataObjs;	// 104 = 0x68
	NSArray *_metadataLabels;	// 108 = 0x6c
	float _totalHeight;	// 112 = 0x70
	int _alignment;	// 116 = 0x74
	CGSize _artworkSize;	// 120 = 0x78
}
- (id)init;	// 0x3299bd55
- (void)_setCopyright:(id)copyright;	// 0x3299c109
- (void)_setFormatControl:(id)control;	// 0x3299b5d5
- (void)_setLength:(id)length;	// 0x3299c411
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x3299b465
- (void)_setPrice:(id)price;	// 0x3299c591
- (void)_setRating:(id)rating;	// 0x3299b585
- (void)_setReleaseDate:(id)date;	// 0x3299c4d1
- (void)_setStudioName:(id)name;	// 0x3299c351
- (void)_setSummary:(id)summary;	// 0x3299c1c9
- (void)_setTitle:(id)title;	// 0x3299c70d
- (void)_setTitleSubtext:(id)subtext;	// 0x3299c651
- (void)_setTopRightImage:(id)image;	// 0x3299b4f5
- (void)_setTrackNumber:(id)number;	// 0x3299b645
- (void)_setUserRatingControl:(id)control;	// 0x3299b515
- (void)_themeMetricsChanged;	// 0x3299b451
- (id)accessibilityScreenContent;	// 0x3299c7c9
- (void)dealloc;	// 0x3299bbc5
- (void)layoutSubcontrols;	// 0x3299c905
- (CGSize)renderedSize;	// 0x3299c0a5
- (void)resetAllFields;	// 0x3299bac5
- (void)setAlignment:(int)alignment;	// 0x3299b441
- (void)setArtworkSize:(CGSize)size;	// 0x3299b769
- (void)setCopyright:(id)copyright;	// 0x3299b7b5
- (void)setFormatControl:(id)control;	// 0x3299b9ad
- (void)setLength:(id)length;	// 0x3299b93d
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x3299b7ed
- (void)setPrice:(id)price;	// 0x3299b9e5
- (void)setRating:(id)rating;	// 0x3299b8cd
- (void)setReleaseDate:(id)date;	// 0x3299b975
- (void)setStudioName:(id)name;	// 0x3299b905
- (void)setSummary:(id)summary;	// 0x3299b825
- (void)setTitle:(id)title;	// 0x3299ba8d
- (void)setTitleSubtext:(id)subtext;	// 0x3299ba55
- (void)setTopRightImage:(id)image;	// 0x3299b85d
- (void)setTrackNumber:(id)number;	// 0x3299ba1d
- (void)setUserRatingControl:(id)control;	// 0x3299b895
- (id)topRightImageControl;	// 0x3299b431
@end

