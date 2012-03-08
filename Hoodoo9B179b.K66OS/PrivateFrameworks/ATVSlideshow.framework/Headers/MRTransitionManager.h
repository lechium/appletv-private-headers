/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRTransitionManager : NSObject {
	NSMutableDictionary *mTransitionRepository;	// 4 = 0x4
	NSMutableDictionary *mTransitionSets;	// 8 = 0x8
	NSMutableDictionary *mTransitionPools;	// 12 = 0xc
}
+ (void)initialize;	// 0x35579ca5
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x35579d21
+ (id)sharedManager;	// 0x35579d11
- (id)initWithPaths:(id)paths;	// 0x35579d7d
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x3557ac11
- (BOOL)canHandleKenBurnsForTransitionID:(id)transitionID;	// 0x3557aae9
- (void)cleanup;	// 0x3557a3c5
- (void)dealloc;	// 0x3557a385
- (id)descriptionForTransitionID:(id)transitionID;	// 0x3557aa79
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x3557ab71
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x3557abf9
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x3557abb5
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x3557ac05
- (BOOL)noContentsMotionForTransitionID:(id)transitionID;	// 0x3557ab2d
- (void)recycleTransition:(id)transition;	// 0x3557a929
- (void)releaseResources;	// 0x3557a441
- (id)resourcePathForTransitionID:(id)transitionID andResource:(id)resource;	// 0x3557aa99
- (id)transitionWithTransitionID:(id)transitionID;	// 0x3557a5e9
@end

