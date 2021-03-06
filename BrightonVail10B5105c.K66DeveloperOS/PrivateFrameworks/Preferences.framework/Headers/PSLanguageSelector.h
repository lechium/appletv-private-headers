/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSArray;

@interface PSLanguageSelector : NSObject {
	NSString *_language;	// 4 = 0x4
	NSMutableArray *_supportedLanguages;	// 8 = 0x8
	NSArray *_supportedKeyboards;	// 12 = 0xc
}
@property(readonly, retain) NSMutableArray *supportedLanguages;	// G=0x316221f1; converted property
+ (id)sharedInstance;	// 0x31621775
- (BOOL)_adjustLanguageIndices;	// 0x31621865
- (void)_loadSupportedLanguages;	// 0x316218f5
- (void)_setLanguage:(id)language;	// 0x31621821
- (id)currentLanguage;	// 0x31621d45
- (void)dealloc;	// 0x316217bd
- (void)setLanguage:(id)language;	// 0x31621de9
// converted property getter: - (id)supportedLanguages;	// 0x316221f1
@end

