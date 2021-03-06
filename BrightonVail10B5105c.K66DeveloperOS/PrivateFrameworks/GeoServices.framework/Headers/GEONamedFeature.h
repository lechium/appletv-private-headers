/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

@interface GEONamedFeature : PBCodable {
	double _value;	// 4 = 0x4
	NSString *_name;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *name;	// G=0x3397bd79; S=0x3397bd89; @synthesize=_name
@property(assign, nonatomic) double value;	// G=0x3397bd99; S=0x3397bdb1; @synthesize=_value
- (void)copyTo:(id)to;	// 0x3397bbd1
- (void)dealloc;	// 0x3397b829
- (id)description;	// 0x3397b86d
- (id)dictionaryRepresentation;	// 0x3397b8dd
- (unsigned)hash;	// 0x3397bcc1
- (BOOL)isEqual:(id)equal;	// 0x3397bc2d
// declared property getter: - (id)name;	// 0x3397bd79
- (BOOL)readFrom:(id)from;	// 0x3397bb69
// declared property setter: - (void)setName:(id)name;	// 0x3397bd89
// declared property setter: - (void)setValue:(double)value;	// 0x3397bdb1
// declared property getter: - (double)value;	// 0x3397bd99
- (void)writeTo:(id)to;	// 0x3397bb75
@end

