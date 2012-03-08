/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString;

@interface UIKeyboardInputMode : UITextInputMode {
@private
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x32f34d2d; S=0x32f34779; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x32ee70dd; S=0x32f34569; @synthesize
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x32f34add; S=0x32f346b5; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x32f34d1d; S=0x32f34701; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x32f3458d
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x32f34725
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x32f343e9
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x32f346d9
- (id)initWithIdentifier:(id)identifier;	// 0x32f3449d
- (void)dealloc;	// 0x3322927d
// declared property getter: - (id)hardwareLayout;	// 0x32f34d2d
// declared property getter: - (id)identifier;	// 0x32ee70dd
// declared property getter: - (id)primaryLanguage;	// 0x32f34add
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x32f34779
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32f34569
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x32f346b5
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x32f34701
// declared property getter: - (id)softwareLayout;	// 0x32f34d1d
@end

