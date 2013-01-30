/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSOperation.h> // Unknown library

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {
	UIPDFPageRenderJob *_job;	// 12 = 0xc
	BOOL executing;	// 16 = 0x10
	BOOL finished;	// 17 = 0x11
}
@property(readonly, assign, getter=isExecuting) BOOL executing;	// G=0x3226a2a5; converted property
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x3226a2b5; converted property
@property(retain) UIPDFPageRenderJob *job;	// G=0x3226a2c5; S=0x3226a2d9; @synthesize=_job
- (id)initWithJob:(id)job;	// 0x32269fed
- (void)completeOperation;	// 0x3226a219
- (void)dealloc;	// 0x3226a035
- (BOOL)isConcurrent;	// 0x3226a2a1
// converted property getter: - (BOOL)isExecuting;	// 0x3226a2a5
// converted property getter: - (BOOL)isFinished;	// 0x3226a2b5
// declared property getter: - (id)job;	// 0x3226a2c5
- (void)main;	// 0x3226a151
// declared property setter: - (void)setJob:(id)job;	// 0x3226a2d9
- (void)start;	// 0x3226a09d
@end
