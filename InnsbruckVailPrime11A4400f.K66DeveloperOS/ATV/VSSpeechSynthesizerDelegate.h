/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "NSObject.h"


@protocol VSSpeechSynthesizerDelegate <NSObject>
@optional
- (void)speechSynthesizer:(id)synthesizer didContinueSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking phonemesSpoken:(id)spoken withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully phonemesSpoken:(id)spoken withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didPauseSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didStartSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer willSpeakRangeOfSpeechString:(NSRange)speechString;
- (void)speechSynthesizer:(id)synthesizer willSpeakRangeOfSpeechString:(NSRange)speechString forRequest:(id)request;
- (void)speechSynthesizerDidContinueSpeaking:(id)speechSynthesizer;
- (void)speechSynthesizerDidPauseSpeaking:(id)speechSynthesizer;
- (void)speechSynthesizerDidStartSpeaking:(id)speechSynthesizer;
@end
