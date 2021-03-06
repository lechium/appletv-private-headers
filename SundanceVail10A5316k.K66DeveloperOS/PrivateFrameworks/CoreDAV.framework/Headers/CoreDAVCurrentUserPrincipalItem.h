/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_unauthenticated;	// 28 = 0x1c
}
@property(retain) CoreDAVHrefItem *href;	// G=0x35f72ee5; S=0x35f72ef9; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x35f72f09; S=0x35f72f1d; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x35f72ccd
- (id)init;	// 0x35f72b51
- (void)dealloc;	// 0x35f72b7d
- (id)description;	// 0x35f72be1
// declared property getter: - (id)href;	// 0x35f72ee5
// declared property setter: - (void)setHref:(id)href;	// 0x35f72ef9
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x35f72f1d
// declared property getter: - (id)unauthenticated;	// 0x35f72f09
@end

