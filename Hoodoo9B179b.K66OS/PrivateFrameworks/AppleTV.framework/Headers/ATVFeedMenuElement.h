/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedInitialSelectionElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuElement : ATVFeedElement {
@private
	ATVFeedInitialSelectionElement *_initialSelection;	// 28 = 0x1c
	NSArray *_sections;	// 32 = 0x20
}
@property(retain, nonatomic) ATVFeedInitialSelectionElement *initialSelection;	// G=0x30398c1d; S=0x30398c2d; @synthesize=_initialSelection
@property(retain, nonatomic) NSArray *sections;	// G=0x30398c51; S=0x30398c61; @synthesize=_sections
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x30398a09
- (void)dealloc;	// 0x30398bbd
// declared property getter: - (id)initialSelection;	// 0x30398c1d
// declared property getter: - (id)sections;	// 0x30398c51
// declared property setter: - (void)setInitialSelection:(id)selection;	// 0x30398c2d
// declared property setter: - (void)setSections:(id)sections;	// 0x30398c61
@end

