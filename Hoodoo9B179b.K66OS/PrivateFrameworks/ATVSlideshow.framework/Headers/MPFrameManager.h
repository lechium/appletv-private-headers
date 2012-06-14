/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPFrameManager : NSObject {
	NSMutableDictionary *mFrames;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
}
+ (void)loadFrameManagerWithPaths:(id)paths;	// 0x354907a9
+ (void)releaseSharedManager;	// 0x35490179
+ (id)sharedManager;	// 0x35490131
- (id)initWithPaths:(id)paths;	// 0x35490ce1
- (id)allCategoryIDs;	// 0x3549023d
- (id)allFrameIDs;	// 0x3549021d
- (id)attributesForFrameID:(id)frameID andPresetID:(id)anId;	// 0x354906c5
- (id)categoryIDsForFrameID:(id)frameID;	// 0x35490551
- (id)constraintsForFramesMatchingList:(id)framesMatchingList andCriteria:(id)criteria;	// 0x35490a0d
- (void)dealloc;	// 0x354901a5
- (id)framesForCategoryID:(id)categoryID;	// 0x354905a9
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x35490459
- (id)localizedFrameNameForFrameID:(id)frameID;	// 0x35490419
- (id)randomFrameFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x35490805
- (id)versionOfFrameID:(id)frameID;	// 0x354903e1
@end
