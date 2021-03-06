/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "CAStateRecorder.h"

@class CAState, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CAStateControllerUndo : NSObject <CAStateRecorder> {
	CAStateControllerUndo *_next;	// 4 = 0x4
	CAState *_state;	// 8 = 0x8
	NSMutableArray *_elements;	// 12 = 0xc
	NSMutableArray *_transitions;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *elements;	// G=0x32afd599; S=0x32afd5a9; @synthesize=_elements
@property(readonly, assign) CAStateControllerUndo *next;	// G=0x32afd565; @synthesize=_next
@property(retain, nonatomic) CAState *state;	// G=0x32afd579; S=0x32afd589; @synthesize=_state
@property(retain, nonatomic) NSMutableArray *transitions;	// G=0x32afd5b9; S=0x32afd5c9; @synthesize=_transitions
- (void)addElement:(id)element;	// 0x32afd411
- (void)addTransition:(id)transition;	// 0x32afd481
- (void)dealloc;	// 0x32afd4ed
// declared property getter: - (id)elements;	// 0x32afd599
// declared property getter: - (id)next;	// 0x32afd565
// declared property setter: - (void)setElements:(id)elements;	// 0x32afd5a9
// declared property setter: - (void)setState:(id)state;	// 0x32afd589
// declared property setter: - (void)setTransitions:(id)transitions;	// 0x32afd5c9
// declared property getter: - (id)state;	// 0x32afd579
// declared property getter: - (id)transitions;	// 0x32afd5b9
- (void)willAddLayer:(id)layer;	// 0x32afd47d
@end

