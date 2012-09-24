/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVLeafItem *_descriptionItem;	// 32 = 0x20
}
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x304973e9; S=0x304973fd; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x304973c5; S=0x304973d9; @synthesize=_prop
+ (id)copyParseRules;	// 0x304971b9
- (id)init;	// 0x3049704d
- (void)dealloc;	// 0x30497079
- (id)description;	// 0x304970dd
// declared property getter: - (id)descriptionItem;	// 0x304973e9
// declared property getter: - (id)prop;	// 0x304973c5
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x304973fd
// declared property setter: - (void)setProp:(id)prop;	// 0x304973d9
@end
