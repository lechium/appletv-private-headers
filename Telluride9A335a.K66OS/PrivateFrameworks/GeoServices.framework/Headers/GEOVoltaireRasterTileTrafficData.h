/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {
	XXStruct_K5nmsA *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
	double _expirationTime;	// 12 = 0xc
}
@property(assign, nonatomic) double expirationTime;	// G=0x31d02571; S=0x31d02589; @synthesize=_expirationTime
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x31d0253d; S=0x31d0254d; @synthesize=_trafficSegments
@property(assign, nonatomic) XXStruct_K5nmsA *vertices;	// G=0x31d0251d; S=0x31d0252d; @synthesize=_vertices
+ (id)createWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x31d02171
+ (double)expirationTimeInterval;	// 0x31d021bd
- (id)initWithData:(id)data tileKey:(const GEOTileKey *)key;	// 0x31d021d1
- (void)dealloc;	// 0x31d024c5
// declared property getter: - (double)expirationTime;	// 0x31d02571
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x31d02589
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x31d0254d
// declared property setter: - (void)setVertices:(XXStruct_K5nmsA *)vertices;	// 0x31d0252d
// declared property getter: - (id)trafficSegments;	// 0x31d0253d
// declared property getter: - (XXStruct_K5nmsA *)vertices;	// 0x31d0251d
@end
