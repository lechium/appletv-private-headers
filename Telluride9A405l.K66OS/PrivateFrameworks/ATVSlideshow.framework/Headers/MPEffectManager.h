/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MPEffectManager : NSObject {
	NSMutableDictionary *mEffects;	// 4 = 0x4
	NSMutableDictionary *mCategories;	// 8 = 0x8
	NSMutableDictionary *mCachedAspectRatios;	// 12 = 0xc
}
+ (void)initialize;	// 0x334cb619
+ (void)loadEffectManagerWithPaths:(id)paths;	// 0x334cd881
+ (void)releaseSharedManager;	// 0x334cb68d
+ (id)sharedManager;	// 0x334cb645
- (id)initWithPaths:(id)paths;	// 0x334cd8dd
- (void)_loadFontsFromPath:(id)path requiredFonts:(id)fonts;	// 0x334ce2b9
- (id)allCategoryIDs;	// 0x334cbee5
- (id)allEffectIDs;	// 0x334cbec5
- (BOOL)allowTextCustomizationForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x334cd7c5
- (id)attributesForEffectID:(id)effectID andPresetID:(id)anId;	// 0x334cc199
- (id)categoryIDsForEffectID:(id)effectID;	// 0x334cb9dd
- (id)controlForAttribute:(id)attribute forEffectID:(id)effectID;	// 0x334cbcb1
- (void)dealloc;	// 0x334cb6b9
- (void)defaultDurationsForEffectID:(id)effectID phaseInDuration:(double *)duration mainDuration:(double *)duration3 phaseOutDuration:(double *)duration4;	// 0x334cca65
- (double)defaultFullDurationForEffectID:(id)effectID;	// 0x334cd175
- (double)defaultMainDurationForEffectID:(id)effectID;	// 0x334cc9f5
- (double)defaultPhaseInDurationForEffectID:(id)effectID;	// 0x334cc9c1
- (double)defaultPhaseOutDurationForEffectID:(id)effectID;	// 0x334cca2d
- (double)defaultPosterFrameTimeForEffect:(id)effect;	// 0x334ccd49
- (double)defaultPosterFrameTimeForEffectID:(id)effectID andPresetID:(id)anId;	// 0x334ccc65
- (id)defaultStringForTextInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x334cc089
- (id)descriptionForEffectID:(id)effectID;	// 0x334cc2e9
- (double)durationPaddingForEffectID:(id)effectID;	// 0x334cd6ad
- (BOOL)effectDoesAccumulate:(id)accumulate;	// 0x334cd3cd
- (id)effectIDsForCategoryID:(id)categoryID;	// 0x334cba15
- (id)effectsWithNumOfImages:(unsigned)images;	// 0x334cbde1
- (id)imageInputInfoForEffectID:(id)effectID;	// 0x334cc969
- (id)localizedCategoryNameFromCategoryID:(id)categoryID;	// 0x334cbb71
- (id)localizedEffectNameForEffectID:(id)effectID;	// 0x334cbb31
- (id)localizedSettingsUITitleForTitleKey:(id)titleKey inEffect:(id)effect;	// 0x334cbc69
- (float)maxFontSizeInEffectID:(id)effectID presetID:(id)anId atIndex:(int)index;	// 0x334cc08d
- (unsigned)maxNumOfImagesPerEffectInList:(id)list;	// 0x334cd285
- (float)mediaAspectRatioForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x334cc6cd
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index;	// 0x334cc421
- (float)mediaAspectRatioForEffectID:(id)effectID usingPresetID:(id)anId atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x334cc5b9
- (float)mediaAspectRatioHintForEffectID:(id)effectID usingAttributes:(id)attributes atIndex:(int)index defaultAspectRatio:(float)ratio;	// 0x334cd5dd
- (id)mediaAspectRatioHintsForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x334cd411
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId;	// 0x334cc309
- (id)mediaAspectRatiosForEffectID:(id)effectID usingPresetID:(id)anId defaultAspectRatio:(float)ratio;	// 0x334cc4b1
- (unsigned)minNumOfImagesPerEffectInList:(id)list;	// 0x334cd329
- (double)minimumEffectDurationForEffectID:(id)effectID;	// 0x334cd02d
- (unsigned)numOfImagesForEffectID:(id)effectID;	// 0x334cb785
- (unsigned)numOfImagesForEffectPresetID:(id)effectPresetID;	// 0x334cd1e9
- (unsigned)numOfTextsForEffectID:(id)effectID;	// 0x334cb995
- (int)numberOfSecondarySlidesForEffectID:(id)effectID;	// 0x334cceb1
- (int)numberOfSlidesForEffectID:(id)effectID;	// 0x334ccded
- (BOOL)posterTimeIsStaticForEffectID:(id)effectID andPresetID:(id)anId;	// 0x334ccefd
- (id)presetIDsForEffectID:(id)effectID;	// 0x334cc151
- (id)settingsUIControlDescriptionsForEffect:(id)effect;	// 0x334cbda9
- (id)showTimeScriptForEffectID:(id)effectID atSlideIndex:(int)slideIndex;	// 0x334ccfb9
- (id)sizeScriptForEffectID:(id)effectID atIndex:(int)index;	// 0x334cd101
- (BOOL)useUppercaseForEffectID:(id)effectID presetID:(id)anId forTextAtIndex:(int)index;	// 0x334cd709
- (id)versionOfEffectID:(id)effectID;	// 0x334cb74d
@end

