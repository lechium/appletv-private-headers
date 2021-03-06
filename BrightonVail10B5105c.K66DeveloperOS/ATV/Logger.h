/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableSet;

@interface Logger : XXUnknownSuperclass {
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x4d7a8d; S=0x4d7a9d; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x4d7a6d; S=0x4d7a7d; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x4d7aad; S=0x4d7abd; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x4d7acd; S=0x4d7add; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x4d750d
- (id)init;	// 0x4d7555
- (void)addTraceArea:(id)area;	// 0x4d779d
- (void)addTraceAreaWithSet:(id)set;	// 0x4d77d1
- (void)dealloc;	// 0x4d7601
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x4d7959
- (void)log:(id)log message:(id)message;	// 0x4d7861
// declared property getter: - (BOOL)logAll;	// 0x4d7a8d
// declared property getter: - (BOOL)logEnabled;	// 0x4d7a6d
- (void)popTraceAreas;	// 0x4d7729
- (void)pushTraceAreas;	// 0x4d7679
- (void)removeAllTraceAreas;	// 0x4d7839
- (void)removeTraceArea:(id)area;	// 0x4d7805
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x4d7a9d
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x4d7a7d
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x4d7abd
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x4d7add
// declared property getter: - (id)traceAreas;	// 0x4d7aad
// declared property getter: - (id)traceAreasStack;	// 0x4d7acd
@end

