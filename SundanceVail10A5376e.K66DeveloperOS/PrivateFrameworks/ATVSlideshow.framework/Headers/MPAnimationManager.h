/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
	NSMutableDictionary *mAnimationSets;	// 8 = 0x8
}
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x36195641
+ (void)releaseSharedManager;	// 0x361954bd
+ (id)sharedManager;	// 0x361953c9
- (id)initWithPaths:(id)paths;	// 0x3619569d
- (id)animationDescriptionForAnimationID:(id)animationID;	// 0x36195621
- (id)animationDescriptionForAnimationSetID:(id)animationSetID;	// 0x36195601
- (void)dealloc;	// 0x36195589
@end
