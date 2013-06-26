/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class UIColor, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStarRatingElement : ATVFeedElement {
	BOOL _hasUserSetRating;	// 4 = 0x4
	float _ratingPercentage;	// 8 = 0x8
	NSString *_rightLabel;	// 12 = 0xc
	NSDictionary *_styleKeyValues;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL hasUserSetRating;	// G=0x128e41; S=0x128e51; @synthesize=_hasUserSetRating
@property(readonly, assign, nonatomic) UIColor *labelColor;	// G=0x128da9; 
@property(assign, nonatomic) float ratingPercentage;	// G=0x128dfd; S=0x128e0d; @synthesize=_ratingPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x128e1d; S=0x128e31; @synthesize=_rightLabel
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x128e61; S=0x128e71; @synthesize=_styleKeyValues
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x128bb5
- (void).cxx_destruct;	// 0x128e99
// declared property getter: - (BOOL)hasUserSetRating;	// 0x128e41
// declared property getter: - (id)labelColor;	// 0x128da9
// declared property getter: - (float)ratingPercentage;	// 0x128dfd
// declared property getter: - (id)rightLabel;	// 0x128e1d
// declared property setter: - (void)setHasUserSetRating:(BOOL)rating;	// 0x128e51
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x128e0d
// declared property setter: - (void)setRightLabel:(id)label;	// 0x128e31
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x128e71
// declared property getter: - (id)styleKeyValues;	// 0x128e61
@end
