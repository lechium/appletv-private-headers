/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITableHeaderFooterViewLabel, UITableView, UIImage, NSString, UILabel;

@interface UITableHeaderFooterView : UIView {
	UITableHeaderFooterViewLabel *_label;	// 48 = 0x30
	UITableHeaderFooterViewLabel *_detailLabel;	// 52 = 0x34
	UIImage *_backgroundImage;	// 56 = 0x38
	int _tableViewStyle;	// 60 = 0x3c
	BOOL _sectionHeader;	// 64 = 0x40
	CGRect _frame;	// 68 = 0x44
	int _textAlignment;	// 84 = 0x54
	UITableView *_tableView;	// 88 = 0x58
	float _maxTitleWidth;	// 92 = 0x5c
	BOOL _labelBackgroundColorNeedsUpdate;	// 96 = 0x60
	BOOL _detailLabelBackgroundColorNeedsUpdate;	// 97 = 0x61
}
@property(readonly, assign, nonatomic) UILabel *detailTextLabel;	// G=0x33056b45; 
@property(assign) CGRect frame;	// G=0x32ff8c39; S=0x32f57b55; converted property
@property(assign, nonatomic) float maxTitleWidth;	// G=0x3312cc91; S=0x32f6eea5; @synthesize=_maxTitleWidth
@property(assign, nonatomic) BOOL sectionHeader;	// G=0x32f58131; S=0x32f58069; @synthesize=_sectionHeader
@property(assign, nonatomic) UITableView *tableView;	// G=0x3312cc81; S=0x32f581b5; @synthesize=_tableView
@property(assign, nonatomic) int tableViewStyle;	// S=0x32f57ed5; @dynamic
@property(retain, nonatomic) NSString *text;	// G=0x33057599; S=0x32f58201; 
@property(assign, nonatomic) int textAlignment;	// G=0x3312bf21; S=0x32f581c5; 
@property(readonly, assign, nonatomic) UILabel *textLabel;	// G=0x3312c761; 
+ (id)_defaultFontForTableViewStyle:(int)tableViewStyle isSectionHeader:(BOOL)header;	// 0x32f58141
- (id)initWithFrame:(CGRect)frame;	// 0x32f57ae9
- (CGRect)_detailLabelFrame;	// 0x3312c9f5
- (CGSize)_detailTextSizeForWidth:(float)width;	// 0x3312bf31
- (void)_invalidateDetailLabelBackgroundColor;	// 0x32f5802d
- (void)_invalidateLabelBackgroundColor;	// 0x32f57ff1
- (id)_label:(BOOL)label;	// 0x32f58281
- (CGRect)_labelFrame;	// 0x32f5835d
- (id)_scriptingInfo;	// 0x3312cc01
- (CGSize)_textSizeForWidth:(float)width;	// 0x32f5898d
- (void)_updateBackgroundImage;	// 0x32f6ed61
- (void)_updateDetailLabelBackgroundColor;	// 0x3312c219
- (void)_updateDetailLabelBackgroundColorIfNeeded;	// 0x3312c459
- (void)_updateLabelBackgroundColor;	// 0x32f58b01
- (void)_updateLabelBackgroundColorIfNeeeded;	// 0x32f58ac5
- (void)_updateLayerContents;	// 0x32f57f59
- (BOOL)_useDetailText;	// 0x33056fa5
- (void)dealloc;	// 0x32fe2049
// declared property getter: - (id)detailTextLabel;	// 0x33056b45
// converted property getter: - (CGRect)frame;	// 0x32ff8c39
- (void)layoutSubviews;	// 0x32f57c19
// declared property getter: - (float)maxTitleWidth;	// 0x3312cc91
// declared property getter: - (BOOL)sectionHeader;	// 0x32f58131
- (void)setBackgroundColor:(id)color;	// 0x3305708d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x32f57b55
// declared property setter: - (void)setMaxTitleWidth:(float)width;	// 0x32f6eea5
- (void)setOpaque:(BOOL)opaque;	// 0x32f58bc9
// declared property setter: - (void)setSectionHeader:(BOOL)header;	// 0x32f58069
// declared property setter: - (void)setTableView:(id)view;	// 0x32f581b5
// declared property setter: - (void)setTableViewStyle:(int)style;	// 0x32f57ed5
// declared property setter: - (void)setText:(id)text;	// 0x32f58201
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x32f581c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33056bc9
// declared property getter: - (id)tableView;	// 0x3312cc81
// declared property getter: - (id)text;	// 0x33057599
// declared property getter: - (int)textAlignment;	// 0x3312bf21
// declared property getter: - (id)textLabel;	// 0x3312c761
@end

