/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFSpeechToken : NSObject {
	NSString *_text;	// 4 = 0x4
	int _confidence;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _endTime;	// 20 = 0x14
	BOOL _removeSpaceBefore;	// 28 = 0x1c
	BOOL _removeSpaceAfter;	// 29 = 0x1d
}
@property(assign) int confidenceScore;	// G=0x3461b7b5; S=0x3461b7c9; @synthesize=_confidence
@property(assign) double endTime;	// G=0x3461b849; S=0x3461b87d; @synthesize=_endTime
@property(assign) BOOL removeSpaceAfter;	// G=0x3461b8e1; S=0x3461b8f9; @synthesize=_removeSpaceAfter
@property(assign) BOOL removeSpaceBefore;	// G=0x3461b8b1; S=0x3461b8c9; @synthesize=_removeSpaceBefore
@property(assign) double startTime;	// G=0x3461b7e1; S=0x3461b815; @synthesize=_startTime
@property(copy, nonatomic) NSString *text;	// G=0x3461b791; S=0x3461b7a5; @synthesize=_text
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x3461b5cd
- (void).cxx_destruct;	// 0x3461b911
// declared property getter: - (int)confidenceScore;	// 0x3461b7b5
- (id)description;	// 0x3461b2f5
- (id)dkPlistRepresentation;	// 0x3461b3f1
// declared property getter: - (double)endTime;	// 0x3461b849
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x3461b8e1
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x3461b8b1
// declared property setter: - (void)setConfidenceScore:(int)score;	// 0x3461b7c9
// declared property setter: - (void)setEndTime:(double)time;	// 0x3461b87d
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x3461b8f9
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x3461b8c9
// declared property setter: - (void)setStartTime:(double)time;	// 0x3461b815
// declared property setter: - (void)setText:(id)text;	// 0x3461b7a5
// declared property getter: - (double)startTime;	// 0x3461b7e1
// declared property getter: - (id)text;	// 0x3461b791
@end

