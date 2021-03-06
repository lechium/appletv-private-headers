/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

@interface UIKBTree : NSObject <NSCopying> {
	int type;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSMutableDictionary *properties;	// 12 = 0xc
	NSMutableArray *subtrees;	// 16 = 0x10
	NSMutableDictionary *cache;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;	// G=0x30d9a35d; 
@property(retain, nonatomic) NSMutableDictionary *cache;	// G=0x30cf0b89; S=0x30cf0a49; @synthesize
@property(retain) id clientVariantActionName;	// G=0x30d15cd1; S=0x30cf3cbd; converted property
@property(retain) id clientVariantRepresentedString;	// G=0x30d15ca5; S=0x30cf3c69; converted property
@property(assign) int clipCorners;	// G=0x30f7d619; S=0x30f7d65d; converted property
@property(assign) BOOL disabled;	// G=0x30cf33e9; S=0x30f7d519; converted property
@property(assign) int displayRowHint;	// G=0x30cf96b5; S=0x30cf3321; converted property
@property(retain) id displayString;	// G=0x30cf26e1; S=0x30cf22a5; converted property
@property(assign) int displayType;	// G=0x30cf33a1; S=0x30f7d18d; converted property
@property(assign) int displayTypeHint;	// G=0x30cf2469; S=0x30cf23bd; converted property
@property(assign) CGRect frame;	// G=0x30cf02c5; S=0x30f7b389; converted property
@property(retain) id geometry;	// G=0x30f7b2b5; S=0x30f7b31d; converted property
@property(assign) BOOL ghost;	// G=0x30cf39a9; S=0x30f7d445; converted property
@property(assign) int highlightedVariantIndex;	// G=0x30f7d29d; S=0x30f7d2e1; converted property
@property(assign) int interactionType;	// G=0x30cf3e35; S=0x30f7d1e9; converted property
@property(assign) BOOL isClientVariantOverride;	// G=0x30cf5489; S=0x30f7d3ed; converted property
@property(assign) BOOL isGenerated;	// G=0x30f7c449; S=0x30f7c469; converted property
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;	// G=0x30d8d3ed; 
@property(retain, nonatomic) NSString *name;	// G=0x30cefdc1; S=0x30f7db61; @synthesize
@property(retain) id overrideDisplayString;	// G=0x30cf54cd; S=0x30cf3be1; converted property
@property(assign) CGRect paddedFrame;	// G=0x30cf4165; S=0x30f7b401; converted property
@property(retain, nonatomic) NSMutableDictionary *properties;	// G=0x30cefdb1; S=0x30cf0a01; @synthesize
@property(assign) int rendering;	// G=0x30cf4f1d; S=0x30f7d395; converted property
@property(retain) id representedString;	// G=0x30cf5d81; S=0x30d1ad01; converted property
@property(retain) id shape;	// G=0x30cf0359; S=0x30cf0a15; converted property
@property(assign) BOOL shouldSkipCandidateSelection;	// G=0x30cf4f99; S=0x30f7c2dd; converted property
@property(assign) int splitMode;	// G=0x30f7d57d; S=0x30f7d5c1; converted property
@property(retain, nonatomic) NSMutableArray *subtrees;	// G=0x30cefbf1; S=0x30f7db71; @synthesize
@property(assign) int textAlignment;	// G=0x30d0dcb9; S=0x30f7d33d; converted property
@property(assign, nonatomic) int type;	// G=0x30cefda1; S=0x30f7db51; @synthesize
@property(retain) id variantPopupBias;	// G=0x30f7d4ed; S=0x30f7d49d; converted property
@property(assign) int variantType;	// G=0x30d0a7c9; S=0x30f7d241; converted property
@property(assign) BOOL visible;	// G=0x30cf38fd; S=0x30cf0f99; converted property
@property(assign) int visualStyle;	// G=0x30cef7c1; S=0x30cefa95; converted property
+ (id)key;	// 0x30f7da71
+ (id)keyboard;	// 0x30f7dae1
+ (id)mergeStringForKeyName:(id)keyName;	// 0x30f7c8f1
+ (id)shapesForControlKeyShapes:(id)controlKeyShapes options:(int)options;	// 0x30f7c981
+ (BOOL)shouldSkipCacheString:(id)string;	// 0x30f7bd09
+ (id)stringForType:(int)type;	// 0x30f7a891
+ (id)treeOfType:(int)type;	// 0x30f79eb5
+ (id)uniqueName;	// 0x30f79b39
- (id)initWithType:(int)type;	// 0x30f79dc9
- (id)initWithType:(int)type withName:(id)name withProperties:(id)properties withSubtrees:(id)subtrees withCache:(id)cache;	// 0x30cee535
- (id)_cacheRootNameForKey:(id)key;	// 0x30f7b4e9
- (BOOL)_needsScaling;	// 0x30f7acc5
- (int)_variantType;	// 0x30d0a805
// declared property getter: - (BOOL)acceptsShiftLock;	// 0x30d9a35d
- (id)alternateKeyplaneName;	// 0x30f7c275
- (id)attributeSet:(BOOL)set;	// 0x30cf086d
- (id)autolocalizedKeyCacheIterator;	// 0x30f7c4e1
- (BOOL)behavesAsShiftKey;	// 0x30cf3df5
- (BOOL)boolForProperty:(id)property;	// 0x30cefdfd
// declared property getter: - (id)cache;	// 0x30cf0b89
- (id)cacheDisplayString;	// 0x30cf9665
- (void)cacheKey:(id)key;	// 0x30f7b58d
- (id)cachedKeysByKeyName:(id)name;	// 0x30cf19bd
- (void)clearTransientCaches;	// 0x30f7bd91
// converted property getter: - (id)clientVariantActionName;	// 0x30d15cd1
// converted property getter: - (id)clientVariantRepresentedString;	// 0x30d15ca5
// converted property getter: - (int)clipCorners;	// 0x30f7d619
- (id)componentName;	// 0x30d1ae19
- (id)copyWithZone:(NSZone *)zone;	// 0x30f79f89
- (void)dealloc;	// 0x30f79efd
- (id)description;	// 0x30f7a69d
// converted property getter: - (BOOL)disabled;	// 0x30cf33e9
// converted property getter: - (int)displayRowHint;	// 0x30cf96b5
// converted property getter: - (id)displayString;	// 0x30cf26e1
// converted property getter: - (int)displayType;	// 0x30cf33a1
// converted property getter: - (int)displayTypeHint;	// 0x30cf2469
- (id)findLeftMoreKey;	// 0x30f7c541
- (id)firstCachedKeyWithName:(id)name;	// 0x30cf0b49
// converted property getter: - (CGRect)frame;	// 0x30cf02c5
- (id)geometries;	// 0x30f7b931
// converted property getter: - (id)geometry;	// 0x30f7b2b5
- (id)geometrySet:(BOOL)set;	// 0x30cf06dd
// converted property getter: - (BOOL)ghost;	// 0x30cf39a9
// converted property getter: - (int)highlightedVariantIndex;	// 0x30f7d29d
- (int)indexOfSubtree:(id)subtree;	// 0x30f7ac81
- (int)intForProperty:(id)property;	// 0x30cf2361
// converted property getter: - (int)interactionType;	// 0x30cf3e35
// converted property getter: - (BOOL)isClientVariantOverride;	// 0x30cf5489
- (BOOL)isDuplicateOfTree:(id)tree;	// 0x30f7a525
- (BOOL)isEqualToTree:(id)tree;	// 0x30f7a4c9
// converted property getter: - (BOOL)isGenerated;	// 0x30f7c449
- (BOOL)isHashed;	// 0x30d1a3ed
- (BOOL)isLeafType;	// 0x30f7b27d
- (BOOL)isLetters;	// 0x30f7c35d
- (BOOL)isSameAsTree:(id)tree;	// 0x30f7a11d
- (BOOL)isShiftKeyPlaneChooser;	// 0x30cf6415
- (BOOL)isShiftKeyplane;	// 0x30cefdd5
- (id)keyAttributes;	// 0x30f7bb1d
- (id)keyForString:(id)string;	// 0x30f7b68d
- (id)keySet;	// 0x30cf0609
- (id)keyplaneForKey:(id)key;	// 0x30d90729
- (id)keys;	// 0x30cf5b39
- (id)keysByKeyName:(id)name;	// 0x30f7bfe5
- (id)keysOrderedByPosition;	// 0x30f7bfd5
- (id)keysOrderedByPositionWithoutZip;	// 0x30cf6439
- (id)keysWithString:(id)string;	// 0x30f7c111
- (id)layoutName;	// 0x30cf8d09
- (id)localizationKey;	// 0x30f7d15d
- (BOOL)looksLike:(id)like;	// 0x30d1ada9
- (BOOL)looksLikeShiftAlternate;	// 0x30cf2d59
// declared property getter: - (BOOL)modifiesKeyplane;	// 0x30d8d3ed
// declared property getter: - (id)name;	// 0x30cefdc1
- (id)nameFromAttributes;	// 0x30f79b75
- (BOOL)noLanguageIndicator;	// 0x30f7c2b9
- (BOOL)notUseCandidateSelection;	// 0x30cf0055
- (id)numberForProperty:(id)property;	// 0x30cf32f1
// converted property getter: - (id)overrideDisplayString;	// 0x30cf54cd
// converted property getter: - (CGRect)paddedFrame;	// 0x30cf4165
// declared property getter: - (id)properties;	// 0x30cefdb1
- (id)recursiveDescription;	// 0x30f7a781
- (void)removeClientVariantActionInfo;	// 0x30cf3c31
- (BOOL)renderAsStringKey;	// 0x30cf3bc9
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)punctuation;	// 0x30f7d971
// converted property getter: - (int)rendering;	// 0x30cf4f1d
// converted property getter: - (id)representedString;	// 0x30cf5d81
- (void)setAttributes:(id)attributes;	// 0x30f7b81d
// declared property setter: - (void)setCache:(id)cache;	// 0x30cf0a49
// converted property setter: - (void)setClientVariantActionName:(id)name;	// 0x30cf3cbd
// converted property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x30cf3c69
// converted property setter: - (void)setClipCorners:(int)corners;	// 0x30f7d65d
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30f7d519
// converted property setter: - (void)setDisplayRowHint:(int)hint;	// 0x30cf3321
// converted property setter: - (void)setDisplayString:(id)string;	// 0x30cf22a5
// converted property setter: - (void)setDisplayType:(int)type;	// 0x30f7d18d
// converted property setter: - (void)setDisplayTypeHint:(int)hint;	// 0x30cf23bd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x30f7b389
- (void)setFrameOnly:(CGRect)only;	// 0x30f7b475
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x30f7b31d
// converted property setter: - (void)setGhost:(BOOL)ghost;	// 0x30f7d445
// converted property setter: - (void)setHighlightedVariantIndex:(int)index;	// 0x30f7d2e1
// converted property setter: - (void)setInteractionType:(int)type;	// 0x30f7d1e9
// converted property setter: - (void)setIsClientVariantOverride:(BOOL)override;	// 0x30f7d3ed
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x30f7c469
// declared property setter: - (void)setName:(id)name;	// 0x30f7db61
- (BOOL)setObject:(id)object forProperty:(id)property;	// 0x30f7a649
// converted property setter: - (void)setOverrideDisplayString:(id)string;	// 0x30cf3be1
// converted property setter: - (void)setPaddedFrame:(CGRect)frame;	// 0x30f7b401
// declared property setter: - (void)setProperties:(id)properties;	// 0x30cf0a01
// converted property setter: - (void)setRendering:(int)rendering;	// 0x30f7d395
// converted property setter: - (void)setRepresentedString:(id)string;	// 0x30d1ad01
// converted property setter: - (void)setShape:(id)shape;	// 0x30cf0a15
// converted property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x30f7c2dd
// converted property setter: - (void)setSplitMode:(int)mode;	// 0x30f7d5c1
// declared property setter: - (void)setSubtrees:(id)subtrees;	// 0x30f7db71
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30f7d33d
// declared property setter: - (void)setType:(int)type;	// 0x30f7db51
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x30f7d49d
// converted property setter: - (void)setVariantType:(int)type;	// 0x30f7d241
// converted property setter: - (void)setVisible:(BOOL)visible;	// 0x30cf0f99
// converted property setter: - (void)setVisualStyle:(int)style;	// 0x30cefa95
// converted property getter: - (id)shape;	// 0x30cf0359
- (id)shiftAlternateKeyplaneName;	// 0x30cefe79
- (BOOL)shouldCacheKey;	// 0x30f7d83d
// converted property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x30cf4f99
// converted property getter: - (int)splitMode;	// 0x30f7d57d
- (id)stringForProperty:(id)property;	// 0x30cefebd
- (id)subtreeAtIndexPath:(id)indexPath withPosition:(int)position;	// 0x30f7a58d
- (id)subtreeWithName:(id)name;	// 0x30cefee9
- (id)subtreeWithName:(id)name rows:(id)rows;	// 0x30f7aa01
- (id)subtreeWithType:(int)type;	// 0x30f7a92d
// declared property getter: - (id)subtrees;	// 0x30cefbf1
- (BOOL)subtreesAreOrdered;	// 0x30f7b299
- (id)subtreesWithProperty:(id)property value:(id)value;	// 0x30f7ab3d
- (BOOL)supportsType:(int)type;	// 0x30cefc01
// converted property getter: - (int)textAlignment;	// 0x30d0dcb9
// declared property getter: - (int)type;	// 0x30cefda1
- (id)unhashedName;	// 0x30f79da9
- (void)updateDictationKeyOnNumberPads:(BOOL)pads;	// 0x30f7c6a1
- (void)updateMoreAndInternationalKeysWithOptions:(int)options;	// 0x30f7ce4d
- (void)updateVariantTypeForActions:(unsigned)actions;	// 0x30f7d101
- (BOOL)usesAdaptiveKeys;	// 0x30f7c339
- (BOOL)usesAutoShift;	// 0x30f7c251
- (BOOL)usesKeyCharging;	// 0x30cf6a25
- (id)variantDisplayString;	// 0x30f7d6d9
// converted property getter: - (id)variantPopupBias;	// 0x30f7d4ed
// converted property getter: - (int)variantType;	// 0x30d0a7c9
// converted property getter: - (BOOL)visible;	// 0x30cf38fd
// converted property getter: - (int)visualStyle;	// 0x30cef7c1
- (void)zipAttributes;	// 0x30f7b269
- (void)zipGeometries:(BOOL)geometries attributes:(BOOL)attributes;	// 0x30f7ad41
- (void)zipGeometrySet;	// 0x30cf05f5
@end

