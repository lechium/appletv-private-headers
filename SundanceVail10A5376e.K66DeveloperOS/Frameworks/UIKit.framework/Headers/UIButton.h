/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"
#import "NSCoding.h"

@class UIFont, NSArray, UIImageView, UILabel, NSAttributedString, UIColor, UIImage, NSString;

@interface UIButton : UIControl <NSCoding> {
	CFDictionaryRef _contentLookup;	// 108 = 0x6c
	UIEdgeInsets _contentEdgeInsets;	// 112 = 0x70
	UIEdgeInsets _titleEdgeInsets;	// 128 = 0x80
	UIEdgeInsets _imageEdgeInsets;	// 144 = 0x90
	UIImageView *_backgroundView;	// 160 = 0xa0
	UIImageView *_imageView;	// 164 = 0xa4
	UILabel *_titleView;	// 168 = 0xa8
	BOOL _initialized;	// 172 = 0xac
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 173 = 0xad
	NSArray *_contentConstraints;	// 176 = 0xb0
}
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints;	// G=0x30497b31; S=0x30497b45; @synthesize
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x302fd421; S=0x30239eb5; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x302fd40d; S=0x30239e55; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x30228de5; S=0x3023b4ad; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x30496ca9; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x302385b1; S=0x3023b01d; @dynamic
@property(readonly, assign, nonatomic) NSAttributedString *currentAttributedTitle;	// G=0x302f6129; 
@property(readonly, assign, nonatomic) UIImage *currentBackgroundImage;	// G=0x30496dcd; 
@property(readonly, assign, nonatomic) UIImage *currentImage;	// G=0x302ae9a5; 
@property(readonly, assign, nonatomic) NSString *currentTitle;	// G=0x302f6189; 
@property(readonly, assign, nonatomic) UIColor *currentTitleColor;	// G=0x30496d2d; 
@property(readonly, assign, nonatomic) UIColor *currentTitleShadowColor;	// G=0x30496d7d; 
@property(retain, nonatomic) UIFont *font;	// G=0x30497b55; S=0x3027f681; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x30259bd1; S=0x3023bde9; @dynamic
@property(readonly, assign, nonatomic) UIImageView *imageView;	// G=0x3035e6d1; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x30497b65; S=0x30497b75; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x30496cbd; S=0x3035e65d; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x3038d459; S=0x302c1275; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30497b29; S=0x30497b2d; 
@property(retain) id title;	// G=0x30498075; S=0x30498079; converted property
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x30288a85; S=0x30239185; @dynamic
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x30288085; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x30497b85; S=0x3027f821; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x30287e29
+ (id)_defaultNormalTitleColor;	// 0x30237f01
+ (id)_defaultNormalTitleShadowColor;	// 0x30237fc9
+ (id)buttonWithType:(int)type;	// 0x30287a51
- (id)initWithCoder:(id)coder;	// 0x303b1e19
- (id)initWithFrame:(CGRect)frame;	// 0x30237a7d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x30497bb9
- (id)_archivableContent:(id *)content;	// 0x3049824d
- (id)_attributedTitleForState:(unsigned)state;	// 0x30238b25
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x30238549
- (id)_backgroundView;	// 0x30259c09
- (int)_buttonType;	// 0x30497ba5
- (BOOL)_canHaveTitle;	// 0x30263c15
// declared property getter: - (id)_contentConstraints;	// 0x30497b31
- (id)_contentForState:(unsigned)state;	// 0x30228da5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30496e49
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x30496e1d
- (id)_font;	// 0x30263c45
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x30237ea9
- (id)_imageView;	// 0x30498065
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30263685
- (void)_invalidateContentConstraints;	// 0x304966c1
- (id)_letterpressStyleForState:(unsigned)state;	// 0x30288a2d
- (BOOL)_likelyToHaveTitle;	// 0x30263bad
- (int)_lineBreakMode;	// 0x30263c89
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3049676d
- (id)_scriptingInfo;	// 0x3035f931
- (void)_setAttributedTitle:(id)title forStates:(unsigned)states;	// 0x30498081
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x3023adc1
- (void)_setButtonType:(int)type;	// 0x302881bd
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x30237f51
// declared property setter: - (void)_setContentConstraints:(id)constraints;	// 0x30497b45
- (void)_setFont:(id)font;	// 0x30238121
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x30239d65
- (void)_setLetterpressStyle:(id)style forState:(unsigned)state;	// 0x30497fcd
- (void)_setLineBreakMode:(int)mode;	// 0x3035a2a5
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x302380b5
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x30394341
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x30288949
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x30237f1d
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x30239281
- (id)_setupBackgroundView;	// 0x302591b5
- (void)_setupImageView;	// 0x30259619
- (void)_setupTitleView;	// 0x30238231
- (id)_shadowColorForState:(unsigned)state;	// 0x302889d5
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x303b3699
- (void)_titleAttributesChanged;	// 0x3023912d
- (id)_titleColorForState:(unsigned)state;	// 0x3028897d
- (id)_titleForState:(unsigned)state;	// 0x30238acd
- (CGRect)_titleRectForContentRect:(CGRect)contentRect calculatePositionForEmptyTitle:(BOOL)emptyTitle;	// 0x3023861d
- (CGSize)_titleShadowOffset;	// 0x30498029
- (id)_titleView;	// 0x303b7551
- (id)_viewForBaselineLayout;	// 0x30496e75
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x302fd421
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x302fd40d
- (UIEdgeInsets)alignmentRectInsets;	// 0x3023bb5d
- (id)attributedTitleForState:(unsigned)state;	// 0x302f6179
// converted property getter: - (BOOL)autosizesToFit;	// 0x30228de5
- (id)backgroundImageForState:(unsigned)state;	// 0x30238535
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x302592ad
// declared property getter: - (int)buttonType;	// 0x30496ca9
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x302385b1
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x30238465
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x30497ef5
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x30497c01
// declared property getter: - (id)currentAttributedTitle;	// 0x302f6129
// declared property getter: - (id)currentBackgroundImage;	// 0x30496dcd
// declared property getter: - (id)currentImage;	// 0x302ae9a5
// declared property getter: - (id)currentTitle;	// 0x302f6189
// declared property getter: - (id)currentTitleColor;	// 0x30496d2d
// declared property getter: - (id)currentTitleShadowColor;	// 0x30496d7d
- (void)dealloc;	// 0x302414a9
- (unsigned long long)defaultAccessibilityTraits;	// 0x304afb1d
- (void)encodeWithCoder:(id)coder;	// 0x3049683d
// declared property getter: - (id)font;	// 0x30497b55
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x3035baf1
- (id)image;	// 0x3049807d
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x30259bd1
- (id)imageForState:(unsigned)state;	// 0x30237e95
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x30259789
// declared property getter: - (id)imageView;	// 0x3035e6d1
- (void)invalidateIntrinsicContentSize;	// 0x3049672d
- (BOOL)isAccessibilityElementByDefault;	// 0x304afb19
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x304afb5d
- (void)layoutSubviews;	// 0x30258ac9
// declared property getter: - (int)lineBreakMode;	// 0x30497b65
- (CGPoint)pressFeedbackPosition;	// 0x30259c39
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x30496cbd
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x30239eb5
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x30239e55
- (void)setAttributedTitle:(id)title forState:(unsigned)state;	// 0x303950c9
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x3023b4ad
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x3027f5f9
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x3023ad69
- (void)setBounds:(CGRect)bounds;	// 0x30288b35
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x3023b01d
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x30239d99
- (void)setContentVerticalAlignment:(int)alignment;	// 0x30496cd1
- (void)setDisabledDimsImage:(BOOL)image;	// 0x30239f15
- (void)setEnabled:(BOOL)enabled;	// 0x3023b429
// declared property setter: - (void)setFont:(id)font;	// 0x3027f681
- (void)setFrame:(CGRect)frame;	// 0x30237dc5
- (void)setHighlighted:(BOOL)highlighted;	// 0x302a2025
- (void)setImage:(id)image forState:(unsigned)state;	// 0x30228df9
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x30239d0d
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x3023bde9
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x30497b75
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x3035e65d
- (void)setSelected:(BOOL)selected;	// 0x3035e74d
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x30497bf1
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x302c1275
// declared property setter: - (void)setTintColor:(id)color;	// 0x30497b2d
// converted property setter: - (void)setTitle:(id)title;	// 0x30498079
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x30228bd5
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x302888f1
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x3023b1e5
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x3035a275
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x30239185
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x3027f7c5
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x30239251
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x3027f821
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x3038d459
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30263659
// declared property getter: - (id)tintColor;	// 0x30497b29
// converted property getter: - (id)title;	// 0x30498075
- (id)titleColorForState:(unsigned)state;	// 0x3035e73d
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x30288a85
- (id)titleForState:(unsigned)state;	// 0x3023bb4d
// declared property getter: - (id)titleLabel;	// 0x30288085
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x302385d5
- (id)titleShadowColorForState:(unsigned)state;	// 0x303b7561
// declared property getter: - (CGSize)titleShadowOffset;	// 0x30497b85
- (void)updateConstraints;	// 0x30496f7d
- (id)viewForBaselineLayout;	// 0x30497ab5
@end
