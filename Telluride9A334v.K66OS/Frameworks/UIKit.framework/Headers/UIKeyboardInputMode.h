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
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x300a57e5; S=0x300a5231; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x300569d1; S=0x300a5021; @synthesize
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x300a5595; S=0x300a516d; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x300a57d5; S=0x300a51b9; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x300a5045
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x300a51dd
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x300a4ea1
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x300a5191
- (id)initWithIdentifier:(id)identifier;	// 0x300a4f55
- (void)dealloc;	// 0x30392ead
// declared property getter: - (id)hardwareLayout;	// 0x300a57e5
// declared property getter: - (id)identifier;	// 0x300569d1
// declared property getter: - (id)primaryLanguage;	// 0x300a5595
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x300a5231
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x300a5021
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x300a516d
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x300a51b9
// declared property getter: - (id)softwareLayout;	// 0x300a57d5
@end
