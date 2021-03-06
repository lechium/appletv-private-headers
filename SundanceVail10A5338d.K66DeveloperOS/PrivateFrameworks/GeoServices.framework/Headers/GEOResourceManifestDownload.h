/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOResources, GEODownloadMetadata;

@interface GEOResourceManifestDownload : PBCodable {
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOResources *_resources;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasResources;	// G=0x324a1621; 
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x324a1c1d; S=0x324a1c2d; @synthesize=_metadata
@property(retain, nonatomic) GEOResources *resources;	// G=0x324a1bfd; S=0x324a1c0d; @synthesize=_resources
- (void)copyTo:(id)to;	// 0x324a1aad
- (void)dealloc;	// 0x324a15c9
- (id)description;	// 0x324a1639
- (id)dictionaryRepresentation;	// 0x324a16a9
// declared property getter: - (BOOL)hasResources;	// 0x324a1621
- (unsigned)hash;	// 0x324a1bbd
- (BOOL)isEqual:(id)equal;	// 0x324a1b1d
// declared property getter: - (id)metadata;	// 0x324a1c1d
- (BOOL)readFrom:(id)from;	// 0x324a1979
// declared property getter: - (id)resources;	// 0x324a1bfd
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x324a1c2d
// declared property setter: - (void)setResources:(id)resources;	// 0x324a1c0d
- (void)writeTo:(id)to;	// 0x324a1985
@end

