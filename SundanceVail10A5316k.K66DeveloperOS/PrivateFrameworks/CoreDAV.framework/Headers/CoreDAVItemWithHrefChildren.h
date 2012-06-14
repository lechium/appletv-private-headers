/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
	NSMutableSet *_hrefs;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_unauthenticated;	// 28 = 0x1c
}
@property(retain) NSMutableSet *hrefs;	// G=0x35f780b5; S=0x35f780c9; @synthesize=_hrefs
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x35f780d9; S=0x35f780ed; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x35f779d1
- (void)addHref:(id)href;	// 0x35f77be9
- (void)dealloc;	// 0x35f77881
- (id)description;	// 0x35f778e5
// declared property getter: - (id)hrefs;	// 0x35f780b5
- (id)hrefsAsFullURLs;	// 0x35f77c81
- (id)hrefsAsOriginalURLs;	// 0x35f77df5
- (id)hrefsAsStrings;	// 0x35f77f55
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x35f780c9
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x35f780ed
// declared property getter: - (id)unauthenticated;	// 0x35f780d9
@end

