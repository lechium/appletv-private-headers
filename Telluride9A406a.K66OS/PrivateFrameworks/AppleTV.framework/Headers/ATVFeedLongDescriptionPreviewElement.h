/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedMediaBadgesElement, ATVFeedStarRatingElement, NSArray, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	NSString *_rating;	// 40 = 0x28
	ATVFeedImageElement *_image;	// 44 = 0x2c
	NSArray *_metadataLabels;	// 48 = 0x30
	ATVFeedMediaBadgesElement *_mediaBadges;	// 52 = 0x34
	ATVFeedStarRatingElement *_starRating;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *footnote;	// G=0x33197acd; S=0x33197add; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x33197b35; S=0x33197b45; @synthesize=_image
@property(retain, nonatomic) ATVFeedMediaBadgesElement *mediaBadges;	// G=0x33197b9d; S=0x33197bad; @synthesize=_mediaBadges
@property(retain, nonatomic) NSArray *metadataLabels;	// G=0x33197b69; S=0x33197b79; @synthesize=_metadataLabels
@property(copy, nonatomic) NSString *rating;	// G=0x33197b01; S=0x33197b11; @synthesize=_rating
@property(retain, nonatomic) ATVFeedStarRatingElement *starRating;	// G=0x33197bd1; S=0x33197be1; @synthesize=_starRating
@property(copy, nonatomic) NSString *summary;	// G=0x33197a99; S=0x33197aa9; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x33197a65; S=0x33197a75; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33197655
- (void)dealloc;	// 0x3319798d
// declared property getter: - (id)footnote;	// 0x33197acd
// declared property getter: - (id)image;	// 0x33197b35
// declared property getter: - (id)mediaBadges;	// 0x33197b9d
// declared property getter: - (id)metadataLabels;	// 0x33197b69
// declared property getter: - (id)rating;	// 0x33197b01
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x33197add
// declared property setter: - (void)setImage:(id)image;	// 0x33197b45
// declared property setter: - (void)setMediaBadges:(id)badges;	// 0x33197bad
// declared property setter: - (void)setMetadataLabels:(id)labels;	// 0x33197b79
// declared property setter: - (void)setRating:(id)rating;	// 0x33197b11
// declared property setter: - (void)setStarRating:(id)rating;	// 0x33197be1
// declared property setter: - (void)setSummary:(id)summary;	// 0x33197aa9
// declared property setter: - (void)setTitle:(id)title;	// 0x33197a75
// declared property getter: - (id)starRating;	// 0x33197bd1
// declared property getter: - (id)summary;	// 0x33197a99
// declared property getter: - (id)title;	// 0x33197a65
@end

