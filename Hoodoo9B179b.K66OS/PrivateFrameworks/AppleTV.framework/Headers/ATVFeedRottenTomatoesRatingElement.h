/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement {
@private
	NSString *_freshness;	// 28 = 0x1c
	float _ratingPercentage;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *freshness;	// G=0x303d2669; S=0x303d2679; @synthesize=_freshness
@property(assign, nonatomic) float ratingPercentage;	// G=0x303d269d; S=0x303d26ad; @synthesize=_ratingPercentage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303d2551
- (void)dealloc;	// 0x303d261d
// declared property getter: - (id)freshness;	// 0x303d2669
// declared property getter: - (float)ratingPercentage;	// 0x303d269d
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x303d2679
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x303d26ad
@end

