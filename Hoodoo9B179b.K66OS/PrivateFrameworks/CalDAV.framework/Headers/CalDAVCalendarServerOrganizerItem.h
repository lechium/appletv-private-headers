/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CoreDAVHrefItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVLeafItem *_commonName;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *commonName;	// G=0x35a95655; S=0x35a95631; @synthesize=_commonName
@property(retain) CoreDAVHrefItem *href;	// G=0x35a95619; S=0x35a955f5; @synthesize=_href
- (id)init;	// 0x35a95385
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35a95595
// declared property getter: - (id)commonName;	// 0x35a95655
- (id)copyParseRules;	// 0x35a953c1
- (void)dealloc;	// 0x35a95699
- (id)description;	// 0x35a9566d
// declared property getter: - (id)href;	// 0x35a95619
// declared property setter: - (void)setCommonName:(id)name;	// 0x35a95631
// declared property setter: - (void)setHref:(id)href;	// 0x35a955f5
@end

