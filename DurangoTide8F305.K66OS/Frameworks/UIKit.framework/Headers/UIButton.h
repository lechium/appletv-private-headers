/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIColor, UIImage, UIFont, UILabel, NSString, UIImageView;

@interface UIButton : UIControl <NSCoding> {
@private
	CFDictionaryRef _contentLookup;	// 68 = 0x44
	UIEdgeInsets _contentEdgeInsets;	// 72 = 0x48
	UIEdgeInsets _titleEdgeInsets;	// 88 = 0x58
	UIEdgeInsets _imageEdgeInsets;	// 104 = 0x68
	UIImageView *_backgroundView;	// 120 = 0x78
	UIImageView *_imageView;	// 124 = 0x7c
	UILabel *_titleView;	// 128 = 0x80
	BOOL _initialized;	// 132 = 0x84
	struct {
		unsigned reversesTitleShadowWhenHighlighted : 1;
		unsigned adjustsImageWhenHighlighted : 1;
		unsigned adjustsImageWhenDisabled : 1;
		unsigned autosizeToFit : 1;
		unsigned disabledDimsImage : 1;
		unsigned showsTouchWhenHighlighted : 1;
		unsigned buttonType : 8;
		unsigned shouldHandleScrollerMouseEvent : 1;
	} _buttonFlags;	// 133 = 0x85
}
@property(assign, nonatomic) BOOL adjustsImageWhenDisabled;	// G=0x3201dbb1; S=0x31fb2c71; @dynamic
@property(assign, nonatomic) BOOL adjustsImageWhenHighlighted;	// G=0x3201db9d; S=0x31fb2c1d; @dynamic
@property(assign) BOOL autosizesToFit;	// G=0x31fb2429; S=0x31fb3a0d; converted property
@property(readonly, assign, nonatomic) int buttonType;	// G=0x32174031; 
@property(assign, nonatomic) UIEdgeInsets contentEdgeInsets;	// G=0x31fb1219; S=0x31fb387d; @dynamic
@property(readonly, retain, nonatomic) UIImage *currentBackgroundImage;	// G=0x32174371; 
@property(readonly, retain, nonatomic) UIImage *currentImage;	// G=0x3207bb45; 
@property(readonly, retain, nonatomic) NSString *currentTitle;	// G=0x3207bafd; 
@property(readonly, retain, nonatomic) UIColor *currentTitleColor;	// G=0x32174401; 
@property(readonly, retain, nonatomic) UIColor *currentTitleShadowColor;	// G=0x321743b9; 
@property(retain, nonatomic) UIFont *font;	// G=0x320c4671; S=0x31ffee1d; 
@property(assign, nonatomic) UIEdgeInsets imageEdgeInsets;	// G=0x31fb6939; S=0x31fb3da5; @dynamic
@property(readonly, retain, nonatomic) UIImageView *imageView;	// G=0x32174471; 
@property(assign, nonatomic) int lineBreakMode;	// G=0x3217435d; S=0x32174349; 
@property(assign, nonatomic) BOOL reversesTitleShadowWhenHighlighted;	// G=0x32174035; S=0x321744c5; @dynamic
@property(assign, nonatomic) BOOL showsTouchWhenHighlighted;	// G=0x32071649; S=0x3206de71; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32174049; S=0x3217404d; @dynamic
@property(assign, nonatomic) UIEdgeInsets titleEdgeInsets;	// G=0x31fcd169; S=0x320c4985; @dynamic
@property(readonly, retain, nonatomic) UILabel *titleLabel;	// G=0x3206c561; 
@property(assign, nonatomic) CGSize titleShadowOffset;	// G=0x32174f15; S=0x31fff001; 
+ (id)_defaultContentForType:(int)type andState:(unsigned)state;	// 0x31ffe991
+ (id)buttonWithType:(int)type;	// 0x31ffe465
- (id)initWithCoder:(id)coder;	// 0x32174f2d
- (id)initWithFrame:(CGRect)frame;	// 0x31fb07c5
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32174311
- (id)_archivableContent:(id *)content;	// 0x3217571d
- (id)_backgroundForState:(unsigned)state usesBackgroundForNormalState:(BOOL *)normalState;	// 0x31fb4a25
- (int)_buttonType;	// 0x320c5299
- (BOOL)_canHaveTitle;	// 0x3206c5a9
- (id)_contentForState:(unsigned)state;	// 0x31f9315d
- (id)_font;	// 0x31fcd1ad
- (id)_imageForState:(unsigned)state usesImageForNormalState:(BOOL *)normalState;	// 0x31f93109
- (int)_lineBreakMode;	// 0x31fcd185
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32174725
- (id)_scriptingInfo;	// 0x3207ba0d
- (void)_setBackground:(id)background forStates:(unsigned)states;	// 0x31fb3531
- (void)_setButtonType:(int)type;	// 0x31ffea29
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x31fb0cf9
- (void)_setFont:(id)font;	// 0x31fb0ee1
- (void)_setImage:(id)image forStates:(unsigned)states;	// 0x31fb2a45
- (void)_setLineBreakMode:(int)mode;	// 0x320c461d
- (void)_setShadowColor:(id)color forStates:(unsigned)states;	// 0x31fb0d8d
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)_set;	// 0x320c3a85
- (void)_setTitle:(id)title forStates:(unsigned)states;	// 0x31fb8475
- (void)_setTitleColor:(id)color forStates:(unsigned)states;	// 0x31fb0bf1
- (void)_setTitleShadowOffset:(CGSize)offset;	// 0x31fb2465
- (id)_setupBackgroundView;	// 0x31fb5fa9
- (void)_setupImageView;	// 0x31fb6481
- (void)_setupTitleView;	// 0x31fb0f99
- (id)_shadowColorForState:(unsigned)state;	// 0x31fcd119
- (void)_takeContentFromArchivableContent:(id)archivableContent overrides:(id)overrides;	// 0x32175575
- (void)_titleAttributesChanged;	// 0x31fb23ed
- (id)_titleColorForState:(unsigned)state;	// 0x31fcd0c9
- (id)_titleForState:(unsigned)state;	// 0x31fb1589
- (CGSize)_titleShadowOffset;	// 0x32174c21
// declared property getter: - (BOOL)adjustsImageWhenDisabled;	// 0x3201dbb1
// declared property getter: - (BOOL)adjustsImageWhenHighlighted;	// 0x3201db9d
// converted property getter: - (BOOL)autosizesToFit;	// 0x31fb2429
- (id)backgroundImageForState:(unsigned)state;	// 0x31fb4a0d
- (CGRect)backgroundRectForBounds:(CGRect)bounds;	// 0x31fb60b9
// declared property getter: - (int)buttonType;	// 0x32174031
// declared property getter: - (UIEdgeInsets)contentEdgeInsets;	// 0x31fb1219
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x31fb11d1
- (void)crossfadeAnimationDidStop:(id)crossfadeAnimation finished:(id)finished context:(void *)context;	// 0x3217422d
- (void)crossfadeToImage:(id)image forState:(unsigned)state;	// 0x32174c6d
// declared property getter: - (id)currentBackgroundImage;	// 0x32174371
// declared property getter: - (id)currentImage;	// 0x3207bb45
// declared property getter: - (id)currentTitle;	// 0x3207bafd
// declared property getter: - (id)currentTitleColor;	// 0x32174401
// declared property getter: - (id)currentTitleShadowColor;	// 0x321743b9
- (void)dealloc;	// 0x32047869
- (unsigned long long)defaultAccessibilityTraits;	// 0x3218c585
- (void)encodeWithCoder:(id)coder;	// 0x32175939
// declared property getter: - (id)font;	// 0x320c4671
// declared property getter: - (UIEdgeInsets)imageEdgeInsets;	// 0x31fb6939
- (id)imageForState:(unsigned)state;	// 0x31f930f1
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x31fb65e9
// declared property getter: - (id)imageView;	// 0x32174471
- (BOOL)isAccessibilityElementByDefault;	// 0x3218c3b1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3b5
- (void)layoutSubviews;	// 0x31fb5a31
// declared property getter: - (int)lineBreakMode;	// 0x3217435d
- (CGPoint)pressFeedbackPosition;	// 0x31fb6a31
// declared property getter: - (BOOL)reversesTitleShadowWhenHighlighted;	// 0x32174035
// declared property setter: - (void)setAdjustsImageWhenDisabled:(BOOL)disabled;	// 0x31fb2c71
// declared property setter: - (void)setAdjustsImageWhenHighlighted:(BOOL)highlighted;	// 0x31fb2c1d
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x31fb3a0d
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x31ffed0d
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x31fb34e5
- (void)setBounds:(CGRect)bounds;	// 0x31fb8615
// declared property setter: - (void)setContentEdgeInsets:(UIEdgeInsets)insets;	// 0x31fb387d
- (void)setContentHorizontalAlignment:(int)alignment;	// 0x31fb2b75
- (void)setDisabledDimsImage:(BOOL)image;	// 0x31fb2cc5
- (void)setEnabled:(BOOL)enabled;	// 0x31fb3991
// declared property setter: - (void)setFont:(id)font;	// 0x31ffee1d
- (void)setFrame:(CGRect)frame;	// 0x31fb0b31
- (void)setHighlighted:(BOOL)highlighted;	// 0x31ff524d
- (void)setImage:(id)image forState:(unsigned)state;	// 0x31ff089d
- (void)setImage:(id)image forStates:(unsigned)states;	// 0x31fb29f9
// declared property setter: - (void)setImageEdgeInsets:(UIEdgeInsets)insets;	// 0x31fb3da5
// declared property setter: - (void)setLineBreakMode:(int)mode;	// 0x32174349
// declared property setter: - (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;	// 0x321744c5
- (void)setSelected:(BOOL)selected;	// 0x320715c9
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x321742f9
// declared property setter: - (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;	// 0x3206de71
// declared property setter: - (void)setTintColor:(id)color;	// 0x3217404d
- (void)setTitle:(id)title forState:(unsigned)state;	// 0x31fff015
- (void)setTitle:(id)title forStates:(unsigned)states;	// 0x31fb8429
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x31ffee31
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x31fb3955
// declared property setter: - (void)setTitleEdgeInsets:(UIEdgeInsets)insets;	// 0x320c4985
- (void)setTitleShadowColor:(id)color forState:(unsigned)state;	// 0x31ffef19
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x31fb243d
// declared property setter: - (void)setTitleShadowOffset:(CGSize)offset;	// 0x31fff001
// declared property getter: - (BOOL)showsTouchWhenHighlighted;	// 0x32071649
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31feacad
// declared property getter: - (id)tintColor;	// 0x32174049
- (id)titleColorForState:(unsigned)state;	// 0x3217445d
// declared property getter: - (UIEdgeInsets)titleEdgeInsets;	// 0x31fcd169
- (id)titleForState:(unsigned)state;	// 0x31fb3c19
// declared property getter: - (id)titleLabel;	// 0x3206c561
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x31fb1235
- (id)titleShadowColorForState:(unsigned)state;	// 0x32174449
// declared property getter: - (CGSize)titleShadowOffset;	// 0x32174f15
@end

