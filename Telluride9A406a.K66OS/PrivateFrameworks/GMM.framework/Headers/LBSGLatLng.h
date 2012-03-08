/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGLatLng : PBCodable {
	int _latE7;	// 4 = 0x4
	int _lngE7;	// 8 = 0x8
}
@property(assign) float lat;	// G=0x33a818c9; S=0x33a818a1; converted property
@property(assign, nonatomic) int latE7;	// G=0x33aa29c9; S=0x33aa29d9; @synthesize=_latE7
@property(assign, nonatomic) int lngE7;	// G=0x33aa29e9; S=0x33aa29f9; @synthesize=_lngE7
@property(assign) float lon;	// G=0x33a81921; S=0x33a818f9; converted property
- (void)dealloc;	// 0x33aa2745
- (id)description;	// 0x33aa2771
- (id)dictionaryRepresentation;	// 0x33aa27e1
// converted property getter: - (float)lat;	// 0x33a818c9
// declared property getter: - (int)latE7;	// 0x33aa29c9
// declared property getter: - (int)lngE7;	// 0x33aa29e9
// converted property getter: - (float)lon;	// 0x33a81921
- (BOOL)readFrom:(id)from;	// 0x33aa288d
// converted property setter: - (void)setLat:(float)lat;	// 0x33a818a1
// declared property setter: - (void)setLatE7:(int)a7;	// 0x33aa29d9
// declared property setter: - (void)setLngE7:(int)a7;	// 0x33aa29f9
// converted property setter: - (void)setLon:(float)lon;	// 0x33a818f9
- (void)writeTo:(id)to;	// 0x33aa2981
@end

