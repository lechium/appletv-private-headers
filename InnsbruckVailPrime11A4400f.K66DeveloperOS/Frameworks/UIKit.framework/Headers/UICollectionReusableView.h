/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView {
	UICollectionViewLayoutAttributes *_layoutAttributes;	// 96 = 0x60
	NSString *_reuseIdentifier;	// 100 = 0x64
	UICollectionView *_collectionView;	// 104 = 0x68
	struct {
		unsigned updateAnimationCount : 4;
	} _reusableViewFlags;	// 108 = 0x6c
}
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x2f8c4531; @synthesize=_reuseIdentifier
- (id)initWithCoder:(id)coder;	// 0x2f8c3f09
- (void)_addUpdateAnimation;	// 0x2f8c43cd
- (void)_clearUpdateAnimation;	// 0x2f8c447d
- (id)_collectionView;	// 0x2f8c4395
- (BOOL)_disableRasterizeInAnimations;	// 0x2f8c452d
- (BOOL)_isInUpdateAnimation;	// 0x2f8c43b5
- (id)_layoutAttributes;	// 0x2f8c4341
- (void)_setBaseLayoutAttributes:(id)attributes;	// 0x2f8c4049
- (void)_setCollectionView:(id)view;	// 0x2f8c43a5
- (void)_setLayoutAttributes:(id)attributes;	// 0x2f8c40e5
- (void)_setReuseIdentifier:(id)identifier;	// 0x2f8c4351
- (void)applyLayoutAttributes:(id)attributes;	// 0x2f8c403d
- (void)dealloc;	// 0x2f8c3fd5
- (void)didTransitionFromLayout:(id)layout toLayout:(id)layout2;	// 0x2f8c4045
- (void)encodeWithCoder:(id)coder;	// 0x2f8c3f79
- (void)prepareForReuse;	// 0x2f8c4039
// declared property getter: - (id)reuseIdentifier;	// 0x2f8c4531
- (void)willTransitionFromLayout:(id)layout toLayout:(id)layout2;	// 0x2f8c4041
@end
