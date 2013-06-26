/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFDictationOptions : NSObject {
	NSString *_applicationName;	// 4 = 0x4
	NSString *_applicationVersion;	// 8 = 0x8
	NSString *_fieldLabel;	// 12 = 0xc
	NSString *_fieldIdentifier;	// 16 = 0x10
	NSString *_interactionIdentifier;	// 20 = 0x14
	int _keyboardType;	// 24 = 0x18
	NSString *_prefixText;	// 28 = 0x1c
	NSString *_postfixText;	// 32 = 0x20
	NSString *_selectedText;	// 36 = 0x24
	int _returnKeyType;	// 40 = 0x28
	NSString *_languageCodeOverride;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *applicationName;	// G=0x334f203d; S=0x334f2051; @synthesize=_applicationName
@property(copy, nonatomic) NSString *applicationVersion;	// G=0x334f2061; S=0x334f2075; @synthesize=_applicationVersion
@property(copy, nonatomic) NSString *fieldIdentifier;	// G=0x334f20a9; S=0x334f20bd; @synthesize=_fieldIdentifier
@property(copy, nonatomic) NSString *fieldLabel;	// G=0x334f2085; S=0x334f2099; @synthesize=_fieldLabel
@property(copy, nonatomic) NSString *interactionIdentifier;	// G=0x334f20cd; S=0x334f20e1; @synthesize=_interactionIdentifier
@property(assign, nonatomic) int keyboardType;	// G=0x334f20f1; S=0x334f2101; @synthesize=_keyboardType
@property(copy, nonatomic) NSString *languageCodeOverride;	// G=0x334f219d; S=0x334f21b1; @synthesize=_languageCodeOverride
@property(copy, nonatomic) NSString *postfixText;	// G=0x334f2135; S=0x334f2149; @synthesize=_postfixText
@property(copy, nonatomic) NSString *prefixText;	// G=0x334f2111; S=0x334f2125; @synthesize=_prefixText
@property(assign, nonatomic) int returnKeyType;	// G=0x334f217d; S=0x334f218d; @synthesize=_returnKeyType
@property(copy, nonatomic) NSString *selectedText;	// G=0x334f2159; S=0x334f216d; @synthesize=_selectedText
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x334f1dc5
- (void).cxx_destruct;	// 0x334f21c1
// declared property getter: - (id)applicationName;	// 0x334f203d
// declared property getter: - (id)applicationVersion;	// 0x334f2061
- (id)dkPlistRepresentation;	// 0x334f1b75
// declared property getter: - (id)fieldIdentifier;	// 0x334f20a9
// declared property getter: - (id)fieldLabel;	// 0x334f2085
// declared property getter: - (id)interactionIdentifier;	// 0x334f20cd
// declared property getter: - (int)keyboardType;	// 0x334f20f1
// declared property getter: - (id)languageCodeOverride;	// 0x334f219d
// declared property getter: - (id)postfixText;	// 0x334f2135
// declared property getter: - (id)prefixText;	// 0x334f2111
// declared property getter: - (int)returnKeyType;	// 0x334f217d
// declared property getter: - (id)selectedText;	// 0x334f2159
// declared property setter: - (void)setApplicationName:(id)name;	// 0x334f2051
// declared property setter: - (void)setApplicationVersion:(id)version;	// 0x334f2075
// declared property setter: - (void)setFieldIdentifier:(id)identifier;	// 0x334f20bd
// declared property setter: - (void)setFieldLabel:(id)label;	// 0x334f2099
// declared property setter: - (void)setInteractionIdentifier:(id)identifier;	// 0x334f20e1
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x334f2101
// declared property setter: - (void)setLanguageCodeOverride:(id)override;	// 0x334f21b1
// declared property setter: - (void)setPostfixText:(id)text;	// 0x334f2149
// declared property setter: - (void)setPrefixText:(id)text;	// 0x334f2125
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x334f218d
// declared property setter: - (void)setSelectedText:(id)text;	// 0x334f216d
@end
