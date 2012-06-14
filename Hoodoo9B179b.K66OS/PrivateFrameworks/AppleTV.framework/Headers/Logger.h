/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Logger : NSObject {
@private
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x3053193d; S=0x3053194d; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x3053191d; S=0x3053192d; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x3053195d; S=0x3053196d; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x30531991; S=0x305319a1; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x305313d5
- (id)init;	// 0x3053141d
- (void)addTraceArea:(id)area;	// 0x30531659
- (void)addTraceAreaWithSet:(id)set;	// 0x30531689
- (void)dealloc;	// 0x305314c5
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x30531809
- (void)log:(id)log message:(id)message;	// 0x30531711
// declared property getter: - (BOOL)logAll;	// 0x3053193d
// declared property getter: - (BOOL)logEnabled;	// 0x3053191d
- (void)popTraceAreas;	// 0x305315e9
- (void)pushTraceAreas;	// 0x3053153d
- (void)removeAllTraceAreas;	// 0x305316e9
- (void)removeTraceArea:(id)area;	// 0x305316b9
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x3053194d
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x3053192d
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x3053196d
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x305319a1
// declared property getter: - (id)traceAreas;	// 0x3053195d
// declared property getter: - (id)traceAreasStack;	// 0x30531991
@end
