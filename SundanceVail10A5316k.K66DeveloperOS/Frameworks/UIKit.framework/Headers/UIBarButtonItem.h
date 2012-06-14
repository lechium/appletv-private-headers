/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIBarItem.h"

@class UIView, UIToolbarButton, UIColor, UIImage, NSSet, NSString;

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
	NSSet *_possibleSystemItems;	// 96 = 0x60
	BOOL _flexible;	// 100 = 0x64
}
@property(assign, nonatomic, setter=_setFlexible:) BOOL _flexible;	// G=0x302efb19; S=0x302efb29; @synthesize
@property(assign, nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;	// G=0x302efbc1; S=0x302efba1; 
@property(assign, nonatomic, setter=_setMaximumWidth:) float _maximumWidth;	// G=0x30128471; S=0x302efb09; @synthesize
@property(assign, nonatomic, setter=_setMinimumWidth:) float _minimumWidth;	// G=0x30128461; S=0x302efaf9; @synthesize
@property(readonly, assign, nonatomic) UIToolbarButton *_toolbarButton;	// G=0x301fc335; 
@property(assign, nonatomic, setter=_setToolbarCharge:) float _toolbarCharge;	// G=0x30126f71; S=0x300db021; @synthesize
@property(assign, nonatomic) SEL action;	// G=0x300df3ed; S=0x300db3c5; @synthesize=_action
@property(retain, nonatomic) UIView *customView;	// G=0x301c3405; S=0x30123fd9; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x300de2f5; S=0x300daf9d; 
@property(retain) UIImage *image;	// G=0x301245a9; S=0x301fc2b9; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x300df3c9; S=0x302ee501; converted property
@property(assign) BOOL isMinibarView;	// G=0x300e5481; S=0x300dec49; converted property
@property(readonly, assign, nonatomic) BOOL isSystemItem;	// G=0x300db52d; 
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(retain) UIImage *landscapeImagePhone;	// G=0x300e5431; S=0x302ee3e1; converted property
@property(assign) UIEdgeInsets landscapeImagePhoneInsets;	// G=0x302ee4dd; S=0x302ee44d; converted property
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;	// G=0x302efb39; S=0x302efb49; 
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;	// G=0x302efb59; S=0x302efb7d; 
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;
@property(copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;	// G=0x302eebe1; S=0x302ee9b1; @synthesize=_possibleSystemItems
@property(copy, nonatomic) NSSet *possibleTitles;	// G=0x300dc381; S=0x300db3d5; 
@property(assign, nonatomic) BOOL selected;	// G=0x302eec19; S=0x301f0505; 
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) int style;	// G=0x300dc351; S=0x300db375; 
@property(readonly, assign, nonatomic) int systemItem;	// G=0x300df039; 
@property(readonly, assign, nonatomic) int systemItem;
@property(assign) int tag;	// G=0x30158bb5; S=0x301f9cb1; converted property
@property(assign, nonatomic) id target;	// G=0x3015e589; S=0x300db3b5; @synthesize=_target
@property(retain, nonatomic) UIColor *tintColor;	// G=0x302ef0b5; S=0x302eeff9; 
@property(retain) NSString *title;	// G=0x300dc301; S=0x300db031; converted property
@property(retain) UIView *view;	// G=0x300dbd55; S=0x300debd1; converted property
@property(assign, nonatomic) float width;	// G=0x300df3fd; S=0x30124101; 
+ (id)_appearanceProxyViewClasses;	// 0x302eec2d
+ (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered usingSystemItem:(int)item usingItemStyle:(int)style10;	// 0x302efd05
+ (Class)classForNavigationButton;	// 0x300dc365
- (id)init;	// 0x300daf3d
- (id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;	// 0x300defa1
- (id)initWithCoder:(id)coder;	// 0x302edcb5
- (id)initWithCustomView:(id)customView;	// 0x30123fa5
- (id)initWithImage:(id)image landscapeImagePhone:(id)phone style:(int)style target:(id)target action:(SEL)action;	// 0x302edc1d
- (id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;	// 0x301fc239
- (id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;	// 0x300daebd
- (id)_appearanceStorage;	// 0x302eecd5
- (void)_applyPositionAdjustmentToSegmentedControl:(id)segmentedControl;	// 0x302efbd9
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x302de62d
// declared property getter: - (BOOL)_flexible;	// 0x302efb19
- (void)_getNavBarEdgeSizeAdjust:(CGSize *)adjust imageInsets:(UIEdgeInsets *)insets landscape:(BOOL)landscape;	// 0x300df255
- (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x300df1c9
- (void)_getToolbarEdgeInsets:(UIEdgeInsets *)insets imageInsets:(UIEdgeInsets *)insets2 glowInsets:(UIEdgeInsets *)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x30125229
// declared property getter: - (BOOL)_imageHasEffects;	// 0x302efbc1
// declared property getter: - (float)_maximumWidth;	// 0x30128471
// declared property getter: - (id)_miniImage;	// 0x302efb39
// declared property getter: - (UIEdgeInsets)_miniImageInsets;	// 0x302efb59
// declared property getter: - (float)_minimumWidth;	// 0x30128461
// declared property getter: - (id)_possibleSystemItems;	// 0x302eebe1
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3015e509
// declared property setter: - (void)_setFlexible:(BOOL)flexible;	// 0x302efb29
// declared property setter: - (void)_setImageHasEffects:(BOOL)effects;	// 0x302efba1
// declared property setter: - (void)_setMaximumWidth:(float)width;	// 0x302efb09
// declared property setter: - (void)_setMiniImage:(id)image;	// 0x302efb49
// declared property setter: - (void)_setMiniImageInsets:(UIEdgeInsets)insets;	// 0x302efb7d
// declared property setter: - (void)_setMinimumWidth:(float)width;	// 0x302efaf9
// declared property setter: - (void)_setPossibleSystemItems:(id)items;	// 0x302ee9b1
- (void)_setSystemItem:(int)item;	// 0x302ee591
// declared property setter: - (void)_setToolbarCharge:(float)charge;	// 0x300db021
- (void)_setWidth:(float)width;	// 0x302efc89
- (BOOL)_shouldBezelSystemButtonImage;	// 0x300df439
// declared property getter: - (id)_toolbarButton;	// 0x301fc335
// declared property getter: - (float)_toolbarCharge;	// 0x30126f71
- (void)_updateView;	// 0x300db0b9
- (float)_width;	// 0x302efcf5
// declared property getter: - (SEL)action;	// 0x300df3ed
- (id)backButtonBackgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x302ef355
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302ef8d1
- (UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302efa95
- (id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x302eefd9
- (id)backgroundImageForState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x302eef45
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302ef55d
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x300dbd65
- (id)createViewForToolbar:(id)toolbar;	// 0x30124909
// declared property getter: - (id)customView;	// 0x301c3405
- (void)dealloc;	// 0x30103e45
- (void)encodeWithCoder:(id)coder;	// 0x302ee02d
// converted property getter: - (id)image;	// 0x301245a9
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x300df3c9
- (BOOL)isCustomViewItem;	// 0x300dbd41
// declared property getter: - (BOOL)isEnabled;	// 0x300de2f5
// converted property getter: - (BOOL)isMinibarView;	// 0x300e5481
// declared property getter: - (BOOL)isSystemItem;	// 0x300db52d
// converted property getter: - (id)landscapeImagePhone;	// 0x300e5431
// converted property getter: - (UIEdgeInsets)landscapeImagePhoneInsets;	// 0x302ee4dd
- (id)nextResponder;	// 0x301d7081
// declared property getter: - (id)possibleTitles;	// 0x300dc381
- (id)scriptingID;	// 0x301c2aa1
// declared property getter: - (BOOL)selected;	// 0x302eec19
// declared property setter: - (void)setAction:(SEL)action;	// 0x300db3c5
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x302ef249
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x302ef795
- (void)setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x302ef921
- (void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x302eefb5
- (void)setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x302eece5
- (void)setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x302ef3b5
// declared property setter: - (void)setCustomView:(id)view;	// 0x30123fd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300daf9d
// converted property setter: - (void)setImage:(id)image;	// 0x301fc2b9
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x302ee501
// converted property setter: - (void)setIsMinibarView:(BOOL)view;	// 0x300dec49
// converted property setter: - (void)setLandscapeImagePhone:(id)phone;	// 0x302ee3e1
// converted property setter: - (void)setLandscapeImagePhoneInsets:(UIEdgeInsets)insets;	// 0x302ee44d
// declared property setter: - (void)setPossibleTitles:(id)titles;	// 0x300db3d5
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x301f0505
// declared property setter: - (void)setStyle:(int)style;	// 0x300db375
// converted property setter: - (void)setTag:(int)tag;	// 0x301f9cb1
// declared property setter: - (void)setTarget:(id)target;	// 0x300db3b5
// declared property setter: - (void)setTintColor:(id)color;	// 0x302eeff9
// converted property setter: - (void)setTitle:(id)title;	// 0x300db031
- (void)setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x302ef5ad
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302ef0d5
// converted property setter: - (void)setView:(id)view;	// 0x300debd1
// declared property setter: - (void)setWidth:(float)width;	// 0x30124101
// declared property getter: - (int)style;	// 0x300dc351
// declared property getter: - (int)systemItem;	// 0x300df039
// converted property getter: - (int)tag;	// 0x30158bb5
// declared property getter: - (id)target;	// 0x3015e589
// declared property getter: - (id)tintColor;	// 0x302ef0b5
// converted property getter: - (id)title;	// 0x300dc301
- (UIOffset)titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302ef731
- (id)titleTextAttributesForState:(unsigned)state;	// 0x302ef1fd
// converted property getter: - (id)view;	// 0x300dbd55
// declared property getter: - (float)width;	// 0x300df3fd
- (id)window;	// 0x301d7061
@end

