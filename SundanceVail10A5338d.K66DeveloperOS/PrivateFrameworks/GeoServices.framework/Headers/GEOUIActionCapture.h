/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOUIActionCapture : PBCodable {
	double _timestamp;	// 4 = 0x4
	int _actionType;	// 12 = 0xc
	XXStruct_UvnNeB _has;	// 16 = 0x10
}
@property(assign, nonatomic) int actionType;	// G=0x324be3a9; S=0x324bdc8d; @synthesize=_actionType
@property(assign, nonatomic) BOOL hasActionType;	// G=0x324bdcd5; S=0x324bdcb5; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x324bdd39; S=0x324bdd1d; 
@property(assign, nonatomic) double timestamp;	// G=0x324be3b9; S=0x324bdce9; @synthesize=_timestamp
// declared property getter: - (int)actionType;	// 0x324be3a9
- (void)copyTo:(id)to;	// 0x324be189
- (void)dealloc;	// 0x324bdc61
- (id)description;	// 0x324bdd4d
- (id)dictionaryRepresentation;	// 0x324bddbd
// declared property getter: - (BOOL)hasActionType;	// 0x324bdcd5
// declared property getter: - (BOOL)hasTimestamp;	// 0x324bdd39
- (unsigned)hash;	// 0x324be2d1
- (BOOL)isEqual:(id)equal;	// 0x324be215
- (BOOL)readFrom:(id)from;	// 0x324be101
// declared property setter: - (void)setActionType:(int)type;	// 0x324bdc8d
// declared property setter: - (void)setHasActionType:(BOOL)type;	// 0x324bdcb5
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x324bdd1d
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x324bdce9
// declared property getter: - (double)timestamp;	// 0x324be3b9
- (void)writeTo:(id)to;	// 0x324be10d
@end

