/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedKeyedPreviewElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_rightLabel;	// 8 = 0x8
	NSString *_summary;	// 12 = 0xc
	NSString *_footnote;	// 16 = 0x10
	NSString *_rating;	// 20 = 0x14
	ATVFeedImageElement *_image;	// 24 = 0x18
	NSArray *_metadataKeys;	// 28 = 0x1c
	NSArray *_metadataValues;	// 32 = 0x20
	int _likeCount;	// 36 = 0x24
	int _dislikeCount;	// 40 = 0x28
}
@property(assign, nonatomic) int dislikeCount;	// G=0x132a15; S=0x132a25; @synthesize=_dislikeCount
@property(copy, nonatomic) NSString *footnote;	// G=0x132905; S=0x132919; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x13294d; S=0x13295d; @synthesize=_image
@property(assign, nonatomic) int likeCount;	// G=0x1329f5; S=0x132a05; @synthesize=_likeCount
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x132985; S=0x132995; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x1329bd; S=0x1329cd; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x132929; S=0x13293d; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x1328bd; S=0x1328d1; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x1328e1; S=0x1328f5; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x132899; S=0x1328ad; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13228d
- (void).cxx_destruct;	// 0x132a35
// declared property getter: - (int)dislikeCount;	// 0x132a15
// declared property getter: - (id)footnote;	// 0x132905
// declared property getter: - (id)image;	// 0x13294d
// declared property getter: - (int)likeCount;	// 0x1329f5
// declared property getter: - (id)metadataKeys;	// 0x132985
// declared property getter: - (id)metadataValues;	// 0x1329bd
// declared property getter: - (id)rating;	// 0x132929
// declared property getter: - (id)rightLabel;	// 0x1328bd
// declared property setter: - (void)setDislikeCount:(int)count;	// 0x132a25
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x132919
// declared property setter: - (void)setImage:(id)image;	// 0x13295d
// declared property setter: - (void)setLikeCount:(int)count;	// 0x132a05
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x132995
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x1329cd
// declared property setter: - (void)setRating:(id)rating;	// 0x13293d
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1328d1
// declared property setter: - (void)setSummary:(id)summary;	// 0x1328f5
// declared property setter: - (void)setTitle:(id)title;	// 0x1328ad
// declared property getter: - (id)summary;	// 0x1328e1
// declared property getter: - (id)title;	// 0x132899
@end

