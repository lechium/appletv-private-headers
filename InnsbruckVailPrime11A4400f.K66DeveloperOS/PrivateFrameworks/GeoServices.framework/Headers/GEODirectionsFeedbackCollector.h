/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import </libobjc.A.h>

@class NSMutableSet, GEODirectionsFeedback, GEODirectionsFeedbackCollection;

@interface GEODirectionsFeedbackCollector : NSObject {
	GEODirectionsFeedback *_currentDirectionsFeedback;	// 4 = 0x4
	GEODirectionsFeedbackCollection *_currentFeedbackCollection;	// 8 = 0x8
	NSMutableSet *_routeIDs;	// 12 = 0xc
}
@property(retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;	// G=0x30f3e8e5; S=0x30f3e8f5; @synthesize=_currentDirectionsFeedback
@property(retain, nonatomic) GEODirectionsFeedbackCollection *currentFeedbackCollection;	// G=0x30f3e8c5; S=0x30f3e8d5; @synthesize=_currentFeedbackCollection
@property(retain, nonatomic) NSMutableSet *routeIDs;	// G=0x30f3e905; S=0x30f3e915; @synthesize=_routeIDs
- (void)addRouteID:(id)anId stepID:(unsigned)anId2;	// 0x30f3e74d
// declared property getter: - (id)currentDirectionsFeedback;	// 0x30f3e8e5
// declared property getter: - (id)currentFeedbackCollection;	// 0x30f3e8c5
- (void)dealloc;	// 0x30f3e54d
- (void)endFeedbackSessionWithLocationWhereRouteWasCancelled:(id)locationWhereRouteWasCancelled;	// 0x30f3e825
- (void)reset;	// 0x30f3e58d
// declared property getter: - (id)routeIDs;	// 0x30f3e905
// declared property setter: - (void)setCurrentDirectionsFeedback:(id)feedback;	// 0x30f3e8f5
// declared property setter: - (void)setCurrentFeedbackCollection:(id)collection;	// 0x30f3e8d5
// declared property setter: - (void)setRouteIDs:(id)ids;	// 0x30f3e915
- (void)startFeedbackSessionForResponseID:(id)responseID;	// 0x30f3e5f9
@end

