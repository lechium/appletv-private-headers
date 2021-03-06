/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "CATVApplication.h"

@class NSMutableArray, BREvent;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : CATVApplication {
	BREvent *_currentEvent;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	CFRunLoopSourceRef _source;	// 116 = 0x74
	CFRunLoopRef _mainRunLoop;	// 120 = 0x78
	double _flushBeforeTimeStamp;	// 124 = 0x7c
	BOOL _handlingEvent;	// 132 = 0x84
	BOOL _eventsBlocked;	// 133 = 0x85
	BOOL _wantsSpaceCharacters;	// 134 = 0x86
	id<BRResponder> _firstBRResponder;	// 136 = 0x88
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x1029d; converted property
@property(retain) id firstBRResponder;	// G=0x10225; S=0x10239; converted property
@property(assign) BOOL wantsSpaceCharacters;	// G=0x1027d; S=0x1028d; converted property
+ (void)_setupLogging;	// 0xfa4d
+ (BOOL)registerAsSystemApp;	// 0x105d1
+ (id)sharedApplication;	// 0xfa21
- (id)init;	// 0xfef1
- (void).cxx_destruct;	// 0x107e5
- (id)BRApplicationDelegate;	// 0x1011d
- (id)_accessibilityResponderElement;	// 0x10a99
- (void)_handler;	// 0x1082d
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x3e9b5d
- (void)adjustToDisplayChange;	// 0x10599
- (void)applicationWillTerminate;	// 0x10101
- (void)blockEvents;	// 0x10551
// converted property getter: - (id)currentEvent;	// 0x1029d
- (void)dealloc;	// 0x100b9
- (void)dispatchEventOnEventThread:(id)thread;	// 0x10431
- (void)emptyQueue;	// 0x10461
- (void)endScreenSaverTest;	// 0x4a08e1
- (void)failedTest:(id)test options:(id)options error:(id)error;	// 0x4a056d
- (void)finishedTest:(id)test options:(id)options;	// 0x4a0541
// converted property getter: - (id)firstBRResponder;	// 0x10225
- (void)postEvent:(id)event;	// 0x102b1
- (BOOL)runTest:(id)test options:(id)options;	// 0x4a0409
// converted property setter: - (void)setFirstBRResponder:(id)responder;	// 0x10239
// converted property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0x1028d
- (void)startLogTest:(id)test;	// 0x4a0645
- (void)startMoviePreviewPlayTest:(id)test;	// 0x4a09cd
- (void)startScreenSaverTest:(id)test;	// 0x4a07f9
- (void)startYouTubePlayTest:(id)test;	// 0x4a06c5
- (void)startedTest:(id)test options:(id)options;	// 0x4a0515
- (void)submitAggregateReportingNow;	// 0x105b5
- (void)unblockEvents;	// 0x10565
// converted property getter: - (BOOL)wantsSpaceCharacters;	// 0x1027d
@end

