/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSArray, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSArray *mCachedOrderedPlugs;	// 32 = 0x20
	double mCachedDuration;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x315468ad; 
@property(readonly, assign) double duration;	// G=0x31546509; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0x3154773d; 
@property(readonly, assign) NSSet *plugs;	// G=0x31546761; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31545df1
- (id)init;	// 0x31545e71
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31545ef5
- (id)addPlugForContainer:(id)container;	// 0x31546b9d
- (id)addPlugsForContainers:(id)containers;	// 0x31546c01
// declared property getter: - (unsigned)countOfPlugs;	// 0x315468ad
- (void)demolish;	// 0x31546085
// declared property getter: - (double)duration;	// 0x31546509
- (id)imprint;	// 0x31546301
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0x31546c2d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0x31546c75
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x3154746d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31546471
// declared property getter: - (id)orderedPlugs;	// 0x3154773d
- (id)plugAtIndex:(unsigned)index;	// 0x3154698d
// declared property getter: - (id)plugs;	// 0x31546761
- (void)removePlugsAtIndices:(id)indices;	// 0x315470f5
- (double)timeInForPlug:(id)plug;	// 0x31547929
@end

