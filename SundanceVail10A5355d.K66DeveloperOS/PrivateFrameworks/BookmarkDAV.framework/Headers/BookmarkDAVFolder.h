/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreDAVLeafDataPayload.h"
#import "CoreDAVModifiedContainer.h"
#import "CoreDAVAddedContainer.h"

@class NSURL, NSDictionary, NSData, NSString, NSArray, CoreDAVErrorItem, NSMutableArray;

@interface BookmarkDAVFolder : XXUnknownSuperclass <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {
	NSDictionary *_appleAttributes;	// 64 = 0x40
	NSMutableArray *_childrenOrder;	// 68 = 0x44
	NSString *_bulkParsedCTag;	// 72 = 0x48
	NSString *_bulkParsedPTag;	// 76 = 0x4c
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 80 = 0x50
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x37973ab9; @synthesize=_appleAttributes
@property(retain) NSString *bulkParsedCTag;	// G=0x37973acd; S=0x37973ae1; @synthesize=_bulkParsedCTag
@property(retain) NSString *bulkParsedPTag;	// G=0x37973af1; S=0x37973b05; @synthesize=_bulkParsedPTag
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x37973b15; S=0x37973b29; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;	// G=0x37973aa5; @synthesize=_childrenOrder
@property(readonly, assign) NSData *dataPayload;	// G=0x37973a9d; 
@property(assign) BOOL isBookmarkBarFolder;	// G=0x37973315; S=0x379734ed; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x379732e9; S=0x37973425; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x37973341; S=0x379735b5; @dynamic
@property(retain) NSURL *serverID;	// G=0x37973a89; S=0x37973a99; 
@property(readonly, assign) NSString *syncKey;	// G=0x37973aa1; 
+ (id)copyPropertyMappingsForParser;	// 0x3797300d
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x37972d31
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x37972dad
- (id)_appleAttributesString;	// 0x3797367d
- (void)_faultResourceType;	// 0x3797336d
// declared property getter: - (id)appleAttributes;	// 0x37973ab9
- (void)applyParsedProperties:(id)properties;	// 0x37973161
// declared property getter: - (id)bulkParsedCTag;	// 0x37973acd
// declared property getter: - (id)bulkParsedPTag;	// 0x37973af1
// declared property getter: - (id)bulkUploadErrorItem;	// 0x37973b15
// declared property getter: - (id)childrenOrder;	// 0x37973aa5
- (id)copyMkcolTask;	// 0x379738d5
- (id)copyPropPatchTask;	// 0x379736e9
// declared property getter: - (id)dataPayload;	// 0x37973a9d
- (void)dealloc;	// 0x37972f6d
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x37973315
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x379732e9
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x37973341
// declared property getter: - (id)serverID;	// 0x37973a89
// declared property setter: - (void)setBulkParsedCTag:(id)tag;	// 0x37973ae1
// declared property setter: - (void)setBulkParsedPTag:(id)tag;	// 0x37973b05
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x37973b29
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x379734ed
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x37973425
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x379735b5
// declared property setter: - (void)setServerID:(id)anId;	// 0x37973a99
// declared property getter: - (id)syncKey;	// 0x37973aa1
@end
