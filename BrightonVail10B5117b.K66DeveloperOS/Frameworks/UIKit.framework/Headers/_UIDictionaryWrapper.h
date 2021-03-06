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
@property(readonly, assign, nonatomic) ASAsset *asset;	// G=0x33028f6d; @synthesize
@property(readonly, assign, nonatomic) NSArray *countryCodes;	// G=0x330286cd; 
@property(readonly, assign, nonatomic) NSString *definitionLanguage;	// G=0x33028f4d; @synthesize
@property(readonly, assign, nonatomic) unsigned definitionLanguageDirection;	// G=0x330288e9; 
@property(readonly, assign, nonatomic) DCSDictionaryRef dictionary;	// G=0x33028f2d; @synthesize
@property(readonly, assign, nonatomic) NSString *dictionaryPackageName;	// G=0x3302868d; 
@property(readonly, assign, nonatomic) NSString *indexLanguage;	// G=0x33028f3d; @synthesize
@property(readonly, assign, nonatomic) NSOrderedSet *supportedKeyboardStrings;	// G=0x3302874d; 
@property(readonly, assign, nonatomic) int type;	// G=0x33028f5d; @synthesize
+ (id)_availableDictionaryAssets;	// 0x33028215
+ (id)_wrappersWithAsset:(id)asset;	// 0x330282ad
- (id)initWithAsset:(id)asset indexLanguage:(id)language;	// 0x3302836d
- (BOOL)_correspondsToCurrentInputKeyboardAndIsNotPresent;	// 0x33028a89
- (BOOL)_isBilingual;	// 0x33028a31
// declared property getter: - (id)asset;	// 0x33028f6d
- (int)compareToDictionary:(id)dictionary;	// 0x33028d65
// declared property getter: - (id)countryCodes;	// 0x330286cd
- (void)dealloc;	// 0x33028601
// declared property getter: - (id)definitionLanguage;	// 0x33028f4d
// declared property getter: - (unsigned)definitionLanguageDirection;	// 0x330288e9
- (id)description;	// 0x33028c71
// declared property getter: - (DCSDictionaryRef)dictionary;	// 0x33028f2d
// declared property getter: - (id)dictionaryPackageName;	// 0x3302868d
- (BOOL)hasMarkupForString:(id)string;	// 0x33028925
- (unsigned)hash;	// 0x33028b01
// declared property getter: - (id)indexLanguage;	// 0x33028f3d
- (BOOL)isEqual:(id)equal;	// 0x33028b6d
- (id)languageCode;	// 0x3302870d
- (id)markupForString:(id)string;	// 0x330289a1
// declared property getter: - (id)supportedKeyboardStrings;	// 0x3302874d
// declared property getter: - (int)type;	// 0x33028f5d
@end

