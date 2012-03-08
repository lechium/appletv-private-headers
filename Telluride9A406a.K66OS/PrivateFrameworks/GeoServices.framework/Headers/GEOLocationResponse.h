/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOLocationResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_locations;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *locations;	// G=0x34bf3c0d; S=0x34bf3c1d; @synthesize=_locations
@property(assign, nonatomic) int status;	// G=0x34bf3bed; S=0x34bf3bfd; @synthesize=_status
- (void)addLocation:(id)location;	// 0x34bf364d
- (void)dealloc;	// 0x34bf3609
- (id)description;	// 0x34bf36f1
- (id)dictionaryRepresentation;	// 0x34bf3761
- (id)locationAtIndex:(unsigned)index;	// 0x34bf36d1
// declared property getter: - (id)locations;	// 0x34bf3c0d
- (unsigned)locationsCount;	// 0x34bf36b1
- (BOOL)readFrom:(id)from;	// 0x34bf3915
// declared property setter: - (void)setLocations:(id)locations;	// 0x34bf3c1d
// declared property setter: - (void)setStatus:(int)status;	// 0x34bf3bfd
// declared property getter: - (int)status;	// 0x34bf3bed
- (void)writeTo:(id)to;	// 0x34bf3ab5
@end

