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
+ (void)initialize;	// 0x31526bc5
+ (void)loadTransitionManagerWithPaths:(id)paths;	// 0x31526c41
+ (id)sharedManager;	// 0x31526c35
- (id)initWithPaths:(id)paths;	// 0x31526ca1
- (id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;	// 0x31527bcd
- (BOOL)canHandleKenBurnsForTransitionID:(id)transitionID;	// 0x31527ab5
- (void)cleanup;	// 0x315272dd
- (void)dealloc;	// 0x3152729d
- (id)descriptionForTransitionID:(id)transitionID;	// 0x31527a4d
- (BOOL)needsSourceLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x31527b35
- (BOOL)needsSourceLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x31527bb5
- (BOOL)needsTargetLayerImageForPrecomputingForTransitionID:(id)transitionID;	// 0x31527b75
- (BOOL)needsTargetLayerToBeOpaqueForSimple3DTransitionSubtype:(int)simple3DTransitionSubtype;	// 0x31527bc1
- (BOOL)noContentsMotionForTransitionID:(id)transitionID;	// 0x31527af5
- (void)recycleTransition:(id)transition;	// 0x315278d1
- (void)releaseResources;	// 0x31527355
- (id)resourcePathForTransitionID:(id)transitionID andResource:(id)resource;	// 0x31527a6d
- (id)transitionWithTransitionID:(id)transitionID;	// 0x31527525
@end

