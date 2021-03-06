/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x345b47bd; S=0x345b46e9; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x345b46f9; S=0x345b428d; @synthesize
@property(readonly, assign, nonatomic) NSArray *normalizedIdentifierLevels;	// G=0x348be1a5; 
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x346358d1; S=0x345b4649; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x34635af5; S=0x345b4681; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x345b429d
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x345b4691
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x345b410d
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x345b4659
- (id)initWithIdentifier:(id)identifier;	// 0x345b41c1
- (void)dealloc;	// 0x348be0e5
// declared property getter: - (id)hardwareLayout;	// 0x345b47bd
// declared property getter: - (id)identifier;	// 0x345b46f9
// declared property getter: - (id)normalizedIdentifierLevels;	// 0x348be1a5
// declared property getter: - (id)primaryLanguage;	// 0x346358d1
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x345b46e9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x345b428d
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x345b4649
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x345b4681
// declared property getter: - (id)softwareLayout;	// 0x34635af5
@end

