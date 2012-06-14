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
@private
	UICollectionViewLayoutAttributes *_layoutAttributes;	// 84 = 0x54
	NSString *_reuseIdentifier;	// 88 = 0x58
	UICollectionView *_collectionView;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSString *reuseIdentifier;	// G=0x30480545; @synthesize=_reuseIdentifier
- (id)initWithCoder:(id)coder;	// 0x30480131
- (id)_collectionView;	// 0x30480525
- (id)_layoutAttributes;	// 0x304804d1
- (void)_setCollectionView:(id)view;	// 0x30480535
- (void)_setLayoutAttributes:(id)attributes;	// 0x30480271
- (void)_setReuseIdentifier:(id)identifier;	// 0x304804e1
- (void)applyLayoutAttributes:(id)attributes;	// 0x30480265
- (void)dealloc;	// 0x304801fd
- (void)didTransitionFromLayout:(id)layout toLayout:(id)layout2;	// 0x3048026d
- (void)encodeWithCoder:(id)coder;	// 0x304801a1
- (void)prepareForReuse;	// 0x30480261
// declared property getter: - (id)reuseIdentifier;	// 0x30480545
- (void)willTransitionFromLayout:(id)layout toLayout:(id)layout2;	// 0x30480269
@end

