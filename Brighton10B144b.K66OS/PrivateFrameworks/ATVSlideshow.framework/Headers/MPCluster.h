/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSString, NSMutableDictionary, NSMutableArray;

@interface MPCluster : NSObject {
	NSMutableArray *mSlides;	// 4 = 0x4
	NSMutableSet *mPathsInCluster;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
	float mRating;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
}
@property(retain) NSMutableArray *items;	// G=0x331117a5; S=0x331117b9; @synthesize=mSlides
@property(copy) NSString *name;	// G=0x331117c9; S=0x331117dd; @synthesize=mName
@property(assign) float rating;	// G=0x331117ed; S=0x33111801; @synthesize=mRating
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x33111819; S=0x3311182d; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x33110ea9
- (void)addSlide:(id)slide;	// 0x33110fbd
- (id)allSlides;	// 0x3311101d
- (id)allSlidesSortedByUser;	// 0x3311102d
- (id)allSlidesSortedChronologically;	// 0x3311105d
- (BOOL)clusterContainsSlideAtPath:(id)path;	// 0x33111059
- (void)dealloc;	// 0x33110f2d
- (id)description;	// 0x33111705
- (void)detailedDescription;	// 0x33111579
// declared property getter: - (id)items;	// 0x331117a5
// declared property getter: - (id)name;	// 0x331117c9
// declared property getter: - (float)rating;	// 0x331117ed
- (void)removeAllSlides;	// 0x33110fdd
- (void)resetAllUsageCounters;	// 0x33111341
// declared property setter: - (void)setItems:(id)items;	// 0x331117b9
// declared property setter: - (void)setName:(id)name;	// 0x331117dd
// declared property setter: - (void)setRating:(float)rating;	// 0x33111801
- (void)setUsageCountForLayer:(id)layer to:(float)to;	// 0x33111099
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x3311182d
- (int)slideCount;	// 0x33110ffd
- (id)usageCountDescription;	// 0x33111409
- (float)usageCountForLayer:(id)layer;	// 0x331111e5
// declared property getter: - (id)usageCounterPerLayer;	// 0x33111819
@end
