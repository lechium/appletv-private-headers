/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString, NSMutableArray, CPLRUDictionary, TIWordTokenizer, TIKeyboardInputManagerConfig;

@interface TIKeyboardInputManagerZephyr : XXUnknownSuperclass {
	TIInputManagerZephyr *m_impl;	// 4 = 0x4
	NSMutableString *m_composedText;	// 8 = 0x8
	unsigned m_defaultCandidateIndex;	// 12 = 0xc
	TIWordTokenizer *m_wordTokenizer;	// 16 = 0x10
	RefPtr<TIAutoshiftRegularExpression> m_autoshift_regex;	// 20 = 0x14
	TIKeyboardInputManagerConfig *_config;	// 24 = 0x18
	NSMutableArray *_inputHistory;	// 28 = 0x1c
	CPLRUDictionary *_autocorrectionHistory;	// 32 = 0x20
	int _autocapitalizationType;	// 36 = 0x24
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x34632fbd; S=0x34632fcd; @synthesize=_autocapitalizationType
@property(retain, nonatomic) CPLRUDictionary *autocorrectionHistory;	// G=0x34632f9d; S=0x34632fad; @synthesize=_autocorrectionHistory
@property(readonly, assign, nonatomic) TIKeyboardInputManagerConfig *config;	// G=0x34632f7d; @synthesize=_config
@property(readonly, assign) unsigned defaultCandidateIndex;	// G=0x34632d5d; converted property
@property(assign) BOOL inHardwareKeyboardMode;	// G=0x34630ab1; S=0x34630a8d; converted property
@property(readonly, assign, nonatomic) NSMutableArray *inputHistory;	// G=0x34632f8d; @synthesize=_inputHistory
@property(assign) unsigned inputIndex;	// G=0x34631239; S=0x346311dd; converted property
- (id)init;	// 0x346305c1
- (TIInputManagerZephyr *)initImplementation;	// 0x346307d1
- (id)initWithConfig:(id)config;	// 0x34630331
- (id).cxx_construct;	// 0x34632ff9
- (void).cxx_destruct;	// 0x34632fdd
- (void)acceptInput;	// 0x34631095
- (BOOL)acceptsCharacter:(unsigned short)character;	// 0x34632ed5
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned *)aDelete fromVariantKey:(BOOL)variantKey;	// 0x34630af1
- (void)appendToInputContext:(id)inputContext;	// 0x3463113d
// declared property getter: - (int)autocapitalizationType;	// 0x34632fbd
- (id)autocorrection;	// 0x34632355
// declared property getter: - (id)autocorrectionHistory;	// 0x34632f9d
- (BOOL)canHandleKeyHitTest;	// 0x34632dbd
- (BOOL)canStartSentenceAfterString:(id)string;	// 0x34631f21
- (void)candidateRejected:(id)rejected;	// 0x346315b9
- (id)candidates;	// 0x34632b85
- (id)candidatesForString:(id)string;	// 0x34632a21
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x34632199
- (void)checkAutocorrectionDictionaries;	// 0x3463219d
- (void)clearAllCentroids;	// 0x34632db9
- (void)clearDynamicDictionary;	// 0x34630ad9
- (void)clearInput;	// 0x34631011
- (void)clearInputContext;	// 0x346311c9
- (void)clearKeyAreas;	// 0x34632dc1
// declared property getter: - (id)config;	// 0x34632f7d
- (void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;	// 0x34630ad1
- (void)dealloc;	// 0x346305fd
- (void)decreaseUserFrequency:(id)frequency usageFlags:(unsigned)flags;	// 0x34631569
- (id)defaultCandidate;	// 0x34631375
// converted property getter: - (unsigned)defaultCandidateIndex;	// 0x34632d5d
- (id)deleteFromInput:(unsigned *)input;	// 0x34630e29
- (void)deleteFromStrokeHistory;	// 0x34632ebd
- (unsigned)deleteLengthForString:(id)string;	// 0x34630e15
- (BOOL)doesComposeText;	// 0x346306c5
- (unsigned)externalIndexToInternal:(unsigned)internal;	// 0x3463074d
- (id)externalStringToInternal:(id)internal;	// 0x346306c9
// converted property getter: - (BOOL)inHardwareKeyboardMode;	// 0x34630ab1
- (void)increaseUserFrequency:(id)frequency usageFlags:(unsigned)flags;	// 0x34631519
- (id)inputContext;	// 0x34631105
- (unsigned)inputCount;	// 0x34631261
- (BOOL)inputEmpty;	// 0x34631299
// declared property getter: - (id)inputHistory;	// 0x34632f8d
// converted property getter: - (unsigned)inputIndex;	// 0x34631239
- (void)inputLocationChanged;	// 0x3463163d
- (id)inputString;	// 0x346312b9
- (unsigned)internalIndexToExternal:(unsigned)external;	// 0x346306d1
- (id)internalStringToExternal:(id)external;	// 0x346306cd
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x34632e41
- (void)loadDictionaries;	// 0x346307f9
- (void)loadFavoniusLanguageModel;	// 0x3463092d
- (unsigned)maximumShortcutLengthAllowed;	// 0x34632471
- (BOOL)nextInputWouldStartSentence;	// 0x34631ef1
- (id)phraseCandidateCompletedByWord:(const Word *)word;	// 0x346321cd
- (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x34632d6d
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x34632ddd
- (BOOL)removeSuffixOfInputContext:(id)inputContext;	// 0x34631181
- (void)reviseInputHistoryForRetroCorrectionCandidates:(id)retroCorrectionCandidates forInputs:(id)inputs;	// 0x34631809
- (id)sentenceDelimitingCharacters;	// 0x34631ed9
- (id)sentencePrefixingCharacters;	// 0x34631ecd
- (id)sentenceTrailingCharacters;	// 0x34631ee5
- (void)setAutoCorrects:(BOOL)corrects;	// 0x34630a2d
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x34632fcd
// declared property setter: - (void)setAutocorrectionHistory:(id)history;	// 0x34632fad
- (void)setAutoshiftFromInputContext;	// 0x34632129
- (void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;	// 0x34630ad5
- (void)setCollatorLocale;	// 0x34630a1d
// converted property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x34630a8d
- (void)setInput:(id)input;	// 0x34630d61
// converted property setter: - (void)setInputIndex:(unsigned)index;	// 0x346311dd
- (void)setKeyboardEventsLagging:(BOOL)lagging;	// 0x34630a71
- (void)setLearnsCorrection:(BOOL)correction;	// 0x34630a4d
- (void)setTypologyRecorder:(id)recorder;	// 0x34632f21
- (id)shadowTyping;	// 0x34631ded
- (id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;	// 0x346329ad
- (id)shortcutConversionForString:(id)string stringStartsInMiddleOfWord:(BOOL)word;	// 0x3463248d
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x34632415
- (BOOL)stringIsExemptFromChecker:(id)checker;	// 0x34631321
- (BOOL)supportsShortcutConversion;	// 0x3463246d
- (void)textAccepted:(id)accepted;	// 0x346313d5
- (id)textPrecedingNextInput;	// 0x34631e3d
- (void)updateForRevisitedString:(id)revisitedString;	// 0x34631ad1
- (id)updateInputHistoryForAcceptedText:(id)acceptedText;	// 0x34631679
- (BOOL)usesCandidateSelection;	// 0x34632a09
- (unsigned)wordHistoryDepth;	// 0x3463121d
@end

