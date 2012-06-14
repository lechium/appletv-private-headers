/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
@private
	double _timestamp;	// 4 = 0x4
	NSString *_bundleIdentifier;	// 12 = 0xc
	GEOLatLng *_destination;	// 16 = 0x10
	GEOLatLng *_source;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x34b78501; S=0x34b78511; @synthesize=_bundleIdentifier
@property(retain, nonatomic) GEOLatLng *destination;	// G=0x34b78541; S=0x34b78551; @synthesize=_destination
@property(retain, nonatomic) GEOLatLng *source;	// G=0x34b78521; S=0x34b78531; @synthesize=_source
@property(assign, nonatomic) double timestamp;	// G=0x34b78561; S=0x34b78579; @synthesize=_timestamp
// declared property getter: - (id)bundleIdentifier;	// 0x34b78501
- (void)copyTo:(id)to;	// 0x34b78269
- (void)dealloc;	// 0x34b77c21
- (id)description;	// 0x34b77c8d
// declared property getter: - (id)destination;	// 0x34b78541
- (id)dictionaryRepresentation;	// 0x34b77cfd
- (unsigned)hash;	// 0x34b78409
- (BOOL)isEqual:(id)equal;	// 0x34b78311
- (BOOL)readFrom:(id)from;	// 0x34b78109
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x34b78511
// declared property setter: - (void)setDestination:(id)destination;	// 0x34b78551
// declared property setter: - (void)setSource:(id)source;	// 0x34b78531
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x34b78579
// declared property getter: - (id)source;	// 0x34b78521
// declared property getter: - (double)timestamp;	// 0x34b78561
- (void)writeTo:(id)to;	// 0x34b78115
@end

