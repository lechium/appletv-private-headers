/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import "VSRecognitionRecognizeAction.h"

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
	NSString *_repeatedSpokenFeedbackString;	// 60 = 0x3c
	NSString *_sequenceTag;	// 64 = 0x40
	NSMutableDictionary *_knownValues;	// 68 = 0x44
	NSMutableDictionary *_knownPhoneticValues;	// 72 = 0x48
	NSMutableDictionary *_ambiguousValues;	// 76 = 0x4c
	NSMutableDictionary *_ambiguousPhoneticValues;	// 80 = 0x50
	void *_context;	// 84 = 0x54
}
@property(retain) NSString *repeatedSpokenFeedbackString;	// G=0x361acc11; S=0x361acbcd; converted property
@property(retain) NSString *sequenceTag;	// G=0x361acc21; S=0x361acc31; converted property
- (id)_actionForEmptyResults;	// 0x361ad4b9
- (VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(XXStruct__Vsh7C *)callbacks info:(void *)info;	// 0x361ad449
- (VSRecognitionDisambiguationContextRef)_disambiguationContext;	// 0x361ad355
- (BOOL)_keywordIndexChanged;	// 0x361ad30d
- (id)_keywords;	// 0x361ad135
- (id)ambiguousValuesForClassIdentifier:(id)classIdentifier;	// 0x361acfe1
- (int)completionType;	// 0x361acbc9
- (void)dealloc;	// 0x361acb01
- (id)knownValueForClassIdentifier:(id)classIdentifier;	// 0x361acc75
- (id)knownValuesForClassIdentifier:(id)classIdentifier;	// 0x361ace25
// converted property getter: - (id)repeatedSpokenFeedbackString;	// 0x361acc11
// converted property getter: - (id)sequenceTag;	// 0x361acc21
- (void)setAmbiguousValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x361ad001
- (void)setKeywords:(id)keywords;	// 0x361ad311
- (void)setKnownValue:(id)value phoneticValue:(id)value2 forClassIdentifier:(id)classIdentifier;	// 0x361acce9
- (void)setKnownValues:(id)values phoneticValues:(id)values2 forClassIdentifier:(id)classIdentifier;	// 0x361acea5
// converted property setter: - (void)setRepeatedSpokenFeedbackString:(id)string;	// 0x361acbcd
// converted property setter: - (void)setSequenceTag:(id)tag;	// 0x361acc31
@end
