/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedNavigationItemElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_url;	// 8 = 0x8
	NSString *_urlType;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *title;	// G=0x14becd; S=0x14bee1; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x14bef1; S=0x14bf05; @synthesize=_url
@property(copy, nonatomic) NSString *urlType;	// G=0x14bf15; S=0x14bf29; @synthesize=_urlType
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14bd65
- (void).cxx_destruct;	// 0x14bf39
// declared property setter: - (void)setTitle:(id)title;	// 0x14bee1
// declared property setter: - (void)setUrl:(id)url;	// 0x14bf05
// declared property setter: - (void)setUrlType:(id)type;	// 0x14bf29
// declared property getter: - (id)title;	// 0x14becd
// declared property getter: - (id)url;	// 0x14bef1
// declared property getter: - (id)urlType;	// 0x14bf15
@end

