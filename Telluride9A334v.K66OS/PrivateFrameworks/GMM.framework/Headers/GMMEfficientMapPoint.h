/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMEfficientMapPoint : PBCodable {
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int latitude;	// G=0x35b8335d; S=0x35b8336d; @synthesize=_latitude
@property(assign, nonatomic) int longitude;	// G=0x35b8337d; S=0x35b8338d; @synthesize=_longitude
- (void)dealloc;	// 0x35b830d9
- (id)description;	// 0x35b83105
- (id)dictionaryRepresentation;	// 0x35b83175
// declared property getter: - (int)latitude;	// 0x35b8335d
// declared property getter: - (int)longitude;	// 0x35b8337d
- (BOOL)readFrom:(id)from;	// 0x35b83221
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x35b8336d
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x35b8338d
- (void)writeTo:(id)to;	// 0x35b83315
@end

