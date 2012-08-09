/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebSelectedItemPrivate.h"

@class DOMHTMLOptionElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
	BOOL _selected;	// 4 = 0x4
	DOMHTMLOptionElement *_node;	// 8 = 0x8
}
@property(retain, nonatomic) DOMHTMLOptionElement *_node;	// G=0x30450c79; S=0x30450c89; @synthesize
@property(readonly, retain) DOMHTMLOptionElement *node;	// G=0x30450bcd; converted property
@property(assign) BOOL selected;	// G=0x30450bdd; S=0x30450bf1; converted property
- (id)initWithHTMLOptionNode:(id)htmloptionNode;	// 0x30450b65
// declared property getter: - (id)_node;	// 0x30450c79
- (void)dealloc;	// 0x30450c35
- (BOOL)isGroup;	// 0x30450bed
// converted property getter: - (id)node;	// 0x30450bcd
// converted property getter: - (BOOL)selected;	// 0x30450bdd
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x30450bf1
// declared property setter: - (void)set_node:(id)node;	// 0x30450c89
- (void)unselect;	// 0x30450c21
@end
