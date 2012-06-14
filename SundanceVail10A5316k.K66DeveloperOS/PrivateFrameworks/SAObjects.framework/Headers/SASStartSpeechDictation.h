/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASStartSpeech.h"

@class NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech {
}
@property(copy, nonatomic) NSData *activationToken;	// G=0x32f48d45; S=0x32f48d61; 
@property(copy, nonatomic) NSString *applicationName;	// G=0x32f48db1; S=0x32f48dcd; 
@property(copy, nonatomic) NSString *applicationVersion;	// G=0x32f48e1d; S=0x32f48e39; 
@property(assign, nonatomic) BOOL censorSpeech;	// G=0x32f48e89; S=0x32f48f01; 
@property(copy, nonatomic) NSString *fieldId;	// G=0x32f48f45; S=0x32f48f61; 
@property(copy, nonatomic) NSString *fieldLabel;	// G=0x32f48fb1; S=0x32f48fcd; 
@property(copy, nonatomic) NSString *interactionId;	// G=0x32f4901d; S=0x32f49039; 
@property(copy, nonatomic) NSString *keyboardReturnKey;	// G=0x32f49089; S=0x32f490a5; 
@property(copy, nonatomic) NSString *keyboardType;	// G=0x32f490f5; S=0x32f49111; 
@property(copy, nonatomic) NSString *language;	// G=0x32f49161; S=0x32f4917d; 
@property(copy, nonatomic) NSString *postfixText;	// G=0x32f491cd; S=0x32f491e9; 
@property(copy, nonatomic) NSString *prefixText;	// G=0x32f49239; S=0x32f49255; 
@property(copy, nonatomic) NSString *region;	// G=0x32f492a5; S=0x32f492c1; 
@property(copy, nonatomic) NSString *selectedText;	// G=0x32f49311; S=0x32f4932d; 
+ (id)startSpeechDictation;	// 0x32f48cb5
+ (id)startSpeechDictationWithDictionary:(id)dictionary context:(id)context;	// 0x32f48cf9
// declared property getter: - (id)activationToken;	// 0x32f48d45
// declared property getter: - (id)applicationName;	// 0x32f48db1
// declared property getter: - (id)applicationVersion;	// 0x32f48e1d
// declared property getter: - (BOOL)censorSpeech;	// 0x32f48e89
- (id)encodedClassName;	// 0x32f48ca9
// declared property getter: - (id)fieldId;	// 0x32f48f45
// declared property getter: - (id)fieldLabel;	// 0x32f48fb1
- (id)groupIdentifier;	// 0x32f48c99
// declared property getter: - (id)interactionId;	// 0x32f4901d
// declared property getter: - (id)keyboardReturnKey;	// 0x32f49089
// declared property getter: - (id)keyboardType;	// 0x32f490f5
// declared property getter: - (id)language;	// 0x32f49161
// declared property getter: - (id)postfixText;	// 0x32f491cd
// declared property getter: - (id)prefixText;	// 0x32f49239
// declared property getter: - (id)region;	// 0x32f492a5
// declared property getter: - (id)selectedText;	// 0x32f49311
// declared property setter: - (void)setActivationToken:(id)token;	// 0x32f48d61
// declared property setter: - (void)setApplicationName:(id)name;	// 0x32f48dcd
// declared property setter: - (void)setApplicationVersion:(id)version;	// 0x32f48e39
// declared property setter: - (void)setCensorSpeech:(BOOL)speech;	// 0x32f48f01
// declared property setter: - (void)setFieldId:(id)anId;	// 0x32f48f61
// declared property setter: - (void)setFieldLabel:(id)label;	// 0x32f48fcd
// declared property setter: - (void)setInteractionId:(id)anId;	// 0x32f49039
// declared property setter: - (void)setKeyboardReturnKey:(id)key;	// 0x32f490a5
// declared property setter: - (void)setKeyboardType:(id)type;	// 0x32f49111
// declared property setter: - (void)setLanguage:(id)language;	// 0x32f4917d
// declared property setter: - (void)setPostfixText:(id)text;	// 0x32f491e9
// declared property setter: - (void)setPrefixText:(id)text;	// 0x32f49255
// declared property setter: - (void)setRegion:(id)region;	// 0x32f492c1
// declared property setter: - (void)setSelectedText:(id)text;	// 0x32f4932d
@end

