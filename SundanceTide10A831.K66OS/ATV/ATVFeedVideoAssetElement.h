/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, BRXMLElement, ATVFeedImageElement;

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
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x3e1e8d; S=0x3e1e9d; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x3e1e0d; S=0x3e1e21; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3e1e55; S=0x3e1e65; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x3e1e31; S=0x3e1e45; @synthesize=_rating
@property(copy, nonatomic) NSString *secondScreenURL;	// G=0x3e1ebd; S=0x3e1ed1; @synthesize=_secondScreenURL
@property(copy, nonatomic) NSString *title;	// G=0x3e1de9; S=0x3e1dfd; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3e1dc5; S=0x3e1dd9; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3e1ead; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3e1ac5
- (void).cxx_destruct;	// 0x3e1ee1
// declared property getter: - (float)bookmarkTimeSec;	// 0x3e1e8d
// declared property getter: - (id)description;	// 0x3e1e0d
// declared property getter: - (id)image;	// 0x3e1e55
// declared property getter: - (id)rating;	// 0x3e1e31
// declared property getter: - (id)secondScreenURL;	// 0x3e1ebd
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x3e1e9d
// declared property setter: - (void)setDescription:(id)description;	// 0x3e1e21
// declared property setter: - (void)setImage:(id)image;	// 0x3e1e65
// declared property setter: - (void)setRating:(id)rating;	// 0x3e1e45
// declared property setter: - (void)setSecondScreenURL:(id)url;	// 0x3e1ed1
// declared property setter: - (void)setTitle:(id)title;	// 0x3e1dfd
// declared property setter: - (void)setUrl:(id)url;	// 0x3e1dd9
// declared property getter: - (id)title;	// 0x3e1de9
// declared property getter: - (id)url;	// 0x3e1dc5
// declared property getter: - (id)xml;	// 0x3e1ead
@end

