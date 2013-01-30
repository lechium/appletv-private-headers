/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRHeaderControl, BRPanelControl, NSArray, BRScrollingTextBoxControl, NSString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextControl : BRControl {
	BRHeaderControl *_header;	// 84 = 0x54
	BRScrollingTextBoxControl *_textBox;	// 88 = 0x58
	BRPanelControl *_buttonGrid;	// 92 = 0x5c
	NSAttributedString *_attributedString;	// 96 = 0x60
	long _selectedIndex;	// 100 = 0x64
	NSString *_dialogIdentifier;	// 104 = 0x68
}
@property(retain) NSAttributedString *attributedString;	// G=0x2f9bc1; S=0x2f9b85; converted property
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x2f9cdd; @dynamic
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2f972d
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x2f9641
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x2f93fd
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus modalIdentifier:(id)identifier;	// 0x2f9461
- (id)init;	// 0x2f9819
- (id)_dialogIdentifier;	// 0x2fa295
- (id)_paragraphTextAttributes;	// 0x2fa2a5
- (long)_selectedIndex;	// 0x2fa249
- (void)_setDialogIdentifier:(id)identifier;	// 0x2fa259
- (void)_setSelectedIndexWithControl:(id)control;	// 0x2fa201
- (id)accessibilityLabel;	// 0x2fa1c1
- (id)accessibilityScreenContent;	// 0x2fa1e1
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x2f9cfd
// converted property getter: - (id)attributedString;	// 0x2f9bc1
- (BOOL)brEventAction:(id)action;	// 0x2f9dd1
// declared property getter: - (id)buttons;	// 0x2f9cdd
- (void)dealloc;	// 0x2f99d5
- (BOOL)isAccessibilityElement;	// 0x2fa1bd
- (void)layoutSubcontrols;	// 0x2f9ed1
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2f9b85
- (void)setDocumentPath:(id)path;	// 0x2f9bd1
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x2f9be5
- (void)setSelectionHandler:(id)handler;	// 0x2f9e69
- (void)setText:(id)text;	// 0x2f9afd
- (void)setTitle:(id)title;	// 0x2f9a61
@end
