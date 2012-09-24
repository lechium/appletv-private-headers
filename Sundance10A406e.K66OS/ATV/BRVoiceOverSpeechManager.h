/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSThread, NSObject, NSMutableArray, NSDictionary;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : XXUnknownSuperclass {
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
	BOOL _isPitchChangeEnabled;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL isPitchChangeEnabled;	// G=0x27ba15; S=0x27ba25; @synthesize=_isPitchChangeEnabled
@property(readonly, assign) BOOL isSpeaking;	// G=0x27b7d5; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x27b9e1; S=0x27b391; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x27b845; S=0x27b8f9; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x27b9f1; S=0x27ba05; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x27a8dd
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x27a945
- (id)init;	// 0x27a52d
- (void)_clearSpeechQueue;	// 0x27b50d
- (void)_continueSpeaking;	// 0x27b6bd
- (void)_dispatchSpeechAction:(id)action;	// 0x27b3b9
- (void)_initialize;	// 0x27a77d
- (void)_isSpeaking:(id)speaking;	// 0x27b77d
- (void)_pauseSpeaking;	// 0x27b65d
- (id)_preprocessString:(id)string language:(id)language;	// 0x27b1a5
- (id)_processDurationStrings:(id)strings;	// 0x27adb9
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x27b039
- (void)_setSpeechRate:(id)rate;	// 0x27b889
- (void)_speechJobFinished:(BOOL)finished;	// 0x27aa69
- (void)_startNextSpeechJob;	// 0x27ac05
- (void)_stopSpeaking;	// 0x27b71d
- (void)clearSpeechQueue;	// 0x27b52d
- (void)continueSpeaking;	// 0x27b6dd
- (void)dealloc;	// 0x27a6a5
- (void)dispatchSpeechAction:(id)action;	// 0x27b5c1
// declared property getter: - (BOOL)isPitchChangeEnabled;	// 0x27ba15
// converted property getter: - (BOOL)isSpeaking;	// 0x27b7d5
- (void)pauseSpeaking;	// 0x27b67d
// declared property setter: - (void)setIsPitchChangeEnabled:(BOOL)enabled;	// 0x27ba25
- (void)setMaintainConnection:(BOOL)connection;	// 0x27aa49
- (void)setPitch:(id)pitch;	// 0x27ab2d
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x27b391
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x27b8f9
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x27ba05
// declared property getter: - (BOOL)speechEnabled;	// 0x27b9e1
// declared property getter: - (float)speechRate;	// 0x27b845
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x27b9b1
- (void)stopSpeaking;	// 0x27b73d
// declared property getter: - (id)systemLanguage;	// 0x27b9f1
- (void)terminate;	// 0x27b56d
@end
