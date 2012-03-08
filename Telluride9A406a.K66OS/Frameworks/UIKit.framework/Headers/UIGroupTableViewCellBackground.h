/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIGroupTableViewCellBackground : UIView {
@private
	int _sectionLocation;	// 48 = 0x30
	int _newSectionLocation;	// 52 = 0x34
	int _animationCount;	// 56 = 0x38
	int _selectionStyle;	// 60 = 0x3c
	int _separatorStyle;	// 64 = 0x40
	UIView *_topSeparatorView;	// 68 = 0x44
	UIView *_bottomSeparatorView;	// 72 = 0x48
	struct {
		unsigned nonIndexedTitlesShownFirst : 1;
	} _groupBackgroundFlags;	// 76 = 0x4c
	UIColor *_selectionTintColor;	// 80 = 0x50
}
@property(retain) id backgroundColor;	// G=0x3593886d; S=0x357a1cfd; converted property
@property(assign, nonatomic) int sectionLocation;	// G=0x3574dd5d; S=0x3574bb11; 
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3574cebd; S=0x357a12b1; 
@property(assign, nonatomic) int selectionStyle;	// G=0x3593884d; S=0x357a12f5; 
@property(retain, nonatomic) UIColor *selectionTintColor;	// G=0x3574d28d; S=0x357a13a9; 
@property(assign, nonatomic) int separatorStyle;	// G=0x3593885d; S=0x3574bd95; 
+ (void)_flushCacheOnNotification:(id)notification;	// 0x35737615
+ (void)initialize;	// 0x35729d89
- (id)initWithFrame:(CGRect)frame;	// 0x3574b239
- (id)_backgroundColor;	// 0x3574cef5
- (id)_bottomShadowColor;	// 0x3574cff5
- (id)_cachedImageForKey:(id)key;	// 0x3574d301
- (id)_contentMaskLayer;	// 0x35938871
- (CGRect)_contentRectForContentHeight:(float)contentHeight;	// 0x359386a5
- (CGRect)_contentsCenter:(BOOL)center;	// 0x3574b611
- (CGRect)_contentsRect:(BOOL)rect;	// 0x3574b57d
- (void)_decrementAnimationCount;	// 0x357a1d59
- (id)_fillColor;	// 0x3574d0f5
- (void)_incrementAnimationCount;	// 0x357a1ca5
- (void)_layoutSubviews:(BOOL)subviews;	// 0x3574b419
- (float)_pixelDisplayedImageHeight;	// 0x357a1c5d
- (id)_roundedRectBezierPathInRect:(CGRect)rect withSectionLocation:(int)sectionLocation forBorder:(BOOL)border cornerRadiusAdjustment:(float)adjustment;	// 0x3574dc5d
- (id)_sectionBorderColor;	// 0x3574d199
- (id)_separatorColor;	// 0x3574bdfd
- (void)_setSectionLocationAnimationDidStop;	// 0x357a5895
- (id)_topShadowColor;	// 0x359387a5
- (id)_topShadowViewWithColor:(id)color;	// 0x3574c105
- (void)_updateSeparatorViews;	// 0x3574b695
// converted property getter: - (id)backgroundColor;	// 0x3593886d
- (void)dealloc;	// 0x357a6b51
- (void)displayLayer:(id)layer;	// 0x3574cb29
// declared property getter: - (BOOL)isSelected;	// 0x3574cebd
- (void)layoutSubviews;	// 0x3574b405
// declared property getter: - (int)sectionLocation;	// 0x3574dd5d
// declared property getter: - (int)selectionStyle;	// 0x3593884d
// declared property getter: - (id)selectionTintColor;	// 0x3574d28d
// declared property getter: - (int)separatorStyle;	// 0x3593885d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x357a1cfd
- (void)setFrame:(CGRect)frame;	// 0x3574b289
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x3574bb11
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x3574bb25
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x357a12b1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x357a12f5
// declared property setter: - (void)setSelectionTintColor:(id)color;	// 0x357a13a9
- (void)setSelectionTintColor:(id)color layoutSubviews:(BOOL)subviews;	// 0x357a133d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x3574bd95
@end

