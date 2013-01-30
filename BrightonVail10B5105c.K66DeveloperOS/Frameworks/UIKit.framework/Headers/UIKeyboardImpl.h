/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardCandidateListDelegate.h"

@class NSMutableArray, NSArray, NSTimer, NSMutableDictionary, UITextInputTraits, UITextInputArrowKeyHistory, UIKeyboardCandidate, UIAlertView, NSString, UIKeyboardInputManager, UIAutocorrectInlinePrompt, UIKeyboardLayout, UIDelayedAction;
@protocol UIKeyboardTypology, UIKeyInput, UITextInput, UITextInputPrivate, UIKeyboardInput, UIKeyboardImplGeometryDelegate, UIKeyboardCandidateList, UIKeyboardRecording, UIApplicationEventRecording;

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate> {
	id<UIKeyInput> m_delegate;	// 84 = 0x54
	UIView *m_languageIndicator;	// 88 = 0x58
	NSString *m_previousInputString;	// 92 = 0x5c
	UIKeyboardInputManager *m_inputManager;	// 96 = 0x60
	UIKeyboardCandidate *m_autocorrection;	// 100 = 0x64
	UIAutocorrectInlinePrompt *m_autocorrectPrompt;	// 104 = 0x68
	UIDelayedAction *m_autocorrectPromptAction;	// 108 = 0x6c
	NSMutableDictionary *m_autocorrectHistoryLists;	// 112 = 0x70
	NSMutableArray *m_recentUnacceptedAutocorrections;	// 116 = 0x74
	NSArray *m_candidates;	// 120 = 0x78
	id<UIKeyboardCandidateList> m_candidateList;	// 124 = 0x7c
	UIView *m_markedTextOverlay;	// 128 = 0x80
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;	// 132 = 0x84
	NSObject<UIKeyboardRecording, UIApplicationEventRecording> *m_recorder;	// 136 = 0x88
	UIKeyboardLayout *m_layout;	// 140 = 0x8c
	NSMutableDictionary *m_keyedLayouts;	// 144 = 0x90
	NSString *m_inputModeLastChosen;	// 148 = 0x94
	struct {
		NSTimer *timer;
		GSEventRef eventToRepeat;
		BOOL firstRepeat;
	} m_hardwareRepeat;	// 152 = 0x98
	NSTimer *m_autoDeleteTimer;	// 164 = 0xa4
	BOOL m_autoDeleteJustFired;	// 168 = 0xa8
	unsigned m_autoDeleteCount;	// 172 = 0xac
	double m_autoDeleteLastDelete;	// 176 = 0xb0
	double m_autoDeleteInterval;	// 184 = 0xb8
	unsigned long m_autoDeleteShiftCharacter;	// 192 = 0xc0
	UIDelayedAction *m_longPressAction;	// 196 = 0xc4
	int m_orientation;	// 200 = 0xc8
	int m_originalOrientation;	// 204 = 0xcc
	CGPoint m_inputPoint;	// 208 = 0xd0
	int m_changeCount;	// 216 = 0xd8
	double m_changeTime;	// 220 = 0xdc
	id m_changedDelegate;	// 228 = 0xe4
	CFRunLoopObserverRef m_observer;	// 232 = 0xe8
	unsigned m_textInputChangingCount;	// 236 = 0xec
	BOOL m_textInputChangingText;	// 240 = 0xf0
	BOOL m_textInputChangingDirection;	// 241 = 0xf1
	BOOL m_textInputChangesIgnored;	// 242 = 0xf2
	BOOL m_insideKeyInputDelegateCall;	// 243 = 0xf3
	UITextInputTraits *m_defaultTraits;	// 244 = 0xf4
	UITextInputTraits *m_traits;	// 248 = 0xf8
	int m_returnKeyState;	// 252 = 0xfc
	int m_currentDirection;	// 256 = 0x100
	int m_contextWordDepth;	// 260 = 0x104
	BOOL m_autoDeleteOK;	// 264 = 0x108
	BOOL m_autocapitalizationPreference;	// 265 = 0x109
	BOOL m_autocorrectPromptTimerFired;	// 266 = 0x10a
	BOOL m_autocorrectionPreference;	// 267 = 0x10b
	BOOL m_autoshift;	// 268 = 0x10c
	BOOL m_caretShowingNow;	// 269 = 0x10d
	BOOL m_changeNotificationDisabled;	// 270 = 0x10e
	BOOL m_correctionLearningAllowed;	// 271 = 0x10f
	BOOL m_delegateIsSMSTextView;	// 272 = 0x110
	BOOL m_delegateRequiresKeyEvents;	// 273 = 0x111
	BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;	// 274 = 0x112
	BOOL m_doubleSpacePeriodPreference;	// 275 = 0x113
	BOOL m_hardwareKeyboardAttached;	// 276 = 0x114
	BOOL m_inDealloc;	// 277 = 0x115
	BOOL m_inHardwareKeyboardMode;	// 278 = 0x116
	BOOL m_initializationDone;	// 279 = 0x117
	BOOL m_performDecomposingDelete;	// 280 = 0x118
	BOOL m_performanceLoggingEnabled;	// 281 = 0x119
	BOOL m_selecting;	// 282 = 0x11a
	BOOL m_shift;	// 283 = 0x11b
	BOOL m_shiftLocked;	// 284 = 0x11c
	BOOL m_shiftLockedEnabled;	// 285 = 0x11d
	BOOL m_settingShift;	// 286 = 0x11e
	BOOL m_shouldSkipCandidateSelection;	// 287 = 0x11f
	BOOL m_suggestionsShownForCurrentDeletion;	// 288 = 0x120
	BOOL m_originalShouldSkipCandidateSelection;	// 289 = 0x121
	BOOL m_updatingPreferences;	// 290 = 0x122
	BOOL m_changingGeometryWithSameOrientation;	// 291 = 0x123
	BOOL m_suppressGeometryChangeNotifications;	// 292 = 0x124
	BOOL m_acceptingCandidate;	// 293 = 0x125
	BOOL m_userChangedSelection;	// 294 = 0x126
	BOOL m_shouldChargeKeys;	// 295 = 0x127
	BOOL m_longPress;	// 296 = 0x128
	BOOL m_syntheticInput;	// 297 = 0x129
	BOOL m_replacingWord;	// 298 = 0x12a
	BOOL m_shiftNeedsUpdate;	// 299 = 0x12b
	BOOL m_shiftPreventAutoshift;	// 300 = 0x12c
	BOOL m_shiftHeldDownNeedsUpdated;	// 301 = 0x12d
	BOOL m_delegateAdoptsTextInput;	// 302 = 0x12e
	BOOL m_delegateAdoptsTextInputPrivate;	// 303 = 0x12f
	BOOL m_delegateAdoptsKeyboardInput;	// 304 = 0x130
	BOOL m_clientVariantSupportEnabled;	// 305 = 0x131
	BOOL m_clientVariantSupportEnabledEver;	// 306 = 0x132
	NSMutableArray *m_keyplaneNamesPreviousDelegate;	// 308 = 0x134
	NSMutableArray *m_keyplaneNamesCurrentDelegate;	// 312 = 0x138
	UITextInputArrowKeyHistory *m_arrowKeyHistory;	// 316 = 0x13c
	BOOL m_preRotateShift;	// 320 = 0x140
	BOOL m_preRotateShiftLocked;	// 321 = 0x141
	BOOL m_showInputModeIndicator;	// 322 = 0x142
	BOOL m_suppressUpdateCandidateView;	// 323 = 0x143
	BOOL m_shouldUpdateCacheOnInputModesChange;	// 324 = 0x144
	BOOL m_shouldSetInputModeInNextRun;	// 325 = 0x145
	BOOL m_rivenCenterFilled;	// 326 = 0x146
	float m_splitProgress;	// 328 = 0x148
	NSString *m_currentUsedInputMode;	// 332 = 0x14c
	NSString *m_lastUsedInputMode;	// 336 = 0x150
	BOOL m_needsCandidates;	// 340 = 0x154
	BOOL m_shouldSkipCandidateGeneration;	// 341 = 0x155
	BOOL m_updateLayoutOnShowKeyboard;	// 342 = 0x156
	BOOL m_receivedCandidatesInCurrentInputMode;	// 343 = 0x157
	BOOL m_markedTextChangesIgnored;	// 344 = 0x158
	int _currentAlertReason;	// 348 = 0x15c
	BOOL m_scrolling;	// 352 = 0x160
	id<UIKeyboardTypology> typologyRecorder;	// 356 = 0x164
	BOOL m_showsCandidateBar;	// 360 = 0x168
	BOOL m_showsCandidateInline;	// 361 = 0x169
	UIAlertView *keyboardAlertView;	// 364 = 0x16c
	BOOL committingCandidate;	// 368 = 0x170
	BOOL geometryIsChanging;	// 369 = 0x171
}
@property(retain, nonatomic) UITextInputArrowKeyHistory *arrowKeyHistory;	// G=0x3466b8a9; S=0x3465c389; @synthesize=m_arrowKeyHistory
@property(readonly, assign) BOOL autocapitalizationPreference;	// G=0x34637245; converted property
@property(readonly, retain) UIAutocorrectInlinePrompt *autocorrectPrompt;	// G=0x3466d131; converted property
@property(assign) BOOL autocorrectSpellingEnabled;	// G=0x34663371; S=0x34635595; converted property
@property(readonly, assign) BOOL autocorrectionPreference;	// G=0x34635561; converted property
@property(assign) BOOL automaticMinimizationEnabled;	// G=0x347819e9; S=0x34781a1d; converted property
@property(assign) BOOL caretBlinks;	// G=0x34787afd; S=0x34638ea5; converted property
@property(assign) BOOL caretVisible;	// G=0x3466934d; S=0x34638f29; converted property
@property(readonly, assign) BOOL centerFilled;	// G=0x3478104d; 
@property(readonly, assign) int changeCount;	// G=0x34636b59; converted property
@property(assign) BOOL changeNotificationDisabled;	// G=0x34782da1; S=0x34782db1; converted property
@property(retain, nonatomic) id changedDelegate;	// G=0x34636e01; S=0x34636e11; @synthesize=m_changedDelegate
@property(retain, nonatomic) id changedDelegate;	// @dynamic
@property(readonly, assign, getter=isClientVariantSupportEnabled) BOOL clientVariantSupportEnabled;	// G=0x34641385; converted property
@property(assign, nonatomic) BOOL committingCandidate;	// G=0x34787d51; S=0x34787d61; @synthesize
@property(retain, nonatomic) NSString *currentUsedInputMode;	// G=0x3466c771; S=0x34635b99; @synthesize=m_currentUsedInputMode
@property(retain, nonatomic) UIResponder<UIKeyInput> *delegate;	// G=0x34630db9; S=0x34636285; 
@property(readonly, assign, nonatomic) UIResponder *delegateAsResponder;	// G=0x34782a55; 
@property(readonly, assign) BOOL delegateIsSMSTextView;	// G=0x34636e61; converted property
@property(readonly, assign) BOOL doubleSpacePeriodPreference;	// G=0x34631cad; converted property
@property(assign, nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate;	// G=0x34636271; S=0x34635f31; @synthesize=m_geometryDelegate
@property(assign, nonatomic) BOOL geometryIsChanging;	// G=0x34787d71; S=0x346464a1; @synthesize
@property(retain) id hardwareKeyboardsSeenPreference;	// G=0x34781f51; S=0x34781f89; converted property
@property(assign, nonatomic, getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;	// G=0x3463326d; S=0x3466a579; 
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *inputDelegate;	// G=0x34633061; 
@property(retain, nonatomic) UIKeyboardInputManager *inputManager;	// G=0x34634f91; S=0x34634f81; @synthesize=m_inputManager
@property(readonly, retain) NSString *inputModeLastChosen;	// G=0x347826b9; converted property
@property(retain, nonatomic) UIAlertView *keyboardAlertView;	// G=0x346e49e9; S=0x346e49f9; @synthesize
@property(retain, nonatomic) NSString *lastUsedInputMode;	// G=0x34787d41; S=0x346e4dd1; @synthesize=m_lastUsedInputMode
@property(readonly, assign, nonatomic) id<UIKeyboardInput> legacyInputDelegate;	// G=0x34639111; 
@property(assign, getter=isLongPress) BOOL longPress;	// G=0x3469ec55; S=0x3478807d; converted property
@property(readonly, retain) UIView *markedTextOverlay;	// G=0x34783115; converted property
@property(readonly, assign) unsigned minimumTouchesForTranslation;	// G=0x34781265; 
@property(assign) unsigned phraseBoundary;	// G=0x34783c25; S=0x34783b9d; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextInputPrivate> *privateInputDelegate;	// G=0x34630d95; 
@property(retain, nonatomic) id<UIKeyboardRecording, UIApplicationEventRecording> recorder;	// G=0x34635b89; S=0x346e4b0d; 
@property(assign) BOOL returnKeyEnabled;	// G=0x346444ad; S=0x34637045; converted property
@property(assign) BOOL rivenSplitLock;	// G=0x347811d5; S=0x34781209; 
@property(assign, getter=isShiftLocked) BOOL shiftLocked;	// G=0x34642795; S=0x347835fd; converted property
@property(readonly, assign) BOOL shiftLockedEnabled;	// G=0x34783665; converted property
@property(assign) BOOL shouldChargeKeys;	// G=0x34786c91; S=0x34637011; converted property
@property(assign, nonatomic) BOOL shouldSetInputModeInNextRun;	// G=0x34787d21; S=0x34787d31; @synthesize=m_shouldSetInputModeInNextRun
@property(readonly, assign, nonatomic) BOOL shouldShowCandidateBar;	// G=0x34645065; 
@property(assign, nonatomic) BOOL shouldSkipCandidateSelection;	// G=0x3469f229; S=0x3463a179; 
@property(assign, nonatomic) BOOL showInputModeIndicator;	// G=0x34686b59; S=0x34787d11; @synthesize=m_showInputModeIndicator
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x346361a9; S=0x346451b5; @synthesize=m_showsCandidateBar
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x346e4371; S=0x346e2781; @synthesize=m_showsCandidateInline
@property(readonly, assign, nonatomic) BOOL splitTransitionInProgress;	// G=0x34645b59; 
@property(retain, nonatomic) id<UIKeyboardTypology> typologyRecorder;	// G=0x34634fa1; S=0x346e4b49; @synthesize
+ (void)_clearHardwareKeyboardMinimizationPreference;	// 0x34787ff5
+ (id)activeInstance;	// 0x34553895
+ (float)additionalInstanceHeight;	// 0x34636159
+ (float)additionalInstanceHeightLoading;	// 0x34780a1d
+ (void)applicationDidEnterBackground:(id)application;	// 0x346e41a5
+ (void)applicationDidReceiveMemoryWarning:(id)application;	// 0x346967e9
+ (void)applicationWillEnterForeground:(id)application;	// 0x346e573d
+ (void)applicationWillResignActive:(id)application;	// 0x346e3e09
+ (void)applicationWillSuspend:(id)application;	// 0x346e3e3d
+ (CGSize)defaultSize;	// 0x347809c1
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x345b3bb5
+ (void)hardwareKeyboardAvailabilityChanged;	// 0x347871f9
+ (int)interfaceOrientationForSize:(CGSize)size;	// 0x34635f89
+ (BOOL)isSplit;	// 0x34639a99
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x346397d1
+ (void)markElapsed:(id)elapsed;	// 0x34635ec1
+ (void)markPerformance:(id)performance;	// 0x34630a3d
+ (id)normalizedInputModesFromPreference;	// 0x347809e5
+ (int)persistentDictationTargetZone;	// 0x34781415
+ (CGPoint)persistentDictationWindowOffset;	// 0x34781611
+ (CGPoint)persistentOffset;	// 0x345b6609
+ (float)persistentSplitProgress;	// 0x347812c9
+ (void)refreshRivenStateWithTraits:(id)traits isKeyboard:(BOOL)keyboard;	// 0x34631a49
+ (void)releaseSharedInstance;	// 0x345c8f5d
+ (BOOL)rivenInstalled;	// 0x345ba345
+ (BOOL)rivenPreference;	// 0x34542155
+ (BOOL)rivenTranslationPreference;	// 0x345b9305
+ (void)setParentTestForProfiling:(id)profiling;	// 0x34787e19
+ (void)setPersistentDictationTargetZone:(int)zone;	// 0x3478145d
+ (void)setPersistentDictationWindowOffset:(CGPoint)offset;	// 0x347814b9
+ (void)setPersistentOffset:(CGPoint)offset;	// 0x346727f9
+ (void)setPersistentSplitProgress:(float)progress;	// 0x34781335
+ (id)sharedInstance;	// 0x346304a5
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x345b3a59
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation textInputTraits:(id)traits;	// 0x3463984d
+ (float)splitProgress;	// 0x34781325
+ (BOOL)supportsSplit;	// 0x3463c529
+ (void)suppressSetPersistentOffset:(BOOL)offset;	// 0x34781401
- (id)initWithFrame:(CGRect)frame;	// 0x34630679
- (id)UILanguagePreference;	// 0x34631d69
- (id)_autocorrectPromptRects;	// 0x346accf9
- (int)_clipCornersOfView:(id)view;	// 0x34782dc1
- (id)_getAutocorrection;	// 0x34788309
- (id)_getCurrentKeyboardName;	// 0x34788221
- (id)_getCurrentKeyplaneName;	// 0x347881bd
- (id)_getLocalizedInputMode;	// 0x34788285
- (void)_handleWebKeyEvent:(GSEventRef)event withEventType:(int)eventType withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x34787769
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString;	// 0x347878c1
- (void)_handleWebKeyEvent:(GSEventRef)event withInputString:(id)inputString withInputStringIgnoringModifiers:(id)inputStringIgnoringModifiers;	// 0x34787845
- (BOOL)_hasCandidates;	// 0x346329c1
- (unsigned)_inputCountForAutocorrectionCandidate;	// 0x34788439
- (id)_inputForAutocorrectionCandidate;	// 0x346aa00d
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;	// 0x34787eb9
- (id)_layout;	// 0x3463982d
- (BOOL)_needsCandidates;	// 0x347883e9
- (int)_positionInCandidateList:(id)candidateList;	// 0x34788329
- (id)_rangeForAutocorrectionText:(id)autocorrectionText;	// 0x346acf51
- (void)_releaseInputManager;	// 0x34788419
- (void)_remapKeyEvent:(GSEventRef)event;	// 0x3466a6a1
- (void)_resetInputLocation;	// 0x347883f9
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x347882e9
- (void)_setInputManager:(id)manager;	// 0x34787e55
- (void)_setNeedsCandidates:(BOOL)candidates;	// 0x347883d9
- (void)_setShiftLockedEnabled:(BOOL)enabled;	// 0x34787e65
- (id)_shortcutConversionCandidateForInput:(id)input;	// 0x3466c781
- (BOOL)_shouldMinimizeForHardwareKeyboard;	// 0x34636241
- (BOOL)_shouldShowCandidateBar:(BOOL)bar;	// 0x34645081
- (void)_updateSoundPreheatingForWindow:(id)window;	// 0x34636c31
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x346462b5
- (void)acceptAutocorrection;	// 0x34673e01
- (void)acceptCandidate:(id)candidate atIndex:(unsigned)index;	// 0x34784bb1
- (void)acceptCurrentCandidate;	// 0x34784f81
- (void)acceptCurrentCandidateIfSelected;	// 0x34643a15
- (BOOL)acceptInputString:(id)string;	// 0x3466763d
- (BOOL)acceptWord:(id)word firstDelete:(unsigned)aDelete;	// 0x346a5eed
- (id)accessibilityLabelForCandidate:(id)candidate;	// 0x34786c65
- (void)addInputObject:(id)object;	// 0x3478531d
- (void)addInputString:(id)string;	// 0x34783915
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x3466ba6d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x347822d1
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)sortingMethod;	// 0x34786ba9
- (void)animateAutocorrection;	// 0x34704b99
- (void)applicationResumedEventsOnly:(id)only;	// 0x34780b15
- (void)applicationSuspendedEventsOnly:(id)only;	// 0x34780aa9
- (void)applyAutocorrection;	// 0x34704791
// declared property getter: - (id)arrowKeyHistory;	// 0x3466b8a9
- (void)autoDeleteTimerFired:(id)fired;	// 0x34786dd9
// converted property getter: - (BOOL)autocapitalizationPreference;	// 0x34637245
- (id)autocorrectHistoryForInputMode:(id)inputMode;	// 0x34700c09
// converted property getter: - (id)autocorrectPrompt;	// 0x3466d131
// converted property getter: - (BOOL)autocorrectSpellingEnabled;	// 0x34663371
- (void)autocorrectionAnimationDidStop:(id)autocorrectionAnimation finished:(id)finished context:(void *)context;	// 0x34705679
// converted property getter: - (BOOL)autocorrectionPreference;	// 0x34635561
- (BOOL)autocorrectionPreferenceForTraits;	// 0x346354ed
- (id)autocorrectionRecordForWord:(id)word;	// 0x34700bd1
// converted property getter: - (BOOL)automaticMinimizationEnabled;	// 0x347819e9
- (void)callChanged;	// 0x34664c4d
- (void)callChangedSelection;	// 0x34639095
- (BOOL)callLayoutIgnoresShiftState;	// 0x3469f305
- (BOOL)callLayoutIsShiftKeyBeingHeld;	// 0x34645435
- (BOOL)callLayoutIsShiftKeyPlaneChooser;	// 0x346453e5
- (void)callLayoutLongPressAction;	// 0x34787d85
- (void)callLayoutSetAutoshift:(BOOL)autoshift;	// 0x3463967d
- (void)callLayoutSetShift:(BOOL)shift;	// 0x34639625
- (void)callLayoutUpdateAllLocalizedKeys;	// 0x34787dcd
- (void)callLayoutUpdateLocalizedKeys;	// 0x346354a5
- (void)callLayoutUpdateReturnKey;	// 0x34637071
- (BOOL)callLayoutUsesAutoShift;	// 0x3463950d
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)call characterCountForRapidDelete:(int)rapidDelete;	// 0x34782b11
- (BOOL)callShouldInsertText:(id)call;	// 0x3466ca51
- (BOOL)callShouldReplaceExtendedRange:(unsigned)call withText:(id)text includeMarkedText:(BOOL)text3;	// 0x34704431
- (BOOL)canHandleKeyHitTest;	// 0x34644d4d
- (void)cancelAllKeyEvents;	// 0x346880f9
- (void)cancelSplitTransition;	// 0x347817fd
- (id)candidateList;	// 0x347851e1
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x34785141
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x34785165
// converted property getter: - (BOOL)caretBlinks;	// 0x34787afd
// converted property getter: - (BOOL)caretVisible;	// 0x3466934d
// declared property getter: - (BOOL)centerFilled;	// 0x3478104d
// converted property getter: - (int)changeCount;	// 0x34636b59
// converted property getter: - (BOOL)changeNotificationDisabled;	// 0x34782da1
// declared property getter: - (id)changedDelegate;	// 0x34636e01
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x34786ca1
- (BOOL)checkSpellingPreference;	// 0x346356b1
- (BOOL)checkSpellingPreferenceForTraits;	// 0x3463563d
- (void)clearAnimations;	// 0x346e43d1
- (void)clearAutocorrectPromptTimer;	// 0x346331cd
- (void)clearChangeTimeAndCount;	// 0x34636b6d
- (void)clearDelegate;	// 0x346e4395
- (void)clearExcessKeyboardMemory;	// 0x3469e8fd
- (void)clearInput;	// 0x346326c9
- (void)clearKeyAreas;	// 0x34644d71
- (void)clearLanguageIndicator;	// 0x3478808d
- (void)clearLayouts;	// 0x34635bad
- (void)clearLongPressTimer;	// 0x346534e1
- (void)clearSelection;	// 0x34787b25
- (void)clearShiftState;	// 0x3466e395
- (void)clearTimers;	// 0x346e441d
- (void)clearTransientState;	// 0x34636e25
- (id)clientOverrideForKey:(id)key;	// 0x3478189d
- (id)clientVariantDelegate;	// 0x34637105
- (id)clientVariantsForKey:(id)key;	// 0x34781845
// declared property getter: - (BOOL)committingCandidate;	// 0x34787d51
- (CGRect)convertRectToAutocorrectRect:(CGRect)autocorrectRect delegateView:(id)view container:(id)container;	// 0x346ad595
- (id)currentInputContextFromInputDelegateWithWordRange:(id)wordRange;	// 0x34638b35
- (BOOL)currentKeyboardTraitsAllowCandidateBar;	// 0x3467401d
- (float)currentLandscapeHeight;	// 0x3478084d
- (float)currentLandscapeWidth;	// 0x347807a1
- (float)currentPortraitHeight;	// 0x34645a1d
- (float)currentPortraitWidth;	// 0x34645935
// declared property getter: - (id)currentUsedInputMode;	// 0x3466c771
- (void)dealloc;	// 0x346e4b59
- (void)defaultsDidChange;	// 0x34780dfd
- (void)delayedInit;	// 0x34652205
// declared property getter: - (id)delegate;	// 0x34630db9
// declared property getter: - (id)delegateAsResponder;	// 0x34782a55
// converted property getter: - (BOOL)delegateIsSMSTextView;	// 0x34636e61
- (BOOL)delegateSuggestionsForCurrentInput;	// 0x34786711
- (BOOL)delegateSupportsCorrectionUI;	// 0x346a9fe1
- (void)deleteBackward;	// 0x34783901
- (void)deleteBackwardAndNotify:(BOOL)notify;	// 0x34783821
- (void)deleteForwardAndNotify:(BOOL)notify;	// 0x34783891
- (void)deleteFromInput;	// 0x34784431
- (void)detach;	// 0x346e4a0d
- (void)dismissKeyboard;	// 0x347875b5
- (BOOL)displaysCandidates;	// 0x346649b5
// converted property getter: - (BOOL)doubleSpacePeriodPreference;	// 0x34631cad
- (CGSize)dragGestureSize;	// 0x3478119d
- (void)enable;	// 0x34782afd
- (void)fadeAnimationDidStop:(id)fadeAnimation finished:(id)finished;	// 0x3478229d
- (void)fadeAutocorrectPrompt;	// 0x34786491
- (void)finishSplitTransitionWithProgress:(float)progress;	// 0x3478812d
- (void)firstHardwareAutoRepeat:(id)repeat;	// 0x347872d1
- (BOOL)flushKeyplaneName:(id)name;	// 0x346740d9
- (void)forceShiftUpdate;	// 0x34700ae1
- (void)forceShiftUpdateIfKeyboardStateChanged;	// 0x34665c3d
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x34781169
- (id)generateAutocorrectionReplacements:(id)replacements;	// 0x34702a05
- (void)generateCandidates;	// 0x3465352d
- (void)generateCandidatesWithOptions:(int)options;	// 0x34653541
- (void)geometryChangeDone:(BOOL)done;	// 0x3465340d
// declared property getter: - (id)geometryDelegate;	// 0x34636271
// declared property getter: - (BOOL)geometryIsChanging;	// 0x34787d71
- (id)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method;	// 0x34786bd5
- (void)groupedCandidatesFromCandidates:(id)candidates usingSortingMethod:(id)method completion:(id)completion;	// 0x34786c05
- (void)handleAutoDelete;	// 0x34786f81
- (void)handleDelete;	// 0x34783809
- (void)handleDeleteAsRepeat:(BOOL)repeat;	// 0x3478373d
- (void)handleDeleteWithNonZeroInputCount;	// 0x347841d9
- (void)handleDeleteWithZeroInputCount;	// 0x34783e3d
- (BOOL)handleDoubleSpacePeriodForInputString:(id)inputString afterSpace:(BOOL)space elapsedTime:(double)time;	// 0x346a6539
- (BOOL)handleKeyCommand:(GSEventRef)command repeatOkay:(BOOL *)okay;	// 0x3466a741
- (void)handleKeyEvent:(GSEventRef)event;	// 0x34669d69
- (void)handleObserverCallback;	// 0x34664bb1
- (void)handleStringInput:(id)input fromVariantKey:(BOOL)variantKey;	// 0x3466b9b5
- (void)hardwareAutoRepeat:(id)repeat;	// 0x347872b1
- (void)hardwareKeyboardAvailabilityChanged;	// 0x3478722d
// converted property getter: - (id)hardwareKeyboardsSeenPreference;	// 0x34781f51
- (BOOL)hasAutoRepeat;	// 0x34787e75
- (BOOL)hasEditableMarkedText;	// 0x34638991
- (BOOL)hasMarkedText;	// 0x346389dd
- (BOOL)hasUpToDateCandidates;	// 0x34785081
- (BOOL)hideAccessoryViewsDuringSplit;	// 0x3478175d
- (void)hideKeyboard;	// 0x34787359
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x346651e9
- (id)indexTitlesForGroupTitles:(id)groupTitles sortingMethod:(id)method;	// 0x34786c35
// declared property getter: - (id)inputDelegate;	// 0x34633061
// declared property getter: - (id)inputManager;	// 0x34634f91
- (id)inputModeFirstPreference;	// 0x34781afd
// converted property getter: - (id)inputModeLastChosen;	// 0x347826b9
- (id)inputModeLastChosenPreference;	// 0x34781b4d
- (id)inputModeLastUsedForLanguage:(id)language;	// 0x34781cb9
- (id)inputModeLastUsedPreference;	// 0x34632025
- (id)inputModePreference;	// 0x34631cf1
- (id)inputOverlayContainer;	// 0x346ad1b9
- (id)inputStringFromPhraseBoundary;	// 0x347831c1
- (void)insertText:(id)text;	// 0x3469f3cd
- (void)installRecorder;	// 0x34635c99
- (void)installTypology;	// 0x34635d55
- (int)interfaceOrientation;	// 0x346555fd
- (BOOL)isAllowedInputMode:(id)mode;	// 0x346320b5
- (BOOL)isAutoDeleteActive;	// 0x34787fb5
- (BOOL)isAutoFillMode;	// 0x346afd19
- (BOOL)isAutoShifted;	// 0x3463c61d
// converted property getter: - (BOOL)isClientVariantSupportEnabled;	// 0x34641385
- (BOOL)isDesiredInputMode:(id)mode;	// 0x34637d7d
// declared property getter: - (BOOL)isInHardwareKeyboardMode;	// 0x3463326d
// converted property getter: - (BOOL)isLongPress;	// 0x3469ec55
- (BOOL)isMinimized;	// 0x34634fed
// converted property getter: - (BOOL)isShiftLocked;	// 0x34642795
- (BOOL)isShifted;	// 0x34664e8d
- (BOOL)isUsingDictationLayout;	// 0x34785875
- (BOOL)isValidKeyInput:(id)input;	// 0x3466b8b9
- (void)keyActivated;	// 0x34783725
- (void)keyDeactivated;	// 0x34783735
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x346669f1
// declared property getter: - (id)keyboardAlertView;	// 0x346e49e9
- (void)keyboardDidHide:(id)keyboard;	// 0x3469ea59
- (BOOL)keyboardDrawsOpaque;	// 0x3469adf5
- (BOOL)keyboardRecordingEnabled;	// 0x34635cd9
- (BOOL)keyboardsExpandedPreference;	// 0x347819b5
- (id)keyplaneNameInCurrentDelegateListForIndex:(int)index;	// 0x34781949
// declared property getter: - (id)lastUsedInputMode;	// 0x34787d41
- (void)launchTypologyApplication;	// 0x34788055
- (void)layoutHasChanged;	// 0x346e1f95
// declared property getter: - (id)legacyInputDelegate;	// 0x34639111
- (void)longPressAction;	// 0x347871b5
// converted property getter: - (id)markedTextOverlay;	// 0x34783115
- (void)mediaKeyDown:(GSEventRef)down;	// 0x34787a4d
// declared property getter: - (unsigned)minimumTouchesForTranslation;	// 0x34781265
- (void)movePhraseBoundaryToDirection:(int)direction;	// 0x34783c45
- (BOOL)needsToDeferUpdateTextCandidateView;	// 0x34785799
- (BOOL)noContent;	// 0x346a0c65
- (void)notifyShiftState;	// 0x34639561
- (void)performClientVariantActionNamed:(id)named;	// 0x347818f5
- (BOOL)performanceLoggingPreference;	// 0x346523a5
// converted property getter: - (unsigned)phraseBoundary;	// 0x34783c25
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x346552dd
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x34664ead
- (void)prepareForGeometryChange;	// 0x3464633d
- (void)prepareForSelectionChange;	// 0x3465b2a1
- (void)prepareLayoutForInterfaceOrientation:(int)interfaceOrientation;	// 0x34782765
- (void)prepareUsedKeyplaneNameListForNewDelegate;	// 0x346371fd
// declared property getter: - (id)privateInputDelegate;	// 0x34630d95
- (void)pushRecentAutocorrectionSuggestion:(id)suggestion;	// 0x346acc41
- (id)recentAutocorrectionSuggestionForTypedString:(id)typedString;	// 0x346a646d
- (void)recomputeActiveInputModes;	// 0x347835b1
- (void)recomputeActiveInputModesFromList:(id)list;	// 0x34637a3d
- (void)recordAcceptedAutocorrection:(id)autocorrection;	// 0x34705399
- (void)recordRejectedAutocorrection:(id)autocorrection;	// 0x347866c1
// declared property getter: - (id)recorder;	// 0x34635b89
- (void)refreshRivenPreferences;	// 0x34631a19
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x34644f19
- (void)releaseKeyplaneNameFromPreviousDelegateList:(id)previousDelegateList;	// 0x3463bf7d
- (void)releaseSuppressUpdateCandidateView;	// 0x34652a41
- (void)removeAutocorrectPrompt;	// 0x34633089
- (void)removeAutocorrection;	// 0x34784b81
- (void)removeFromSuperview;	// 0x346e493d
- (void)replaceText:(id)text;	// 0x34785419
- (void)resizeCandidateBarWithDelta:(float)delta;	// 0x347858bd
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x3463d7b5
- (void)retainKeyplaneNameInCurrentDelegateList:(id)currentDelegateList;	// 0x3463bfcd
- (id)returnKeyDisplayName;	// 0x346444cd
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x346444ad
- (int)returnKeyType;	// 0x34644545
// declared property getter: - (BOOL)rivenSplitLock;	// 0x347811d5
- (void)saveInputModesPreference:(id)preference;	// 0x34781ac1
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x347855c9
- (id)searchStringForMarkedText;	// 0x34783189
- (void)selectionDidChange:(id)selection;	// 0x3465c151
- (void)selectionScrolling:(id)scrolling;	// 0x34780b29
- (id)selectionView;	// 0x34638ed1
- (void)selectionWillChange:(id)selection;	// 0x3465b261
// declared property setter: - (void)setArrowKeyHistory:(id)history;	// 0x3465c389
// converted property setter: - (void)setAutocorrectSpellingEnabled:(BOOL)enabled;	// 0x34635595
- (void)setAutocorrection:(id)autocorrection;	// 0x34632761
// converted property setter: - (void)setAutomaticMinimizationEnabled:(BOOL)enabled;	// 0x34781a1d
- (void)setCandidateList:(id)list updateCandidateView:(BOOL)view;	// 0x34785605
- (void)setCandidates:(id)candidates;	// 0x34632859
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x34638ea5
// converted property setter: - (void)setCaretVisible:(BOOL)visible;	// 0x34638f29
// converted property setter: - (void)setChangeNotificationDisabled:(BOOL)disabled;	// 0x34782db1
- (void)setChanged;	// 0x34664475
// declared property setter: - (void)setChangedDelegate:(id)delegate;	// 0x34636e11
// declared property setter: - (void)setCommittingCandidate:(BOOL)candidate;	// 0x34787d61
- (void)setCorrectionLearningAllowed:(BOOL)allowed;	// 0x34782961
// declared property setter: - (void)setCurrentUsedInputMode:(id)mode;	// 0x34635b99
- (void)setDefaultTextInputTraits:(id)traits;	// 0x34646225
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34636285
- (void)setDelegate:(id)delegate force:(BOOL)force;	// 0x34636299
- (void)setFrame:(CGRect)frame;	// 0x34630aa9
// declared property setter: - (void)setGeometryDelegate:(id)delegate;	// 0x34635f31
// declared property setter: - (void)setGeometryIsChanging:(BOOL)changing;	// 0x346464a1
// converted property setter: - (void)setHardwareKeyboardsSeenPreference:(id)preference;	// 0x34781f89
// declared property setter: - (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x3466a579
- (void)setInitialDirection;	// 0x34638f59
// declared property setter: - (void)setInputManager:(id)manager;	// 0x34634f81
- (void)setInputMode:(id)mode;	// 0x346321bd
- (void)setInputMode:(id)mode userInitiated:(BOOL)initiated;	// 0x346321d1
- (void)setInputModeFromPreferences;	// 0x34631dfd
- (void)setInputModeLastChosenPreference;	// 0x34781ba9
- (void)setInputModeToNextASCIICapableInPreferredList;	// 0x3478266d
- (void)setInputModeToNextInPreferredList;	// 0x347824c9
- (void)setInputObject:(id)object;	// 0x347851f5
- (void)setInputPoint:(CGPoint)point;	// 0x34667679
// declared property setter: - (void)setKeyboardAlertView:(id)view;	// 0x346e49f9
// declared property setter: - (void)setLastUsedInputMode:(id)mode;	// 0x346e4dd1
// converted property setter: - (void)setLongPress:(BOOL)press;	// 0x3478807d
- (void)setMarkedText;	// 0x34783019
- (void)setOrientation;	// 0x34630b51
// converted property setter: - (void)setPhraseBoundary:(unsigned)boundary;	// 0x34783b9d
- (void)setPreviousInputString:(id)string;	// 0x3466415d
// declared property setter: - (void)setRecorder:(id)recorder;	// 0x346e4b0d
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x34637045
// declared property setter: - (void)setRivenSplitLock:(BOOL)lock;	// 0x34781209
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x3478324d
- (void)setShift:(BOOL)shift;	// 0x346642f5
- (void)setShift:(BOOL)shift autoshift:(BOOL)autoshift;	// 0x34664309
// converted property setter: - (void)setShiftLocked:(BOOL)locked;	// 0x347835fd
- (void)setShiftLockedForced:(BOOL)forced;	// 0x34783639
- (void)setShiftNeedsUpdate;	// 0x346643a5
- (void)setShiftOffIfNeeded;	// 0x34664269
- (void)setShiftPreventAutoshift:(BOOL)autoshift;	// 0x34664455
// converted property setter: - (void)setShouldChargeKeys:(BOOL)chargeKeys;	// 0x34637011
// declared property setter: - (void)setShouldSetInputModeInNextRun:(BOOL)setInputModeInNextRun;	// 0x34787d31
// declared property setter: - (void)setShouldSkipCandidateSelection:(BOOL)skipCandidateSelection;	// 0x3463a179
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)updateCacheOnInputModesChange;	// 0x34781f41
// declared property setter: - (void)setShowInputModeIndicator:(BOOL)indicator;	// 0x34787d11
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x346451b5
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x346e2781
- (void)setSplit:(BOOL)split animated:(BOOL)animated;	// 0x347880d1
- (void)setSplitProgress:(float)progress;	// 0x3478126d
- (void)setTextInputChangesIgnored:(BOOL)ignored;	// 0x347881ad
// declared property setter: - (void)setTypologyRecorder:(id)recorder;	// 0x346e4b49
- (void)setUsesCandidateSelection:(BOOL)selection;	// 0x34643b05
- (unsigned)shiftFlagsForInputString;	// 0x3469f289
- (BOOL)shiftLockPreference;	// 0x34631c79
// converted property getter: - (BOOL)shiftLockedEnabled;	// 0x34783665
- (BOOL)shouldAcceptCandidate:(id)candidate beforeInputString:(id)string;	// 0x34783959
// converted property getter: - (BOOL)shouldChargeKeys;	// 0x34786c91
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)deletedCharacter;	// 0x34783d95
// declared property getter: - (BOOL)shouldSetInputModeInNextRun;	// 0x34787d21
// declared property getter: - (BOOL)shouldShowCandidateBar;	// 0x34645065
// declared property getter: - (BOOL)shouldSkipCandidateSelection;	// 0x3469f229
- (BOOL)shouldSkipCandidateSelectionForPopupVariantString:(id)popupVariantString;	// 0x34787bd1
- (BOOL)shouldSwitchInputMode:(id)mode;	// 0x34638365
- (void)showInformationalAlertIfNeededForReason:(int)reason;	// 0x34782355
// declared property getter: - (BOOL)showInputModeIndicator;	// 0x34686b59
- (void)showInternationalKeyInfoAlertIfNeeded;	// 0x347824b1
- (void)showKeyboard;	// 0x34787405
- (void)showNextCandidates;	// 0x347850fd
// declared property getter: - (BOOL)showsCandidateBar;	// 0x346361a9
// declared property getter: - (BOOL)showsCandidateInline;	// 0x346e4371
- (id)sortingMethods;	// 0x34786b55
// declared property getter: - (BOOL)splitTransitionInProgress;	// 0x34645b59
- (void)startAutoDeleteTimer;	// 0x34787141
- (void)startCaretBlinkIfNeeded;	// 0x34787ad1
- (void)startKeyboardRecording;	// 0x34841091
- (void)stopAutoDelete;	// 0x34636d05
- (void)stopKeyboardRecording;	// 0x34841199
- (void)storeDelegateConformance;	// 0x34636b95
- (CGRect)subtractKeyboardFrameFromRect:(CGRect)rect inView:(id)view;	// 0x346646cd
- (BOOL)suppliesCompletions;	// 0x34783675
- (BOOL)supportsNumberKeySelection;	// 0x34783701
- (BOOL)swipeToTabPreference;	// 0x3463a129
- (void)takeTextInputTraitsFromDelegate;	// 0x34630c2d
- (void)testAutocorrectionPromptWithCorrection:(id)correction;	// 0x34787f91
- (void)textChanged:(id)changed;	// 0x34663e9d
- (void)textDidChange:(id)text;	// 0x34663e8d
- (void)textFrameChanged:(id)changed;	// 0x3466cd71
- (int)textInputChangingCount;	// 0x34787f81
- (id)textInputTraits;	// 0x3463983d
- (void)textWillChange:(id)text;	// 0x34663ddd
- (void)timeElapsed:(unsigned)elapsed message:(id)message;	// 0x34667831
- (void)timeMark:(unsigned)mark;	// 0x3466768d
- (void)timeMark:(unsigned)mark message:(id)message;	// 0x3466757d
- (id)titleForSortingMethod:(id)sortingMethod;	// 0x34786b7d
- (void)toggleShift;	// 0x347835d5
- (void)touchAutoDeleteTimerWithThreshold:(double)threshold;	// 0x34786cc1
- (void)touchAutocorrectPromptTimer;	// 0x34643fad
- (void)touchLongPressTimer;	// 0x34667471
- (void)touchLongPressTimerWithDelay:(double)delay;	// 0x34667489
- (void)trackUsageForAcceptedAutocorrection:(id)acceptedAutocorrection promptWasShowing:(BOOL)showing;	// 0x347054b5
- (void)trackUsageForPromptedCorrection:(id)promptedCorrection inputString:(id)string previousPrompt:(id)prompt;	// 0x34787bf9
- (BOOL)typologyEnabled;	// 0x34635e89
// declared property getter: - (id)typologyRecorder;	// 0x34634fa1
- (void)updateAutocorrectPrompt:(id)prompt;	// 0x34632bad
- (void)updateAutocorrectPromptAction;	// 0x346550b1
- (void)updateAutocorrectPromptDisplay:(CGRect)display;	// 0x34786399
- (void)updateCandidateDisplay;	// 0x34632a35
- (void)updateCandidateDisplayAsyncWithCandidates:(id)candidates forInputManager:(id)inputManager;	// 0x347856c1
- (void)updateChangeTimeAndIncrementCount;	// 0x3466c9a1
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)character;	// 0x34783929
- (void)updateDoubleSpacePeriodStateForString:(id)string;	// 0x3469fa55
- (void)updateForChangedSelection;	// 0x346383b1
- (void)updateFromTextInputTraits;	// 0x34787e89
- (void)updateInputContextForDeletedText:(id)deletedText toWordRange:(id)wordRange;	// 0x347832a9
- (void)updateInputManagerAutocapitalizationType;	// 0x34631c1d
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only;	// 0x34782289
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)only preserveIfPossible:(BOOL)possible;	// 0x3478202d
- (void)updateKeyboardEventsLagging:(GSEventRef)lagging;	// 0x3466a501
- (void)updateKeysWithDelegates;	// 0x34645ae9
- (void)updateLastUsedInputMode:(id)mode;	// 0x3466c665
- (void)updateLayout;	// 0x3463502d
- (void)updateLayoutAndSetShift;	// 0x34783e0d
- (void)updateLayoutIfNeeded;	// 0x346464b5
- (void)updateLayoutToCurrentInterfaceOrientation;	// 0x34782815
- (void)updateMarkedTextIfChanged;	// 0x3465c279
- (void)updateObserverState;	// 0x346643c9
- (void)updateReturnKey;	// 0x3469fa41
- (void)updateReturnKey:(BOOL)key;	// 0x34644375
- (void)updateShiftState;	// 0x34639205
- (void)updateTextCandidateView;	// 0x34785a89
- (BOOL)userSelectedCurrentCandidate;	// 0x34785021
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;	// 0x34784a61
@end
