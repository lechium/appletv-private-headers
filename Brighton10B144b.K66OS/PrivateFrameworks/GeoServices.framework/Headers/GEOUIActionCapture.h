/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOUIActionCapture : PBCodable {
	double _duration;	// 4 = 0x4
	int _actionType;	// 12 = 0xc
	int _sequenceNumber;	// 16 = 0x10
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 20 = 0x14
}
@property(assign, nonatomic) int actionType;	// G=0x33fdc609; S=0x33f710fd; @synthesize=_actionType
@property(assign, nonatomic) double duration;	// G=0x33fdc619; S=0x33f710c9; @synthesize=_duration
@property(assign, nonatomic) BOOL hasActionType;	// G=0x33fdbd6d; S=0x33fdbd4d; 
@property(assign, nonatomic) BOOL hasDuration;	// G=0x33fdbda1; S=0x33fdbd85; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x33fdbdd5; S=0x33fdbdb5; 
@property(assign, nonatomic) int sequenceNumber;	// G=0x33fdc631; S=0x33f71125; @synthesize=_sequenceNumber
// declared property getter: - (int)actionType;	// 0x33fdc609
- (void)copyTo:(id)to;	// 0x33fdc341
- (void)dealloc;	// 0x33fdbd21
- (id)description;	// 0x33fdbde9
- (id)dictionaryRepresentation;	// 0x33fdbe59
// declared property getter: - (double)duration;	// 0x33fdc619
// declared property getter: - (BOOL)hasActionType;	// 0x33fdbd6d
// declared property getter: - (BOOL)hasDuration;	// 0x33fdbda1
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x33fdbdd5
- (unsigned)hash;	// 0x33fdc4f1
- (BOOL)isEqual:(id)equal;	// 0x33fdc40d
- (BOOL)readFrom:(id)from;	// 0x33fdc289
// declared property getter: - (int)sequenceNumber;	// 0x33fdc631
// declared property setter: - (void)setActionType:(int)type;	// 0x33f710fd
// declared property setter: - (void)setDuration:(double)duration;	// 0x33f710c9
// declared property setter: - (void)setHasActionType:(BOOL)type;	// 0x33fdbd4d
// declared property setter: - (void)setHasDuration:(BOOL)duration;	// 0x33fdbd85
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x33fdbdb5
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x33f71125
- (void)writeTo:(id)to;	// 0x33fdc295
@end
