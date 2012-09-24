/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, NSMutableArray, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray *_orderedResponses;	// 28 = 0x1c
	CoreDAVLeafItem *_responseDescription;	// 32 = 0x20
}
@property(retain) NSMutableArray *orderedResponses;	// G=0x303d0971; S=0x303d0985; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x303d0995; S=0x303d09a9; @synthesize=_responseDescription
@property(readonly, assign) NSSet *responses;	// G=0x303d0939; 
+ (id)copyParseRules;	// 0x303d0689
- (id)init;	// 0x303d050d
- (void)addResponse:(id)response;	// 0x303d08a1
- (void)dealloc;	// 0x303d0539
- (id)description;	// 0x303d059d
// declared property getter: - (id)orderedResponses;	// 0x303d0971
// declared property getter: - (id)responseDescription;	// 0x303d0995
// declared property getter: - (id)responses;	// 0x303d0939
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x303d0985
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x303d09a9
@end
