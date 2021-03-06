/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng;

@interface GEOLocation : PBCodable {
	double _course;	// 4 = 0x4
	double _heading;	// 12 = 0xc
	double _horizontalAccuracy;	// 20 = 0x14
	double _speed;	// 28 = 0x1c
	double _timestamp;	// 36 = 0x24
	double _verticalAccuracy;	// 44 = 0x2c
	int _altitude;	// 52 = 0x34
	GEOLatLng *_latLng;	// 56 = 0x38
	int _type;	// 60 = 0x3c
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 64 = 0x40
}
@property(assign, nonatomic) int altitude;	// G=0x30edcf99; S=0x30edbf41; @synthesize=_altitude
@property(assign, nonatomic) double course;	// G=0x30edd009; S=0x30edc151; @synthesize=_course
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x30edbf89; S=0x30edbf69; 
@property(assign, nonatomic) BOOL hasCourse;	// G=0x30edc1a1; S=0x30edc185; 
@property(assign, nonatomic) BOOL hasHeading;	// G=0x30edc139; S=0x30edc119; 
@property(assign, nonatomic) BOOL hasHorizontalAccuracy;	// G=0x30edbff5; S=0x30edbfd5; 
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x30edc0cd; S=0x30edc0ad; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x30edbf29; S=0x30edbf09; 
@property(assign, nonatomic) BOOL hasType;	// G=0x30edbec1; S=0x30edbea5; 
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x30edc061; S=0x30edc041; 
@property(assign, nonatomic) double heading;	// G=0x30edcff1; S=0x30edc0e5; @synthesize=_heading
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x30edcfa9; S=0x30edbfa1; @synthesize=_horizontalAccuracy
@property(retain, nonatomic) GEOLatLng *latLng;	// G=0x30ea6701; S=0x30ea66f1; @synthesize=_latLng
@property(assign, nonatomic) double speed;	// G=0x30edcfd9; S=0x30edc079; @synthesize=_speed
@property(assign, nonatomic) double timestamp;	// G=0x30edcf81; S=0x30edbed5; @synthesize=_timestamp
@property(assign, nonatomic) int type;	// G=0x30edcf71; S=0x30edbe7d; @synthesize=_type
@property(assign, nonatomic) double verticalAccuracy;	// G=0x30edcfc1; S=0x30edc00d; @synthesize=_verticalAccuracy
- (id)initWithGEOCoordinate:(XXStruct_gLbvpC)geocoordinate;	// 0x30ea66cd
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x30ec6365
- (id)initWithLocation:(id)location;	// 0x30ec6319
// declared property getter: - (int)altitude;	// 0x30edcf99
- (void)copyTo:(id)to;	// 0x30edcacd
// declared property getter: - (double)course;	// 0x30edd009
- (void)dealloc;	// 0x30ea8f71
- (id)description;	// 0x30edc1b5
- (id)dictionaryRepresentation;	// 0x30edc225
// declared property getter: - (BOOL)hasAltitude;	// 0x30edbf89
// declared property getter: - (BOOL)hasCourse;	// 0x30edc1a1
// declared property getter: - (BOOL)hasHeading;	// 0x30edc139
// declared property getter: - (BOOL)hasHorizontalAccuracy;	// 0x30edbff5
// declared property getter: - (BOOL)hasSpeed;	// 0x30edc0cd
// declared property getter: - (BOOL)hasTimestamp;	// 0x30edbf29
// declared property getter: - (BOOL)hasType;	// 0x30edbec1
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x30edc061
- (unsigned)hash;	// 0x30eaf961
// declared property getter: - (double)heading;	// 0x30edcff1
// declared property getter: - (double)horizontalAccuracy;	// 0x30edcfa9
- (BOOL)isEqual:(id)equal;	// 0x30edccfd
// declared property getter: - (id)latLng;	// 0x30ea6701
- (BOOL)readFrom:(id)from;	// 0x30edcac1
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x30edbf41
// declared property setter: - (void)setCourse:(double)course;	// 0x30edc151
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x30edbf69
// declared property setter: - (void)setHasCourse:(BOOL)course;	// 0x30edc185
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x30edc119
// declared property setter: - (void)setHasHorizontalAccuracy:(BOOL)accuracy;	// 0x30edbfd5
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x30edc0ad
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x30edbf09
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x30edbea5
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x30edc041
// declared property setter: - (void)setHeading:(double)heading;	// 0x30edc0e5
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x30edbfa1
// declared property setter: - (void)setLatLng:(id)lng;	// 0x30ea66f1
// declared property setter: - (void)setSpeed:(double)speed;	// 0x30edc079
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x30edbed5
// declared property setter: - (void)setType:(int)type;	// 0x30edbe7d
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x30edc00d
// declared property getter: - (double)speed;	// 0x30edcfd9
// declared property getter: - (double)timestamp;	// 0x30edcf81
// declared property getter: - (int)type;	// 0x30edcf71
// declared property getter: - (double)verticalAccuracy;	// 0x30edcfc1
- (void)writeTo:(id)to;	// 0x30eb017d
@end

