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
@property(retain, nonatomic) NSMutableArray *locations;	// G=0x32cecad5; S=0x32cecae5; @synthesize=_locations
@property(assign, nonatomic) int status;	// G=0x32cecab5; S=0x32cecac5; @synthesize=_status
- (void)addLocation:(id)location;	// 0x32cec515
- (void)dealloc;	// 0x32cec4d1
- (id)description;	// 0x32cec5b9
- (id)dictionaryRepresentation;	// 0x32cec629
- (id)locationAtIndex:(unsigned)index;	// 0x32cec599
// declared property getter: - (id)locations;	// 0x32cecad5
- (unsigned)locationsCount;	// 0x32cec579
- (BOOL)readFrom:(id)from;	// 0x32cec7dd
// declared property setter: - (void)setLocations:(id)locations;	// 0x32cecae5
// declared property setter: - (void)setStatus:(int)status;	// 0x32cecac5
// declared property getter: - (int)status;	// 0x32cecab5
- (void)writeTo:(id)to;	// 0x32cec97d
@end

