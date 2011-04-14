/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableDictionary, UIKeyboardReturnKeyView, UIKeyboardSpaceKeyView, NSMutableArray, UIClippedImageView, UIImageView;

@interface UIKeyboardSublayout : UIView {
	UIImageView *m_imageView;	// 44 = 0x2c
	UIClippedImageView *m_activeImageView;	// 48 = 0x30
	UIImageView *m_shiftImageView;	// 52 = 0x34
	UIClippedImageView *m_shiftActiveImageView;	// 56 = 0x38
	UIImageView *m_shiftButtonImageView;	// 60 = 0x3c
	UIImageView *m_shiftButtonInactiveImageView;	// 64 = 0x40
	UIImageView *m_autoShiftButtonImageView;	// 68 = 0x44
	UIImageView *m_shiftLockedButtonImageView;	// 72 = 0x48
	NSMutableDictionary *m_compositeImages;	// 76 = 0x4c
	NSMutableDictionary *m_activeKeyViews;	// 80 = 0x50
	UIImageView *m_intlMoreImageView;	// 84 = 0x54
	UIImageView *m_intlSwitchImageView;	// 88 = 0x58
	UIImageView *m_intlSwitchActiveImageView;	// 92 = 0x5c
	UIImageView *m_nonIntlMoreImageView;	// 96 = 0x60
	UIImageView *m_deleteImageView;	// 100 = 0x64
	UIImageView *m_deleteActiveImageView;	// 104 = 0x68
	UIKeyboardSpaceKeyView *m_spaceKeyView;	// 108 = 0x6c
	UIKeyboardReturnKeyView *m_returnKeyView;	// 112 = 0x70
	NSMutableArray *m_extraImageViews;	// 116 = 0x74
	XXStruct_MMLx8B *m_keys;	// 120 = 0x78
	unsigned m_keysCount;	// 124 = 0x7c
	CFDictionaryRef m_replacementKeys;	// 128 = 0x80
	NSMutableDictionary *m_replacementImageViews;	// 132 = 0x84
	BOOL m_usesAutoShift;	// 136 = 0x88
	BOOL m_isShiftKeyPlaneChooser;	// 137 = 0x89
	BOOL m_registersKeyCentroids;	// 138 = 0x8a
	BOOL m_usesKeyCharges;	// 139 = 0x8b
	BOOL m_internationalKeyIsActivated;	// 140 = 0x8c
}
@property(readonly, assign) BOOL internationalKeyIsActivated;	// G=0x3075bdf1; converted property
@property(assign) BOOL isShiftKeyPlaneChooser;	// G=0x3075bacd; S=0x3075babd; converted property
@property(assign) BOOL usesAutoShift;	// G=0x3075baad; S=0x3075ba9d; converted property
@property(assign) BOOL usesKeyCharges;	// G=0x3075baf1; S=0x3075bb01; converted property
+ (id)compositedSublayoutWithFrame:(CGRect)frame compositeImagePaths:(id)paths keys:(const XXStruct_K4qLnD *)keys keysCount:(unsigned)count;	// 0x3075e9e9
+ (id)sublayoutWithFrame:(CGRect)frame imagePaths:(id)paths keys:(const XXStruct_K4qLnD *)keys keysCount:(unsigned)count;	// 0x3075ea51
- (id)initWithFrame:(CGRect)frame compositeImagePaths:(id)paths keys:(const XXStruct_K4qLnD *)keys keysCount:(unsigned)count;	// 0x3075edc9
- (id)initWithFrame:(CGRect)frame imagePaths:(id)paths keys:(const XXStruct_K4qLnD *)keys keysCount:(unsigned)count;	// 0x3075eff5
- (void)activateInternationalKey;	// 0x3075dd19
- (void)addExtraImageView:(id)view;	// 0x3075e209
- (void)addInternationalKeyIfNeeded:(id)needed;	// 0x307625a9
- (void)addPartialLayoutViewWithFrame:(CGRect)frame imageName:(id)name visibleOrigin:(CGPoint)origin;	// 0x3075e181
- (void)addReplacementImageView:(id)view inputMode:(id)mode shift:(BOOL)shift;	// 0x3075e279
- (void)addReplacementKeyboardKey:(XXStruct_K4qLnD *)key forKey:(id)key2;	// 0x3075f439
- (void)addReturnKeyViewIfNeeded;	// 0x3075df51
- (void)addReturnKeyViewIfNeeded:(id)needed;	// 0x3075de41
- (void)addSpaceKeyViewIfNeeded;	// 0x3075e169
- (void)addSpaceKeyViewIfNeeded:(id)needed;	// 0x3075e061
- (void)bringKeySubviewsToFront;	// 0x307603dd
- (id)compositeImageForKey:(id)key;	// 0x3075e319
- (id)createReturnKeyViewWithFrame:(CGRect)frame orientation:(int)orientation style:(int)style;	// 0x3075ddc1
- (id)createSpaceKeyViewWithFrame:(CGRect)frame orientation:(int)orientation style:(int)style;	// 0x3075dfe1
- (void)deactivateInternationalKey;	// 0x3075dca9
- (void)dealloc;	// 0x3075f289
- (BOOL)doesKeyCharging;	// 0x3075badd
- (BOOL)hasInternationalKey;	// 0x3075bddd
- (BOOL)hitInternationalKey:(CGPoint)key;	// 0x30760195
- (id)internationalImageName:(int)name forKeyboard:(id)keyboard orientation:(int)orientation;	// 0x3075bb11
// converted property getter: - (BOOL)internationalKeyIsActivated;	// 0x3075bdf1
// converted property getter: - (BOOL)isShiftKeyPlaneChooser;	// 0x3075bacd
- (void)registerKeyAreaZephyr:(CGPoint)zephyr keyRect:(CGRect)rect keyCode:(int)code keyString:(id)string keyShiftString:(id)string5;	// 0x3075e8d9
- (void)registerKeyCentroids;	// 0x3075e761
- (id)scriptingInfoWithChildren;	// 0x30760579
- (void)setAutoShiftButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e569
- (void)setCompositeImage:(id)image forKey:(id)key;	// 0x3075e339
- (void)setDeleteActiveButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e371
- (void)setDeleteButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e419
// converted property setter: - (void)setIsShiftKeyPlaneChooser:(BOOL)chooser;	// 0x3075babd
- (void)setRegistersKeyCentroids:(BOOL)centroids;	// 0x3075bae1
- (void)setReturnKeyView:(id)view;	// 0x3075dd49
- (void)setShiftButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e6b9
- (void)setShiftInactiveButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e611
- (void)setShiftLockedButtonImage:(id)image frame:(CGRect)frame;	// 0x3075e4c1
- (void)setSpaceKeyView:(id)view;	// 0x3075df69
// converted property setter: - (void)setUsesAutoShift:(BOOL)shift;	// 0x3075ba9d
// converted property setter: - (void)setUsesKeyCharges:(BOOL)charges;	// 0x3075bb01
// converted property getter: - (BOOL)usesAutoShift;	// 0x3075baad
// converted property getter: - (BOOL)usesKeyCharges;	// 0x3075baf1
@end

