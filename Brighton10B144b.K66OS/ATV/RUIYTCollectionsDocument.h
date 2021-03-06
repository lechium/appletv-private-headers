/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSArray, RUIYTCollectionsDocumentSpec, YTSubscriptionsRequest;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocument : RUIYTDocument {
	unsigned _startIndex;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	RUIYTCollectionsDocumentSpec *_spec;	// 12 = 0xc
	NSArray *_collections;	// 16 = 0x10
	int _totalCollectiont;	// 20 = 0x14
	YTSubscriptionsRequest *__request;	// 24 = 0x18
}
@property(retain, nonatomic) YTSubscriptionsRequest *_request;	// G=0x277931; S=0x277941; @synthesize=__request
@property(retain, nonatomic) NSArray *collections;	// G=0x2778d9; S=0x2778e9; @synthesize=_collections
@property(assign, nonatomic) unsigned count;	// G=0x277881; S=0x277891; @synthesize=_count
@property(retain, nonatomic) RUIYTCollectionsDocumentSpec *spec;	// G=0x2778a1; S=0x2778b1; @synthesize=_spec
@property(assign, nonatomic) unsigned startIndex;	// G=0x277861; S=0x277871; @synthesize=_startIndex
@property(assign, nonatomic) int totalCollections;	// G=0x277911; S=0x277921; @synthesize=_totalCollectiont
- (id)initWithSpec:(id)spec;	// 0x277271
- (void).cxx_destruct;	// 0x277969
- (void)_cancelLoad;	// 0x27754d
- (void)_loadRequest;	// 0x2773ad
// declared property getter: - (id)_request;	// 0x277931
// declared property getter: - (id)collections;	// 0x2778d9
// declared property getter: - (unsigned)count;	// 0x277881
- (void)dealloc;	// 0x277349
// declared property setter: - (void)setCollections:(id)collections;	// 0x2778e9
// declared property setter: - (void)setCount:(unsigned)count;	// 0x277891
// declared property setter: - (void)setSpec:(id)spec;	// 0x2778b1
// declared property setter: - (void)setStartIndex:(unsigned)index;	// 0x277871
// declared property setter: - (void)setTotalCollections:(int)collections;	// 0x277921
// declared property setter: - (void)set_request:(id)request;	// 0x277941
// declared property getter: - (id)spec;	// 0x2778a1
// declared property getter: - (unsigned)startIndex;	// 0x277861
- (void)subscriptionsRequest:(id)request didFailWithError:(id)error;	// 0x27784d
- (void)subscriptionsRequest:(id)request receivedSubscriptions:(id)subscriptions startIndex:(unsigned)index resultsRemaining:(unsigned)remaining;	// 0x277585
// declared property getter: - (int)totalCollections;	// 0x277911
@end

