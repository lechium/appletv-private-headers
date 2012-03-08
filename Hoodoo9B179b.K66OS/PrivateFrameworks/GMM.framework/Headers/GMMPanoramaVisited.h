/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMMapPoint, NSString;

@interface GMMPanoramaVisited : PBCodable {
	NSString *_panoId;	// 4 = 0x4
	GMMMapPoint *_latLon;	// 8 = 0x8
}
@property(retain, nonatomic) GMMMapPoint *latLon;	// G=0x31ce7361; S=0x31ce7371; @synthesize=_latLon
@property(retain, nonatomic) NSString *panoId;	// G=0x31ce732d; S=0x31ce733d; @synthesize=_panoId
- (void)dealloc;	// 0x31ce6f8d
- (id)description;	// 0x31ce6fe5
- (id)dictionaryRepresentation;	// 0x31ce7055
// declared property getter: - (id)latLon;	// 0x31ce7361
// declared property getter: - (id)panoId;	// 0x31ce732d
- (BOOL)readFrom:(id)from;	// 0x31ce70d5
// declared property setter: - (void)setLatLon:(id)lon;	// 0x31ce7371
// declared property setter: - (void)setPanoId:(id)anId;	// 0x31ce733d
- (void)writeTo:(id)to;	// 0x31ce7275
@end

