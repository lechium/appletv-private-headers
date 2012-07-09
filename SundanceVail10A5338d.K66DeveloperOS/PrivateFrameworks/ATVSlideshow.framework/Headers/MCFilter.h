/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCObject.h"

@class NSString, NSSet, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSMutableDictionary *mAttributes;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSString *mFilterID;	// 24 = 0x18
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x334c92b5; 
@property(copy) NSDictionary *attributes;	// G=0x334c87b5; S=0x334c88b1; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x334c9405; 
@property(copy) NSString *filterID;	// G=0x334c8c89; S=0x334c8c9d; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x334c8c69; S=0x334c8c79; @synthesize=mIndex
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x334c8cc1
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x334c8271
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x334c89c1
- (void)addAnimationPath:(id)path;	// 0x334c97d9
- (id)animationPathForKey:(id)key;	// 0x334c9509
// declared property getter: - (id)animationPaths;	// 0x334c92b5
- (id)attributeForKey:(id)key;	// 0x334c8509
// declared property getter: - (id)attributes;	// 0x334c87b5
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x334c9405
- (void)demolish;	// 0x334c8369
- (void)demolishAnimationPaths;	// 0x334c8ee5
// declared property getter: - (id)filterID;	// 0x334c8c89
- (id)imprint;	// 0x334c83f1
- (id)imprintsForAnimationPaths;	// 0x334c91b5
// declared property getter: - (unsigned)index;	// 0x334c8c69
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x334c84cd
- (void)removeAllAnimationPaths;	// 0x334c9e15
- (void)removeAnimationPathForKey:(id)key;	// 0x334c9aa9
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x334c8641
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x334c88b1
// declared property setter: - (void)setFilterID:(id)anId;	// 0x334c8c9d
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x334c8c79
@end
