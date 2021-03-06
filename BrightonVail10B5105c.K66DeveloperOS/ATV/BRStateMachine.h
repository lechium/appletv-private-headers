/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, NSMutableDictionary, NSRunLoop, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRStateMachine : XXUnknownSuperclass {
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x3a7f51; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x3a7f91; S=0x3a7fa1; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x3a7f79; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x3a7f65; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x3a7f31; S=0x3a7f41; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x3a7179
+ (void)initialize;	// 0x3a7045
+ (void)registerStateMachine:(id)machine;	// 0x3a7099
+ (id)stateMachineWithName:(id)name;	// 0x3a7291
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x3a7385
- (id)_eventHandlerForEvent:(id)event;	// 0x3a8335
- (void)_processNextEvent;	// 0x3a7fb1
// declared property getter: - (id)currentState;	// 0x3a7f51
- (void)dealloc;	// 0x3a74b9
- (void)deregisterHandlers;	// 0x3a7ba1
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x3a7f91
// declared property getter: - (BOOL)immediate;	// 0x3a7f79
- (void)logUnhandledEvents;	// 0x3a7be1
// declared property getter: - (id)name;	// 0x3a7f65
- (void)postEvent:(id)event withContext:(id)context;	// 0x3a7635
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x3a7659
- (void)purgeEventQueue;	// 0x3a7989
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x3a7b21
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x3a7a51
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x3a7fa1
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x3a7f41
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x3a7f31
@end

