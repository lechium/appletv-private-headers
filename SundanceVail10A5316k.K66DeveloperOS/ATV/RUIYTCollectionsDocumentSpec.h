/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTFeedDocumentSpec.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTCollectionsDocumentSpec : RUIYTFeedDocumentSpec {
	NSString *_title;	// 4 = 0x4
	double _refreshInterval;	// 8 = 0x8
	int _type;	// 16 = 0x10
	BOOL _requiresAccessToken;	// 20 = 0x14
}
@property(assign) double refreshInterval;	// G=0x23e439; S=0x23e425; converted property
@property(assign) BOOL requiresAccessToken;	// G=0x23e895; S=0x23e8ad; @synthesize=_requiresAccessToken
@property(retain) NSString *title;	// G=0x23e411; S=0x23e3e9; converted property
@property(assign) int type;	// G=0x23e869; S=0x23e87d; @synthesize=_type
+ (id)collectionsDocumentSpecForType:(int)type;	// 0x23e251
+ (id)playlistSearchDocumentSpecWithSearchTerm:(id)searchTerm;	// 0x23e321
- (void).cxx_destruct;	// 0x23e8c5
- (id)collectionsDocument;	// 0x23e69d
- (id)identifier;	// 0x23e451
- (id)moreNRemainingSubTitle;	// 0x23e5f5
- (id)moreNToMTitle;	// 0x23e4f9
- (id)moreNTotalSubTitle;	// 0x23e5a1
- (id)moreSingleRemainingSubTitle;	// 0x23e54d
- (id)moreSingleTitle;	// 0x23e4a5
- (id)noContentErrorMessage;	// 0x23e649
// converted property getter: - (double)refreshInterval;	// 0x23e439
// declared property getter: - (BOOL)requiresAccessToken;	// 0x23e895
// converted property setter: - (void)setRefreshInterval:(double)interval;	// 0x23e425
// declared property setter: - (void)setRequiresAccessToken:(BOOL)token;	// 0x23e8ad
// converted property setter: - (void)setTitle:(id)title;	// 0x23e3e9
// declared property setter: - (void)setType:(int)type;	// 0x23e87d
// converted property getter: - (id)title;	// 0x23e411
// declared property getter: - (int)type;	// 0x23e869
- (id)videosDocumentSpecForCollection:(id)collection;	// 0x23e6d9
@end

