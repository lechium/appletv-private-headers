/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedDocument, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRootElement : ATVFeedElement {
	ATVFeedDocument *_owner;	// 4 = 0x4
	BOOL _isVolatile;	// 8 = 0x8
	NSString *_onVolatileReload;	// 12 = 0xc
	NSURL *_originalURL;	// 16 = 0x10
	float _refreshInterval;	// 20 = 0x14
	NSString *_onRefresh;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL isVolatile;	// G=0x15f955; S=0x15f965; @synthesize=_isVolatile
@property(copy, nonatomic) NSString *onRefresh;	// G=0x15f9d9; S=0x15f9ed; @synthesize=_onRefresh
@property(copy, nonatomic) NSString *onVolatileReload;	// G=0x15f975; S=0x15f989; @synthesize=_onVolatileReload
@property(retain, nonatomic) NSURL *originalURL;	// G=0x15f999; S=0x15f9a9; @synthesize=_originalURL
@property(assign, nonatomic) ATVFeedDocument *owner;	// G=0x15f935; S=0x15f925; 
@property(assign, nonatomic) float refreshInterval;	// G=0x15f9b9; S=0x15f9c9; @synthesize=_refreshInterval
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15f791
- (void)dealloc;	// 0x15f8ad
// declared property getter: - (BOOL)isVolatile;	// 0x15f955
// declared property getter: - (id)onRefresh;	// 0x15f9d9
// declared property getter: - (id)onVolatileReload;	// 0x15f975
// declared property getter: - (id)originalURL;	// 0x15f999
// declared property getter: - (id)owner;	// 0x15f935
- (id)ownerDocument;	// 0x15f945
// declared property getter: - (float)refreshInterval;	// 0x15f9b9
// declared property setter: - (void)setIsVolatile:(BOOL)aVolatile;	// 0x15f965
// declared property setter: - (void)setOnRefresh:(id)refresh;	// 0x15f9ed
// declared property setter: - (void)setOnVolatileReload:(id)reload;	// 0x15f989
// declared property setter: - (void)setOriginalURL:(id)url;	// 0x15f9a9
// declared property setter: - (void)setOwner:(id)owner;	// 0x15f925
// declared property setter: - (void)setRefreshInterval:(float)interval;	// 0x15f9c9
@end

