/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSString, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	ATVFeedElement *_preview;	// 8 = 0x8
	ATVFeedMenuElement *_menu;	// 12 = 0xc
	NSString *_listDescription;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x12bc15; S=0x12bc25; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x12bcbd; S=0x12bccd; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x12bc85; S=0x12bc95; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x12bc4d; S=0x12bc5d; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12b971
- (void).cxx_destruct;	// 0x12bcf5
// declared property getter: - (id)header;	// 0x12bc15
// declared property getter: - (id)listDescription;	// 0x12bcbd
// declared property getter: - (id)menu;	// 0x12bc85
// declared property getter: - (id)preview;	// 0x12bc4d
// declared property setter: - (void)setHeader:(id)header;	// 0x12bc25
// declared property setter: - (void)setListDescription:(id)description;	// 0x12bccd
// declared property setter: - (void)setMenu:(id)menu;	// 0x12bc95
// declared property setter: - (void)setPreview:(id)preview;	// 0x12bc5d
@end

