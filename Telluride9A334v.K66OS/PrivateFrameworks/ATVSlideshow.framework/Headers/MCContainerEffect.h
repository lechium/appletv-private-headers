/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "MCActionSupport.h"

@class NSArray, NSSet, NSMutableSet, NSDictionary, NSMutableDictionary, NSString;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableSet *mSlides;	// 28 = 0x1c
	NSArray *mCachedOrderedSlides;	// 32 = 0x20
	NSMutableSet *mTexts;	// 36 = 0x24
	NSArray *mCachedOrderedTexts;	// 40 = 0x28
	NSMutableDictionary *mActions;	// 44 = 0x2c
	NSString *mEffectID;	// 48 = 0x30
	NSMutableDictionary *mEffectAttributes;	// 52 = 0x34
	BOOL mIsLive;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x32fa0ac1; 
@property(readonly, assign) unsigned countOfActions;	// G=0x32fa0c15; 
@property(readonly, assign) unsigned countOfSlides;	// G=0x32f9d215; 
@property(readonly, assign) unsigned countOfTexts;	// G=0x32f9ed51; 
@property(copy) NSDictionary *effectAttributes;	// G=0x32fa0519; S=0x32fa05e1; 
@property(copy) NSString *effectID;	// G=0x32fa06ed; S=0x32fa0701; @synthesize=mEffectID
@property(assign) BOOL isLive;	// G=0x32fa0725; S=0x32fa0735; @synthesize=mIsLive
@property(readonly, assign) unsigned nextAvailableSlideIndex;	// G=0x32f9d2d1; 
@property(readonly, assign) unsigned nextAvailableTextIndex;	// G=0x32f9ee0d; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x32f9d049; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x32f9eb85; 
@property(readonly, assign) NSSet *slides;	// G=0x32f9cf1d; 
@property(readonly, assign) NSSet *texts;	// G=0x32f9ea59; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x32f9c2c9
- (id)init;	// 0x32f9c385
- (void)initActionsWithImprints:(id)imprints;	// 0x32fa0745
- (id)initFromScratchWithMontage:(id)montage;	// 0x32f9c439
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32f9c4b5
- (id)actionForKey:(id)key;	// 0x32fa0d11
// declared property getter: - (id)actions;	// 0x32fa0ac1
- (id)addSlide;	// 0x32f9d691
- (id)addSlideForAsset:(id)asset;	// 0x32f9dc21
- (id)addSlideForContainer:(id)container;	// 0x32f9e0fd
- (id)addSlides:(int)slides;	// 0x32f9d6bd
- (id)addSlidesForAssets:(id)assets;	// 0x32f9dc85
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x32f9f265
- (id)addTextForAttributedString:(id)attributedString;	// 0x32f9f1cd
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x32f9f2d1
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x32f9f231
// declared property getter: - (unsigned)countOfActions;	// 0x32fa0c15
// declared property getter: - (unsigned)countOfSlides;	// 0x32f9d215
// declared property getter: - (unsigned)countOfTexts;	// 0x32f9ed51
- (void)demolish;	// 0x32f9c815
- (void)demolishActions;	// 0x32fa0841
- (id)effectAttributeForKey:(id)key;	// 0x32fa02b9
// declared property getter: - (id)effectAttributes;	// 0x32fa0519
// declared property getter: - (id)effectID;	// 0x32fa06ed
- (id)imprint;	// 0x32f9cbb9
- (id)imprintsForActions;	// 0x32fa09cd
- (id)insertSlideAtIndex:(int)index;	// 0x32f9d941
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x32f9dcb9
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x32f9e131
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x32f9dd09
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x32f9f7a9
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x32f9f30d
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x32f9f801
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x32f9f35d
// declared property getter: - (BOOL)isLive;	// 0x32fa0725
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x32f9e7c1
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x32fa0021
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x32f9d2d1
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x32f9ee0d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f9cea9
// declared property getter: - (id)orderedSlides;	// 0x32f9d049
// declared property getter: - (id)orderedTexts;	// 0x32f9eb85
- (void)removeActionForKey:(id)key;	// 0x32fa0f01
- (void)removeAllSlides;	// 0x32f9e76d
- (void)removeAllTexts;	// 0x32f9ffcd
- (void)removeSlidesAtIndices:(id)indices;	// 0x32f9e465
- (void)removeTextsAtIndices:(id)indices;	// 0x32f9fc75
- (void)setAction:(id)action forKey:(id)key;	// 0x32fa0e41
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x32fa03a5
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x32fa05e1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x32fa0701
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x32fa0735
- (id)slideAtIndex:(unsigned)index;	// 0x32f9d4c1
// declared property getter: - (id)slides;	// 0x32f9cf1d
- (id)textAtIndex:(unsigned)index;	// 0x32f9effd
// declared property getter: - (id)texts;	// 0x32f9ea59
@end

