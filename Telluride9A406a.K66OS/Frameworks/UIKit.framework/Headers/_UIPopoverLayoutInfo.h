/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
@private
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
}
@property(readonly, assign, nonatomic) unsigned arrowDirection;	// G=0x359dfe99; @synthesize=_arrowDirection
@property(assign, nonatomic) float arrowHeight;	// G=0x359dfd15; S=0x359dfd25; @synthesize=_arrowHeight
@property(assign, nonatomic) BOOL constrainToTargetRect;	// G=0x359dfe45; S=0x359dfe55; @synthesize=_constrainToTargetRect
@property(assign, nonatomic) CGRect containingFrame;	// G=0x359dfd85; S=0x359dfda9; @synthesize=_containingFrame
@property(assign, nonatomic) UIEdgeInsets containingFrameInsets;	// G=0x359dfdc5; S=0x359dfde9; @synthesize=_containingFrameInsets
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x359dfcd5; S=0x359dfcf9; @synthesize=_contentInset
@property(readonly, assign, nonatomic) CGRect frame;	// G=0x359dfe65; @synthesize=_frame
@property(readonly, assign, nonatomic) float offset;	// G=0x359dfe89; @synthesize=_offset
@property(assign, nonatomic) unsigned preferredArrowDirections;	// G=0x359dfd65; S=0x359dfd75; @synthesize=_preferredArrowDirections
@property(assign, nonatomic) CGSize preferredContentSize;	// G=0x359dfd35; S=0x359dfd51; @synthesize=_preferredContentSize
@property(assign, nonatomic) CGRect targetRect;	// G=0x359dfe05; S=0x359dfe29; @synthesize=_targetRect
@property(assign, nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled;	// G=0x359dfea9; S=0x359dfeb9; @synthesize=_updatesEnabled
+ (id)_observationKeys;	// 0x359dea4d
- (id)init;	// 0x359deae5
- (CGSize)_popoverViewSizeForContentSize:(CGSize)contentSize arrowDirection:(unsigned)direction;	// 0x359df0a9
// declared property setter: - (void)_setUpdatesEnabled:(BOOL)enabled;	// 0x359dfeb9
- (void)_updateOutputs;	// 0x359df275
// declared property getter: - (BOOL)_updatesEnabled;	// 0x359dfea9
// declared property getter: - (unsigned)arrowDirection;	// 0x359dfe99
// declared property getter: - (float)arrowHeight;	// 0x359dfd15
// declared property getter: - (BOOL)constrainToTargetRect;	// 0x359dfe45
// declared property getter: - (CGRect)containingFrame;	// 0x359dfd85
// declared property getter: - (UIEdgeInsets)containingFrameInsets;	// 0x359dfdc5
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x359dfcd5
- (id)copyWithZone:(NSZone *)zone;	// 0x359dec21
- (void)dealloc;	// 0x359dedd5
- (id)description;	// 0x359deeb5
// declared property getter: - (CGRect)frame;	// 0x359dfe65
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x359dfca9
// declared property getter: - (float)offset;	// 0x359dfe89
// declared property getter: - (unsigned)preferredArrowDirections;	// 0x359dfd65
// declared property getter: - (CGSize)preferredContentSize;	// 0x359dfd35
// declared property setter: - (void)setArrowHeight:(float)height;	// 0x359dfd25
// declared property setter: - (void)setConstrainToTargetRect:(BOOL)targetRect;	// 0x359dfe55
// declared property setter: - (void)setContainingFrame:(CGRect)frame;	// 0x359dfda9
// declared property setter: - (void)setContainingFrameInsets:(UIEdgeInsets)insets;	// 0x359dfde9
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x359dfcf9
// declared property setter: - (void)setPreferredArrowDirections:(unsigned)directions;	// 0x359dfd75
// declared property setter: - (void)setPreferredContentSize:(CGSize)size;	// 0x359dfd51
// declared property setter: - (void)setTargetRect:(CGRect)rect;	// 0x359dfe29
// declared property getter: - (CGRect)targetRect;	// 0x359dfe05
@end

