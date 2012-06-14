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
@property(retain, nonatomic) NSArray *columnDefinitions;	// G=0x13725d; S=0x13726d; @synthesize=_columnDefinitions
@property(retain, nonatomic) NSArray *rows;	// G=0x13727d; S=0x13728d; @synthesize=_rows
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x136f75
// declared property getter: - (id)columnDefinitions;	// 0x13725d
- (void)dealloc;	// 0x1371f9
// declared property getter: - (id)rows;	// 0x13727d
// declared property setter: - (void)setColumnDefinitions:(id)definitions;	// 0x13726d
// declared property setter: - (void)setRows:(id)rows;	// 0x13728d
@end
