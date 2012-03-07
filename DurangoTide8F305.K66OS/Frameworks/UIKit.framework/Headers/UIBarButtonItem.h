/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class NSSet, NSString, UIImage, UIToolbarButton, UIView;

@interface UIBarButtonItem : UIBarItem {
@private
	NSString *_title;	// 4 = 0x4
	NSSet *_possibleTitles;	// 8 = 0x8
	SEL _action;	// 12 = 0xc
	id _target;	// 16 = 0x10
	UIImage *_image;	// 20 = 0x14
	UIImage *_miniImage;	// 24 = 0x18
	UIEdgeInsets _imageInsets;	// 28 = 0x1c
	UIEdgeInsets _miniImageInsets;	// 44 = 0x2c
	float _width;	// 60 = 0x3c
	UIView *_view;	// 64 = 0x40
	int _tag;	// 68 = 0x44
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _barButtonItemFlags;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) UIToolbarButton *_toolbarButton;	// G=0x32187ac9; 
@property(assign, nonatomic) SEL action;	// G=0x31fb02d5; S=0x31faa4a9; @synthesize=_action
@property(retain, nonatomic) UIView *customView;	// G=0x320a1dad; S=0x3200f151; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x31fb397d; S=0x31faa085; 
@property(retain) UIImage *image;	// G=0x320135d9; S=0x32187b55; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x31fb02b9; S=0x320a1a4d; converted property
@property(assign) BOOL isMinibarView;	// G=0x31fb5a19; S=0x31fb3f35; converted property
@property(readonly, assign, nonatomic) BOOL isSystemItem;	// G=0x31faf4dd; 
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;	// G=0x31fcd0b9; S=0x32187b19; 
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;	// G=0x3218785d; S=0x32187879; 
@property(copy, nonatomic) NSSet *possibleTitles;	// G=0x31fb837d; S=0x31fff891; 
@property(assign, nonatomic) BOOL selected;	// G=0x32187829; S=0x320c6961; 
@property(assign, nonatomic) int style;	// G=0x31fb02a5; S=0x31faa45d; 
@property(readonly, assign, nonatomic) int systemItem;	// G=0x3200f2f1; 
@property(assign, nonatomic) int tag;	// G=0x3218783d; S=0x3218784d; @synthesize=_tag
@property(assign, nonatomic) id target;	// G=0x3201dc41; S=0x31faa499; @synthesize=_target
@property(retain) NSString *title;	// G=0x31fb8335; S=0x31faa0f9; converted property
@property(retain) UIView *view;	// G=0x31fae8c5; S=0x31fb3eb9; converted property
@property(assign, nonatomic) float width;	// G=0x31fb0305; S=0x320129c9; 
+ (Class)classForNavigationButton;	// 0x31fb02e5
- (id)init;	// 0x31faa045
- (id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;	// 0x31faa799
- (id)initWithCoder:(id)coder;	// 0x32187c19
- (id)initWithCustomView:(id)customView;	// 0x3200f125
- (id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;	// 0x32187bb5
- (id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;	// 0x31fa9fe1
- (void)_getNavBarEdgeSizeAdjust:(CGSize *)adjust imageInsets:(UIEdgeInsets *)insets landscape:(BOOL)landscape;	// 0x31fb0185
- (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x31fafb6d
- (void)_getToolbarEdgeInsets:(UIEdgeInsets *)insets imageInsets:(UIEdgeInsets *)insets2 glowInsets:(UIEdgeInsets *)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x3200faa5
// declared property getter: - (id)_miniImage;	// 0x31fcd0b9
// declared property getter: - (UIEdgeInsets)_miniImageInsets;	// 0x3218785d
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3201dbc5
// declared property setter: - (void)_setMiniImage:(id)image;	// 0x32187b19
// declared property setter: - (void)_setMiniImageInsets:(UIEdgeInsets)insets;	// 0x32187879
- (void)_setWidth:(float)width;	// 0x32187a6d
- (BOOL)_shouldBezelNavButtonImage;	// 0x31fb0341
// declared property getter: - (id)_toolbarButton;	// 0x32187ac9
- (void)_updateView;	// 0x31faa171
- (float)_width;	// 0x321878a5
// declared property getter: - (SEL)action;	// 0x31fb02d5
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x31faf689
- (id)createViewForToolbar:(id)toolbar;	// 0x3200f30d
// declared property getter: - (id)customView;	// 0x320a1dad
- (void)dealloc;	// 0x31fd41dd
- (void)encodeWithCoder:(id)coder;	// 0x32187e99
// converted property getter: - (id)image;	// 0x320135d9
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x31fb02b9
- (BOOL)isCustomViewItem;	// 0x31faf4c5
// declared property getter: - (BOOL)isEnabled;	// 0x31fb397d
// converted property getter: - (BOOL)isMinibarView;	// 0x31fb5a19
// declared property getter: - (BOOL)isSystemItem;	// 0x31faf4dd
- (id)nextResponder;	// 0x320b07a9
// declared property getter: - (id)possibleTitles;	// 0x31fb837d
- (id)scriptingID;	// 0x321878b5
// declared property getter: - (BOOL)selected;	// 0x32187829
// declared property setter: - (void)setAction:(SEL)action;	// 0x31faa4a9
// declared property setter: - (void)setCustomView:(id)view;	// 0x3200f151
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x31faa085
// converted property setter: - (void)setImage:(id)image;	// 0x32187b55
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x320a1a4d
// converted property setter: - (void)setIsMinibarView:(BOOL)view;	// 0x31fb3f35
// declared property setter: - (void)setPossibleTitles:(id)titles;	// 0x31fff891
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x320c6961
// declared property setter: - (void)setStyle:(int)style;	// 0x31faa45d
// declared property setter: - (void)setTag:(int)tag;	// 0x3218784d
// declared property setter: - (void)setTarget:(id)target;	// 0x31faa499
// converted property setter: - (void)setTitle:(id)title;	// 0x31faa0f9
// converted property setter: - (void)setView:(id)view;	// 0x31fb3eb9
// declared property setter: - (void)setWidth:(float)width;	// 0x320129c9
// declared property getter: - (int)style;	// 0x31fb02a5
// declared property getter: - (int)systemItem;	// 0x3200f2f1
// declared property getter: - (int)tag;	// 0x3218783d
// declared property getter: - (id)target;	// 0x3201dc41
// converted property getter: - (id)title;	// 0x31fb8335
// converted property getter: - (id)view;	// 0x31fae8c5
// declared property getter: - (float)width;	// 0x31fb0305
@end
