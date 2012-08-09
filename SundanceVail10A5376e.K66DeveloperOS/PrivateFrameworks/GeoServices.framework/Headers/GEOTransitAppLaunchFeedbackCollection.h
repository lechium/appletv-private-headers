/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, GEOLatLng;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
	double _timestamp;	// 4 = 0x4
	NSString *_bundleIdentifier;	// 12 = 0xc
	GEOLatLng *_destination;	// 16 = 0x10
	GEOLatLng *_source;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *bundleIdentifier;	// G=0x37a81349; S=0x37a81359; @synthesize=_bundleIdentifier
@property(retain, nonatomic) GEOLatLng *destination;	// G=0x37a81389; S=0x37a81399; @synthesize=_destination
@property(retain, nonatomic) GEOLatLng *source;	// G=0x37a81369; S=0x37a81379; @synthesize=_source
@property(assign, nonatomic) double timestamp;	// G=0x37a813a9; S=0x37a813c1; @synthesize=_timestamp
// declared property getter: - (id)bundleIdentifier;	// 0x37a81349
- (void)copyTo:(id)to;	// 0x37a810b1
- (void)dealloc;	// 0x37a80a69
- (id)description;	// 0x37a80ad5
// declared property getter: - (id)destination;	// 0x37a81389
- (id)dictionaryRepresentation;	// 0x37a80b45
- (unsigned)hash;	// 0x37a81251
- (BOOL)isEqual:(id)equal;	// 0x37a81159
- (BOOL)readFrom:(id)from;	// 0x37a80f51
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x37a81359
// declared property setter: - (void)setDestination:(id)destination;	// 0x37a81399
// declared property setter: - (void)setSource:(id)source;	// 0x37a81379
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x37a813c1
// declared property getter: - (id)source;	// 0x37a81369
// declared property getter: - (double)timestamp;	// 0x37a813a9
- (void)writeTo:(id)to;	// 0x37a80f5d
@end
