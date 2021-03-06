/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIColor;

@interface UISnapshotView : UIView {
@private
	CGSize _contentSize;	// 48 = 0x30
	UIEdgeInsets _contentBeyondBounds;	// 56 = 0x38
	UIEdgeInsets _edgePadding;	// 72 = 0x48
	UIEdgeInsets _edgeInsets;	// 88 = 0x58
	CGPoint _contentOffset;	// 104 = 0x68
	UIColor *_edgePaddingColor;	// 112 = 0x70
	UIView *_imageView;	// 116 = 0x74
	NSMutableArray *_edgePaddingViews;	// 120 = 0x78
	CGRect _snapshotRect;	// 124 = 0x7c
	unsigned _disableEdgeAntialiasing : 1;	// 140 = 0x8c
	unsigned _disableVerticalStretch : 1;	// 140 = 0x8c
}
@property(assign, nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset;	// G=0x35639df5; S=0x35639a3d; @synthesize=_contentOffset
@property(readonly, assign, nonatomic, getter=_contentSize) CGSize contentSize;	// G=0x35639dd9; @synthesize=_contentSize
@property(assign, nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;	// G=0x35639a25; S=0x354872b5; 
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x35639da5; S=0x35487301; @synthesize=_edgeInsets
@property(assign, nonatomic) UIEdgeInsets edgePadding;	// G=0x35639d81; S=0x35639999; @synthesize=_edgePadding
@property(retain, nonatomic) UIColor *edgePaddingColor;	// G=0x35639e11; S=0x35639e21; @synthesize=_edgePaddingColor
@property(assign, nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;	// G=0x35639afd; S=0x35639b21; 
@property(readonly, assign, nonatomic, getter=_snapshotView) UIView *snapshotView;	// G=0x35639dc9; @synthesize=_imageView
@property(assign, nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;	// G=0x35639a91; S=0x35639aa9; 
- (id)initWithFrame:(CGRect)frame;	// 0x35487131
- (void)_addEdgePaddingViewInRect:(CGRect)rect;	// 0x35639cc1
// declared property getter: - (CGPoint)_contentOffset;	// 0x35639df5
// declared property getter: - (CGSize)_contentSize;	// 0x35639dd9
- (CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)edgePadding withContentSize:(CGSize)contentSize;	// 0x354880b5
- (void)_drawEdges:(UIEdgeInsets)edges withContentSize:(CGSize)contentSize;	// 0x3548963d
- (UIEdgeInsets)_edgePadding;	// 0x35487d39
- (void)_positionImageView;	// 0x35639c91
// declared property setter: - (void)_setContentOffset:(CGPoint)offset;	// 0x35639a3d
// declared property setter: - (void)_setSnapshotRect:(CGRect)rect;	// 0x35639b21
// declared property getter: - (CGRect)_snapshotRect;	// 0x35639afd
// declared property getter: - (id)_snapshotView;	// 0x35639dc9
- (void)_updateContentsRect;	// 0x3548832d
- (void)captureSnapshotOfView:(id)view withSnapshotType:(int)snapshotType;	// 0x3548738d
- (void)captureSnapshotRect:(CGRect)rect fromView:(id)view withSnapshotType:(int)snapshotType;	// 0x354873e9
- (void)dealloc;	// 0x35489eb9
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x35639da5
// declared property getter: - (UIEdgeInsets)edgePadding;	// 0x35639d81
// declared property getter: - (id)edgePaddingColor;	// 0x35639e11
// declared property getter: - (BOOL)isEdgeAntialiasingEnabled;	// 0x35639a25
// declared property getter: - (BOOL)isVerticalStretchEnabled;	// 0x35639a91
- (void)layoutSubviews;	// 0x35488105
- (void)setBounds:(CGRect)bounds;	// 0x35639b5d
- (void)setContentStretch:(CGRect)stretch;	// 0x35639c25
// declared property setter: - (void)setEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x354872b5
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x35487301
// declared property setter: - (void)setEdgePadding:(UIEdgeInsets)padding;	// 0x35639999
// declared property setter: - (void)setEdgePaddingColor:(id)color;	// 0x35639e21
- (void)setFrame:(CGRect)frame;	// 0x354871ed
// declared property setter: - (void)setVerticalStretchEnabled:(BOOL)enabled;	// 0x35639aa9
@end

