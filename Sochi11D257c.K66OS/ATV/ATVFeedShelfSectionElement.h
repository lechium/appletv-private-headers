/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedShelfSectionElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSArray *_shelfItems;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *shelfItems;	// G=0x13da3d; S=0x13da4d; @synthesize=_shelfItems
@property(copy, nonatomic) NSString *title;	// G=0x13da19; S=0x13da2d; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13d7d9
- (void).cxx_destruct;	// 0x13da75
// declared property setter: - (void)setShelfItems:(id)items;	// 0x13da4d
// declared property setter: - (void)setTitle:(id)title;	// 0x13da2d
// declared property getter: - (id)shelfItems;	// 0x13da3d
// declared property getter: - (id)title;	// 0x13da19
@end

