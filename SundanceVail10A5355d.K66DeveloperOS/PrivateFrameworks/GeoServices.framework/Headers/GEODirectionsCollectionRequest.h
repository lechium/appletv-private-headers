/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest {
	NSMutableArray *_requestElements;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *requestElements;	// G=0x34551e69; S=0x34551e79; @synthesize=_requestElements
- (void)addRequestElements:(id)elements;	// 0x34551781
- (void)clearRequestElements;	// 0x34551761
- (void)copyTo:(id)to;	// 0x34551d59
- (void)dealloc;	// 0x3455171d
- (id)description;	// 0x3455182d
- (id)dictionaryRepresentation;	// 0x3455189d
- (unsigned)hash;	// 0x34551e49
- (BOOL)isEqual:(id)equal;	// 0x34551dd9
- (BOOL)readFrom:(id)from;	// 0x34551be5
// declared property getter: - (id)requestElements;	// 0x34551e69
- (id)requestElementsAtIndex:(unsigned)index;	// 0x3455180d
- (unsigned)requestElementsCount;	// 0x345517ed
- (unsigned)requestTypeCode;	// 0x34551d35
- (Class)responseClass;	// 0x34551d3d
// declared property setter: - (void)setRequestElements:(id)elements;	// 0x34551e79
- (void)writeTo:(id)to;	// 0x34551bf1
@end

