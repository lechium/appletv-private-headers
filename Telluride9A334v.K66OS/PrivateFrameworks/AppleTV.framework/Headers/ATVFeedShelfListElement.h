/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, ATVFeedMenuElement, ATVFeedShelfElement;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfListElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 44 = 0x2c
	ATVFeedShelfElement *_centerShelf;	// 48 = 0x30
	ATVFeedMenuElement *_menu;	// 52 = 0x34
}
@property(retain, nonatomic) ATVFeedShelfElement *centerShelf;	// G=0x3333a645; S=0x3333a655; @synthesize=_centerShelf
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x3333a611; S=0x3333a621; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x3333a679; S=0x3333a689; @synthesize=_menu
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3333a415
// declared property getter: - (id)centerShelf;	// 0x3333a645
- (void)dealloc;	// 0x3333a59d
// declared property getter: - (id)header;	// 0x3333a611
// declared property getter: - (id)menu;	// 0x3333a679
// declared property setter: - (void)setCenterShelf:(id)shelf;	// 0x3333a655
// declared property setter: - (void)setHeader:(id)header;	// 0x3333a621
// declared property setter: - (void)setMenu:(id)menu;	// 0x3333a689
@end
