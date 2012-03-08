/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIBarItem.h"

@class NSString, UIToolbarButton, UIColor, UIImage, UIView, NSSet;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
@private
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_landscapeImagePhone;	// 28 = 0x1c
	UIEdgeInsets _imageInsets;	// 32 = 0x20
	UIEdgeInsets _landscapeImagePhoneInsets;	// 48 = 0x30
	float _width;	// 64 = 0x40
	UIView *_view;	// 68 = 0x44
	int _tag;	// 72 = 0x48
	id _appearanceStorage;	// 76 = 0x4c
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	} _barButtonItemFlags;	// 80 = 0x50
	float _toolbarCharge;	// 84 = 0x54
	float _minimumWidth;	// 88 = 0x58
	float _maximumWidth;	// 92 = 0x5c
}
@property(assign, nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;	// G=0x331419e9; S=0x331419c9; 
@property(assign, nonatomic, setter=_setMaximumWidth:) float _maximumWidth;	// G=0x32f609f1; S=0x33141951; @synthesize
@property(assign, nonatomic, setter=_setMinimumWidth:) float _minimumWidth;	// G=0x32f609e1; S=0x33141941; @synthesize
@property(readonly, assign, nonatomic) UIToolbarButton *_toolbarButton;	// G=0x330411e9; 
@property(assign, nonatomic, setter=_setToolbarCharge:) float _toolbarCharge;	// G=0x32f5f5a1; S=0x32f0dd01; @synthesize
@property(assign, nonatomic) SEL action;	// G=0x32f12d19; S=0x32f0e0cd; @synthesize=_action
@property(retain, nonatomic) UIView *customView;	// G=0x33004861; S=0x32f5c195; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x32f11361; S=0x32f0dc85; 
@property(retain) UIImage *image;	// G=0x32f5c701; S=0x3304116d; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x32f12cf5; S=0x33140aad; converted property
@property(assign) BOOL isMinibarView;	// G=0x32f19639; S=0x32f11f81; converted property
@property(readonly, assign, nonatomic) BOOL isSystemItem;	// G=0x32f0e22d; 
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(retain) UIImage *landscapeImagePhone;	// G=0x32f195e9; S=0x33140991; converted property
@property(assign) UIEdgeInsets landscapeImagePhoneInsets;	// G=0x33140a89; S=0x331409fd; converted property
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;	// G=0x33141961; S=0x33141971; 
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;	// G=0x33141981; S=0x331419a5; 
@property(copy, nonatomic) NSSet *possibleTitles;	// G=0x32f0f129; S=0x32f0e0dd; 
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) BOOL selected;	// G=0x33140b39; S=0x330352e1; 
@property(assign, nonatomic) int style;	// G=0x32f0f0f9; S=0x32f0e075; 
@property(readonly, assign, nonatomic) int systemItem;
@property(readonly, assign, nonatomic) int systemItem;	// G=0x32f12389; 
@property(assign) int tag;	// G=0x32f95ea9; S=0x3303eb91; converted property
@property(assign, nonatomic) id target;	// G=0x32f9b775; S=0x32f0e0bd; @synthesize=_target
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33140ea1; S=0x33140ddd; 
@property(retain) NSString *title;	// G=0x32f0f0a9; S=0x32f0dd11; converted property
@property(retain) UIView *view;	// G=0x32f0eb39; S=0x32f11efd; converted property
@property(assign, nonatomic) float width;	// G=0x32f12d29; S=0x32f5c285; 
+ (id)_appearanceProxyViewClasses;	// 0x33140b4d
+ (Class)classForNavigationButton;	// 0x32f0f10d
- (id)init;	// 0x32f0dc25
- (id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;	// 0x32f122f9
- (id)initWithCoder:(id)coder;	// 0x33140291
- (id)initWithCustomView:(id)customView;	// 0x32f5c161
- (id)initWithImage:(id)image landscapeImagePhone:(id)phone style:(int)style target:(id)target action:(SEL)action;	// 0x331401f9
- (id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;	// 0x330410ed
- (id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;	// 0x32f0dba5
- (id)_appearanceStorage;	// 0x33140bf5
- (void)_applyPositionAdjustmentToSegmentedControl:(id)segmentedControl;	// 0x33141a01
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x33132e25
- (void)_getNavBarEdgeSizeAdjust:(CGSize *)adjust imageInsets:(UIEdgeInsets *)insets landscape:(BOOL)landscape;	// 0x32f12bcd
- (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x32f12615
- (void)_getToolbarEdgeInsets:(UIEdgeInsets *)insets imageInsets:(UIEdgeInsets *)insets2 glowInsets:(UIEdgeInsets *)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x32f5d321
// declared property getter: - (BOOL)_imageHasEffects;	// 0x331419e9
// declared property getter: - (float)_maximumWidth;	// 0x32f609f1
// declared property getter: - (id)_miniImage;	// 0x33141961
// declared property getter: - (UIEdgeInsets)_miniImageInsets;	// 0x33141981
// declared property getter: - (float)_minimumWidth;	// 0x32f609e1
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x32f9b6f5
// declared property setter: - (void)_setImageHasEffects:(BOOL)effects;	// 0x331419c9
// declared property setter: - (void)_setMaximumWidth:(float)width;	// 0x33141951
// declared property setter: - (void)_setMiniImage:(id)image;	// 0x33141971
// declared property setter: - (void)_setMiniImageInsets:(UIEdgeInsets)insets;	// 0x331419a5
// declared property setter: - (void)_setMinimumWidth:(float)width;	// 0x33141941
// declared property setter: - (void)_setToolbarCharge:(float)charge;	// 0x32f0dd01
- (void)_setWidth:(float)width;	// 0x33141aa9
- (BOOL)_shouldBezelSystemButtonImage;	// 0x32f12d69
// declared property getter: - (id)_toolbarButton;	// 0x330411e9
// declared property getter: - (float)_toolbarCharge;	// 0x32f5f5a1
- (void)_updateView;	// 0x32f0dd99
- (float)_width;	// 0x33141b21
// declared property getter: - (SEL)action;	// 0x32f12d19
- (id)backButtonBackgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x33141151
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33141701
- (UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x331418dd
- (id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x33140d79
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33141369
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x32f0eb49
- (id)createViewForToolbar:(id)toolbar;	// 0x32f5ca11
// declared property getter: - (id)customView;	// 0x33004861
- (void)dealloc;	// 0x32f39759
- (void)encodeWithCoder:(id)coder;	// 0x331405d9
// converted property getter: - (id)image;	// 0x32f5c701
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x32f12cf5
- (BOOL)isCustomViewItem;	// 0x32f0eb25
// declared property getter: - (BOOL)isEnabled;	// 0x32f11361
// converted property getter: - (BOOL)isMinibarView;	// 0x32f19639
// declared property getter: - (BOOL)isSystemItem;	// 0x32f0e22d
// converted property getter: - (id)landscapeImagePhone;	// 0x32f195e9
// converted property getter: - (UIEdgeInsets)landscapeImagePhoneInsets;	// 0x33140a89
- (id)nextResponder;	// 0x3301a76d
// declared property getter: - (id)possibleTitles;	// 0x32f0f129
- (id)scriptingID;	// 0x33003f45
// declared property getter: - (BOOL)selected;	// 0x33140b39
// declared property setter: - (void)setAction:(SEL)action;	// 0x32f0e0cd
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33141031
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x331415b9
- (void)setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33141759
- (void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33140c05
- (void)setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x331411b5
// declared property setter: - (void)setCustomView:(id)view;	// 0x32f5c195
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32f0dc85
// converted property setter: - (void)setImage:(id)image;	// 0x3304116d
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x33140aad
// converted property setter: - (void)setIsMinibarView:(BOOL)view;	// 0x32f11f81
// converted property setter: - (void)setLandscapeImagePhone:(id)phone;	// 0x33140991
// converted property setter: - (void)setLandscapeImagePhoneInsets:(UIEdgeInsets)insets;	// 0x331409fd
// declared property setter: - (void)setPossibleTitles:(id)titles;	// 0x32f0e0dd
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x330352e1
// declared property setter: - (void)setStyle:(int)style;	// 0x32f0e075
// converted property setter: - (void)setTag:(int)tag;	// 0x3303eb91
// declared property setter: - (void)setTarget:(id)target;	// 0x32f0e0bd
// declared property setter: - (void)setTintColor:(id)color;	// 0x33140ddd
// converted property setter: - (void)setTitle:(id)title;	// 0x32f0dd11
- (void)setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x331413c1
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33140ec1
// converted property setter: - (void)setView:(id)view;	// 0x32f11efd
// declared property setter: - (void)setWidth:(float)width;	// 0x32f5c285
// declared property getter: - (int)style;	// 0x32f0f0f9
// declared property getter: - (int)systemItem;	// 0x32f12389
// converted property getter: - (int)tag;	// 0x32f95ea9
// declared property getter: - (id)target;	// 0x32f9b775
// declared property getter: - (id)tintColor;	// 0x33140ea1
// converted property getter: - (id)title;	// 0x32f0f0a9
- (UIOffset)titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33141555
- (id)titleTextAttributesForState:(unsigned)state;	// 0x33140fe5
// converted property getter: - (id)view;	// 0x32f0eb39
// declared property getter: - (float)width;	// 0x32f12d29
- (id)window;	// 0x3301a74d
@end

