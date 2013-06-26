/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOResources, GEODownloadMetadata;

@interface GEOResourceManifestDownload : PBCodable {
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOResources *_resources;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasResources;	// G=0x30f30051; 
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x30f30669; S=0x30f30679; @synthesize=_metadata
@property(retain, nonatomic) GEOResources *resources;	// G=0x30f30649; S=0x30f30659; @synthesize=_resources
- (void)copyTo:(id)to;	// 0x30f304f9
- (void)dealloc;	// 0x30f2fff9
- (id)description;	// 0x30f30069
- (id)dictionaryRepresentation;	// 0x30f300d9
// declared property getter: - (BOOL)hasResources;	// 0x30f30051
- (unsigned)hash;	// 0x30f30609
- (BOOL)isEqual:(id)equal;	// 0x30f30569
// declared property getter: - (id)metadata;	// 0x30f30669
- (BOOL)readFrom:(id)from;	// 0x30f303c5
// declared property getter: - (id)resources;	// 0x30f30649
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30f30679
// declared property setter: - (void)setResources:(id)resources;	// 0x30f30659
- (void)writeTo:(id)to;	// 0x30f303d1
@end
