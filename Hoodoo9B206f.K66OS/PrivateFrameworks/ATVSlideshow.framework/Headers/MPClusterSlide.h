/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSMutableArray, NSDate, NSString;

@interface MPClusterSlide : NSObject <NSCopying> {
	NSDate *mCaptureDate;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
	int mReferenceCounter;	// 12 = 0xc
	NSMutableDictionary *mUsageCounterPerLayer;	// 16 = 0x10
	NSMutableArray *mUsableSlideClusters;	// 20 = 0x14
	int mIndex;	// 24 = 0x18
}
@property(copy) NSDate *captureDate;	// G=0x309b3825; S=0x309b3839; @synthesize=mCaptureDate
@property(assign) int index;	// G=0x309b387d; S=0x309b388d; @synthesize=mIndex
@property(copy) NSString *path;	// G=0x309b37ed; S=0x309b3801; @synthesize=mPath
@property(assign) int referenceCounter;	// G=0x309b385d; S=0x309b386d; @synthesize=mReferenceCounter
@property(retain) NSMutableArray *usableSlideClusters;	// G=0x309b38d5; S=0x309b38e9; @synthesize=mUsableSlideClusters
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x309b389d; S=0x309b38b1; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x309b30e5
// declared property getter: - (id)captureDate;	// 0x309b3825
- (id)copyWithZone:(NSZone *)zone;	// 0x309b3239
- (void)dealloc;	// 0x309b318d
- (id)description;	// 0x309b3785
- (void)increaseUsageCounterForLayer:(id)layer;	// 0x309b330d
// declared property getter: - (int)index;	// 0x309b387d
- (int)overallUsageCounter;	// 0x309b34dd
// declared property getter: - (id)path;	// 0x309b37ed
// declared property getter: - (int)referenceCounter;	// 0x309b385d
- (void)resetAllUsageCounters;	// 0x309b359d
// declared property setter: - (void)setCaptureDate:(id)date;	// 0x309b3839
// declared property setter: - (void)setIndex:(int)index;	// 0x309b388d
// declared property setter: - (void)setPath:(id)path;	// 0x309b3801
// declared property setter: - (void)setReferenceCounter:(int)counter;	// 0x309b386d
// declared property setter: - (void)setUsableSlideClusters:(id)clusters;	// 0x309b38e9
- (void)setUsageCounterForLayer:(id)layer to:(int)to;	// 0x309b33ed
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x309b38b1
// declared property getter: - (id)usableSlideClusters;	// 0x309b38d5
- (id)usageCountDescription;	// 0x309b3645
- (int)usageCounterForLayer:(id)layer;	// 0x309b33b5
// declared property getter: - (id)usageCounterPerLayer;	// 0x309b389d
@end

