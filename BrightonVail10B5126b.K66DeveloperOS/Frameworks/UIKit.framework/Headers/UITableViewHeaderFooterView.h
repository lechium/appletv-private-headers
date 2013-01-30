/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITableViewSubviewReusing.h"

@class UILabel, UIColor, UIImage, UITableView, NSString;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
	int _tableViewStyle;	// 84 = 0x54
	UIImage *_backgroundImage;	// 88 = 0x58
	BOOL _sectionHeader;	// 92 = 0x5c
	CGRect _frame;	// 96 = 0x60
	int _textAlignment;	// 112 = 0x70
	UITableView *_tableView;	// 116 = 0x74
	float _maxTitleWidth;	// 120 = 0x78
	BOOL _labelBackgroundColorNeedsUpdate;	// 124 = 0x7c
	BOOL _detailLabelBackgroundColorNeedsUpdate;	// 125 = 0x7d
	BOOL _floating;	// 126 = 0x7e
	NSString *_reuseIdentifier;	// 128 = 0x80
	UIView *_backgroundView;	// 132 = 0x84
	UILabel *_label;	// 136 = 0x88
	UILabel *_detailLabel;	// 140 = 0x8c
	UIView *_contentView;	// 144 = 0x90
	UIColor *_tintColor;	// 148 = 0x94
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x32b850d1; S=0x32b850c1; @synthesize=_backgroundImage
@property(retain, nonatomic) UIView *backgroundView;	// G=0x32b84e45; S=0x32b84fed; 
@property(readonly, assign, nonatomic) UIView *contentView;	// G=0x32cad47d; @synthesize=_contentView
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x32ba6d11; 
@property(assign, nonatomic) BOOL floating;	// G=0x32f2d35d; S=0x32b8679d; 
@property(assign) CGRect frame;	// G=0x32b8493d; S=0x32b84879; converted property
@property(assign, nonatomic) float maxTitleWidth;	// G=0x32f2d4a1; S=0x32b866f9; @synthesize=_maxTitleWidth
@property(copy, nonatomic) NSString *reuseIdentifier;	// G=0x32c231ed; S=0x32f2d481; @synthesize=_reuseIdentifier
@property(assign, nonatomic) BOOL sectionHeader;	// G=0x32b85501; S=0x32b85435; @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView *tableView;	// G=0x32f2d491; S=0x32b85589; @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// G=0x32b850b1; S=0x32b84d19; 
@property(copy, nonatomic) NSString *text;	// G=0x32f2cf3d; S=0x32b855d1; 
@property(assign, nonatomic) int textAlignment;	// G=0x32f2c771; S=0x32b8559d; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x32ba6cfd; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32f2d415; S=0x32f2d425; 
+ (id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;	// 0x32b85515
- (id)initWithFrame:(CGRect)frame;	// 0x32b847a1
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x32b8474d
- (CGRect)_detailLabelFrame;	// 0x32f2cf69
- (CGSize)_detailTextSizeForWidth:(float)width;	// 0x32f2c785
- (void)_invalidateDetailLabelBackgroundColor;	// 0x32b853fd
- (void)_invalidateLabelBackgroundColor;	// 0x32b853c9
- (id)_label:(BOOL)label;	// 0x32b85651
- (CGRect)_labelFrame;	// 0x32b85ba9
- (id)_scriptingInfo;	// 0x32f2d385
- (void)_setupLabelAppearance;	// 0x32b85731
- (CGSize)_textSizeForWidth:(float)width;	// 0x32b86261
- (void)_updateBackgroundImage;	// 0x32f2d181
- (void)_updateDetailLabelBackgroundColor;	// 0x32f2caa5
- (void)_updateDetailLabelBackgroundColorIfNeeded;	// 0x32f2cd11
- (void)_updateLabelBackgroundColor;	// 0x32b863e1
- (void)_updateLabelBackgroundColorIfNeeeded;	// 0x32b863a5
- (void)_updateLayerContents;	// 0x32b84d9d
- (BOOL)_useDetailText;	// 0x32ba7199
// declared property getter: - (id)backgroundImage;	// 0x32b850d1
// declared property getter: - (id)backgroundView;	// 0x32b84e45
// declared property getter: - (id)contentView;	// 0x32cad47d
- (void)dealloc;	// 0x32cad9ed
// declared property getter: - (id)detailTextLabel;	// 0x32ba6d11
// declared property getter: - (BOOL)floating;	// 0x32f2d35d
// converted property getter: - (CGRect)frame;	// 0x32b8493d
- (void)layoutSubviews;	// 0x32b849d1
// declared property getter: - (float)maxTitleWidth;	// 0x32f2d4a1
- (void)prepareForReuse;	// 0x32c23201
// declared property getter: - (id)reuseIdentifier;	// 0x32c231ed
// declared property getter: - (BOOL)sectionHeader;	// 0x32b85501
- (void)setBackgroundColor:(id)color;	// 0x32f2d36d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32b850c1
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x32b84fed
// declared property setter: - (void)setFloating:(BOOL)floating;	// 0x32b8679d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32b84879
// declared property setter: - (void)setMaxTitleWidth:(float)width;	// 0x32b866f9
- (void)setOpaque:(BOOL)opaque;	// 0x32c200d5
// declared property setter: - (void)setReuseIdentifier:(id)identifier;	// 0x32f2d481
// declared property setter: - (void)setSectionHeader:(BOOL)header;	// 0x32b85435
// declared property setter: - (void)setTableView:(id)view;	// 0x32b85589
// declared property setter: - (void)setTableViewStyle:(int)style;	// 0x32b84d19
// declared property setter: - (void)setText:(id)text;	// 0x32b855d1
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32b8559d
// declared property setter: - (void)setTintColor:(id)color;	// 0x32f2d425
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32ba6d99
// declared property getter: - (id)tableView;	// 0x32f2d491
// declared property getter: - (int)tableViewStyle;	// 0x32b850b1
// declared property getter: - (id)text;	// 0x32f2cf3d
// declared property getter: - (int)textAlignment;	// 0x32f2c771
// declared property getter: - (id)textLabel;	// 0x32ba6cfd
// declared property getter: - (id)tintColor;	// 0x32f2d415
@end
