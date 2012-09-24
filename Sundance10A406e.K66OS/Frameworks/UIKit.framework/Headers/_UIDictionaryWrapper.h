/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, ASAsset, NSOrderedSet, NSArray;

__attribute__((visibility("hidden")))
@interface _UIDictionaryWrapper : NSObject {
	DCSDictionaryRef dictionary;	// 4 = 0x4
	NSString *indexLanguage;	// 8 = 0x8
	NSString *definitionLanguage;	// 12 = 0xc
	int type;	// 16 = 0x10
	ASAsset *asset;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) ASAsset *asset;	// G=0x30c4c5ed; @synthesize
@property(readonly, assign, nonatomic) NSArray *countryCodes;	// G=0x30c4bd4d; 
@property(readonly, assign, nonatomic) NSString *definitionLanguage;	// G=0x30c4c5cd; @synthesize
@property(readonly, assign, nonatomic) unsigned definitionLanguageDirection;	// G=0x30c4bf69; 
@property(readonly, assign, nonatomic) DCSDictionaryRef dictionary;	// G=0x30c4c5ad; @synthesize
@property(readonly, assign, nonatomic) NSString *dictionaryPackageName;	// G=0x30c4bd0d; 
@property(readonly, assign, nonatomic) NSString *indexLanguage;	// G=0x30c4c5bd; @synthesize
@property(readonly, assign, nonatomic) NSOrderedSet *supportedKeyboardStrings;	// G=0x30c4bdcd; 
@property(readonly, assign, nonatomic) int type;	// G=0x30c4c5dd; @synthesize
+ (id)_availableDictionaryAssets;	// 0x30c4b895
+ (id)_wrappersWithAsset:(id)asset;	// 0x30c4b92d
- (id)initWithAsset:(id)asset indexLanguage:(id)language;	// 0x30c4b9ed
- (BOOL)_correspondsToCurrentInputKeyboardAndIsNotPresent;	// 0x30c4c109
- (BOOL)_isBilingual;	// 0x30c4c0b1
// declared property getter: - (id)asset;	// 0x30c4c5ed
- (int)compareToDictionary:(id)dictionary;	// 0x30c4c3e5
// declared property getter: - (id)countryCodes;	// 0x30c4bd4d
- (void)dealloc;	// 0x30c4bc81
// declared property getter: - (id)definitionLanguage;	// 0x30c4c5cd
// declared property getter: - (unsigned)definitionLanguageDirection;	// 0x30c4bf69
- (id)description;	// 0x30c4c2f1
// declared property getter: - (DCSDictionaryRef)dictionary;	// 0x30c4c5ad
// declared property getter: - (id)dictionaryPackageName;	// 0x30c4bd0d
- (BOOL)hasMarkupForString:(id)string;	// 0x30c4bfa5
- (unsigned)hash;	// 0x30c4c181
// declared property getter: - (id)indexLanguage;	// 0x30c4c5bd
- (BOOL)isEqual:(id)equal;	// 0x30c4c1ed
- (id)languageCode;	// 0x30c4bd8d
- (id)markupForString:(id)string;	// 0x30c4c021
// declared property getter: - (id)supportedKeyboardStrings;	// 0x30c4bdcd
// declared property getter: - (int)type;	// 0x30c4c5dd
@end
