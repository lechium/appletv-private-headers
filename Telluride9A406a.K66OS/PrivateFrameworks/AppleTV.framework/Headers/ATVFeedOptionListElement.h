/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedOptionListElement : ATVFeedRootElement {
@private
	NSString *_title;	// 44 = 0x2c
	NSString *_footnote;	// 48 = 0x30
	BOOL _autoSelectSingleItem;	// 52 = 0x34
	NSArray *_items;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL autoSelectSingleItem;	// G=0x3319cbed; S=0x3319cbfd; @synthesize=_autoSelectSingleItem
@property(copy, nonatomic) NSString *footnote;	// G=0x3319cbb9; S=0x3319cbc9; @synthesize=_footnote
@property(retain, nonatomic) NSArray *items;	// G=0x3319cc0d; S=0x3319cc1d; @synthesize=_items
@property(copy, nonatomic) NSString *title;	// G=0x3319cb85; S=0x3319cb95; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3319c8fd
// declared property getter: - (BOOL)autoSelectSingleItem;	// 0x3319cbed
- (void)dealloc;	// 0x3319cb11
// declared property getter: - (id)footnote;	// 0x3319cbb9
// declared property getter: - (id)items;	// 0x3319cc0d
// declared property setter: - (void)setAutoSelectSingleItem:(BOOL)item;	// 0x3319cbfd
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x3319cbc9
// declared property setter: - (void)setItems:(id)items;	// 0x3319cc1d
// declared property setter: - (void)setTitle:(id)title;	// 0x3319cb95
// declared property getter: - (id)title;	// 0x3319cb85
@end

