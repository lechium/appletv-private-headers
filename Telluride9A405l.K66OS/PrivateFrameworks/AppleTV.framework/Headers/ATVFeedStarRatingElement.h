/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStarRatingElement : ATVFeedElement {
@private
	float _ratingPercentage;	// 28 = 0x1c
	NSString *_rightLabel;	// 32 = 0x20
	BOOL _hasUserSetRating;	// 36 = 0x24
}
@property(assign, nonatomic) BOOL hasUserSetRating;	// G=0x35f1cf49; S=0x35f1cf59; @synthesize=_hasUserSetRating
@property(assign, nonatomic) float ratingPercentage;	// G=0x35f1cef5; S=0x35f1cf05; @synthesize=_ratingPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x35f1cf15; S=0x35f1cf25; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f1cd99
- (void)dealloc;	// 0x35f1cea9
// declared property getter: - (BOOL)hasUserSetRating;	// 0x35f1cf49
// declared property getter: - (float)ratingPercentage;	// 0x35f1cef5
// declared property getter: - (id)rightLabel;	// 0x35f1cf15
// declared property setter: - (void)setHasUserSetRating:(BOOL)rating;	// 0x35f1cf59
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x35f1cf05
// declared property setter: - (void)setRightLabel:(id)label;	// 0x35f1cf25
@end
