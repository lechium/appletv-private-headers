/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBRequest.h> // Unknown library


@interface GEOPlaceSearchFeedbackRequest : PBRequest {
	XXStruct_t9EeIA _sessionGUID;	// 4 = 0x4
	long long _businessID;	// 20 = 0x14
	double _timestamp;	// 28 = 0x1c
	int _feedbackType;	// 36 = 0x24
	int _numberOfResults;	// 40 = 0x28
	int _positionInResults;	// 44 = 0x2c
	int _sequenceNumber;	// 48 = 0x30
	struct {
		unsigned arrivalStepID : 1;
		unsigned departureStepID : 1;
		unsigned distance : 1;
		unsigned drivingSide : 1;
		unsigned expectedTime : 1;
		unsigned routeType : 1;
		unsigned transportType : 1;
	} _has;	// 52 = 0x34
}
@property(assign, nonatomic) long long businessID;	// G=0x37a592dd; S=0x37a58105; @synthesize=_businessID
@property(assign, nonatomic) int feedbackType;	// G=0x37a592f5; S=0x37a5816d; @synthesize=_feedbackType
@property(assign, nonatomic) BOOL hasBusinessID;	// G=0x37a58159; S=0x37a58139; 
@property(assign, nonatomic) BOOL hasFeedbackType;	// G=0x37a581b5; S=0x37a58195; 
@property(assign, nonatomic) BOOL hasNumberOfResults;	// G=0x37a58211; S=0x37a581f1; 
@property(assign, nonatomic) BOOL hasPositionInResults;	// G=0x37a5826d; S=0x37a5824d; 
@property(assign, nonatomic) BOOL hasSequenceNumber;	// G=0x37a582c9; S=0x37a582a9; 
@property(assign, nonatomic) BOOL hasSessionGUID;	// G=0x37a580f1; S=0x37a580d5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x37a58081; S=0x37a58061; 
@property(assign, nonatomic) int numberOfResults;	// G=0x37a59305; S=0x37a581c9; @synthesize=_numberOfResults
@property(assign, nonatomic) int positionInResults;	// G=0x37a59315; S=0x37a58225; @synthesize=_positionInResults
@property(assign, nonatomic) int sequenceNumber;	// G=0x37a59325; S=0x37a58281; @synthesize=_sequenceNumber
@property(assign, nonatomic) XXStruct_t9EeIA sessionGUID;	// G=0x37a592b9; S=0x37a58095; @synthesize=_sessionGUID
@property(assign, nonatomic) double timestamp;	// G=0x37a592a1; S=0x37a5802d; @synthesize=_timestamp
// declared property getter: - (long long)businessID;	// 0x37a592dd
- (void)copyTo:(id)to;	// 0x37a58cf9
- (void)dealloc;	// 0x37a58001
- (id)description;	// 0x37a582dd
- (id)dictionaryRepresentation;	// 0x37a5834d
// declared property getter: - (int)feedbackType;	// 0x37a592f5
// declared property getter: - (BOOL)hasBusinessID;	// 0x37a58159
// declared property getter: - (BOOL)hasFeedbackType;	// 0x37a581b5
// declared property getter: - (BOOL)hasNumberOfResults;	// 0x37a58211
// declared property getter: - (BOOL)hasPositionInResults;	// 0x37a5826d
// declared property getter: - (BOOL)hasSequenceNumber;	// 0x37a582c9
// declared property getter: - (BOOL)hasSessionGUID;	// 0x37a580f1
// declared property getter: - (BOOL)hasTimestamp;	// 0x37a58081
- (unsigned)hash;	// 0x37a590d9
- (BOOL)isEqual:(id)equal;	// 0x37a58ee1
// declared property getter: - (int)numberOfResults;	// 0x37a59305
// declared property getter: - (int)positionInResults;	// 0x37a59315
- (BOOL)readFrom:(id)from;	// 0x37a58af1
- (unsigned)requestTypeCode;	// 0x37a58cd5
- (Class)responseClass;	// 0x37a58cdd
// declared property getter: - (int)sequenceNumber;	// 0x37a59325
// declared property getter: - (XXStruct_t9EeIA)sessionGUID;	// 0x37a592b9
// declared property setter: - (void)setBusinessID:(long long)anId;	// 0x37a58105
// declared property setter: - (void)setFeedbackType:(int)type;	// 0x37a5816d
// declared property setter: - (void)setHasBusinessID:(BOOL)anId;	// 0x37a58139
// declared property setter: - (void)setHasFeedbackType:(BOOL)type;	// 0x37a58195
// declared property setter: - (void)setHasNumberOfResults:(BOOL)results;	// 0x37a581f1
// declared property setter: - (void)setHasPositionInResults:(BOOL)results;	// 0x37a5824d
// declared property setter: - (void)setHasSequenceNumber:(BOOL)number;	// 0x37a582a9
// declared property setter: - (void)setHasSessionGUID:(BOOL)guid;	// 0x37a580d5
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x37a58061
// declared property setter: - (void)setNumberOfResults:(int)results;	// 0x37a581c9
// declared property setter: - (void)setPositionInResults:(int)results;	// 0x37a58225
// declared property setter: - (void)setSequenceNumber:(int)number;	// 0x37a58281
// declared property setter: - (void)setSessionGUID:(XXStruct_t9EeIA)guid;	// 0x37a58095
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x37a5802d
// declared property getter: - (double)timestamp;	// 0x37a592a1
- (void)writeTo:(id)to;	// 0x37a58afd
@end
