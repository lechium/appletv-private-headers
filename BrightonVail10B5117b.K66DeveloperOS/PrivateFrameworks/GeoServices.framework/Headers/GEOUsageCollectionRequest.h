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
@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections;	// G=0x341aff21; S=0x341aff31; @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections;	// G=0x341aff41; S=0x341aff51; @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections;	// G=0x341aff61; S=0x341aff71; @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray *usageCollections;	// G=0x341aff01; S=0x341aff11; @synthesize=_usageCollections
- (void)addDirectionsFeedbackCollection:(id)collection;	// 0x341aeccd
- (void)addPlaceSearchFeedbackCollection:(id)collection;	// 0x34153235
- (void)addTransitAppLaunchFeedbackCollection:(id)collection;	// 0x341aedf9
- (void)addUsageCollection:(id)collection;	// 0x34150571
- (void)clearDirectionsFeedbackCollections;	// 0x341aecad
- (void)clearPlaceSearchFeedbackCollections;	// 0x341aed79
- (void)clearTransitAppLaunchFeedbackCollections;	// 0x341aedd9
- (void)clearUsageCollections;	// 0x341aec4d
- (void)copyTo:(id)to;	// 0x341afbc1
- (void)dealloc;	// 0x341aebcd
- (id)description;	// 0x341aeea5
- (id)dictionaryRepresentation;	// 0x341aef15
- (id)directionsFeedbackCollectionAtIndex:(unsigned)index;	// 0x341aed59
// declared property getter: - (id)directionsFeedbackCollections;	// 0x341aff21
- (unsigned)directionsFeedbackCollectionsCount;	// 0x341aed39
- (unsigned)hash;	// 0x341afe85
- (BOOL)isEqual:(id)equal;	// 0x341afd85
- (id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;	// 0x341aedb9
// declared property getter: - (id)placeSearchFeedbackCollections;	// 0x341aff41
- (unsigned)placeSearchFeedbackCollectionsCount;	// 0x341aed99
- (BOOL)readFrom:(id)from;	// 0x341af72d
- (unsigned)requestTypeCode;	// 0x341afb9d
- (Class)responseClass;	// 0x341afba5
// declared property setter: - (void)setDirectionsFeedbackCollections:(id)collections;	// 0x341aff31
// declared property setter: - (void)setPlaceSearchFeedbackCollections:(id)collections;	// 0x341aff51
// declared property setter: - (void)setTransitAppLaunchFeedbackCollections:(id)collections;	// 0x341aff71
// declared property setter: - (void)setUsageCollections:(id)collections;	// 0x341aff11
- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;	// 0x341aee85
// declared property getter: - (id)transitAppLaunchFeedbackCollections;	// 0x341aff61
- (unsigned)transitAppLaunchFeedbackCollectionsCount;	// 0x341aee65
- (id)usageCollectionAtIndex:(unsigned)index;	// 0x341aec8d
// declared property getter: - (id)usageCollections;	// 0x341aff01
- (unsigned)usageCollectionsCount;	// 0x341aec6d
- (void)writeTo:(id)to;	// 0x341af739
@end
