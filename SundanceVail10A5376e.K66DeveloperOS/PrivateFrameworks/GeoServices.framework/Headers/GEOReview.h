/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOUser, NSString;

@interface GEOReview : PBCodable {
	double _reviewTime;	// 4 = 0x4
	double _score;	// 12 = 0xc
	GEOUser *_reviewer;	// 20 = 0x14
	NSString *_snippet;	// 24 = 0x18
	NSString *_uid;	// 28 = 0x1c
	XXStruct_UvnNeB _has;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL hasReviewTime;	// G=0x37a3c15d; S=0x37a3c141; 
@property(readonly, assign, nonatomic) BOOL hasReviewer;	// G=0x37a3c171; 
@property(assign, nonatomic) BOOL hasScore;	// G=0x37a3c0f9; S=0x37a3c0d9; 
@property(readonly, assign, nonatomic) BOOL hasSnippet;	// G=0x37a3c08d; 
@property(readonly, assign, nonatomic) BOOL hasUid;	// G=0x37a3c189; 
@property(assign, nonatomic) double reviewTime;	// G=0x37a3cc91; S=0x37a3c10d; @synthesize=_reviewTime
@property(retain, nonatomic) GEOUser *reviewer;	// G=0x37a3cca9; S=0x37a3ccb9; @synthesize=_reviewer
@property(assign, nonatomic) double score;	// G=0x37a3cc79; S=0x37a3c0a5; @synthesize=_score
@property(retain, nonatomic) NSString *snippet;	// G=0x37a3cc59; S=0x37a3cc69; @synthesize=_snippet
@property(retain, nonatomic) NSString *uid;	// G=0x37a3ccc9; S=0x37a3ccd9; @synthesize=_uid
- (void)copyTo:(id)to;	// 0x37a3c821
- (void)dealloc;	// 0x37a3c021
- (id)description;	// 0x37a3c1a1
- (id)dictionaryRepresentation;	// 0x37a3c211
// declared property getter: - (BOOL)hasReviewTime;	// 0x37a3c15d
// declared property getter: - (BOOL)hasReviewer;	// 0x37a3c171
// declared property getter: - (BOOL)hasScore;	// 0x37a3c0f9
// declared property getter: - (BOOL)hasSnippet;	// 0x37a3c08d
// declared property getter: - (BOOL)hasUid;	// 0x37a3c189
- (unsigned)hash;	// 0x37a3cac9
- (BOOL)isEqual:(id)equal;	// 0x37a3c969
- (BOOL)readFrom:(id)from;	// 0x37a3c6a9
// declared property getter: - (double)reviewTime;	// 0x37a3cc91
// declared property getter: - (id)reviewer;	// 0x37a3cca9
// declared property getter: - (double)score;	// 0x37a3cc79
// declared property setter: - (void)setHasReviewTime:(BOOL)time;	// 0x37a3c141
// declared property setter: - (void)setHasScore:(BOOL)score;	// 0x37a3c0d9
// declared property setter: - (void)setReviewTime:(double)time;	// 0x37a3c10d
// declared property setter: - (void)setReviewer:(id)reviewer;	// 0x37a3ccb9
// declared property setter: - (void)setScore:(double)score;	// 0x37a3c0a5
// declared property setter: - (void)setSnippet:(id)snippet;	// 0x37a3cc69
// declared property setter: - (void)setUid:(id)uid;	// 0x37a3ccd9
// declared property getter: - (id)snippet;	// 0x37a3cc59
// declared property getter: - (id)uid;	// 0x37a3ccc9
- (void)writeTo:(id)to;	// 0x37a3c6b5
@end

