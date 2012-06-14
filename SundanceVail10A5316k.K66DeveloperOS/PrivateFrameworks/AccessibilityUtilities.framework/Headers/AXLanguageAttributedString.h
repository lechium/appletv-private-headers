/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCharacterSet, NSSet, NSMutableDictionary, NSMutableSet, NSString, AXLocaleLanguageMap;

@interface AXLanguageAttributedString : NSObject {
@private
	NSMutableSet *_localeLanguageMaps;	// 4 = 0x4
	NSString *_preferredLanguageCode;	// 8 = 0x8
	AXLocaleLanguageMap *_preferredLanguageMap;	// 12 = 0xc
	NSString *_content;	// 16 = 0x10
	NSCharacterSet *_commonCharacters;	// 20 = 0x14
	NSMutableSet *_ambiguousLanguageMapsForUserKeyboards;	// 24 = 0x18
	NSMutableDictionary *_tags;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSSet *ambiguousLanguageMaps;	// G=0x30a79679; 
@property(retain, nonatomic) NSMutableSet *ambiguousLanguageMapsForUserKeyboards;	// G=0x30a7a3d9; S=0x30a7a3e9; @synthesize=_ambiguousLanguageMapsForUserKeyboards
@property(retain, nonatomic) NSCharacterSet *commonCharacters;	// G=0x30a7a3b9; S=0x30a7a3c9; @synthesize=_commonCharacters
@property(copy, nonatomic) NSString *content;	// G=0x30a7a395; S=0x30a7a3a9; @synthesize=_content
@property(retain, nonatomic) NSMutableSet *localeLanguageMaps;	// G=0x30a7a335; S=0x30a7a345; @synthesize=_localeLanguageMaps
@property(readonly, assign, nonatomic) NSSet *nonAmbiguousLanguageMaps;	// G=0x30a79795; 
@property(retain, nonatomic) NSString *preferredLanguageCode;	// G=0x30a7a355; S=0x30a7a365; @synthesize=_preferredLanguageCode
@property(retain, nonatomic) AXLocaleLanguageMap *preferredLanguageMap;	// G=0x30a7a375; S=0x30a7a385; @synthesize=_preferredLanguageMap
@property(retain, nonatomic) NSMutableDictionary *tags;	// G=0x30a7a3f9; S=0x30a7a409; @synthesize=_tags
- (id)initWithContentString:(id)contentString preferredLangaugeCode:(id)code;	// 0x30a78eb9
- (void)_addAttributeWithName:(id)name value:(id)value range:(NSRange)range;	// 0x30a798b1
- (void)_removeAllAttributes;	// 0x30a79acd
// declared property getter: - (id)ambiguousLanguageMaps;	// 0x30a79679
// declared property getter: - (id)ambiguousLanguageMapsForUserKeyboards;	// 0x30a7a3d9
// declared property getter: - (id)commonCharacters;	// 0x30a7a3b9
// declared property getter: - (id)content;	// 0x30a7a395
- (void)dealloc;	// 0x30a790e9
- (id)description;	// 0x30a791a5
- (void)enumerateAttributesWithName:(id)name usingBlock:(id)block;	// 0x30a7a219
- (BOOL)hasAnyNonWesternLanguageMaps;	// 0x30a794c5
- (BOOL)hasAnyWesternLanguageMaps;	// 0x30a79351
- (BOOL)hasOnlyNonWesternLanguageMaps;	// 0x30a79305
- (BOOL)hasOnlyWesternLanguageMaps;	// 0x30a792b9
- (BOOL)hasWesternAndNonWesternLanguages;	// 0x30a79639
// declared property getter: - (id)localeLanguageMaps;	// 0x30a7a335
// declared property getter: - (id)nonAmbiguousLanguageMaps;	// 0x30a79795
// declared property getter: - (id)preferredLanguageCode;	// 0x30a7a355
// declared property getter: - (id)preferredLanguageMap;	// 0x30a7a375
- (void)retagContent;	// 0x30a79b09
// declared property setter: - (void)setAmbiguousLanguageMapsForUserKeyboards:(id)userKeyboards;	// 0x30a7a3e9
// declared property setter: - (void)setCommonCharacters:(id)characters;	// 0x30a7a3c9
// declared property setter: - (void)setContent:(id)content;	// 0x30a7a3a9
// declared property setter: - (void)setLocaleLanguageMaps:(id)maps;	// 0x30a7a345
// declared property setter: - (void)setPreferredLanguageCode:(id)code;	// 0x30a7a365
// declared property setter: - (void)setPreferredLanguageMap:(id)map;	// 0x30a7a385
// declared property setter: - (void)setTags:(id)tags;	// 0x30a7a409
// declared property getter: - (id)tags;	// 0x30a7a3f9
@end

