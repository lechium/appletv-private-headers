/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "UIKit-Structs.h"

@class NSString, UIDictationTestOps, UIAlertView, AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDictationController : NSObject {
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
	UIDictationTestOps *_dictationDebuggingOperations;	// 52 = 0x34
	BOOL cancelledByWaitingForLocalResults;	// 56 = 0x38
	BOOL dictationStartedFromGesture;	// 57 = 0x39
	BOOL _performTestOperationForEditing;	// 58 = 0x3a
	BOOL _discardNextHypothesis;	// 59 = 0x3b
	BOOL _hasPreheated;	// 60 = 0x3c
	NSString *_previousHypothesis;	// 64 = 0x40
	NSString *_language;	// 68 = 0x44
	NSString *_inputModeThatInvokedDictation;	// 72 = 0x48
	NSRange _insertionRange;	// 76 = 0x4c
}
@property(readonly, retain) AFDictationConnection *connection;	// G=0x2f8396d1; converted property
@property(assign, nonatomic) BOOL dictationStartedFromGesture;	// G=0x2f83be69; S=0x2f83be79; @synthesize
@property(assign, nonatomic) BOOL discardNextHypothesis;	// G=0x2f83becd; S=0x2f83bedd; @synthesize=_discardNextHypothesis
@property(assign, nonatomic) BOOL hasPreheated;	// G=0x2f83bf39; S=0x2f83bf49; @synthesize=_hasPreheated
@property(retain, nonatomic) NSString *inputModeThatInvokedDictation;	// G=0x2f83875d; S=0x2f83bf59; @synthesize=_inputModeThatInvokedDictation
@property(assign, nonatomic) NSRange insertionRange;	// G=0x2f83beed; S=0x2f83bf05; @synthesize=_insertionRange
@property(retain, nonatomic) NSString *language;	// G=0x2f83bf19; S=0x2f83bf29; @synthesize=_language
@property(assign, nonatomic) BOOL performTestOperationForEditing;	// G=0x2f83be89; S=0x2f83be99; @synthesize=_performTestOperationForEditing
@property(copy, nonatomic) NSString *previousHypothesis;	// G=0x2f83bea9; S=0x2f83bebd; @synthesize=_previousHypothesis
@property(assign) int state;	// G=0x2f83944d; S=0x2f83908d; converted property
@property(readonly, assign) BOOL wasDisabledDueToTelephonyActivity;	// G=0x2f839869; converted property
+ (id)activeInstance;	// 0x2f8358d5
+ (void)applicationDidBecomeActive;	// 0x2f836d89
+ (void)applicationDidChangeStatusBarFrame;	// 0x2f836eb5
+ (void)applicationWillResignActive;	// 0x2f836dc1
+ (id)attributedStringForDictationResult:(id)dictationResult andCorrectionIdentifier:(id)identifier;	// 0x2f838005
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x2f837bf1
+ (BOOL)dictationIsFunctional;	// 0x2f8362ad
+ (void)didBeginEditingInTextView:(id)textView;	// 0x2f83bc01
+ (void)didOneFingerTapInTextView:(id)textView;	// 0x2f836801
+ (void)disableGestureHandler;	// 0x2f83634d
+ (void)enableGestureHandlerIfNecessary;	// 0x2f457aa9
+ (BOOL)fetchCurrentInputModeSupportsDictation;	// 0x2f4c6e3d
+ (id)inputModeNameForDictation;	// 0x2f44c705
+ (id)interpretation:(id)interpretation forPhraseIndex:(unsigned)phraseIndex isShiftLocked:(BOOL)locked autocapitalizationType:(int)type;	// 0x2f8370ad
+ (BOOL)isRunning;	// 0x2f4b4be1
+ (BOOL)isTextViewOnStarkScreen:(id)screen;	// 0x2f836869
+ (void)keyboardDidHide;	// 0x2f836eb1
+ (void)keyboardDidSetDelegate;	// 0x2f4c14c9
+ (void)keyboardDidSetInputMode;	// 0x2f4c0599
+ (void)keyboardDidUpdateOnScreenStatus;	// 0x2f44f791
+ (void)logCorrectionStatistics;	// 0x2f4b4bf5
+ (void)logDictationString:(id)string;	// 0x2f83bc81
+ (id)metadataDictionaryForCorrectionIdentifier:(id)correctionIdentifier;	// 0x2f838311
+ (BOOL)openAssistantFrameworkIfNecessary;	// 0x2f835201
+ (void)poppedLastDebuggingOp;	// 0x2f83bd61
+ (id)serializedDictationPhrases:(id)phrases;	// 0x2f837bb1
+ (id)serializedDictationPhrases:(id)phrases fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x2f837555
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)tokenMatrix fromKeyboard:(BOOL)keyboard transform:(CFStringRef)transform;	// 0x2f835971
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(CFStringRef)transform;	// 0x2f836f5d
+ (BOOL)setupForOpeningConnections;	// 0x2f8352a1
+ (BOOL)setupForPhraseSerialization;	// 0x2f835245
+ (id)sharedInstance;	// 0x2f8358e5
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)inputDelegate;	// 0x2f836c79
+ (BOOL)shouldEnableGestureHandler;	// 0x2f457b61
+ (BOOL)shouldHideCursorForTextView:(id)textView;	// 0x2f836905
+ (BOOL)shouldHideSelectionUIForTextView:(id)textView;	// 0x2f8368e5
+ (BOOL)shouldInsertText:(id)text inInputDelegate:(id)inputDelegate;	// 0x2f836d35
+ (id)singleLineResultForResult:(id)result;	// 0x2f837d7d
+ (void)siriPreferencesChanged;	// 0x2f836e41
+ (BOOL)starkScreenExists;	// 0x2f8383d5
+ (id)streamingHypothesisForPhrases:(id)phrases;	// 0x2f83a175
+ (id)stringForState:(int)state;	// 0x2f83bc89
+ (id)stringForViewMode:(int)viewMode;	// 0x2f83bcf9
+ (BOOL)takesPhysicalButtonsBegan:(id)began forTextView:(id)textView;	// 0x2f8369b5
+ (BOOL)takesPhysicalButtonsEnded:(id)ended forTextView:(id)textView;	// 0x2f8369f9
+ (void)updateLandingView;	// 0x2f4bc881
+ (BOOL)usingTypeAndTalk;	// 0x2f83bd5d
+ (int)viewMode;	// 0x2f838421
+ (void)willEndEditingInTextView:(id)textView;	// 0x2f4b4a85
- (id)init;	// 0x2f835335
- (void)_restartDictation;	// 0x2f836b9d
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)inputDelegate;	// 0x2f836be9
- (BOOL)_shouldInsertText:(id)text inInputDelegate:(id)inputDelegate;	// 0x2f836cc5
- (id)assistantCompatibleLanguageCodeForInputMode:(id)inputMode;	// 0x2f838579
- (float)audioLevel;	// 0x2f8387e1
- (void)cancelDictation;	// 0x2f839d8d
- (void)cancelRecordingLimitTimer;	// 0x2f839605
// converted property getter: - (id)connection;	// 0x2f8396d1
- (id)connectionForStatisticsLogging;	// 0x2f83977d
- (void)dealloc;	// 0x2f83945d
- (id)debuggingDictationOperations;	// 0x2f8356ad
- (void)delayedTelephonyCheckingSetup;	// 0x2f83577d
- (void)dictationConnection:(id)connection didHypothesizePhrases:(id)phrases languageModel:(id)model;	// 0x2f83b49d
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;	// 0x2f83ad85
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)speechRecognition;	// 0x2f83b93d
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)speechRecording;	// 0x2f83b7b9
- (void)dictationConnectionSpeechRecordingDidBegin:(id)dictationConnectionSpeechRecording;	// 0x2f83b6e1
- (void)dictationConnectionSpeechRecordingDidCancel:(id)dictationConnectionSpeechRecording;	// 0x2f83b75d
- (void)dictationConnectionSpeechRecordingDidEnd:(id)dictationConnectionSpeechRecording;	// 0x2f83b6e9
- (void)dictationConnectionSpeechRecordingWillBegin:(id)dictationConnectionSpeechRecording;	// 0x2f83b6bd
- (void)dictationConnnectionDidChangeAvailability:(id)dictationConnnection;	// 0x2f83bbc1
- (BOOL)dictationEnabled;	// 0x2f8397ad
- (id)dictationPhraseArrayFromDictationResult:(id)dictationResult;	// 0x2f839fbd
// declared property getter: - (BOOL)dictationStartedFromGesture;	// 0x2f83be69
- (void)disableAutorotation;	// 0x2f8364bd
- (BOOL)disabledDueToTelephonyActivity;	// 0x2f8356fd
// declared property getter: - (BOOL)discardNextHypothesis;	// 0x2f83becd
- (void)dismissDictationView:(id)view;	// 0x2f839879
- (void)enableProximity;	// 0x2f83663d
- (void)endSessionIfNecessaryForTransitionFromState:(int)state toState:(int)state2;	// 0x2f839035
- (void)errorAnimationDidFinish;	// 0x2f839411
- (id)fieldIdentifierInputDelegate:(id)delegate;	// 0x2f838809
- (void)finishDictationRecognition:(id)recognition;	// 0x2f83a8cd
// declared property getter: - (BOOL)hasPreheated;	// 0x2f83bf39
// declared property getter: - (id)inputModeThatInvokedDictation;	// 0x2f83875d
- (void)insertSerializedDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x2f83a725
// declared property getter: - (NSRange)insertionRange;	// 0x2f83beed
- (BOOL)isInDebuggingMode;	// 0x2f83bdb9
// declared property getter: - (id)language;	// 0x2f83bf19
- (BOOL)needsLeadingSpaceForPhrases:(id)phrases;	// 0x2f83a3f9
- (BOOL)needsTrailingSpaceForPhrases:(id)phrases;	// 0x2f83a1cd
// declared property getter: - (BOOL)performTestOperationForEditing;	// 0x2f83be89
- (id)postfixTextForInputDelegate:(id)inputDelegate;	// 0x2f838a29
- (id)prefixTextForInputDelegate:(id)inputDelegate;	// 0x2f83891d
- (void)preheatIfNecessary;	// 0x2f83be0d
// declared property getter: - (id)previousHypothesis;	// 0x2f83bea9
- (void)proximityStateChanged:(id)changed;	// 0x2f8364f5
- (void)reenableAutorotation;	// 0x2f8363a5
- (void)releaseConnection;	// 0x2f839735
- (void)releaseConnectionAfterDictationRequest;	// 0x2f839775
- (void)releaseConnectionAfterStatisticsLogging;	// 0x2f839779
- (void)restartDictationForTypeAndTalk;	// 0x2f839f4d
- (CFStringRef)resultTransformForLanguageModel:(id)languageModel;	// 0x2f83a5fd
- (id)resultWithTrailingSpace:(id)trailingSpace;	// 0x2f83a6d9
- (id)selectedTextForInputDelegate:(id)inputDelegate;	// 0x2f838b35
- (void)setDictationInputmode;	// 0x2f836411
// declared property setter: - (void)setDictationStartedFromGesture:(BOOL)gesture;	// 0x2f83be79
// declared property setter: - (void)setDiscardNextHypothesis:(BOOL)hypothesis;	// 0x2f83bedd
// declared property setter: - (void)setHasPreheated:(BOOL)preheated;	// 0x2f83bf49
// declared property setter: - (void)setInputModeThatInvokedDictation:(id)dictation;	// 0x2f83bf59
// declared property setter: - (void)setInsertionRange:(NSRange)range;	// 0x2f83bf05
// declared property setter: - (void)setLanguage:(id)language;	// 0x2f83bf29
// declared property setter: - (void)setPerformTestOperationForEditing:(BOOL)editing;	// 0x2f83be99
// declared property setter: - (void)setPreviousHypothesis:(id)hypothesis;	// 0x2f83bebd
// converted property setter: - (void)setState:(int)state;	// 0x2f83908d
- (void)setupConnectionOptions;	// 0x2f838bdd
- (void)setupForDictationStart;	// 0x2f83992d
- (void)setupForStreamingDictationStart;	// 0x2f83988d
- (void)setupToInsertResultForNewHypothesis:(id)newHypothesis;	// 0x2f83aebd
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x2f838f89
- (void)startConnectionForReason:(int)reason;	// 0x2f838e31
- (void)startDictation;	// 0x2f839ba9
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x2f839d11
- (void)startDictationForReason:(int)reason;	// 0x2f839b15
- (void)startDictationForStark;	// 0x2f839c2d
- (void)startRecordingLimitTimer;	// 0x2f839649
// converted property getter: - (int)state;	// 0x2f83944d
- (void)stopDictation;	// 0x2f839e15
- (id)supportedDictationLanguages:(id)languages;	// 0x2f83860d
- (BOOL)supportsInputMode:(id)mode error:(id *)error;	// 0x2f838645
- (void)switchToDictationInputMode;	// 0x2f839bbd
// converted property getter: - (BOOL)wasDisabledDueToTelephonyActivity;	// 0x2f839869
- (void)willEndEditingInInputDelegate:(id)inputDelegate;	// 0x2f8367b9
@end

