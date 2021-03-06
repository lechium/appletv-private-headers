/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray;

@interface GEOUsageCollectionRequest : PBRequest {
	NSMutableArray *_directionsFeedbackCollections;	// 4 = 0x4
	NSMutableArray *_placeSearchFeedbackCollections;	// 8 = 0x8
	NSMutableArray *_transitAppLaunchFeedbackCollections;	// 12 = 0xc
	NSMutableArray *_usageCollections;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x324af661; S=0x324af671; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x324af681; S=0x324af691; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x324af6a1; S=0x324af6b1; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x324af641; S=0x324af651; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x324ae3a1
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x324ae46d
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x324ae539
- (void)addUsageCollection:(id)collection;	// 0x324ae2d5
- (void)clearDirectionsFeedbackCollections;	// 0x324ae381
- (void)clearPlaceSearchFeedbackCollections;	// 0x324ae44d
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x324ae519
- (void)clearUsageCollections;	// 0x324ae2b5
- (void)copyTo:(id)to;	// 0x324af301
- (void)dealloc;	// 0x324ae235
- (id)description;	// 0x324ae5e5
- (id)dictionaryRepresentation;	// 0x324ae655
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x324ae42d
// declared property getter: - (id)directionsFeedbackCollections;	// 0x324af661
- (unsigned)directionsFeedbackCollectionsCount;	// 0x324ae40d
- (unsigned)hash;	// 0x324af5c5
- (BOOL)isEqual:(id)equal;	// 0x324af4c5
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x324ae4f9
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x324af681
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x324ae4d9
- (BOOL)readFrom:(id)from;	// 0x324aee6d
- (unsigned)requestTypeCode;	// 0x324af2dd
- (Class)responseClass;	// 0x324af2e5
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x324af671
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x324af691
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x324af6b1
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x324af651
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x324ae5c5
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x324af6a1
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x324ae5a5
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x324ae361
// declared property getter: - (id)usageCollections;	// 0x324af641
- (unsigned)usageCollectionsCount;	// 0x324ae341
- (void)writeTo:(id)to;	// 0x324aee79
@end

