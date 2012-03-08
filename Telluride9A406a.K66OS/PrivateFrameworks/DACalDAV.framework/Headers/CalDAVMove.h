/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CalDAVMove : NSObject {
@private
	int _sourceCalendarID;	// 4 = 0x4
	int _itemID;	// 8 = 0x8
	NSString *_oldExternalID;	// 12 = 0xc
}
@property(assign) int itemID;	// G=0x32ee5c49; S=0x32ee5c59; @synthesize=_itemID
@property(retain) NSString *oldExternalID;	// G=0x32ee5c69; S=0x32ee5c7d; @synthesize=_oldExternalID
@property(assign) int sourceCalendarID;	// G=0x32ee5c29; S=0x32ee5c39; @synthesize=_sourceCalendarID
- (id)initWithSourceCalendarID:(int)sourceCalendarID itemID:(int)anId oldExternalID:(id)anId3;	// 0x32ee5b5d
- (void)dealloc;	// 0x32ee5bdd
// declared property getter: - (int)itemID;	// 0x32ee5c49
// declared property getter: - (id)oldExternalID;	// 0x32ee5c69
// declared property setter: - (void)setItemID:(int)anId;	// 0x32ee5c59
// declared property setter: - (void)setOldExternalID:(id)anId;	// 0x32ee5c7d
// declared property setter: - (void)setSourceCalendarID:(int)anId;	// 0x32ee5c39
// declared property getter: - (int)sourceCalendarID;	// 0x32ee5c29
@end

