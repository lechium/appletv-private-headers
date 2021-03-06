/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface NSUndoManager : NSObject {
@private
	id _undoStack;	// 4 = 0x4
	id _redoStack;	// 8 = 0x8
	NSArray *_runLoopModes;	// 12 = 0xc
	unsigned long long _NSUndoManagerPrivate1;	// 16 = 0x10
	id _target;	// 24 = 0x18
	id _proxy;	// 28 = 0x1c
	void *_NSUndoManagerPrivate2;	// 32 = 0x20
	void *_NSUndoManagerPrivate3;	// 36 = 0x24
}
@property(assign) BOOL groupsByEvent;	// G=0x315ae85d; S=0x3163b119; converted property
@property(assign) unsigned levelsOfUndo;	// G=0x3163b169; S=0x3163b149; converted property
@property(retain) NSArray *runLoopModes;	// G=0x315ae57d; S=0x3163b189; converted property
+ (void)_endTopLevelGroupings;	// 0x3163ac85
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)iterations;	// 0x3163ac75
- (id)init;	// 0x315ac9d5
- (void)_cancelAutomaticTopLevelGroupEnding;	// 0x3163afa1
- (void)_commitUndoGrouping;	// 0x3163add5
- (void)_delayAutomaticTermination:(double)termination;	// 0x315accf5
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)empty;	// 0x315aec4d
- (void)_forwardTargetInvocation:(id)invocation;	// 0x3163b909
- (id)_methodSignatureForTargetSelector:(SEL)targetSelector;	// 0x3163b8b5
- (void)_postCheckpointNotification;	// 0x315aeec5
- (void)_prepareEventGrouping;	// 0x315ae3f1
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x315aebd5
- (void)_registerUndoObject:(id)object;	// 0x315ae295
- (void)_rollbackUndoGrouping;	// 0x3163ae05
- (void)_scheduleAutomaticTopLevelGroupEnding;	// 0x315ae47d
- (void)_setGroupIdentifier:(id)identifier;	// 0x315ae885
- (BOOL)_shouldCoalesceTypingForText:(id)text :(id)arg2;	// 0x3163aba5
- (id)_undoStack;	// 0x3163ab95
- (void)beginUndoGrouping;	// 0x315ae58d
- (BOOL)canRedo;	// 0x3163b811
- (BOOL)canUndo;	// 0x315b93f1
- (void)dealloc;	// 0x315b5899
- (void)disableUndoRegistration;	// 0x3163b041
- (void)enableUndoRegistration;	// 0x3163b061
- (void)endUndoGrouping;	// 0x315aec1d
- (void)finalize;	// 0x3163ae75
- (int)groupingLevel;	// 0x315aeff5
// converted property getter: - (BOOL)groupsByEvent;	// 0x315ae85d
- (BOOL)isRedoing;	// 0x315ae181
- (BOOL)isUndoRegistrationEnabled;	// 0x3163b0fd
- (BOOL)isUndoing;	// 0x315ae169
// converted property getter: - (unsigned)levelsOfUndo;	// 0x3163b169
- (id)prepareWithInvocationTarget:(id)invocationTarget;	// 0x3163b855
- (void)redo;	// 0x3163b579
- (BOOL)redoActionIsDiscardable;	// 0x3163bb8d
- (id)redoActionName;	// 0x3163ba49
- (id)redoMenuItemTitle;	// 0x3163bc4d
- (id)redoMenuTitleForUndoActionName:(id)undoActionName;	// 0x3163bd5d
- (void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x315ae199
- (void)removeAllActions;	// 0x315acbed
- (void)removeAllActionsWithTarget:(id)target;	// 0x315af035
// converted property getter: - (id)runLoopModes;	// 0x315ae57d
- (void)setActionIsDiscardable:(BOOL)discardable;	// 0x3163ba81
- (void)setActionName:(id)name;	// 0x315ae875
// converted property setter: - (void)setGroupsByEvent:(BOOL)event;	// 0x3163b119
// converted property setter: - (void)setLevelsOfUndo:(unsigned)undo;	// 0x3163b149
// converted property setter: - (void)setRunLoopModes:(id)modes;	// 0x3163b189
- (void)undo;	// 0x3163b1ed
- (BOOL)undoActionIsDiscardable;	// 0x3163bb69
- (id)undoActionName;	// 0x3163ba11
- (id)undoMenuItemTitle;	// 0x3163bbb1
- (id)undoMenuTitleForUndoActionName:(id)undoActionName;	// 0x3163bcf1
- (void)undoNestedGroup;	// 0x3163b2f9
@end

