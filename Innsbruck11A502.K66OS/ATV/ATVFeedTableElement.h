/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTableElement : ATVFeedElement {
	NSArray *_columnDefinitions;	// 4 = 0x4
	NSArray *_rows;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *columnDefinitions;	// G=0x12ffa1; S=0x12ffb1; @synthesize=_columnDefinitions
@property(retain, nonatomic) NSArray *rows;	// G=0x12ffd9; S=0x12ffe9; @synthesize=_rows
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12fc8d
- (void).cxx_destruct;	// 0x130011
// declared property getter: - (id)columnDefinitions;	// 0x12ffa1
// declared property getter: - (id)rows;	// 0x12ffd9
// declared property setter: - (void)setColumnDefinitions:(id)definitions;	// 0x12ffb1
// declared property setter: - (void)setRows:(id)rows;	// 0x12ffe9
@end

