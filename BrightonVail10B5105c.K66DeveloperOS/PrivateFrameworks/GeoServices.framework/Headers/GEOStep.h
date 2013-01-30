/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, GEONameInfo, NSString;

@interface GEOStep : PBCodable {
	XXStruct_TrK5YA *_laneGuidances;	// 4 = 0x4
	unsigned _laneGuidancesCount;	// 8 = 0x8
	unsigned _laneGuidancesSpace;	// 12 = 0xc
	XXStruct_DtYHXC *_junctionElements;	// 16 = 0x10
	unsigned _junctionElementsCount;	// 20 = 0x14
	unsigned _junctionElementsSpace;	// 24 = 0x18
	unsigned _distance;	// 28 = 0x1c
	GEONameInfo *_exitNumber;	// 32 = 0x20
	unsigned _expectedTime;	// 36 = 0x24
	int _hintFirstAnnouncementZilchIndex;	// 40 = 0x28
	NSString *_instructions;	// 44 = 0x2c
	int _junctionType;	// 48 = 0x30
	int _maneuverEndBasicIndex;	// 52 = 0x34
	int _maneuverEndZilchIndex;	// 56 = 0x38
	NSMutableArray *_maneuverNames;	// 60 = 0x3c
	int _maneuverStartZilchIndex;	// 64 = 0x40
	int _maneuverType;	// 68 = 0x44
	NSString *_notice;	// 72 = 0x48
	int _overrideDrivingSide;	// 76 = 0x4c
	int _overrideTransportType;	// 80 = 0x50
	NSMutableArray *_signposts;	// 84 = 0x54
	unsigned _stepID;	// 88 = 0x58
	struct {
		unsigned distance : 1;
		unsigned expectedTime : 1;
		unsigned hintFirstAnnouncementZilchIndex : 1;
		unsigned junctionType : 1;
		unsigned maneuverEndBasicIndex : 1;
		unsigned maneuverEndZilchIndex : 1;
		unsigned maneuverStartZilchIndex : 1;
		unsigned maneuverType : 1;
		unsigned overrideDrivingSide : 1;
		unsigned overrideTransportType : 1;
		unsigned stepID : 1;
	} _has;	// 92 = 0x5c
}
@property(assign, nonatomic) unsigned distance;	// G=0x33946ec1; S=0x33943d05; @synthesize=_distance
@property(retain, nonatomic) GEONameInfo *exitNumber;	// G=0x33946f51; S=0x33946f61; @synthesize=_exitNumber
@property(assign, nonatomic) unsigned expectedTime;	// G=0x33946ed1; S=0x33943d65; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasDistance;	// G=0x33943d51; S=0x33943d2d; 
@property(readonly, assign, nonatomic) BOOL hasExitNumber;	// G=0x33944675; 
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x33943db1; S=0x33943d8d; 
@property(readonly, assign, nonatomic) BOOL hasHintFirstAnnouncementIndex;	// G=0x339783fd; 
@property(assign, nonatomic) BOOL hasHintFirstAnnouncementZilchIndex;	// G=0x3394459d; S=0x33944579; 
@property(readonly, assign, nonatomic) BOOL hasInstructions;	// G=0x3394468d; 
@property(assign, nonatomic) BOOL hasJunctionType;	// G=0x339441ed; S=0x339441c9; 
@property(assign, nonatomic) BOOL hasManeuverEndBasicIndex;	// G=0x33943bd9; S=0x33943bb5; 
@property(assign, nonatomic) BOOL hasManeuverEndZilchIndex;	// G=0x33943cf1; S=0x33943ccd; 
@property(assign, nonatomic) BOOL hasManeuverStartZilchIndex;	// G=0x33943c65; S=0x33943c41; 
@property(assign, nonatomic) BOOL hasManeuverType;	// G=0x33943e11; S=0x33943ded; 
@property(readonly, assign, nonatomic) BOOL hasNotice;	// G=0x339446a5; 
@property(assign, nonatomic) BOOL hasOverrideDrivingSide;	// G=0x3394465d; S=0x33944639; 
@property(assign, nonatomic) BOOL hasOverrideTransportType;	// G=0x339445fd; S=0x339445d9; 
@property(assign, nonatomic) BOOL hasStepID;	// G=0x33943b4d; S=0x33943b29; 
@property(readonly, assign, nonatomic) int hintFirstAnnouncementIndex;	// G=0x33978415; 
@property(assign, nonatomic) int hintFirstAnnouncementZilchIndex;	// G=0x33944525; S=0x33944551; @synthesize=_hintFirstAnnouncementZilchIndex
@property(retain, nonatomic) NSString *instructions;	// G=0x33946f71; S=0x33946f81; @synthesize=_instructions
@property(readonly, assign, nonatomic) XXStruct_DtYHXC *junctionElements;	// G=0x33944211; 
@property(readonly, assign, nonatomic) unsigned junctionElementsCount;	// G=0x33944201; 
@property(assign, nonatomic) int junctionType;	// G=0x33944179; S=0x339441a1; @synthesize=_junctionType
@property(readonly, assign, nonatomic) XXStruct_TrK5YA *laneGuidances;	// G=0x33943f01; 
@property(readonly, assign, nonatomic) unsigned laneGuidancesCount;	// G=0x33943ef1; 
@property(assign, nonatomic) int maneuverEndBasicIndex;	// G=0x33943b61; S=0x33943b8d; @synthesize=_maneuverEndBasicIndex
@property(readonly, assign, nonatomic) unsigned maneuverEndIndex;	// G=0x33978361; 
@property(assign, nonatomic) int maneuverEndZilchIndex;	// G=0x33943c79; S=0x33943ca5; @synthesize=_maneuverEndZilchIndex
@property(retain, nonatomic) NSMutableArray *maneuverNames;	// G=0x33946ef1; S=0x33946f01; @synthesize=_maneuverNames
@property(readonly, assign, nonatomic) unsigned maneuverStartIndex;	// G=0x339783bd; 
@property(assign, nonatomic) int maneuverStartZilchIndex;	// G=0x33943bed; S=0x33943c19; @synthesize=_maneuverStartZilchIndex
@property(assign, nonatomic) int maneuverType;	// G=0x33946ee1; S=0x33943dc5; @synthesize=_maneuverType
@property(retain, nonatomic) NSString *notice;	// G=0x33946f91; S=0x33946fa1; @synthesize=_notice
@property(assign, nonatomic) int overrideDrivingSide;	// G=0x33946f41; S=0x33944611; @synthesize=_overrideDrivingSide
@property(assign, nonatomic) int overrideTransportType;	// G=0x33946f31; S=0x339445b1; @synthesize=_overrideTransportType
@property(retain, nonatomic) NSMutableArray *signposts;	// G=0x33946f11; S=0x33946f21; @synthesize=_signposts
@property(assign, nonatomic) unsigned stepID;	// G=0x33946eb1; S=0x33943b01; @synthesize=_stepID
- (void)addJunctionElement:(XXStruct_DtYHXC)element;	// 0x3394425d
- (void)addLaneGuidance:(XXStruct_TrK5YA)guidance;	// 0x33943f4d
- (void)addManeuverName:(id)name;	// 0x33943e45
- (void)addSignpost:(id)signpost;	// 0x33944479
- (void)clearJunctionElements;	// 0x33944221
- (void)clearLaneGuidances;	// 0x33943f11
- (void)clearManeuverNames;	// 0x33943e25
- (void)clearSignposts;	// 0x33944459
- (void)copyTo:(id)to;	// 0x339461e9
- (void)dealloc;	// 0x33943a49
- (id)description;	// 0x339446bd
- (id)dictionaryRepresentation;	// 0x3394472d
// declared property getter: - (unsigned)distance;	// 0x33946ec1
// declared property getter: - (id)exitNumber;	// 0x33946f51
// declared property getter: - (unsigned)expectedTime;	// 0x33946ed1
// declared property getter: - (BOOL)hasDistance;	// 0x33943d51
// declared property getter: - (BOOL)hasExitNumber;	// 0x33944675
// declared property getter: - (BOOL)hasExpectedTime;	// 0x33943db1
// declared property getter: - (BOOL)hasHintFirstAnnouncementIndex;	// 0x339783fd
// declared property getter: - (BOOL)hasHintFirstAnnouncementZilchIndex;	// 0x3394459d
// declared property getter: - (BOOL)hasInstructions;	// 0x3394468d
// declared property getter: - (BOOL)hasJunctionType;	// 0x339441ed
// declared property getter: - (BOOL)hasManeuverEndBasicIndex;	// 0x33943bd9
// declared property getter: - (BOOL)hasManeuverEndZilchIndex;	// 0x33943cf1
// declared property getter: - (BOOL)hasManeuverStartZilchIndex;	// 0x33943c65
// declared property getter: - (BOOL)hasManeuverType;	// 0x33943e11
// declared property getter: - (BOOL)hasNotice;	// 0x339446a5
// declared property getter: - (BOOL)hasOverrideDrivingSide;	// 0x3394465d
// declared property getter: - (BOOL)hasOverrideTransportType;	// 0x339445fd
// declared property getter: - (BOOL)hasStepID;	// 0x33943b4d
- (unsigned)hash;	// 0x33946bad
// declared property getter: - (int)hintFirstAnnouncementIndex;	// 0x33978415
// declared property getter: - (int)hintFirstAnnouncementZilchIndex;	// 0x33944525
// declared property getter: - (id)instructions;	// 0x33946f71
- (BOOL)isEqual:(id)equal;	// 0x339467a5
- (XXStruct_DtYHXC)junctionElementAtIndex:(unsigned)index;	// 0x3394434d
// declared property getter: - (XXStruct_DtYHXC *)junctionElements;	// 0x33944211
// declared property getter: - (unsigned)junctionElementsCount;	// 0x33944201
// declared property getter: - (int)junctionType;	// 0x33944179
- (XXStruct_TrK5YA)laneGuidanceAtIndex:(unsigned)index;	// 0x33944059
// declared property getter: - (XXStruct_TrK5YA *)laneGuidances;	// 0x33943f01
// declared property getter: - (unsigned)laneGuidancesCount;	// 0x33943ef1
// declared property getter: - (int)maneuverEndBasicIndex;	// 0x33943b61
// declared property getter: - (unsigned)maneuverEndIndex;	// 0x33978361
// declared property getter: - (int)maneuverEndZilchIndex;	// 0x33943c79
- (id)maneuverNameAtIndex:(unsigned)index;	// 0x33943ed1
// declared property getter: - (id)maneuverNames;	// 0x33946ef1
- (unsigned)maneuverNamesCount;	// 0x33943eb1
// declared property getter: - (unsigned)maneuverStartIndex;	// 0x339783bd
// declared property getter: - (int)maneuverStartZilchIndex;	// 0x33943bed
// declared property getter: - (int)maneuverType;	// 0x33946ee1
// declared property getter: - (id)notice;	// 0x33946f91
// declared property getter: - (int)overrideDrivingSide;	// 0x33946f41
// declared property getter: - (int)overrideTransportType;	// 0x33946f31
- (BOOL)readFrom:(id)from;	// 0x33945b15
// declared property setter: - (void)setDistance:(unsigned)distance;	// 0x33943d05
// declared property setter: - (void)setExitNumber:(id)number;	// 0x33946f61
// declared property setter: - (void)setExpectedTime:(unsigned)time;	// 0x33943d65
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x33943d2d
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x33943d8d
// declared property setter: - (void)setHasHintFirstAnnouncementZilchIndex:(BOOL)index;	// 0x33944579
// declared property setter: - (void)setHasJunctionType:(BOOL)type;	// 0x339441c9
// declared property setter: - (void)setHasManeuverEndBasicIndex:(BOOL)index;	// 0x33943bb5
// declared property setter: - (void)setHasManeuverEndZilchIndex:(BOOL)index;	// 0x33943ccd
// declared property setter: - (void)setHasManeuverStartZilchIndex:(BOOL)index;	// 0x33943c41
// declared property setter: - (void)setHasManeuverType:(BOOL)type;	// 0x33943ded
// declared property setter: - (void)setHasOverrideDrivingSide:(BOOL)side;	// 0x33944639
// declared property setter: - (void)setHasOverrideTransportType:(BOOL)type;	// 0x339445d9
// declared property setter: - (void)setHasStepID:(BOOL)anId;	// 0x33943b29
// declared property setter: - (void)setHintFirstAnnouncementZilchIndex:(int)index;	// 0x33944551
// declared property setter: - (void)setInstructions:(id)instructions;	// 0x33946f81
- (void)setJunctionElements:(XXStruct_DtYHXC *)elements count:(unsigned)count;	// 0x3394440d
// declared property setter: - (void)setJunctionType:(int)type;	// 0x339441a1
- (void)setLaneGuidances:(XXStruct_TrK5YA *)guidances count:(unsigned)count;	// 0x33944129
// declared property setter: - (void)setManeuverEndBasicIndex:(int)index;	// 0x33943b8d
// declared property setter: - (void)setManeuverEndZilchIndex:(int)index;	// 0x33943ca5
// declared property setter: - (void)setManeuverNames:(id)names;	// 0x33946f01
// declared property setter: - (void)setManeuverStartZilchIndex:(int)index;	// 0x33943c19
// declared property setter: - (void)setManeuverType:(int)type;	// 0x33943dc5
// declared property setter: - (void)setNotice:(id)notice;	// 0x33946fa1
// declared property setter: - (void)setOverrideDrivingSide:(int)side;	// 0x33944611
// declared property setter: - (void)setOverrideTransportType:(int)type;	// 0x339445b1
// declared property setter: - (void)setSignposts:(id)signposts;	// 0x33946f21
// declared property setter: - (void)setStepID:(unsigned)anId;	// 0x33943b01
- (id)signpostAtIndex:(unsigned)index;	// 0x33944505
// declared property getter: - (id)signposts;	// 0x33946f11
- (unsigned)signpostsCount;	// 0x339444e5
// declared property getter: - (unsigned)stepID;	// 0x33946eb1
- (void)writeTo:(id)to;	// 0x33945b21
@end
