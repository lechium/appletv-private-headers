/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedOptionListElement : ATVFeedRootElement {
	BOOL _autoSelectSingleItem;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_footnote;	// 12 = 0xc
	NSArray *_items;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL autoSelectSingleItem;	// G=0x11f009; S=0x11f019; @synthesize=_autoSelectSingleItem
@property(copy, nonatomic) NSString *footnote;	// G=0x11efe5; S=0x11eff9; @synthesize=_footnote
@property(retain, nonatomic) NSArray *items;	// G=0x11f029; S=0x11f039; @synthesize=_items
@property(copy, nonatomic) NSString *title;	// G=0x11efc1; S=0x11efd5; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x11ecdd
- (void).cxx_destruct;	// 0x11f061
// declared property getter: - (BOOL)autoSelectSingleItem;	// 0x11f009
// declared property getter: - (id)footnote;	// 0x11efe5
// declared property getter: - (id)items;	// 0x11f029
// declared property setter: - (void)setAutoSelectSingleItem:(BOOL)item;	// 0x11f019
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x11eff9
// declared property setter: - (void)setItems:(id)items;	// 0x11f039
// declared property setter: - (void)setTitle:(id)title;	// 0x11efd5
// declared property getter: - (id)title;	// 0x11efc1
@end

