/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class NSMutableArray, GMMDateTime, NSString, GMMDirectionsIconResponse;

__attribute__((visibility("hidden")))
@interface GMMDirectionsResponse : PBCodable {
	int _status;	// 4 = 0x4
	XXStruct_WmZAAA _modes;	// 8 = 0x8
	GMMDateTime *_requestedDateTime;	// 20 = 0x14
	BOOL _hasRequestedTimeType;	// 24 = 0x18
	int _requestedTimeType;	// 28 = 0x1c
	NSMutableArray *_waypointFeedbacks;	// 32 = 0x20
	NSMutableArray *_trips;	// 36 = 0x24
	GMMDirectionsIconResponse *_icons;	// 40 = 0x28
	NSString *_notice;	// 44 = 0x2c
	NSMutableArray *_agencys;	// 48 = 0x30
	BOOL _hasRecommendedDistanceUnits;	// 52 = 0x34
	int _recommendedDistanceUnits;	// 56 = 0x38
	NSMutableArray *_optionsUseds;	// 60 = 0x3c
	NSMutableArray *_alerts;	// 64 = 0x40
	NSMutableArray *_alternateModes;	// 68 = 0x44
}
@property(retain, nonatomic) NSMutableArray *agencys;	// G=0x31cfa5b5; S=0x31cfa5c5; @synthesize=_agencys
@property(retain, nonatomic) NSMutableArray *alerts;	// G=0x31cfa63d; S=0x31cfa64d; @synthesize=_alerts
@property(retain, nonatomic) NSMutableArray *alternateModes;	// G=0x31cfa671; S=0x31cfa681; @synthesize=_alternateModes
@property(readonly, assign, nonatomic) BOOL hasIcons;	// G=0x31cf9145; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x31cf915d; 
@property(assign, nonatomic) BOOL hasRecommendedDistanceUnits;	// G=0x31cfa5e9; S=0x31cfa5f9; @synthesize=_hasRecommendedDistanceUnits
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x31cf8fc1; 
@property(assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x31cfa4b5; S=0x31cfa4c5; @synthesize=_hasRequestedTimeType
@property(retain, nonatomic) GMMDirectionsIconResponse *icons;	// G=0x31cfa54d; S=0x31cfa55d; @synthesize=_icons
@property(readonly, assign, nonatomic) int *modes;	// G=0x31cf8ecd; 
@property(readonly, assign, nonatomic) unsigned modesCount;	// G=0x31cf8eb9; 
@property(retain, nonatomic) NSString *notice;	// G=0x31cfa581; S=0x31cfa591; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *optionsUseds;	// G=0x31cfa609; S=0x31cfa619; @synthesize=_optionsUseds
@property(assign, nonatomic) int recommendedDistanceUnits;	// G=0x31cf9219; S=0x31cf923d; @synthesize=_recommendedDistanceUnits
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x31cfa481; S=0x31cfa491; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedTimeType;	// G=0x31cfa4d5; S=0x31cf8fd9; @synthesize=_requestedTimeType
@property(assign, nonatomic) int status;	// G=0x31cfa461; S=0x31cfa471; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *trips;	// G=0x31cfa519; S=0x31cfa529; @synthesize=_trips
@property(retain, nonatomic) NSMutableArray *waypointFeedbacks;	// G=0x31cfa4e5; S=0x31cfa4f5; @synthesize=_waypointFeedbacks
- (void)addAgency:(id)agency;	// 0x31cf9175
- (void)addAlert:(id)alert;	// 0x31cf9305
- (void)addAlternateMode:(id)mode;	// 0x31cf93a9
- (void)addMode:(int)mode;	// 0x31cf8ef1
- (void)addOptionsUsed:(id)used;	// 0x31cf9261
- (void)addTrip:(id)trip;	// 0x31cf90a1
- (void)addWaypointFeedback:(id)feedback;	// 0x31cf8ffd
- (id)agencyAtIndex:(unsigned)index;	// 0x31cf91f9
// declared property getter: - (id)agencys;	// 0x31cfa5b5
- (unsigned)agencysCount;	// 0x31cf91d9
- (id)alertAtIndex:(unsigned)index;	// 0x31cf9389
// declared property getter: - (id)alerts;	// 0x31cfa63d
- (unsigned)alertsCount;	// 0x31cf9369
- (id)alternateModeAtIndex:(unsigned)index;	// 0x31cf942d
// declared property getter: - (id)alternateModes;	// 0x31cfa671
- (unsigned)alternateModesCount;	// 0x31cf940d
- (void)clearModes;	// 0x31cf8edd
- (void)dealloc;	// 0x31cf8dc5
- (id)description;	// 0x31cf944d
- (id)dictionaryRepresentation;	// 0x31cf94bd
// declared property getter: - (BOOL)hasIcons;	// 0x31cf9145
// declared property getter: - (BOOL)hasNotice;	// 0x31cf915d
// declared property getter: - (BOOL)hasRecommendedDistanceUnits;	// 0x31cfa5e9
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x31cf8fc1
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x31cfa4b5
// declared property getter: - (id)icons;	// 0x31cfa54d
- (int)modeAtIndex:(unsigned)index;	// 0x31cf8f05
// declared property getter: - (int *)modes;	// 0x31cf8ecd
// declared property getter: - (unsigned)modesCount;	// 0x31cf8eb9
// declared property getter: - (id)notice;	// 0x31cfa581
- (id)optionsUsedAtIndex:(unsigned)index;	// 0x31cf92e5
// declared property getter: - (id)optionsUseds;	// 0x31cfa609
- (unsigned)optionsUsedsCount;	// 0x31cf92c5
- (BOOL)readFrom:(id)from;	// 0x31cf970d
// declared property getter: - (int)recommendedDistanceUnits;	// 0x31cf9219
// declared property getter: - (id)requestedDateTime;	// 0x31cfa481
// declared property getter: - (int)requestedTimeType;	// 0x31cfa4d5
// declared property setter: - (void)setAgencys:(id)agencys;	// 0x31cfa5c5
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x31cfa64d
// declared property setter: - (void)setAlternateModes:(id)modes;	// 0x31cfa681
// declared property setter: - (void)setHasRecommendedDistanceUnits:(BOOL)units;	// 0x31cfa5f9
// declared property setter: - (void)setHasRequestedTimeType:(BOOL)type;	// 0x31cfa4c5
// declared property setter: - (void)setIcons:(id)icons;	// 0x31cfa55d
- (void)setModes:(int *)modes count:(unsigned)count;	// 0x31cf8fa9
// declared property setter: - (void)setNotice:(id)notice;	// 0x31cfa591
// declared property setter: - (void)setOptionsUseds:(id)useds;	// 0x31cfa619
// declared property setter: - (void)setRecommendedDistanceUnits:(int)units;	// 0x31cf923d
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x31cfa491
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x31cf8fd9
// declared property setter: - (void)setStatus:(int)status;	// 0x31cfa471
// declared property setter: - (void)setTrips:(id)trips;	// 0x31cfa529
// declared property setter: - (void)setWaypointFeedbacks:(id)feedbacks;	// 0x31cfa4f5
// declared property getter: - (int)status;	// 0x31cfa461
- (id)tripAtIndex:(unsigned)index;	// 0x31cf9125
// declared property getter: - (id)trips;	// 0x31cfa519
- (unsigned)tripsCount;	// 0x31cf9105
- (id)waypointFeedbackAtIndex:(unsigned)index;	// 0x31cf9081
// declared property getter: - (id)waypointFeedbacks;	// 0x31cfa4e5
- (unsigned)waypointFeedbacksCount;	// 0x31cf9061
- (void)writeTo:(id)to;	// 0x31cf9d01
@end

