/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MPUtilities : NSObject {
}
+ (CGColorRef)CGColorFromString:(id)string;	// 0x36476c75
+ (CGColorRef)CGColorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x36476e59
+ (id)animationsPathsFromFilterID:(id)filterID andPresetID:(id)anId;	// 0x36474455
+ (float)aspectRatioOfLayerable:(id)layerable relativeToAspectRatio:(float)aspectRatio;	// 0x3647662d
+ (id)attributesFormMPFilter:(id)filter atTime:(double)time;	// 0x36473ed1
+ (id)attributesFromAnimationPathsInFilter:(id)filter atTime:(double)time;	// 0x36473fa5
+ (CGColorRef)blackCGColor;	// 0x36476ee9
+ (void)collectAllActionableLayers:(id)layers inDictionary:(id)dictionary;	// 0x36477669
+ (CGPoint)computePointValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(CGPoint)to;	// 0x36473441
+ (float)computeScalarValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(float)to context:(id)context;	// 0x36472bf9
+ (id)computeVectorValueForAnimationPath:(id)animationPath atTime:(double)time defaultsTo:(id)to;	// 0x36473711
+ (id)createMCAction:(id)action forPlug:(id)plug withKey:(id)key;	// 0x36477379
+ (id)createPlugInContainer:(id)container forLayer:(id)layer key:(id)key inDocument:(id)document;	// 0x36477841
+ (id)createPlugInSlide:(id)slide forLayer:(id)layer inDocument:(id)document;	// 0x36477b4d
+ (id)createPlugPathToContainer:(id)container inDocument:(id)document;	// 0x36476f75
+ (id)createPlugPathToObject:(id)object inDocument:(id)document;	// 0x364770fd
+ (id)defaultAttributesForMPFilter:(id)mpfilter;	// 0x36473ec9
+ (id)defaultAttributesForMPTransition:(id)mptransition;	// 0x36473ecd
+ (id)effectContainersForTime:(double)time inDocument:(id)document;	// 0x3647515d
+ (id)effectForMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x364754d9
+ (id)effectForMCContainerWithObjectID:(id)objectID inDocument:(id)document;	// 0x3647544d
+ (id)executeScript:(id)script withHeader:(id)header andAttributes:(id)attributes;	// 0x36476815
+ (id)idOfCombinedID:(id)combinedID;	// 0x36476205
+ (id)layerForPlug:(id)plug inDocument:(id)document;	// 0x36476119
+ (CGColorSpaceRef)newColorSpaceForDevice;	// 0x36476ee5
+ (id)parentsOfObject:(id)object;	// 0x36477c0d
+ (BOOL)pathIsRelative:(id)relative;	// 0x36477355
+ (id)placesPinLabelForSlideAssetPath:(id)slideAssetPath inDocument:(id)document;	// 0x364762b9
+ (id)presetIDOfCombinedID:(id)combinedID;	// 0x36476259
+ (void)registerUndoForDocument:(id)document toReceiver:(id)receiver withSelector:(SEL)selector object:(id)object;	// 0x36476f71
+ (CGPoint)scaledFilterPresetPointValue:(CGPoint)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x36473ac1
+ (float)scaledFilterPresetScalarValue:(float)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x364739d9
+ (XXStruct_Te64nB)scaledFilterPresetVectorValue:(XXStruct_Te64nB)value withKey:(id)key forFilterID:(id)filterID andPresetID:(id)anId;	// 0x36473ccd
+ (id)slideForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x36475fcd
+ (id)slideForPath:(id)path inDocument:(id)document;	// 0x36475a5d
+ (id)slideForSlide:(id)slide inDocument:(id)document;	// 0x364759a9
+ (id)stringFromCGColor:(CGColorRef)cgcolor;	// 0x36476de9
+ (id)stringWithNewUUID;	// 0x36476c2d
+ (void)syncAnimationPaths:(id)paths;	// 0x36474ac1
+ (id)textForElementID:(id)elementID withMCContainerEffect:(id)mccontainerEffect inDocument:(id)document;	// 0x36475ef5
+ (id)textForIndex:(int)index inMCContainerWithObjectID:(id)objectID inDocument:(id)document;	// 0x36475375
+ (id)textsDisplayedAtTime:(double)time inDocument:(id)document;	// 0x36475c61
+ (int)timeOffSetFromString:(id)string;	// 0x36472959
+ (double)transformTime:(double)time forAnimationPath:(id)animationPath;	// 0x36472a51
@end

