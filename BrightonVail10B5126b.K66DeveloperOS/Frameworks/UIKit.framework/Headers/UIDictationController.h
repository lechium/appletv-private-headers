/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "AFDictationDelegate.h"
#import <NSObject.h> // Unknown library

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSTimer, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject <AFDictationDelegate> {
	AFDictationConnection *_connection;	// 4 = 0x4
	AFDictationOptions *_options;	// 8 = 0x8
	AFPreferences *_preferences;	// 12 = 0xc
	NSArray *_availableLanguages;	// 16 = 0x10
	NSTimer *_recordingLimitTimer;	// 20 = 0x14
	void *_callCenterFrameworkFileHandle;	// 24 = 0x18
	id _callCenter;	// 28 = 0x1c
	void *_facetimeCallFrameworkFileHandle;	// 32 = 0x20
	id _facetimeCallManager;	// 36 = 0x24
	BOOL _wasDisabledDueToTelephonyActivity;	// 40 = 0x28
	UIAlertView *_dictationAvailableSoonAlert;	// 44 = 0x2c
	BOOL _connectionWasAlreadyAliveForStatisticsLogging;	// 48 = 0x30
	BOOL dictationStartedFromGesture;	// 49 = 0x31
}
@property(readonly, retain) AFDictationConnection *connection;	// G=0x32e982e9; converted property
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// G=0x32e99621; S=0x32e99631; @synthesize
@property(assign) int state;	// G=0x32e98031; S=0x32e97d89; converted property
@property(readonly, assign) BOOL wasDisabledDueToTelephonyActivity;	// G=0x32e984b1; converted property
+ (id)activeInstance;	// 0x32e94fb5
+ (void)applicationDidBecomeActive;	// 0x32e95e75
+ (void)applicationDidChangeStatusBarFrame;	// 0x32e95f9d
+ (void)applicationWillResignActive;	// 0x32e95ead
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x32e96d81
+ (BOOL)dictationIsFunctional;	// 0x32e95a19
+ (void)disableGestureHandler;	// 0x32e95a89
+ (void)enableGestureHandlerIfNecessary;	// 0x32b657fd
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x32be37e5
+ (id)inputModeNameForDictation;	// 0x32b5a4bd
+ (id)interpretation:(id)interpretation forPhraseIndex:(unsigned)phraseIndex isShiftLocked:(BOOL)locked autocapitalizationType:(int)type;	// 0x32e961d1
+ (BOOL)isRunning;	// 0x32bcba09
+ (void)keyboardDidSetDelegate;	// 0x32bdc7dd
+ (void)keyboardDidSetInputMode;	// 0x32bdb80d
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x32b5d4e5
+ (void)logCorrectionStatistics;	// 0x32bcba21
+ (void)networkReachableCallback;	// 0x32e96045
+ (BOOL)openAssistantFrameworkIfNecessary;	// 0x32e94981
+ (id)prunedDictationResultForSingleLineEditor:(id)singleLineEditor;	// 0x32e96f0d
+ (id)serializedDictationPhrases:(id)phrases;	// 0x32e96d41
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x32e9678d
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x32e95059
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(CFStringRef)transform;	// 0x32e96085
+ (BOOL)setupForOpeningConnections;	// 0x32e94a21
+ (BOOL)setupForPhraseSerialization;	// 0x32e949c5
+ (id)sharedInstance;	// 0x32e94fc5
+ (BOOL)shouldEnableGestureHandler;	// 0x32b658b1
+ (void)siriPreferencesChanged;	// 0x32e95f2d
+ (void)updateLandingView;	// 0x32bd5a7d
+ (void)willEndEditingInTextView:(id)textView;	// 0x32bcb9a5
- (id)init;	// 0x32e94ab5
- (id)assistantCompatibleLanguageCodeForLanguage:(id)language region:(id)region;	// 0x32e97199
- (float)audioLevel;	// 0x32e973a1
- (void)cancelDictation;	// 0x32e98861
- (void)cancelRecordingLimitTimer;	// 0x32e9821d
// converted property getter: - (id)connection;	// 0x32e982e9
- (id)connectionForStatisticsLogging;	// 0x32e983c1
- (void)dealloc;	// 0x32e98041
- (void)delayedTelephonyCheckingSetup;	// 0x32e94e7d
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x32e99169
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;	// 0x32e98bd9
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x32e993e1
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x32e99271
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x32e991b1
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x32e99215
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x32e991b9
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x32e9918d
- (BOOL)dictationEnabled;	// 0x32e983f1
- (id)dictationPhraseArrayFromDictationResult:(id)dictationResult;	// 0x32e98a21
// declared property getter: - (BOOL)dictationStartedFromGesture;	// 0x32e99621
- (void)disableAutorotation;	// 0x32e95b4d
- (BOOL)disabledDueToTelephonyActivity;	// 0x32e94dfd
- (void)enableProximity;	// 0x32e95ccd
- (void)errorAnimationDidFinish;	// 0x32e97ff5
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x32e97439
- (id)inputModeThatInvokedDictation;	// 0x32e97309
- (float)normalizedAudioLevel;	// 0x32e973c9
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x32e976ad
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x32e97541
- (void)proximityStateChanged:(id)changed;	// 0x32e95b85
- (void)reenableAutorotation;	// 0x32e95ae1
- (void)releaseConnection;	// 0x32e9834d
- (void)releaseConnectionAfterDictationRequest;	// 0x32e9838d
- (void)releaseConnectionAfterStatisticsLogging;	// 0x32e9839d
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x32e97819
// declared property setter: - (void)setDictationStartedFromGesture:(BOOL)gesture;	// 0x32e99631
// converted property setter: - (void)setState:(int)state;	// 0x32e97d89
- (void)setupConnectionOptions;	// 0x32e97905
- (void)setupForDictationStart;	// 0x32e984c1
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x32e97cf5
- (void)startConnectionForReason:(int)reason;	// 0x32e97bcd
- (void)startDictation;	// 0x32e98751
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x32e987e5
- (void)startDictationForReason:(int)reason;	// 0x32e98741
- (void)startDictationFromLayout;	// 0x32e98765
- (void)startRecordingLimitTimer;	// 0x32e98261
// converted property getter: - (int)state;	// 0x32e98031
- (void)stopDictation;	// 0x32e988e9
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x32e971d5
// converted property getter: - (BOOL)wasDisabledDueToTelephonyActivity;	// 0x32e984b1
@end

