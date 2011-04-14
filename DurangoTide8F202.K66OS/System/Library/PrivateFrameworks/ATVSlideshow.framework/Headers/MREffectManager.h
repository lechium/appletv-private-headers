/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MREffectManager : NSObject {
	NSMutableDictionary *mEffectRepository;	// 4 = 0x4
	NSMutableDictionary *mEffectSets;	// 8 = 0x8
	NSMutableDictionary *mEffectPools;	// 12 = 0xc
}
+ (void)initialize;	// 0x314a7979
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x314a79f5
+ (id)sharedManager;	// 0x314a79e9
- (id)initWithPaths:(id)paths;	// 0x314a7a55
- (id)attributeDescriptionForEffectID:(id)effectID andKey:(id)key;	// 0x314a8cc5
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x314a8dc9
- (void)cleanup;	// 0x314a82b5
- (void)dealloc;	// 0x314a8275
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x314a8c45
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x314a8c05
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x314a8c85
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x314a8d01
- (id)descriptionForEffectID:(id)effectID;	// 0x314a89e9
- (id)effectWithEffectID:(id)effectID;	// 0x314a84fd
- (BOOL)hasMultiImageInputForEffectID:(id)effectID;	// 0x314a8aa1
- (id)imageInputInfosForEffectID:(id)effectID;	// 0x314a8ae1
- (id)imageProviderInfosForEffectID:(id)effectID;	// 0x314a8b11
- (BOOL)isOpaqueForEffectID:(id)effectID;	// 0x314a8b81
- (float)lineSpacingFactorForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x314a8d05
- (void)recycleEffect:(id)effect;	// 0x314a886d
- (void)releaseResources;	// 0x314a832d
- (id)resourcePathForEffectID:(id)effectID andResource:(id)resource;	// 0x314a8a09
- (id)sizeScriptForEffectID:(id)effectID andKey:(id)key;	// 0x314a8a51
- (BOOL)supportsAccumulationForEffectID:(id)effectID;	// 0x314a8b41
@end

