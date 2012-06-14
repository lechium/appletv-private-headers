/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString;

@interface MPCluster : NSObject {
	NSMutableArray *mSlides;	// 4 = 0x4
	NSMutableSet *mPathsInCluster;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
	float mRating;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
}
@property(retain) NSMutableArray *items;	// G=0x36416361; S=0x36416375; @synthesize=mSlides
@property(copy) NSString *name;	// G=0x36416399; S=0x364163ad; @synthesize=mName
@property(assign) float rating;	// G=0x364163d1; S=0x364163e5; @synthesize=mRating
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x364163fd; S=0x36416411; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x36415a0d
- (void)addSlide:(id)slide;	// 0x36415b79
- (id)allSlides;	// 0x36415c31
- (id)allSlidesSortedChronologically;	// 0x36415c6d
- (BOOL)clusterContainsSlideAtPath:(id)path;	// 0x36415c41
- (void)dealloc;	// 0x36415ad1
- (id)description;	// 0x364162c1
- (void)detailedDescription;	// 0x36416135
// declared property getter: - (id)items;	// 0x36416361
// declared property getter: - (id)name;	// 0x36416399
// declared property getter: - (float)rating;	// 0x364163d1
- (void)removeAllSlides;	// 0x36415bd1
- (void)resetAllUsageCounters;	// 0x36415efd
// declared property setter: - (void)setItems:(id)items;	// 0x36416375
// declared property setter: - (void)setName:(id)name;	// 0x364163ad
// declared property setter: - (void)setRating:(float)rating;	// 0x364163e5
- (void)setUsageCountForLayer:(id)layer to:(float)to;	// 0x36415ca9
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x36416411
- (int)slideCount;	// 0x36415c11
- (id)usageCountDescription;	// 0x36415fc5
- (float)usageCountForLayer:(id)layer;	// 0x36415dcd
// declared property getter: - (id)usageCounterPerLayer;	// 0x364163fd
@end

