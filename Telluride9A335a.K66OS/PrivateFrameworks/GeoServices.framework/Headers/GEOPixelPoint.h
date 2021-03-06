/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOPixelPoint : PBCodable {
	double _x;	// 4 = 0x4
	double _y;	// 12 = 0xc
	BOOL _hasZ;	// 20 = 0x14
	int _z;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasZ;	// G=0x31d10ead; S=0x31d10ebd; @synthesize=_hasZ
@property(assign, nonatomic) double x;	// G=0x31d10e55; S=0x31d10e6d; @synthesize=_x
@property(assign, nonatomic) double y;	// G=0x31d10e81; S=0x31d10e99; @synthesize=_y
@property(assign, nonatomic) int z;	// G=0x31d10ae5; S=0x31d10b09; @synthesize=_z
- (void)dealloc;	// 0x31d10ab9
- (id)description;	// 0x31d10b2d
- (id)dictionaryRepresentation;	// 0x31d10b9d
// declared property getter: - (BOOL)hasZ;	// 0x31d10ead
- (BOOL)readFrom:(id)from;	// 0x31d10ca1
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x31d10ebd
// declared property setter: - (void)setX:(double)x;	// 0x31d10e6d
// declared property setter: - (void)setY:(double)y;	// 0x31d10e99
// declared property setter: - (void)setZ:(int)z;	// 0x31d10b09
- (void)writeTo:(id)to;	// 0x31d10dc5
// declared property getter: - (double)x;	// 0x31d10e55
// declared property getter: - (double)y;	// 0x31d10e81
// declared property getter: - (int)z;	// 0x31d10ae5
@end

