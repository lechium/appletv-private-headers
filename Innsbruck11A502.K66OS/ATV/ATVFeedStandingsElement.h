/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedStandingsElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 4 = 0x4
	NSArray *_standingsItems;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x12c329; S=0x12c339; @synthesize=_header
@property(retain, nonatomic) NSArray *standingsItems;	// G=0x12c361; S=0x12c371; @synthesize=_standingsItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12c08d
- (void).cxx_destruct;	// 0x12c399
// declared property getter: - (id)header;	// 0x12c329
// declared property setter: - (void)setHeader:(id)header;	// 0x12c339
// declared property setter: - (void)setStandingsItems:(id)items;	// 0x12c371
// declared property getter: - (id)standingsItems;	// 0x12c361
@end

