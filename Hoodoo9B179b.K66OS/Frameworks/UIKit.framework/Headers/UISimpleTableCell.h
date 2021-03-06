/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableCell.h"

@class UIImageView, NSString, UIFont;

@interface UISimpleTableCell : UITableCell {
@private
	UIFont *_font;	// 64 = 0x40
	UIImageView *_iconImageView;	// 68 = 0x44
	unsigned _indentationLevel;	// 72 = 0x48
@protected
	NSString *_title;	// 76 = 0x4c
	int _titleColor;	// 80 = 0x50
}
@property(retain) UIFont *font;	// G=0x33092ca9; S=0x33092c65; converted property
@property(retain) id icon;	// G=0x33093361; S=0x330931ad; converted property
@property(readonly, retain) UIImageView *iconImageView;	// G=0x3309304d; converted property
@property(assign) unsigned indentationLevel;	// G=0x330933ad; S=0x33093381; converted property
@property(retain) NSString *title;	// G=0x33093011; S=0x33092fb9; converted property
+ (id)defaultFont;	// 0x33092bb5
- (id)initWithFrame:(CGRect)frame;	// 0x33092bd9
- (id)_scriptingInfo;	// 0x330933c1
- (void)dealloc;	// 0x33092cb9
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x33092ef1
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x33092d2d
// converted property getter: - (id)font;	// 0x33092ca9
// converted property getter: - (id)icon;	// 0x33093361
// converted property getter: - (id)iconImageView;	// 0x3309304d
// converted property getter: - (unsigned)indentationLevel;	// 0x330933ad
- (void)layoutSubviews;	// 0x3309305d
- (int)lineBreakMode;	// 0x330933bd
// converted property setter: - (void)setFont:(id)font;	// 0x33092c65
// converted property setter: - (void)setIcon:(id)icon;	// 0x330931ad
// converted property setter: - (void)setIndentationLevel:(unsigned)level;	// 0x33093381
// converted property setter: - (void)setTitle:(id)title;	// 0x33092fb9
- (void)setTitleColor:(int)color;	// 0x33093021
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x33092f25
// converted property getter: - (id)title;	// 0x33093011
@end

