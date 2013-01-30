/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSData;

@interface GEODirectionsFeedback : PBCodable {
	XXStruct_2pGsiB *_stepFeedbacks;	// 4 = 0x4
	unsigned _stepFeedbacksCount;	// 8 = 0x8
	unsigned _stepFeedbacksSpace;	// 12 = 0xc
	NSData *_directionResponseID;	// 16 = 0x10
	NSMutableArray *_traversedRouteIDs;	// 20 = 0x14
}
@property(retain, nonatomic) NSData *directionResponseID;	// G=0x302a2a0d; S=0x302a2a1d; @synthesize=_directionResponseID
@property(readonly, assign, nonatomic) BOOL hasDirectionResponseID;	// G=0x302a1eb1; 
@property(readonly, assign, nonatomic) XXStruct_2pGsiB *stepFeedbacks;	// G=0x302a1fa5; 
@property(readonly, assign, nonatomic) unsigned stepFeedbacksCount;	// G=0x302a1f95; 
@property(retain, nonatomic) NSMutableArray *traversedRouteIDs;	// G=0x302a2a2d; S=0x302a2a3d; @synthesize=_traversedRouteIDs
- (void)addStepFeedback:(XXStruct_2pGsiB)feedback;	// 0x302a1ff1
- (void)addTraversedRouteIDs:(id)ids;	// 0x302a1ee9
- (void)clearStepFeedbacks;	// 0x302a1fb5
- (void)clearTraversedRouteIDs;	// 0x302a1ec9
- (void)copyTo:(id)to;	// 0x302a2775
- (void)dealloc;	// 0x302a1e49
- (id)description;	// 0x302a21ed
- (id)dictionaryRepresentation;	// 0x302a225d
// declared property getter: - (id)directionResponseID;	// 0x302a2a0d
// declared property getter: - (BOOL)hasDirectionResponseID;	// 0x302a1eb1
- (unsigned)hash;	// 0x302a29a5
- (BOOL)isEqual:(id)equal;	// 0x302a28dd
- (BOOL)readFrom:(id)from;	// 0x302a25bd
// declared property setter: - (void)setDirectionResponseID:(id)anId;	// 0x302a2a1d
- (void)setStepFeedbacks:(XXStruct_2pGsiB *)feedbacks count:(unsigned)count;	// 0x302a21a1
// declared property setter: - (void)setTraversedRouteIDs:(id)ids;	// 0x302a2a3d
- (XXStruct_2pGsiB)stepFeedbackAtIndex:(unsigned)index;	// 0x302a20e1
// declared property getter: - (XXStruct_2pGsiB *)stepFeedbacks;	// 0x302a1fa5
// declared property getter: - (unsigned)stepFeedbacksCount;	// 0x302a1f95
// declared property getter: - (id)traversedRouteIDs;	// 0x302a2a2d
- (id)traversedRouteIDsAtIndex:(unsigned)index;	// 0x302a1f75
- (unsigned)traversedRouteIDsCount;	// 0x302a1f55
- (void)writeTo:(id)to;	// 0x302a25c9
@end
