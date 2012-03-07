/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, BRXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoElement : ATVFeedElement {
@private
	NSString *_url;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_description;	// 36 = 0x24
	ATVFeedImageElement *_image;	// 40 = 0x28
	float _bookmarkTimeSec;	// 44 = 0x2c
	BRXMLElement *_xml;	// 48 = 0x30
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x3430b439; S=0x3430b449; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x3430b3d1; S=0x3430b3e1; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3430b405; S=0x3430b415; @synthesize=_image
@property(copy, nonatomic) NSString *title;	// G=0x3430b39d; S=0x3430b3ad; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x3430b369; S=0x3430b379; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x3430b459; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3430b129
// declared property getter: - (float)bookmarkTimeSec;	// 0x3430b439
- (void)dealloc;	// 0x3430b2cd
// declared property getter: - (id)description;	// 0x3430b3d1
// declared property getter: - (id)image;	// 0x3430b405
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x3430b449
// declared property setter: - (void)setDescription:(id)description;	// 0x3430b3e1
// declared property setter: - (void)setImage:(id)image;	// 0x3430b415
// declared property setter: - (void)setTitle:(id)title;	// 0x3430b3ad
// declared property setter: - (void)setUrl:(id)url;	// 0x3430b379
// declared property getter: - (id)title;	// 0x3430b39d
// declared property getter: - (id)url;	// 0x3430b369
// declared property getter: - (id)xml;	// 0x3430b459
@end
