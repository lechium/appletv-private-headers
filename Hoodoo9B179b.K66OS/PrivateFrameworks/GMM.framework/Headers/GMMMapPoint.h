/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GMMMapPoint : PBCodable {
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int latitude;	// G=0x31ceddb9; S=0x31ceddc9; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x31ceddd9; S=0x31cedde9; @synthesize=_longitude
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x31d16935
- (void)dealloc;	// 0x31cedb35
- (id)description;	// 0x31cedb61
- (id)dictionaryRepresentation;	// 0x31cedbd1
// declared property getter: - (int)latitude;	// 0x31ceddb9
// declared property getter: - (int)longitude;	// 0x31ceddd9
- (BOOL)readFrom:(id)from;	// 0x31cedc7d
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x31ceddc9
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x31cedde9
- (void)writeTo:(id)to;	// 0x31cedd71
@end

