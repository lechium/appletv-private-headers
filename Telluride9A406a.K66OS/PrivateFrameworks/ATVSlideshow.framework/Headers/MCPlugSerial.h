/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class NSDictionary, NSMutableDictionary, NSString, MCContainerSerializer;

@interface MCPlugSerial : MCPlug {
	unsigned mIndex;	// 60 = 0x3c
	NSString *mTransitionID;	// 64 = 0x40
	double mTransitionDuration;	// 68 = 0x44
	NSMutableDictionary *mTransitionAttributes;	// 76 = 0x4c
	MCContainerSerializer *mSupercontainer;	// 80 = 0x50
}
@property(assign, nonatomic) unsigned index;	// G=0x34a62819; S=0x34a62829; @synthesize=mIndex
@property(assign) MCContainerSerializer *supercontainer;	// G=0x34a62889; S=0x34a62899; @synthesize=mSupercontainer
@property(copy) NSDictionary *transitionAttributes;	// G=0x34a624e1; S=0x34a625c9; 
@property(assign, nonatomic) double transitionDuration;	// G=0x34a62871; S=0x34a62231; @synthesize=mTransitionDuration
@property(copy) NSString *transitionID;	// G=0x34a62839; S=0x34a6284d; @synthesize=mTransitionID
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x34a61e8d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x34a61f25
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x34a626dd
- (void)demolish;	// 0x34a6207d
- (id)imprint;	// 0x34a62101
// declared property getter: - (unsigned)index;	// 0x34a62819
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x34a62829
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x34a62899
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x34a6236d
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x34a625c9
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x34a62231
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x34a6284d
// declared property getter: - (id)supercontainer;	// 0x34a62889
- (id)transitionAttributeForKey:(id)key;	// 0x34a62245
// declared property getter: - (id)transitionAttributes;	// 0x34a624e1
// declared property getter: - (double)transitionDuration;	// 0x34a62871
// declared property getter: - (id)transitionID;	// 0x34a62839
@end

