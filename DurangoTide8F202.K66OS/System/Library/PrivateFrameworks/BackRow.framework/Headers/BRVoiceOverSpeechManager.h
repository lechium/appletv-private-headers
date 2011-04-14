/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSThread, NSMutableArray;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : NSObject {
@private
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	BOOL _runLoopEnabled;	// 16 = 0x10
	BOOL _didInitialize;	// 17 = 0x11
	BOOL _isSpeaking;	// 18 = 0x12
}
@property(readonly, assign) BOOL isSpeaking;	// G=0x3299a2dd; converted property
@property(assign, nonatomic) float speechRate;	// G=0x3299a29d; S=0x3299b201; @dynamic
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x3299b2c5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x3299b33d
- (id)init;	// 0x3299ac6d
- (void)_clearSpeechQueue;	// 0x3299a561
- (void)_continueSpeaking;	// 0x3299a435
- (void)_dispatchSpeechAction:(id)action;	// 0x3299a581
- (void)_initialize;	// 0x3299ae7d
- (void)_isSpeaking:(id)speaking;	// 0x3299a345
- (void)_pauseSpeaking;	// 0x3299a491
- (id)_preprocessString:(id)string;	// 0x3299a6a5
- (id)_processDurationStrings:(id)strings;	// 0x3299afd1
- (void)_setSpeechRate:(id)rate;	// 0x3299a23d
- (void)_speechJobFinished:(BOOL)finished;	// 0x3299aa2d
- (void)_startNextSpeechJob;	// 0x3299a82d
- (void)_stopSpeaking;	// 0x3299a3d5
- (void)clearSpeechQueue;	// 0x3299a525
- (void)continueSpeaking;	// 0x3299a3f9
- (void)dealloc;	// 0x3299abc1
- (void)dispatchSpeechAction:(id)action;	// 0x3299a4b5
// converted property getter: - (BOOL)isSpeaking;	// 0x3299a2dd
- (void)pauseSpeaking;	// 0x3299a455
- (void)setMaintainConnection:(BOOL)connection;	// 0x3299aae9
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x3299b201
// declared property getter: - (float)speechRate;	// 0x3299a29d
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x3299b299
- (void)stopSpeaking;	// 0x3299a399
@end

