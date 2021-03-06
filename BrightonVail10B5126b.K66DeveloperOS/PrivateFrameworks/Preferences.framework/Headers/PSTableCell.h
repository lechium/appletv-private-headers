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
@property(assign) SEL action;	// G=0x352e6911; S=0x352e6901; converted property
@property(assign) BOOL cellEnabled;	// G=0x352e69d5; S=0x352e6921; converted property
@property(assign, getter=isChecked) BOOL checked;	// G=0x352e6725; S=0x352e6539; converted property
@property(assign, nonatomic) BOOL reusedCell;	// G=0x352e6c4d; S=0x352e6c5d; @synthesize=_reusedCell
@property(retain, nonatomic) PSSpecifier *specifier;	// G=0x352e6c0d; S=0x352e6c1d; @synthesize=_specifier
@property(retain) id target;	// G=0x352e68f1; S=0x352e68e1; converted property
@property(retain) id title;	// G=0x352e646d; S=0x352e64b5; converted property
@property(assign, nonatomic) int type;	// G=0x352e6c2d; S=0x352e6c3d; @synthesize=_type
@property(retain) id value;	// G=0x352e6879; S=0x352e6779; converted property
+ (id)bottomEtchLineView;	// 0x352e4969
+ (Class)cellClassForSpecifier:(id)specifier;	// 0x352e4651
+ (int)cellStyle;	// 0x352e464d
+ (int)cellTypeFromString:(id)string;	// 0x352e4149
+ (id)reuseIdentifierForBasicCellTypes:(int)basicCellTypes;	// 0x352e44a9
+ (id)reuseIdentifierForClassAndType:(int)classAndType;	// 0x352e4511
+ (id)reuseIdentifierForSpecifier:(id)specifier;	// 0x352e4555
+ (id)stringFromCellType:(int)cellType;	// 0x352e43a9
+ (id)topEtchLineView;	// 0x352e4749
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x352e4b81
- (id)_automationID;	// 0x352e6c6d
- (id)_contentString;	// 0x352e6301
- (void)_setBottomEtchHidden:(BOOL)hidden;	// 0x352e6bed
- (void)_setTopEtchHidden:(BOOL)hidden;	// 0x352e6bcd
- (void)_setTopShadowHidden:(BOOL)hidden;	// 0x352e6a89
- (void)_updateEtchState:(BOOL)state;	// 0x352e6169
// converted property getter: - (SEL)action;	// 0x352e6911
- (id)blankIcon;	// 0x352e63cd
- (BOOL)canBeChecked;	// 0x352e6735
- (BOOL)canReload;	// 0x352e62c9
// converted property getter: - (BOOL)cellEnabled;	// 0x352e69d5
- (void)cellRemovedFromView;	// 0x352e63fd
- (void)dealloc;	// 0x352e4cf1
- (void)forceSynchronousIconLoadOnNextIconLoad;	// 0x352e6455
- (id)getIcon;	// 0x352e6469
- (id)getLazyIcon;	// 0x352e6329
- (id)getLazyIconID;	// 0x352e63bd
- (id)iconImageView;	// 0x352e68a9
// converted property getter: - (BOOL)isChecked;	// 0x352e6725
- (void)layoutSubviews;	// 0x352e58e5
- (void)prepareForReuse;	// 0x352e579d
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x352e4da5
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x352e69e5
// declared property getter: - (BOOL)reusedCell;	// 0x352e6c4d
- (id)scriptingInfoWithChildren;	// 0x352e6ce5
// converted property setter: - (void)setAction:(SEL)action;	// 0x352e6901
- (void)setAlignment:(int)alignment;	// 0x352e68b9
// converted property setter: - (void)setCellEnabled:(BOOL)enabled;	// 0x352e6921
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0x352e6539
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x352e6281
- (void)setIcon:(id)icon;	// 0x352e674d
// declared property setter: - (void)setReusedCell:(BOOL)cell;	// 0x352e6c5d
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x352e6239
- (void)setShouldHideTitle:(BOOL)hideTitle;	// 0x352e6529
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x352e6c1d
// converted property setter: - (void)setTarget:(id)target;	// 0x352e68e1
// converted property setter: - (void)setTitle:(id)title;	// 0x352e64b5
// declared property setter: - (void)setType:(int)type;	// 0x352e6c3d
// converted property setter: - (void)setValue:(id)value;	// 0x352e6779
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0x352e60fd
// declared property getter: - (id)specifier;	// 0x352e6c0d
// converted property getter: - (id)target;	// 0x352e68f1
- (float)textFieldOffset;	// 0x352e6a15
// converted property getter: - (id)title;	// 0x352e646d
- (id)titleLabel;	// 0x352e6889
- (id)titleTextLabel;	// 0x352e6131
// declared property getter: - (int)type;	// 0x352e6c2d
// converted property getter: - (id)value;	// 0x352e6879
- (id)valueLabel;	// 0x352e6899
@end

