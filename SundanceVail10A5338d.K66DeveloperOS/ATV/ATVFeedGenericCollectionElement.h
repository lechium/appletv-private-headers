/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedHeaderElement, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	ATVFeedElement *_preview;	// 12 = 0xc
	ATVFeedMenuElement *_menu;	// 16 = 0x10
	NSString *_listDescription;	// 20 = 0x14
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x13b0bd; S=0x13b0cd; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x13b11d; S=0x13b12d; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x13b0fd; S=0x13b10d; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x13b0dd; S=0x13b0ed; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13ae89
- (void)dealloc;	// 0x13b045
// declared property getter: - (id)header;	// 0x13b0bd
// declared property getter: - (id)listDescription;	// 0x13b11d
// declared property getter: - (id)menu;	// 0x13b0fd
// declared property getter: - (id)preview;	// 0x13b0dd
// declared property setter: - (void)setHeader:(id)header;	// 0x13b0cd
// declared property setter: - (void)setListDescription:(id)description;	// 0x13b12d
// declared property setter: - (void)setMenu:(id)menu;	// 0x13b10d
// declared property setter: - (void)setPreview:(id)preview;	// 0x13b0ed
@end
