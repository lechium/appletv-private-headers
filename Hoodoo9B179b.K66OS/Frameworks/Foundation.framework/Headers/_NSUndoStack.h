/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject {
@private
	unsigned _max;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	unsigned _nestingLevel;	// 12 = 0xc
	_NSUndoObject *_head;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x31050421; converted property
@property(assign, getter=isDiscardable) BOOL discardable;	// G=0x31045f51; S=0x310d3241; converted property
@property(retain) id groupIdentifier;	// G=0x310d3211; S=0x31045975; converted property
@property(assign) unsigned max;	// G=0x310d3201; S=0x31043b9d; converted property
@property(readonly, assign) unsigned nestingLevel;	// G=0x3104546d; converted property
- (id)init;	// 0x31043b41
- (id)_beginMark;	// 0x31045a15
- (void)_removeBottom;	// 0x310d30e9
// converted property getter: - (unsigned)count;	// 0x31050421
- (void)dealloc;	// 0x3104c971
- (id)description;	// 0x310d3409
// converted property getter: - (id)groupIdentifier;	// 0x310d3211
// converted property getter: - (BOOL)isDiscardable;	// 0x31045f51
- (void)markBegin;	// 0x3104566d
- (void)markEnd;	// 0x31045f91
// converted property getter: - (unsigned)max;	// 0x310d3201
// converted property getter: - (unsigned)nestingLevel;	// 0x3104546d
- (BOOL)popAndInvoke;	// 0x310d32e1
- (id)popUndoObject;	// 0x3104c9c9
- (void)push:(id)push;	// 0x310456e1
- (void)removeAllObjects;	// 0x31043c85
- (void)removeAllObjectsWithTarget:(id)target;	// 0x31046079
- (void)removeObject:(id)object;	// 0x3104623d
// converted property setter: - (void)setDiscardable:(BOOL)discardable;	// 0x310d3241
// converted property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x31045975
// converted property setter: - (void)setMax:(unsigned)max;	// 0x31043b9d
- (id)topUndoObject;	// 0x31045f41
@end

