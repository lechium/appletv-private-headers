/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"

@class NSString, UILabel, UIFont, ABStyleProvider, ABNamePropertyGroup, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl {
	ABNamePropertyGroup *_namePropertyGroup;	// 72 = 0x48
	int _primaryProperty;	// 76 = 0x4c
	NSString *_primaryPropertyFormattingCountryCode;	// 80 = 0x50
	float _minimumHeight;	// 84 = 0x54
	BOOL _alignOnBottom;	// 88 = 0x58
	UILabel *_headlineLabel;	// 92 = 0x5c
	UILabel *_tagLineLabel;	// 96 = 0x60
	UILabel *_messageLabel;	// 100 = 0x64
	UILabel *_messageDetailLabel;	// 104 = 0x68
	UIFont *_messageFont;	// 108 = 0x6c
	UIFont *_messageDetailFont;	// 112 = 0x70
	ABStyleProvider *_styleProvider;	// 116 = 0x74
	NSString *_customHeadline;	// 120 = 0x78
	NSString *_customTagLine;	// 124 = 0x7c
	NSString *_customMessage;	// 128 = 0x80
	NSString *_customMessageDetail;	// 132 = 0x84
	UIView *_customMessageView;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL alignOnBottom;	// G=0x34fcee2d; S=0x34f79d7d; @synthesize=_alignOnBottom
@property(retain, nonatomic) UIView *customMessageView;	// G=0x34fceead; S=0x34fcdad1; @synthesize=_customMessageView
@property(copy, nonatomic) NSString *headline;	// G=0x34fcee3d; S=0x34fcd9d1; @synthesize=_customHeadline
@property(copy, nonatomic) NSString *message;	// G=0x34fcee65; S=0x34fcda81; @synthesize=_customMessage
@property(copy, nonatomic) NSString *messageDetail;	// G=0x34fcee79; S=0x34fcdabd; @synthesize=_customMessageDetail
@property(retain, nonatomic) UIFont *messageDetailFont;	// G=0x34fcee9d; S=0x34fcdaa9; @synthesize=_messageDetailFont
@property(retain, nonatomic) UIFont *messageFont;	// G=0x34fcee8d; S=0x34fcda95; @synthesize=_messageFont
@property(assign, nonatomic) float minimumHeight;	// G=0x34fcee1d; S=0x34f79d65; @synthesize=_minimumHeight
@property(retain, nonatomic) ABNamePropertyGroup *namePropertyGroup;	// G=0x34fcedc9; S=0x34f79d1d; @synthesize=_namePropertyGroup
@property(assign, nonatomic) int primaryProperty;	// G=0x34fcedd9; S=0x34fcede9; @synthesize=_primaryProperty
@property(copy, nonatomic) NSString *primaryPropertyFormattingCountryCode;	// G=0x34fcedf9; S=0x34fcee0d; @synthesize=_primaryPropertyFormattingCountryCode
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x34f79ecd; S=0x34fced25; @synthesize=_styleProvider
@property(copy, nonatomic) NSString *tagLine;	// G=0x34fcee51; S=0x34fcda29; @synthesize=_customTagLine
- (id)initWithFrame:(CGRect)frame;	// 0x34f79c91
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)pasteboardSelection;	// 0x34fcdbc9
- (void)_appendString:(id)string withFormatKey:(id)formatKey toTagLine:(id)tagLine;	// 0x34fce245
- (id)_copyPrimaryValue;	// 0x34fcdfb1
- (id)_copyTagLine;	// 0x34fce2e5
- (float)_heightForLabelsForWidth:(float)width;	// 0x34fceb7d
- (id)_newLabelWithFont:(id)font numberOfLines:(unsigned)lines;	// 0x34fce6ed
- (void)_setFont:(id)font isDetail:(BOOL)detail;	// 0x34fce9c5
- (void)_setLabel:(id)label highlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x34fcea71
- (void)_setMessageText:(id)text isDetail:(BOOL)detail;	// 0x34fce899
- (void)_setSubviewsHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x34fceaf1
- (void)_updateHeadlineText;	// 0x34fce045
- (void)_updateTagLineText;	// 0x34fce195
- (void)abMenuControllerWillHide;	// 0x34fcdd8d
- (void)abMenuControllerWillShow:(id)abMenuController;	// 0x34fcdd0d
- (BOOL)abShouldShowMenu;	// 0x34fcdd09
// declared property getter: - (BOOL)alignOnBottom;	// 0x34fcee2d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x34fcddbd
- (void)copy:(id)copy;	// 0x34fcddd5
// declared property getter: - (id)customMessageView;	// 0x34fceead
- (void)dealloc;	// 0x34f94949
// declared property getter: - (id)headline;	// 0x34fcee3d
- (void)initializeHeadlineAndTaglineIfNeeded;	// 0x34f79d91
- (void)layoutSubviews;	// 0x34f8b371
// declared property getter: - (id)message;	// 0x34fcee65
// declared property getter: - (id)messageDetail;	// 0x34fcee79
// declared property getter: - (id)messageDetailFont;	// 0x34fcee9d
// declared property getter: - (id)messageFont;	// 0x34fcee8d
// declared property getter: - (float)minimumHeight;	// 0x34fcee1d
- (CGSize)multilineLabel:(id)label sizeThatFits:(CGSize)fits;	// 0x34f7a4ed
// declared property getter: - (id)namePropertyGroup;	// 0x34fcedc9
// declared property getter: - (int)primaryProperty;	// 0x34fcedd9
// declared property getter: - (id)primaryPropertyFormattingCountryCode;	// 0x34fcedf9
- (void)reloadNameDataAnimated:(BOOL)animated;	// 0x34f7a561
// declared property setter: - (void)setAlignOnBottom:(BOOL)bottom;	// 0x34f79d7d
// declared property setter: - (void)setCustomMessageView:(id)view;	// 0x34fcdad1
- (void)setFrame:(CGRect)frame;	// 0x34f79cd9
// declared property setter: - (void)setHeadline:(id)headline;	// 0x34fcd9d1
// declared property setter: - (void)setMessage:(id)message;	// 0x34fcda81
// declared property setter: - (void)setMessageDetail:(id)detail;	// 0x34fcdabd
// declared property setter: - (void)setMessageDetailFont:(id)font;	// 0x34fcdaa9
// declared property setter: - (void)setMessageFont:(id)font;	// 0x34fcda95
// declared property setter: - (void)setMinimumHeight:(float)height;	// 0x34f79d65
// declared property setter: - (void)setNamePropertyGroup:(id)group;	// 0x34f79d1d
// declared property setter: - (void)setPrimaryProperty:(int)property;	// 0x34fcede9
// declared property setter: - (void)setPrimaryPropertyFormattingCountryCode:(id)code;	// 0x34fcee0d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34fced25
// declared property setter: - (void)setTagLine:(id)line;	// 0x34fcda29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34f7a465
// declared property getter: - (id)styleProvider;	// 0x34f79ecd
// declared property getter: - (id)tagLine;	// 0x34fcee51
@end
