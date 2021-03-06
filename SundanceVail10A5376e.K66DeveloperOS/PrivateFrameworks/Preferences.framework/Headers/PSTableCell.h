/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UITableViewCell.h> // Unknown library

@class PSSpecifier, NSString, UIImageView, UIView;

@interface PSTableCell : UITableViewCell {
	id _value;	// 300 = 0x12c
	UIImageView *_checkedImageView;	// 304 = 0x130
	BOOL _checked;	// 308 = 0x134
	BOOL _shouldHideTitle;	// 309 = 0x135
	NSString *_hiddenTitle;	// 312 = 0x138
	int _alignment;	// 316 = 0x13c
	SEL _pAction;	// 320 = 0x140
	id _pTarget;	// 324 = 0x144
	BOOL _cellEnabled;	// 328 = 0x148
	PSSpecifier *_specifier;	// 332 = 0x14c
	int _type;	// 336 = 0x150
	BOOL _lazyIcon;	// 340 = 0x154
	BOOL _lazyIconDontUnload;	// 341 = 0x155
	BOOL _lazyIconForceSynchronous;	// 342 = 0x156
	NSString *_lazyIconAppID;	// 344 = 0x158
	UIView *_topShadow;	// 348 = 0x15c
	UIView *_topEtchLine;	// 352 = 0x160
	UIView *_bottomEtchLine;	// 356 = 0x164
	BOOL _etch;	// 360 = 0x168
	BOOL _reusedCell;	// 361 = 0x169
}
@property(assign) SEL action;	// G=0x35e0cb81; S=0x35e0cb71; converted property
@property(assign) BOOL cellEnabled;	// G=0x35e0cc45; S=0x35e0cb91; converted property
@property(assign, getter=isChecked) BOOL checked;	// G=0x35e0c995; S=0x35e0c7a9; converted property
@property(assign, nonatomic) BOOL reusedCell;	// G=0x35e0cebd; S=0x35e0cecd; @synthesize=_reusedCell
@property(retain, nonatomic) PSSpecifier *specifier;	// G=0x35e0ce7d; S=0x35e0ce8d; @synthesize=_specifier
@property(retain) id target;	// G=0x35e0cb61; S=0x35e0cb51; converted property
@property(retain) id title;	// G=0x35e0c6dd; S=0x35e0c725; converted property
@property(assign, nonatomic) int type;	// G=0x35e0ce9d; S=0x35e0cead; @synthesize=_type
@property(retain) id value;	// G=0x35e0cae9; S=0x35e0c9e9; converted property
+ (id)bottomEtchLineView;	// 0x35e0ad61
+ (Class)cellClassForSpecifier:(id)specifier;	// 0x35e0aa49
+ (int)cellStyle;	// 0x35e0aa45
+ (int)cellTypeFromString:(id)string;	// 0x35e0a541
+ (id)reuseIdentifierForBasicCellTypes:(int)basicCellTypes;	// 0x35e0a8a1
+ (id)reuseIdentifierForClassAndType:(int)classAndType;	// 0x35e0a909
+ (id)reuseIdentifierForSpecifier:(id)specifier;	// 0x35e0a94d
+ (id)stringFromCellType:(int)cellType;	// 0x35e0a7a1
+ (id)topEtchLineView;	// 0x35e0ab41
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x35e0af79
- (id)_automationID;	// 0x35e0cedd
- (id)_contentString;	// 0x35e0c571
- (void)_setBottomEtchHidden:(BOOL)hidden;	// 0x35e0ce5d
- (void)_setTopEtchHidden:(BOOL)hidden;	// 0x35e0ce3d
- (void)_setTopShadowHidden:(BOOL)hidden;	// 0x35e0ccf9
- (void)_updateEtchState:(BOOL)state;	// 0x35e0c3d9
// converted property getter: - (SEL)action;	// 0x35e0cb81
- (id)blankIcon;	// 0x35e0c63d
- (BOOL)canBeChecked;	// 0x35e0c9a5
- (BOOL)canReload;	// 0x35e0c539
// converted property getter: - (BOOL)cellEnabled;	// 0x35e0cc45
- (void)cellRemovedFromView;	// 0x35e0c66d
- (void)dealloc;	// 0x35e0b0e9
- (void)forceSynchronousIconLoadOnNextIconLoad;	// 0x35e0c6c5
- (id)getIcon;	// 0x35e0c6d9
- (id)getLazyIcon;	// 0x35e0c599
- (id)getLazyIconID;	// 0x35e0c62d
- (id)iconImageView;	// 0x35e0cb19
// converted property getter: - (BOOL)isChecked;	// 0x35e0c995
- (void)layoutSubviews;	// 0x35e0bb55
- (void)prepareForReuse;	// 0x35e0ba0d
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x35e0b19d
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x35e0cc55
// declared property getter: - (BOOL)reusedCell;	// 0x35e0cebd
- (id)scriptingInfoWithChildren;	// 0x35e0cf55
// converted property setter: - (void)setAction:(SEL)action;	// 0x35e0cb71
- (void)setAlignment:(int)alignment;	// 0x35e0cb29
// converted property setter: - (void)setCellEnabled:(BOOL)enabled;	// 0x35e0cb91
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0x35e0c7a9
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x35e0c4f1
- (void)setIcon:(id)icon;	// 0x35e0c9bd
// declared property setter: - (void)setReusedCell:(BOOL)cell;	// 0x35e0cecd
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x35e0c4a9
- (void)setShouldHideTitle:(BOOL)hideTitle;	// 0x35e0c799
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x35e0ce8d
// converted property setter: - (void)setTarget:(id)target;	// 0x35e0cb51
// converted property setter: - (void)setTitle:(id)title;	// 0x35e0c725
// declared property setter: - (void)setType:(int)type;	// 0x35e0cead
// converted property setter: - (void)setValue:(id)value;	// 0x35e0c9e9
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0x35e0c36d
// declared property getter: - (id)specifier;	// 0x35e0ce7d
// converted property getter: - (id)target;	// 0x35e0cb61
- (float)textFieldOffset;	// 0x35e0cc85
// converted property getter: - (id)title;	// 0x35e0c6dd
- (id)titleLabel;	// 0x35e0caf9
- (id)titleTextLabel;	// 0x35e0c3a1
// declared property getter: - (int)type;	// 0x35e0ce9d
// converted property getter: - (id)value;	// 0x35e0cae9
- (id)valueLabel;	// 0x35e0cb09
@end

