/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class BRXMLElement, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoElement : ATVFeedElement {
@private
	NSString *_url;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_description;	// 36 = 0x24
	NSString *_rating;	// 40 = 0x28
	ATVFeedImageElement *_image;	// 44 = 0x2c
	float _bookmarkTimeSec;	// 48 = 0x30
	BRXMLElement *_xml;	// 52 = 0x34
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x3319b2a1; S=0x3319b2b1; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x3319b205; S=0x3319b215; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3319b26d; S=0x3319b27d; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x3319b239; S=0x3319b249; @synthesize=_rating
@property(copy, nonatomic) NSString *title;	// G=0x3319b1d1; S=0x3319b1e1; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3319b19d; S=0x3319b1ad; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3319b2c1; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3319af15
// declared property getter: - (float)bookmarkTimeSec;	// 0x3319b2a1
- (void)dealloc;	// 0x3319b0ed
// declared property getter: - (id)description;	// 0x3319b205
// declared property getter: - (id)image;	// 0x3319b26d
// declared property getter: - (id)rating;	// 0x3319b239
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x3319b2b1
// declared property setter: - (void)setDescription:(id)description;	// 0x3319b215
// declared property setter: - (void)setImage:(id)image;	// 0x3319b27d
// declared property setter: - (void)setRating:(id)rating;	// 0x3319b249
// declared property setter: - (void)setTitle:(id)title;	// 0x3319b1e1
// declared property setter: - (void)setUrl:(id)url;	// 0x3319b1ad
// declared property getter: - (id)title;	// 0x3319b1d1
// declared property getter: - (id)url;	// 0x3319b19d
// declared property getter: - (id)xml;	// 0x3319b2c1
@end

