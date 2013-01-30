/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOLatLng : PBCodable {
	double _lat;	// 4 = 0x4
	double _lng;	// 12 = 0xc
}
@property(assign, nonatomic) double lat;	// G=0x3414c8e1; S=0x3412d811; @synthesize=_lat
@property(assign, nonatomic) double lng;	// G=0x3414c8fd; S=0x3412d825; @synthesize=_lng
- (id)coordinateAsString;	// 0x3415bc61
- (void)copyTo:(id)to;	// 0x341690fd
- (void)dealloc;	// 0x3412d849
- (id)description;	// 0x34168fc5
- (id)dictionaryRepresentation;	// 0x34169035
- (unsigned)hash;	// 0x34155151
- (BOOL)isEqual:(id)equal;	// 0x34169159
- (BOOL)isValid;	// 0x3415bba9
// declared property getter: - (double)lat;	// 0x3414c8e1
// declared property getter: - (double)lng;	// 0x3414c8fd
- (BOOL)readFrom:(id)from;	// 0x341690f1
// declared property setter: - (void)setLat:(double)lat;	// 0x3412d811
// declared property setter: - (void)setLng:(double)lng;	// 0x3412d825
- (void)writeTo:(id)to;	// 0x3414ec7d
@end
