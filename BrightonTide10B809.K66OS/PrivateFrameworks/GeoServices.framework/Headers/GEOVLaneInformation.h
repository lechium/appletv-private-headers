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
@property(assign, nonatomic) unsigned style;	// G=0x33fefc4d; S=0x33fefc5d; @synthesize=_style
@property(assign, nonatomic) unsigned validityMask;	// G=0x33fefc6d; S=0x33fefc7d; @synthesize=_validityMask
- (void)copyTo:(id)to;	// 0x33fefb4d
- (void)dealloc;	// 0x33fef769
- (id)description;	// 0x33fef795
- (id)dictionaryRepresentation;	// 0x33fef805
- (unsigned)hash;	// 0x33fefc0d
- (BOOL)isEqual:(id)equal;	// 0x33fefba5
- (BOOL)readFrom:(id)from;	// 0x33fefaf9
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x33fefc5d
// declared property setter: - (void)setValidityMask:(unsigned)mask;	// 0x33fefc7d
// declared property getter: - (unsigned)style;	// 0x33fefc4d
// declared property getter: - (unsigned)validityMask;	// 0x33fefc6d
- (void)writeTo:(id)to;	// 0x33fefb05
@end

