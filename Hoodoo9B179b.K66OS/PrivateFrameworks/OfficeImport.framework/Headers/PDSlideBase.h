/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableStyle, OADBackground, NSString, PDAnimation, PDTransition, NSArray;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject {
@private
	NSString *mName;	// 4 = 0x4
	NSArray *mDrawables;	// 8 = 0x8
	OADBackground *mBackground;	// 12 = 0xc
	PDAnimation *mAnimation;	// 16 = 0x10
	PDTransition *mTransition;	// 20 = 0x14
	OADTableStyle *mDefaultTableStyle;	// 24 = 0x18
	unsigned mIsHidden : 1;	// 28 = 0x1c
	unsigned mIsDoneWithContent : 1;	// 28 = 0x1c
}
@property(retain) id background;	// G=0x327be70d; S=0x327bdb2d; converted property
@property(retain) id defaultTableStyle;	// G=0x3294de81; S=0x328e560d; converted property
@property(assign) BOOL isHidden;	// G=0x327bddcd; S=0x328f2b45; converted property
@property(retain) id name;	// G=0x3294de45; S=0x328e5cc9; converted property
@property(retain) id transition;	// G=0x328e5d9d; S=0x3287daa9; converted property
+ (int)inheritedPlaceholderType:(int)type;	// 0x327b8da5
- (id)init;	// 0x3273cf11
- (void)addSlideNumberPlaceholder:(id)placeholder;	// 0x327f8b6d
- (id)animation;	// 0x3294de55
// converted property getter: - (id)background;	// 0x327be70d
- (id)colorMap;	// 0x3294de79
- (id)colorScheme;	// 0x3294de71
- (void)dealloc;	// 0x327c0285
// converted property getter: - (id)defaultTableStyle;	// 0x3294de81
- (id)defaultTheme;	// 0x3294de65
- (void)doneWithContent;	// 0x3294e069
- (id)drawables;	// 0x327bee99
- (id)drawingTheme;	// 0x3294de91
- (id)fontScheme;	// 0x3294de75
- (void)generatePpt9Animations:(id)animations;	// 0x3294de95
- (BOOL)hasPpt10Animations;	// 0x3294e039
- (BOOL)hasPpt9Animations;	// 0x3294df79
// converted property getter: - (BOOL)isHidden;	// 0x327bddcd
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x328f9715
// converted property getter: - (id)name;	// 0x3294de45
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x328f9711
- (id)parentSlideBase;	// 0x3294de6d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x328f970d
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x328f9709
- (id)parentTextStyleForTables;	// 0x3294de69
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x327b7b8d
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index useBaseTypeMatch:(BOOL)match overrideIndex:(BOOL)index4;	// 0x327b7bb1
// converted property setter: - (void)setBackground:(id)background;	// 0x327bdb2d
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x328e560d
- (void)setDrawables:(id)drawables defaultTextListStyle:(id)style;	// 0x327b8461
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x3294e139
// converted property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x328f2b45
// converted property setter: - (void)setName:(id)name;	// 0x328e5cc9
- (void)setPpt9AnimationDataForCacheItem:(id)cacheItem order:(int)order;	// 0x3294e151
// converted property setter: - (void)setTransition:(id)transition;	// 0x3287daa9
- (id)styleMatrix;	// 0x3294de7d
// converted property getter: - (id)transition;	// 0x328e5d9d
@end

