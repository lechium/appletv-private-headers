/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
	UIEdgeInsets _contentInset;	// 4 = 0x4
	float _arrowHeight;	// 20 = 0x14
	CGSize _preferredContentSize;	// 24 = 0x18
	unsigned _preferredArrowDirections;	// 32 = 0x20
	CGRect _containingFrame;	// 36 = 0x24
	UIEdgeInsets _containingFrameInsets;	// 52 = 0x34
	CGRect _targetRect;	// 68 = 0x44
	BOOL _constrainToTargetRect;	// 84 = 0x54
	CGRect _frame;	// 88 = 0x58
	float _offset;	// 104 = 0x68
	unsigned _arrowDirection;	// 108 = 0x6c
	BOOL _updatesEnabled;	// 112 = 0x70
	BOOL _preferLandscapeOrientations;	// 113 = 0x71
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x3300e4b9; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x3300e319; S=0x3300e329; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x3300e445; S=0x3300e455; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x3300e385; S=0x3300e3a9; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x3300e3c5; S=0x3300e3e9; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x3300e2d9; S=0x3300e2fd; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x3300e485; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x3300e4a9; @synthesize=_offset
@property(assign, nonatomic) BOOL preferLandscapeOrientations;	// G=0x3300e465; S=0x3300e475; @synthesize=_preferLandscapeOrientations
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x3300e365; S=0x3300e375; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x3300e339; S=0x3300e351; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x3300e405; S=0x3300e429; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x3300e4c9; S=0x3300e4d9; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x3300cfc9
- (id)init;	// 0x3300d065
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x3300d6ad
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x3300e4d9
- (void)_updateOutputs;	// 0x3300d8c9
// declared property getter: - (BOOL)_updatesEnabled;	// 0x3300e4c9
// declared property getter: - (unsigned)arrowDirection;	// 0x3300e4b9
// declared property getter: - (float)arrowHeight;	// 0x3300e319
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x3300e445
// declared property getter: - (CGRect)containingFrame;	// 0x3300e385
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x3300e3c5
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x3300e2d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3300d1bd
- (void)dealloc;	// 0x3300d391
- (id)description;	// 0x3300d48d
// declared property getter: - (CGRect)frame;	// 0x3300e485
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3300e2b5
// declared property getter: - (float)offset;	// 0x3300e4a9
// declared property getter: - (BOOL)preferLandscapeOrientations;	// 0x3300e465
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x3300e365
// declared property getter: - (CGSize)preferredContentSize;	// 0x3300e339
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x3300e329
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x3300e455
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x3300e3a9
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x3300e3e9
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x3300e2fd
// declared property setter: - (void)setPreferLandscapeOrientations:(BOOL)orientations;	// 0x3300e475
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x3300e375
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x3300e351
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x3300e429
// declared property getter: - (CGRect)targetRect;	// 0x3300e405
@end

