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
@property(assign) int confidenceScore;	// G=0x334ecb85; S=0x334ecb99; @synthesize=_confidence
@property(assign) double endTime;	// G=0x334ecc19; S=0x334ecc4d; @synthesize=_endTime
@property(assign) BOOL removeSpaceAfter;	// G=0x334eccb1; S=0x334eccc9; @synthesize=_removeSpaceAfter
@property(assign) BOOL removeSpaceBefore;	// G=0x334ecc81; S=0x334ecc99; @synthesize=_removeSpaceBefore
@property(assign) double startTime;	// G=0x334ecbb1; S=0x334ecbe5; @synthesize=_startTime
@property(copy, nonatomic) NSString *text;	// G=0x334ecb61; S=0x334ecb75; @synthesize=_text
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x334ec99d
- (void).cxx_destruct;	// 0x334ecce1
// declared property getter: - (int)confidenceScore;	// 0x334ecb85
- (id)description;	// 0x334ec6c5
- (id)dkPlistRepresentation;	// 0x334ec7c1
// declared property getter: - (double)endTime;	// 0x334ecc19
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x334eccb1
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x334ecc81
// declared property setter: - (void)setConfidenceScore:(int)score;	// 0x334ecb99
// declared property setter: - (void)setEndTime:(double)time;	// 0x334ecc4d
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x334eccc9
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x334ecc99
// declared property setter: - (void)setStartTime:(double)time;	// 0x334ecbe5
// declared property setter: - (void)setText:(id)text;	// 0x334ecb75
// declared property getter: - (double)startTime;	// 0x334ecbb1
// declared property getter: - (id)text;	// 0x334ecb61
@end
