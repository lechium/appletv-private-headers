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
@property(retain, nonatomic) NSMutableArray *agencys;	// G=0x33a975c5; S=0x33a975d5; @synthesize=_agencys
@property(retain, nonatomic) NSMutableArray *alerts;	// G=0x33a9764d; S=0x33a9765d; @synthesize=_alerts
@property(retain, nonatomic) NSMutableArray *alternateModes;	// G=0x33a97681; S=0x33a97691; @synthesize=_alternateModes
@property(readonly, assign, nonatomic) BOOL hasIcons;	// G=0x33a96155; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x33a9616d; 
@property(assign, nonatomic) BOOL hasRecommendedDistanceUnits;	// G=0x33a975f9; S=0x33a97609; @synthesize=_hasRecommendedDistanceUnits
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x33a95fd1; 
@property(assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x33a974c5; S=0x33a974d5; @synthesize=_hasRequestedTimeType
@property(retain, nonatomic) GMMDirectionsIconResponse *icons;	// G=0x33a9755d; S=0x33a9756d; @synthesize=_icons
@property(readonly, assign, nonatomic) int *modes;	// G=0x33a95edd; 
@property(readonly, assign, nonatomic) unsigned modesCount;	// G=0x33a95ec9; 
@property(retain, nonatomic) NSString *notice;	// G=0x33a97591; S=0x33a975a1; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *optionsUseds;	// G=0x33a97619; S=0x33a97629; @synthesize=_optionsUseds
@property(assign, nonatomic) int recommendedDistanceUnits;	// G=0x33a96229; S=0x33a9624d; @synthesize=_recommendedDistanceUnits
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x33a97491; S=0x33a974a1; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedTimeType;	// G=0x33a974e5; S=0x33a95fe9; @synthesize=_requestedTimeType
@property(assign, nonatomic) int status;	// G=0x33a97471; S=0x33a97481; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *trips;	// G=0x33a97529; S=0x33a97539; @synthesize=_trips
@property(retain, nonatomic) NSMutableArray *waypointFeedbacks;	// G=0x33a974f5; S=0x33a97505; @synthesize=_waypointFeedbacks
- (void)addAgency:(id)agency;	// 0x33a96185
- (void)addAlert:(id)alert;	// 0x33a96315
- (void)addAlternateMode:(id)mode;	// 0x33a963b9
- (void)addMode:(int)mode;	// 0x33a95f01
- (void)addOptionsUsed:(id)used;	// 0x33a96271
- (void)addTrip:(id)trip;	// 0x33a960b1
- (void)addWaypointFeedback:(id)feedback;	// 0x33a9600d
- (id)agencyAtIndex:(unsigned)index;	// 0x33a96209
// declared property getter: - (id)agencys;	// 0x33a975c5
- (unsigned)agencysCount;	// 0x33a961e9
- (id)alertAtIndex:(unsigned)index;	// 0x33a96399
// declared property getter: - (id)alerts;	// 0x33a9764d
- (unsigned)alertsCount;	// 0x33a96379
- (id)alternateModeAtIndex:(unsigned)index;	// 0x33a9643d
// declared property getter: - (id)alternateModes;	// 0x33a97681
- (unsigned)alternateModesCount;	// 0x33a9641d
- (void)clearModes;	// 0x33a95eed
- (void)dealloc;	// 0x33a95dd5
- (id)description;	// 0x33a9645d
- (id)dictionaryRepresentation;	// 0x33a964cd
// declared property getter: - (BOOL)hasIcons;	// 0x33a96155
// declared property getter: - (BOOL)hasNotice;	// 0x33a9616d
// declared property getter: - (BOOL)hasRecommendedDistanceUnits;	// 0x33a975f9
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x33a95fd1
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x33a974c5
// declared property getter: - (id)icons;	// 0x33a9755d
- (int)modeAtIndex:(unsigned)index;	// 0x33a95f15
// declared property getter: - (int *)modes;	// 0x33a95edd
// declared property getter: - (unsigned)modesCount;	// 0x33a95ec9
// declared property getter: - (id)notice;	// 0x33a97591
- (id)optionsUsedAtIndex:(unsigned)index;	// 0x33a962f5
// declared property getter: - (id)optionsUseds;	// 0x33a97619
- (unsigned)optionsUsedsCount;	// 0x33a962d5
- (BOOL)readFrom:(id)from;	// 0x33a9671d
// declared property getter: - (int)recommendedDistanceUnits;	// 0x33a96229
// declared property getter: - (id)requestedDateTime;	// 0x33a97491
// declared property getter: - (int)requestedTimeType;	// 0x33a974e5
// declared property setter: - (void)setAgencys:(id)agencys;	// 0x33a975d5
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x33a9765d
// declared property setter: - (void)setAlternateModes:(id)modes;	// 0x33a97691
// declared property setter: - (void)setHasRecommendedDistanceUnits:(BOOL)units;	// 0x33a97609
// declared property setter: - (void)setHasRequestedTimeType:(BOOL)type;	// 0x33a974d5
// declared property setter: - (void)setIcons:(id)icons;	// 0x33a9756d
- (void)setModes:(int *)modes count:(unsigned)count;	// 0x33a95fb9
// declared property setter: - (void)setNotice:(id)notice;	// 0x33a975a1
// declared property setter: - (void)setOptionsUseds:(id)useds;	// 0x33a97629
// declared property setter: - (void)setRecommendedDistanceUnits:(int)units;	// 0x33a9624d
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x33a974a1
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x33a95fe9
// declared property setter: - (void)setStatus:(int)status;	// 0x33a97481
// declared property setter: - (void)setTrips:(id)trips;	// 0x33a97539
// declared property setter: - (void)setWaypointFeedbacks:(id)feedbacks;	// 0x33a97505
// declared property getter: - (int)status;	// 0x33a97471
- (id)tripAtIndex:(unsigned)index;	// 0x33a96135
// declared property getter: - (id)trips;	// 0x33a97529
- (unsigned)tripsCount;	// 0x33a96115
- (id)waypointFeedbackAtIndex:(unsigned)index;	// 0x33a96091
// declared property getter: - (id)waypointFeedbacks;	// 0x33a974f5
- (unsigned)waypointFeedbacksCount;	// 0x33a96071
- (void)writeTo:(id)to;	// 0x33a96d11
@end

