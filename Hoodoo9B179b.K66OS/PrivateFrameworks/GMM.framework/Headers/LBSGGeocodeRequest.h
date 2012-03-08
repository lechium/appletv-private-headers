/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGRectangle;

@interface LBSGGeocodeRequest : PBRequest {
	BOOL _hasNumFeatureLimit;	// 4 = 0x4
	unsigned _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSGRectangle *_boundingBox;	// 16 = 0x10
	BOOL _hasAddressLinesLimit;	// 20 = 0x14
	int _addressLinesLimit;	// 24 = 0x18
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x31d05169; S=0x31d0518d; @synthesize=_addressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x31d056e1; S=0x31d056f1; @synthesize=_boundingBox
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x31d05715; S=0x31d05725; @synthesize=_hasAddressLinesLimit
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x31d05151; 
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x31d056c1; S=0x31d056d1; @synthesize=_hasIncludeBoundingBoxes
@property(assign, nonatomic) BOOL hasNumFeatureLimit;	// G=0x31d056a1; S=0x31d056b1; @synthesize=_hasNumFeatureLimit
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x31d05109; S=0x31d0512d; @synthesize=_includeBoundingBoxes
@property(assign, nonatomic) unsigned numFeatureLimit;	// G=0x31d050c1; S=0x31d050e5; @synthesize=_numFeatureLimit
// declared property getter: - (int)addressLinesLimit;	// 0x31d05169
// declared property getter: - (id)boundingBox;	// 0x31d056e1
- (void)dealloc;	// 0x31d0507d
- (id)description;	// 0x31d051b1
- (id)dictionaryRepresentation;	// 0x31d05221
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x31d05715
// declared property getter: - (BOOL)hasBoundingBox;	// 0x31d05151
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x31d056c1
// declared property getter: - (BOOL)hasNumFeatureLimit;	// 0x31d056a1
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x31d05109
// declared property getter: - (unsigned)numFeatureLimit;	// 0x31d050c1
- (BOOL)readFrom:(id)from;	// 0x31d0537d
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x31d0518d
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x31d056f1
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x31d05725
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x31d056d1
// declared property setter: - (void)setHasNumFeatureLimit:(BOOL)limit;	// 0x31d056b1
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x31d0512d
// declared property setter: - (void)setNumFeatureLimit:(unsigned)limit;	// 0x31d050e5
- (void)writeTo:(id)to;	// 0x31d05565
@end

