/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressStage : NSObject {
@private
	double m_currentPosition;	// 4 = 0x4
	double m_totalSteps;	// 12 = 0xc
	double m_stepsInParent;	// 20 = 0x14
	double m_startInParent;	// 28 = 0x1c
	double m_nextSubStageParentSize;	// 36 = 0x24
	TSUProgressStage *m_parentStage;	// 44 = 0x2c
	TSUProgressContext *m_context;	// 48 = 0x30
}
@property(readonly, assign) double currentPosition;	// G=0x312e3279; converted property
@property(assign) double nextSubStageParentSize;	// G=0x312e32e1; S=0x312e32f9; converted property
@property(readonly, retain) TSUProgressStage *parentStage;	// G=0x312e3269; converted property
- (id)initRootStageInContext:(id)context;	// 0x312e2e61
- (id)initWithSteps:(double)steps takingSteps:(double)steps2 inContext:(id)context;	// 0x312e2ef1
- (void)advanceProgress:(double)progress;	// 0x312e3059
// converted property getter: - (double)currentPosition;	// 0x312e3279
- (void)dealloc;	// 0x312e3009
- (id)description;	// 0x312e330d
- (void)end;	// 0x312e3241
// converted property getter: - (double)nextSubStageParentSize;	// 0x312e32e1
- (double)overallProgress;	// 0x312e3291
// converted property getter: - (id)parentStage;	// 0x312e3269
// converted property setter: - (void)setNextSubStageParentSize:(double)size;	// 0x312e32f9
- (void)setProgress:(double)progress;	// 0x312e3089
- (void)setProgressPercentage:(double)percentage;	// 0x312e3201
@end

