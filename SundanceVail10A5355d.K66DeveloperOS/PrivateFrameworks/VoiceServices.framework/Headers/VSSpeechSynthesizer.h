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
@property(assign) int footprint;	// G=0x361afe8d; S=0x361afe7d; converted property
@property(readonly, assign) float pitch;	// G=0x361afced; converted property
@property(readonly, assign) float rate;	// G=0x361afbed; converted property
@property(retain) NSString *voice;	// G=0x361afe11; S=0x361afdcd; converted property
@property(readonly, assign) float volume;	// G=0x361afdbd; converted property
+ (void)_localeDidChange;	// 0x361aff4d
+ (id)availableLanguageCodes;	// 0x361af3b1
+ (id)availableVoices;	// 0x361af2b5
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x361af385
+ (BOOL)isSystemSpeaking;	// 0x361af3cd
- (id)init;	// 0x361af3d9
- (id)initForInputFeedback;	// 0x361af441
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x361b005d
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x361b00f1
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x361b0011
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x361affc5
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x361aff79
- (id)continueSpeaking;	// 0x361afb25
- (void)dealloc;	// 0x361af471
// converted property getter: - (int)footprint;	// 0x361afe8d
- (BOOL)isSpeaking;	// 0x361afb91
- (float)maximumRate;	// 0x361afc75
- (float)minimumRate;	// 0x361afc6d
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x361afa95
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x361afaa9
// converted property getter: - (float)pitch;	// 0x361afced
// converted property getter: - (float)rate;	// 0x361afbed
- (void)setDelegate:(id)delegate;	// 0x361af511
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x361afe7d
- (void)setMaintainInactivePersistentConnection:(BOOL)connection;	// 0x361afef5
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x361afe9d
- (id)setPitch:(float)pitch;	// 0x361afc7d
- (id)setRate:(float)rate;	// 0x361afbfd
// converted property setter: - (void)setVoice:(id)voice;	// 0x361afdcd
- (id)setVolume:(float)volume;	// 0x361afcfd
- (id)speechString;	// 0x361afbb9
- (id)startSpeakingAttributedString:(id)string;	// 0x361af9a1
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x361af9b5
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x361af9dd
- (id)startSpeakingString:(id)string;	// 0x361af629
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x361af68d
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x361af649
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x361af97d
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x361af66d
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x361afa05
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x361afa19
// converted property getter: - (id)voice;	// 0x361afe11
// converted property getter: - (float)volume;	// 0x361afdbd
@end

