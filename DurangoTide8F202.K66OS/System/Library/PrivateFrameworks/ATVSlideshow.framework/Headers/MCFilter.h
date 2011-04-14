/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPathSupport.h"
#import "MCObject.h"

@class MCSlide, NSDictionary, NSSet, NSMutableSet, NSString, MCPlug, NSMutableDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
	NSString *mFilterID;	// 12 = 0xc
	NSMutableDictionary *mAttributes;	// 16 = 0x10
	unsigned mIndex;	// 20 = 0x14
	NSMutableSet *mAnimationPaths;	// 24 = 0x18
	MCPlug *mPlugIfPlugFilter;	// 28 = 0x1c
	MCSlide *mSlideIfSlideFilter;	// 32 = 0x20
}
@property(readonly, assign) NSSet *animationPaths;	// G=0x31548899; 
@property(copy) NSDictionary *attributes;	// G=0x315481bd; S=0x315482ad; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x315489e5; 
@property(copy) NSString *filterID;	// G=0x3154840d; S=0x31548425; @synthesize=mFilterID
@property(assign, nonatomic) unsigned index;	// G=0x315483ed; S=0x315483fd; @synthesize=mIndex
@property(assign) MCPlug *plugIfPlugFilter;	// G=0x31548451; S=0x31548461; @synthesize=mPlugIfPlugFilter
@property(assign) MCSlide *slideIfSlideFilter;	// G=0x31548471; S=0x31548481; @synthesize=mSlideIfSlideFilter
- (id)init;	// 0x31547c05
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x31548491
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31547c71
- (id)animationPathForKey:(id)key;	// 0x31548e21
- (id)animationPathForKey:(id)key createIfNeeded:(BOOL)needed;	// 0x31548ac5
// declared property getter: - (id)animationPaths;	// 0x31548899
- (id)attributeForKey:(id)key;	// 0x31547f05
// declared property getter: - (id)attributes;	// 0x315481bd
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x315489e5
- (void)demolish;	// 0x31547d65
- (void)demolishAnimationPaths;	// 0x315485c1
// declared property getter: - (id)filterID;	// 0x3154840d
- (id)imprint;	// 0x31547e09
- (id)imprintsForAnimationPaths;	// 0x315487b1
// declared property getter: - (unsigned)index;	// 0x315483ed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31547ed1
// declared property getter: - (id)plugIfPlugFilter;	// 0x31548451
- (void)removeAllAnimationPaths;	// 0x315490fd
- (void)removeAnimationPathForKey:(id)key;	// 0x31548e39
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3154801d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x315482ad
// declared property setter: - (void)setFilterID:(id)anId;	// 0x31548425
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x315483fd
// declared property setter: - (void)setPlugIfPlugFilter:(id)filter;	// 0x31548461
// declared property setter: - (void)setSlideIfSlideFilter:(id)filter;	// 0x31548481
// declared property getter: - (id)slideIfSlideFilter;	// 0x31548471
@end

