/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDateTime, GMMDirectionsIconResponse, NSMutableArray, NSString;

@interface GMMDirectionsResponse : PBCodable {
@private
	int _status;	// 4 = 0x4
	NSMutableArray *_modes;	// 8 = 0x8
	GMMDateTime *_requestedDateTime;	// 12 = 0xc
	int _requestedTimeType;	// 16 = 0x10
	BOOL _hasRequestedTimeType;	// 20 = 0x14
	NSMutableArray *_waypointFeedbacks;	// 24 = 0x18
	NSMutableArray *_trips;	// 28 = 0x1c
	GMMDirectionsIconResponse *_icons;	// 32 = 0x20
	NSString *_notice;	// 36 = 0x24
	NSMutableArray *_agencys;	// 40 = 0x28
	int _recommendedDistanceUnits;	// 44 = 0x2c
	BOOL _hasRecommendedDistanceUnits;	// 48 = 0x30
	NSMutableArray *_optionsUseds;	// 52 = 0x34
	NSMutableArray *_alerts;	// 56 = 0x38
	NSMutableArray *_alternateModes;	// 60 = 0x3c
}
@property(retain, nonatomic) NSMutableArray *agencys;	// G=0x30a75f6d; S=0x30a77775; @synthesize=_agencys
@property(readonly, assign, nonatomic) int agencysCount;	// G=0x30a771e9; 
@property(retain, nonatomic) NSMutableArray *alerts;	// G=0x30a75f2d; S=0x30a777c5; @synthesize=_alerts
@property(readonly, assign, nonatomic) int alertsCount;	// G=0x30a76fa9; 
@property(retain, nonatomic) NSMutableArray *alternateModes;	// G=0x30a75f1d; S=0x30a777ed; @synthesize=_alternateModes
@property(readonly, assign, nonatomic) int alternateModesCount;	// G=0x30a76e89; 
@property(readonly, assign, nonatomic) BOOL hasIcons;	// G=0x30a75ed9; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x30a75eed; 
@property(readonly, assign, nonatomic) BOOL hasRecommendedDistanceUnits;	// G=0x30a75f4d; @synthesize=_hasRecommendedDistanceUnits
@property(readonly, assign, nonatomic) BOOL hasRequestedDateTime;	// G=0x30a75ea9; 
@property(readonly, assign, nonatomic) BOOL hasRequestedTimeType;	// G=0x30a75fbd; @synthesize=_hasRequestedTimeType
@property(retain, nonatomic) GMMDirectionsIconResponse *icons;	// G=0x30a75f8d; S=0x30a77725; @synthesize=_icons
@property(retain, nonatomic) NSMutableArray *modes;	// G=0x30a75fed; S=0x30a77685; @synthesize=_modes
@property(readonly, assign, nonatomic) int modesCount;	// G=0x30a77575; 
@property(retain, nonatomic) NSString *notice;	// G=0x30a75f7d; S=0x30a7774d; @synthesize=_notice
@property(retain, nonatomic) NSMutableArray *optionsUseds;	// G=0x30a75f3d; S=0x30a7779d; @synthesize=_optionsUseds
@property(readonly, assign, nonatomic) int optionsUsedsCount;	// G=0x30a770c9; 
@property(assign, nonatomic) int recommendedDistanceUnits;	// G=0x30a75f5d; S=0x30a75f01; @synthesize=_recommendedDistanceUnits
@property(retain, nonatomic) GMMDateTime *requestedDateTime;	// G=0x30a75fdd; S=0x30a776ad; @synthesize=_requestedDateTime
@property(assign, nonatomic) int requestedTimeType;	// G=0x30a75fcd; S=0x30a75ebd; @synthesize=_requestedTimeType
@property(assign, nonatomic) int status;	// G=0x30a75ffd; S=0x30a7600d; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *trips;	// G=0x30a75f9d; S=0x30a776fd; @synthesize=_trips
@property(readonly, assign, nonatomic) int tripsCount;	// G=0x30a77309; 
@property(retain, nonatomic) NSMutableArray *waypointFeedbacks;	// G=0x30a75fad; S=0x30a776d5; @synthesize=_waypointFeedbacks
@property(readonly, assign, nonatomic) int waypointFeedbacksCount;	// G=0x30a77429; 
- (id)init;	// 0x30a7601d
- (void)addAgency:(id)agency;	// 0x30a770ed
- (void)addAlert:(id)alert;	// 0x30a76ead
- (void)addAlternateMode:(id)mode;	// 0x30a76d8d
- (void)addMode:(int)mode;	// 0x30a7744d
- (void)addOptionsUsed:(id)used;	// 0x30a76fcd
- (void)addTrip:(id)trip;	// 0x30a7720d
- (void)addWaypointFeedback:(id)feedback;	// 0x30a7732d
- (id)agencyAtIndex:(unsigned)index;	// 0x30a7711d
// declared property getter: - (id)agencys;	// 0x30a75f6d
// declared property getter: - (int)agencysCount;	// 0x30a771e9
- (id)alertAtIndex:(unsigned)index;	// 0x30a76edd
// declared property getter: - (id)alerts;	// 0x30a75f2d
// declared property getter: - (int)alertsCount;	// 0x30a76fa9
- (id)alternateModeAtIndex:(unsigned)index;	// 0x30a76dbd
// declared property getter: - (id)alternateModes;	// 0x30a75f1d
// declared property getter: - (int)alternateModesCount;	// 0x30a76e89
- (void)dealloc;	// 0x30a77599
- (id)description;	// 0x30a76059
// declared property getter: - (BOOL)hasIcons;	// 0x30a75ed9
// declared property getter: - (BOOL)hasNotice;	// 0x30a75eed
// declared property getter: - (BOOL)hasRecommendedDistanceUnits;	// 0x30a75f4d
// declared property getter: - (BOOL)hasRequestedDateTime;	// 0x30a75ea9
// declared property getter: - (BOOL)hasRequestedTimeType;	// 0x30a75fbd
// declared property getter: - (id)icons;	// 0x30a75f8d
- (int)modeAtIndex:(unsigned)index;	// 0x30a7747d
// declared property getter: - (id)modes;	// 0x30a75fed
// declared property getter: - (int)modesCount;	// 0x30a77575
// declared property getter: - (id)notice;	// 0x30a75f7d
- (id)optionsUsedAtIndex:(unsigned)index;	// 0x30a76ffd
// declared property getter: - (id)optionsUseds;	// 0x30a75f3d
// declared property getter: - (int)optionsUsedsCount;	// 0x30a770c9
- (BOOL)readFrom:(id)from;	// 0x30a769e1
// declared property getter: - (int)recommendedDistanceUnits;	// 0x30a75f5d
// declared property getter: - (id)requestedDateTime;	// 0x30a75fdd
// declared property getter: - (int)requestedTimeType;	// 0x30a75fcd
- (void)setAgency:(id)agency atIndex:(unsigned)index;	// 0x30a77181
// declared property setter: - (void)setAgencys:(id)agencys;	// 0x30a77775
- (void)setAlert:(id)alert atIndex:(unsigned)index;	// 0x30a76f41
// declared property setter: - (void)setAlerts:(id)alerts;	// 0x30a777c5
- (void)setAlternateMode:(id)mode atIndex:(unsigned)index;	// 0x30a76e21
// declared property setter: - (void)setAlternateModes:(id)modes;	// 0x30a777ed
// declared property setter: - (void)setIcons:(id)icons;	// 0x30a77725
- (void)setMode:(int)mode atIndex:(unsigned)index;	// 0x30a774ed
// declared property setter: - (void)setModes:(id)modes;	// 0x30a77685
// declared property setter: - (void)setNotice:(id)notice;	// 0x30a7774d
- (void)setOptionsUsed:(id)used atIndex:(unsigned)index;	// 0x30a77061
// declared property setter: - (void)setOptionsUseds:(id)useds;	// 0x30a7779d
// declared property setter: - (void)setRecommendedDistanceUnits:(int)units;	// 0x30a75f01
// declared property setter: - (void)setRequestedDateTime:(id)time;	// 0x30a776ad
// declared property setter: - (void)setRequestedTimeType:(int)type;	// 0x30a75ebd
// declared property setter: - (void)setStatus:(int)status;	// 0x30a7600d
- (void)setTrip:(id)trip atIndex:(unsigned)index;	// 0x30a772a1
// declared property setter: - (void)setTrips:(id)trips;	// 0x30a776fd
- (void)setWaypointFeedback:(id)feedback atIndex:(unsigned)index;	// 0x30a773c1
// declared property setter: - (void)setWaypointFeedbacks:(id)feedbacks;	// 0x30a776d5
// declared property getter: - (int)status;	// 0x30a75ffd
- (id)tripAtIndex:(unsigned)index;	// 0x30a7723d
// declared property getter: - (id)trips;	// 0x30a75f9d
// declared property getter: - (int)tripsCount;	// 0x30a77309
- (id)waypointFeedbackAtIndex:(unsigned)index;	// 0x30a7735d
// declared property getter: - (id)waypointFeedbacks;	// 0x30a75fad
// declared property getter: - (int)waypointFeedbacksCount;	// 0x30a77429
- (void)writeTo:(id)to;	// 0x30a76365
@end

