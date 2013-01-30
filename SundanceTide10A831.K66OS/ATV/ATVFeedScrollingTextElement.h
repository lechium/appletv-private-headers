/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollingTextElement : ATVFeedRootElement {
	NSString *_title;	// 8 = 0x8
	NSString *_text;	// 12 = 0xc
	NSArray *_buttons;	// 16 = 0x10
	int _initialSelection;	// 20 = 0x14
}
@property(retain, nonatomic) NSArray *buttons;	// G=0x1584f9; S=0x158509; @synthesize=_buttons
@property(assign, nonatomic) int initialSelection;	// G=0x158519; S=0x158529; @synthesize=_initialSelection
@property(retain, nonatomic) NSString *text;	// G=0x1584d9; S=0x1584e9; @synthesize=_text
@property(retain, nonatomic) NSString *title;	// G=0x1584b9; S=0x1584c9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15821d
// declared property getter: - (id)buttons;	// 0x1584f9
- (void)dealloc;	// 0x158441
// declared property getter: - (int)initialSelection;	// 0x158519
// declared property setter: - (void)setButtons:(id)buttons;	// 0x158509
// declared property setter: - (void)setInitialSelection:(int)selection;	// 0x158529
// declared property setter: - (void)setText:(id)text;	// 0x1584e9
// declared property setter: - (void)setTitle:(id)title;	// 0x1584c9
// declared property getter: - (id)text;	// 0x1584d9
// declared property getter: - (id)title;	// 0x1584b9
@end
