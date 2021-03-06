/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, BRXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoAssetElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_description;	// 12 = 0xc
	NSString *_rating;	// 16 = 0x10
	ATVFeedImageElement *_image;	// 20 = 0x14
	float _bookmarkTimeSec;	// 24 = 0x18
	BRXMLElement *_xml;	// 28 = 0x1c
	NSString *_secondScreenURL;	// 32 = 0x20
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x3eeb79; S=0x3eeb89; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x3eeaf9; S=0x3eeb0d; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3eeb41; S=0x3eeb51; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x3eeb1d; S=0x3eeb31; @synthesize=_rating
@property(copy, nonatomic) NSString *secondScreenURL;	// G=0x3eeba9; S=0x3eebbd; @synthesize=_secondScreenURL
@property(copy, nonatomic) NSString *title;	// G=0x3eead5; S=0x3eeae9; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3eeab1; S=0x3eeac5; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3eeb99; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3ee7b1
- (void).cxx_destruct;	// 0x3eebcd
// declared property getter: - (float)bookmarkTimeSec;	// 0x3eeb79
// declared property getter: - (id)description;	// 0x3eeaf9
// declared property getter: - (id)image;	// 0x3eeb41
// declared property getter: - (id)rating;	// 0x3eeb1d
// declared property getter: - (id)secondScreenURL;	// 0x3eeba9
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x3eeb89
// declared property setter: - (void)setDescription:(id)description;	// 0x3eeb0d
// declared property setter: - (void)setImage:(id)image;	// 0x3eeb51
// declared property setter: - (void)setRating:(id)rating;	// 0x3eeb31
// declared property setter: - (void)setSecondScreenURL:(id)url;	// 0x3eebbd
// declared property setter: - (void)setTitle:(id)title;	// 0x3eeae9
// declared property setter: - (void)setUrl:(id)url;	// 0x3eeac5
// declared property getter: - (id)title;	// 0x3eead5
// declared property getter: - (id)url;	// 0x3eeab1
// declared property getter: - (id)xml;	// 0x3eeb99
@end

