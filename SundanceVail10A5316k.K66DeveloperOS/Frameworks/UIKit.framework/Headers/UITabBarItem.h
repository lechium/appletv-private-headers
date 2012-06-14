/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIBarItem.h"
#import "UIKit-Structs.h"

@class UIView, NSString, NSSet, UIImage;

@interface UITabBarItem : UIBarItem {
@private
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_selectedImage;	// 28 = 0x1c
	UIImage *_unselectedImage;	// 32 = 0x20
	UIEdgeInsets _imageInsets;	// 36 = 0x24
	NSString *_badgeValue;	// 52 = 0x34
	UIView *_view;	// 56 = 0x38
	int _tag;	// 60 = 0x3c
	id _appearanceStorage;	// 64 = 0x40
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;	// 68 = 0x44
}
@property(assign, nonatomic) SEL action;	// G=0x3019bbc1; S=0x30119b71; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x302e83fd; S=0x302e837d; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x302e7efd; S=0x30118511; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3011bb21; S=0x301181b5; converted property
@property(retain) UIImage *image;	// G=0x30118ef5; S=0x30118725; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x3011be95; S=0x302e7e55; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x30118f49; S=0x302e8411; 
@property(assign) int tag;	// G=0x30157ba9; S=0x30118239; converted property
@property(assign, nonatomic) id target;	// G=0x3019bbd1; S=0x30119b61; 
@property(retain) NSString *title;	// G=0x3011be45; S=0x301184e5; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x302e82fd; S=0x302e81ed; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x30118f9d; S=0x302e847d; 
@property(retain, nonatomic) UIView *view;	// G=0x3011a165; S=0x3011bbc9; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x3011ba01; S=0x302e8355; 
+ (id)_appearanceProxyViewClasses;	// 0x302e8621
- (id)init;	// 0x30118169
- (id)initWithCoder:(id)coder;	// 0x302e79fd
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x30118109
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x301186b9
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x3011a179
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x3011a19d
- (id)_internalTemplateImage;	// 0x3011a6d9
- (id)_internalTitle;	// 0x3011a7ad
- (void)_setInternalTemplateImage:(id)image;	// 0x3011874d
- (void)_setInternalTitle:(id)title;	// 0x301182d1
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x302e84e9
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x3011bd31
- (void)_updateView;	// 0x30118349
// declared property getter: - (SEL)action;	// 0x3019bbc1
// declared property getter: - (BOOL)animatedBadge;	// 0x302e83fd
// declared property getter: - (id)badgeValue;	// 0x302e7efd
- (void)dealloc;	// 0x302e7d8d
- (void)encodeWithCoder:(id)coder;	// 0x302e7be1
- (id)finishedSelectedImage;	// 0x302e8029
- (id)finishedUnselectedImage;	// 0x302e8055
// converted property getter: - (id)image;	// 0x30118ef5
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x3011be95
// converted property getter: - (BOOL)isEnabled;	// 0x3011bb21
- (BOOL)isSystemItem;	// 0x301182b9
- (id)nextResponder;	// 0x302e84c9
// declared property getter: - (id)selectedImage;	// 0x30118f49
// declared property setter: - (void)setAction:(SEL)action;	// 0x30119b71
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x302e837d
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x30118511
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x301181b5
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x302e7f35
// converted property setter: - (void)setImage:(id)image;	// 0x30118725
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x302e7e55
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x302e8411
// converted property setter: - (void)setTag:(int)tag;	// 0x30118239
// declared property setter: - (void)setTarget:(id)target;	// 0x30119b61
// converted property setter: - (void)setTitle:(id)title;	// 0x301184e5
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x302e81ed
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302e807d
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x302e847d
// declared property setter: - (void)setView:(id)view;	// 0x3011bbc9
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x302e8355
- (int)systemItem;	// 0x3011a6c5
// converted property getter: - (int)tag;	// 0x30157ba9
// declared property getter: - (id)target;	// 0x3019bbd1
// converted property getter: - (id)title;	// 0x3011be45
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x302e82fd
- (id)titleTextAttributesForState:(unsigned)state;	// 0x302e81a5
// declared property getter: - (id)unselectedImage;	// 0x30118f9d
// declared property getter: - (id)view;	// 0x3011a165
// declared property getter: - (BOOL)viewIsCustom;	// 0x3011ba01
@end

