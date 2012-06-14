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
@private
	void *_speechJob;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSSpeechSynthesizerDelegate> _delegate;	// 12 = 0xc
	NSString *_voice;	// 16 = 0x10
	int _footprint;	// 20 = 0x14
	float _rate;	// 24 = 0x18
	float _pitch;	// 28 = 0x1c
	float _volume;	// 32 = 0x20
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned willUseInput : 1;
	} _synthesizerFlags;	// 36 = 0x24
}
@property(assign) int footprint;	// G=0x30d69f39; S=0x30d69f29; converted property
@property(readonly, assign) float pitch;	// G=0x30d69d99; converted property
@property(readonly, assign) float rate;	// G=0x30d69c99; converted property
@property(retain) NSString *voice;	// G=0x30d69ebd; S=0x30d69e79; converted property
@property(readonly, assign) float volume;	// G=0x30d69e69; converted property
+ (void)_localeDidChange;	// 0x30d69f9d
+ (id)availableLanguageCodes;	// 0x30d69471
+ (id)availableVoices;	// 0x30d69375
+ (id)availableVoicesForLanguageCode:(id)languageCode;	// 0x30d69445
+ (BOOL)isSystemSpeaking;	// 0x30d6948d
- (id)init;	// 0x30d69499
- (id)initForInputFeedback;	// 0x30d69501
- (void)_handleSpeech:(VSSpeechRef)speech completed:(BOOL)completed phonemesSpoken:(CFStringRef)spoken withError:(id)error;	// 0x30d6a0ad
- (void)_handleSpeech:(VSSpeechRef)speech willSpeakMarkType:(int)type inRange:(XXStruct_K5nmsA)range;	// 0x30d6a141
- (void)_handleSpeechContinued:(VSSpeechRef)continued;	// 0x30d6a061
- (void)_handleSpeechPaused:(VSSpeechRef)paused;	// 0x30d6a015
- (void)_handleSpeechStarted:(VSSpeechRef)started;	// 0x30d69fc9
- (id)continueSpeaking;	// 0x30d69bd1
- (void)dealloc;	// 0x30d69531
// converted property getter: - (int)footprint;	// 0x30d69f39
- (BOOL)isSpeaking;	// 0x30d69c3d
- (float)maximumRate;	// 0x30d69d21
- (float)minimumRate;	// 0x30d69d19
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary;	// 0x30d69b41
- (id)pauseSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x30d69b55
// converted property getter: - (float)pitch;	// 0x30d69d99
// converted property getter: - (float)rate;	// 0x30d69c99
- (void)setDelegate:(id)delegate;	// 0x30d695bd
// converted property setter: - (void)setFootprint:(int)footprint;	// 0x30d69f29
- (void)setMaintainPersistentConnection:(BOOL)connection;	// 0x30d69f49
- (id)setPitch:(float)pitch;	// 0x30d69d29
- (id)setRate:(float)rate;	// 0x30d69ca9
// converted property setter: - (void)setVoice:(id)voice;	// 0x30d69e79
- (id)setVolume:(float)volume;	// 0x30d69da9
- (id)speechString;	// 0x30d69c65
- (id)startSpeakingAttributedString:(id)string;	// 0x30d69a4d
- (id)startSpeakingAttributedString:(id)string toURL:(id)url;	// 0x30d69a61
- (id)startSpeakingAttributedString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30d69a89
- (id)startSpeakingString:(id)string;	// 0x30d696d5
- (id)startSpeakingString:(id)string attributedString:(id)string2 toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30d69739
- (id)startSpeakingString:(id)string toURL:(id)url;	// 0x30d696f5
- (id)startSpeakingString:(id)string toURL:(id)url withLanguageCode:(id)languageCode;	// 0x30d69a29
- (id)startSpeakingString:(id)string withLanguageCode:(id)languageCode;	// 0x30d69719
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary;	// 0x30d69ab1
- (id)stopSpeakingAtNextBoundary:(int)nextBoundary synchronously:(BOOL)synchronously;	// 0x30d69ac5
// converted property getter: - (id)voice;	// 0x30d69ebd
// converted property getter: - (float)volume;	// 0x30d69e69
@end

