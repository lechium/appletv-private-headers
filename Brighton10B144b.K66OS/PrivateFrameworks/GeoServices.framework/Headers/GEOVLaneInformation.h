/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOVLaneInformation : PBCodable {
	unsigned _style;	// 4 = 0x4
	unsigned _validityMask;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned style;	// G=0x33fedde5; S=0x33feddf5; @synthesize=_style
@property(assign, nonatomic) unsigned validityMask;	// G=0x33fede05; S=0x33fede15; @synthesize=_validityMask
- (void)copyTo:(id)to;	// 0x33fedce5
- (void)dealloc;	// 0x33fed901
- (id)description;	// 0x33fed92d
- (id)dictionaryRepresentation;	// 0x33fed99d
- (unsigned)hash;	// 0x33fedda5
- (BOOL)isEqual:(id)equal;	// 0x33fedd3d
- (BOOL)readFrom:(id)from;	// 0x33fedc91
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x33feddf5
// declared property setter: - (void)setValidityMask:(unsigned)mask;	// 0x33fede15
// declared property getter: - (unsigned)style;	// 0x33fedde5
// declared property getter: - (unsigned)validityMask;	// 0x33fede05
- (void)writeTo:(id)to;	// 0x33fedc9d
@end

