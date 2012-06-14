/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"


@interface VMUBacktrace : NSObject <NSCopying> {
	int _flavor;	// 4 = 0x4
	struct {
		struct {
			double t_begin;
			double t_end;
			int pid;
			unsigned thread;
			int run_state;
			unsigned long long dispatch_queue_serial_num;
		} context;
		unsigned long long *frames;
		char *frame_types;
		unsigned length;
	} _callstack;	// 8 = 0x8
}
@property(assign) int threadState;	// G=0x313d3551; S=0x313d353d; converted property
- (id)initWithSamplingContext:(sampling_context_t *)samplingContext thread:(unsigned)thread;	// 0x313d2c09
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit;	// 0x313d2cf1
- (id)initWithTask:(unsigned)task thread:(unsigned)thread is64Bit:(BOOL)bit taskMemoryCache:(id)cache;	// 0x313d2e05
- (id).cxx_construct;	// 0x313d3579
- (CSTypeRef)_symbolicator;	// 0x313d2b4d
- (unsigned long long *)backtrace;	// 0x313d3501
- (unsigned)backtraceLength;	// 0x313d3515
- (id)copyWithZone:(NSZone *)zone;	// 0x313d2ff5
- (void)dealloc;	// 0x313d30f9
- (id)description;	// 0x313d3149
- (unsigned long long)dispatchQueueSerialNumber;	// 0x313d3565
- (void)fixupStackWithSamplingContext:(sampling_context_t *)samplingContext symbolicator:(CSTypeRef)symbolicator;	// 0x313d33ad
- (void)fixupStackWithTask:(unsigned)task symbolicator:(CSTypeRef)symbolicator taskMemoryCache:(id)cache;	// 0x313d336d
- (BOOL)hasSameCallstack:(id)callstack;	// 0x313d33f5
- (void)removeTopmostFrame;	// 0x313d3489
- (void)setEndTime:(double)time;	// 0x313d34cd
- (void)setLengthTime:(double)time;	// 0x313d34e1
- (void)setStartTime:(double)time;	// 0x313d34b9
// converted property setter: - (void)setThreadState:(int)state;	// 0x313d353d
- (unsigned)thread;	// 0x313d3529
// converted property getter: - (int)threadState;	// 0x313d3551
- (unsigned long long)topmostFrame;	// 0x313d3471
@end

