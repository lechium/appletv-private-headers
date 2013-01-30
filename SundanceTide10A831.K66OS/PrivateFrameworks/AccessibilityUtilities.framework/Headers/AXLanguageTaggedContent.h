/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class NSMutableOrderedSet, NSString, NSLinguisticTagger, NSMutableArray;

@interface AXLanguageTaggedContent : NSObject {
	NSMutableArray *_tags;	// 4 = 0x4
	BOOL _tagged;	// 8 = 0x8
	NSLinguisticTagger *_linguisticTagger;	// 12 = 0xc
	NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;	// 16 = 0x10
	NSString *_userPreferredLangID;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *content;	// G=0x33116771; 
@property(retain, nonatomic) NSLinguisticTagger *linguisticTagger;	// G=0x33117b91; S=0x33117ba1; @synthesize=_linguisticTagger
@property(assign, nonatomic, getter=isTagged) BOOL tagged;	// G=0x33117b71; S=0x33117b81; @synthesize=_tagged
@property(retain, nonatomic) NSMutableArray *tags;	// G=0x33117b51; S=0x33117b61; @synthesize=_tags
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;	// G=0x33117bb1; S=0x33117bc1; @synthesize=_unpredictedAmbiguousLangMaps
@property(copy, nonatomic) NSString *userPreferredLangID;	// G=0x33117bd1; S=0x33117be5; @synthesize=_userPreferredLangID
- (id)initWithContent:(id)content;	// 0x33116501
- (void)_addTag;	// 0x331176a5
- (void)_manuallyProcessContentWithRange:(NSRange)range;	// 0x3311755d
- (id)ambiguousLangMaps;	// 0x33117031
// declared property getter: - (id)content;	// 0x33116771
- (void)dealloc;	// 0x331165f1
- (id)description;	// 0x33116671
- (void)enumeratePredictedTags:(id)tags;	// 0x33116875
- (void)enumerateUnpredictedTags:(id)tags;	// 0x33116799
- (BOOL)hasOnlyNonWesternLangMaps;	// 0x331173a1
- (BOOL)hasOnlyWesternLangMaps;	// 0x331171e5
// declared property getter: - (BOOL)isTagged;	// 0x33117b71
- (BOOL)langMapIsSignificant:(id)significant;	// 0x33116da5
// declared property getter: - (id)linguisticTagger;	// 0x33117b91
- (id)primaryAmbiguousDialect;	// 0x331178f5
// declared property setter: - (void)setLinguisticTagger:(id)tagger;	// 0x33117ba1
// declared property setter: - (void)setTagged:(BOOL)tagged;	// 0x33117b81
// declared property setter: - (void)setTags:(id)tags;	// 0x33117b61
// declared property setter: - (void)setUnpredictedAmbiguousLangMaps:(id)maps;	// 0x33117bc1
// declared property setter: - (void)setUserPreferredLangID:(id)anId;	// 0x33117be5
- (id)significantAmbiguousLangMaps;	// 0x33116da9
- (id)significantAmbiguousLangMapsForUserKeyboards;	// 0x33116db9
- (void)tagContent;	// 0x33116951
// declared property getter: - (id)tags;	// 0x33117b51
- (id)unambiguousLangMaps;	// 0x33116ef5
// declared property getter: - (id)unpredictedAmbiguousLangMaps;	// 0x33117bb1
- (void)updateTagsForLocalePrefChange;	// 0x33117955
// declared property getter: - (id)userPreferredLangID;	// 0x33117bd1
@end
