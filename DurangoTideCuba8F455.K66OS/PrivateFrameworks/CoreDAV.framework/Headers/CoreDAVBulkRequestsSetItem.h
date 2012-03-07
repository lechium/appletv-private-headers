/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {
	CoreDAVBulkRequestsItem *_crudItem;	// 24 = 0x18
	CoreDAVBulkRequestsItem *_simpleItem;	// 28 = 0x1c
}
@property(retain) CoreDAVBulkRequestsItem *crudItem;	// G=0x331a1ec9; S=0x331a1ef9; @synthesize=_crudItem
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x331a1b55; 
@property(retain) CoreDAVBulkRequestsItem *simpleItem;	// G=0x331a1ee1; S=0x331a1f25; @synthesize=_simpleItem
- (id)init;	// 0x331a1d79
- (id)copyParseRules;	// 0x331a1c21
// declared property getter: - (id)crudItem;	// 0x331a1ec9
- (void)dealloc;	// 0x331a1e6d
- (id)description;	// 0x331a1da5
// declared property getter: - (id)dictRepresentation;	// 0x331a1b55
// declared property setter: - (void)setCrudItem:(id)item;	// 0x331a1ef9
// declared property setter: - (void)setSimpleItem:(id)item;	// 0x331a1f25
// declared property getter: - (id)simpleItem;	// 0x331a1ee1
@end
