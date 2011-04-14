/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSArray, NSMutableArray, NSSet, CoreDAVLeafItem;

@interface CoreDAVMultiStatusItem : CoreDAVItem {
	NSMutableArray *_orderedResponses;	// 24 = 0x18
	CoreDAVLeafItem *_responseDescription;	// 28 = 0x1c
}
@property(retain) NSArray *orderedResponses;	// G=0x317b9b91; S=0x317b9bc1; @synthesize=_orderedResponses
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x317b9ba9; S=0x317b9bed; @synthesize=_responseDescription
@property(readonly, retain) NSSet *responses;	// G=0x317b9815; 
- (id)init;	// 0x317b99c1
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x317b9b2d
- (void)addResponse:(id)response;	// 0x317b9841
- (id)copyParseRules;	// 0x317b9861
- (void)dealloc;	// 0x317b9ad1
- (id)description;	// 0x317b99ed
// declared property getter: - (id)orderedResponses;	// 0x317b9b91
// declared property getter: - (id)responseDescription;	// 0x317b9ba9
// declared property getter: - (id)responses;	// 0x317b9815
// declared property setter: - (void)setOrderedResponses:(id)responses;	// 0x317b9bc1
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x317b9bed
@end

