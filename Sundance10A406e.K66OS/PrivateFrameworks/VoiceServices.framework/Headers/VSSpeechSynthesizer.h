/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject {
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	void *_inactiveKeepAlive;	// 12 = 0xc
	id<VSSpeechSynthesizerDelegate> _delegate;	// 16 = 0x10
	NSString *_voice;	// 20 = 0x14
	int _footprint;	// 24 = 0x18
	float _rate;	// 28 = 0x1c
	float _pitch;	// 32 = 0x20
	float _volume;	// 36 = 0x24
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 40 = 0x28
}
@property(assign) int footprint;	// G=0x33473e8d; S=0x33473e7d; converted property
@property(readonly, assign) float pitch;	// G=0x33473ced; converted property
@property(readonly, assign) float rate;	// G=0x33473bed; converted property
@property(retain) NSString *voice;	// G=0x33473e11; S=0x33473dcd; converted property
@property(readonly, assign) float volume;	// G=0x33473dbd; converted property
+ (void)_localeDidChange;	// 0x33473f4d
+ (id)availableLanguageCodes;	// 0x334733b1
+ (id)availableVoices;	// 0x334732b5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x33473385
+ (BOOL)isSystemSpeaking;	// 0x334733cd
- (id)init;	// 0x334733d9
- (id)initForInputFeedback;	// 0x33473441
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x3347405d
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x334740f1
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x33474011
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x33473fc5
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x33473f79
- (id)continueSpeaking;	// 0x33473b25
- (void)dealloc;	// 0x33473471
// converted property getter: - (int)footprint;	// 0x33473e8d
- (BOOL)isSpeaking;	// 0x33473b91
- (float)maximumRate;	// 0x33473c75
- (float)minimumRate;	// 0x33473c6d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x33473a95
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x33473aa9
// converted property getter: - (float)pitch;	// 0x33473ced
// converted property getter: - (float)rate;	// 0x33473bed
- (void)setDelegate:(id)delegate;	// 0x33473511
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x33473e7d
- (void)setMaintainInactivePersistentConnection:(BOOL)connection;	// 0x33473ef5
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x33473e9d
- (id)setPitch:(float)pitch;	// 0x33473c7d
- (id)setRate:(float)rate;	// 0x33473bfd
// converted property setter: - (void)setVoice:(id)voice;	// 0x33473dcd
- (id)setVolume:(float)volume;	// 0x33473cfd
- (id)speechString;	// 0x33473bb9
- (id)startSpeakingAttributedString:(id)string;	// 0x334739a1
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x334739b5
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x334739dd
- (id)startSpeakingString:(id)string;	// 0x33473629
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x3347368d
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x33473649
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x3347397d
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x3347366d
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x33473a05
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x33473a19
// converted property getter: - (id)voice;	// 0x33473e11
// converted property getter: - (float)volume;	// 0x33473dbd
@end
