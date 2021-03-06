/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import "WebBookmarks-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject {
	BOOL _folder;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSString *_url;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_serverID;	// 20 = 0x14
	NSString *_syncKey;	// 24 = 0x18
	NSData *_syncData;	// 28 = 0x1c
	BOOL _editable;	// 32 = 0x20
	BOOL _deletable;	// 33 = 0x21
	BOOL _hidden;	// 34 = 0x22
	BOOL _fetchedIconData;	// 35 = 0x23
	NSData *_iconData;	// 36 = 0x24
	NSDictionary *_extraAttributes;	// 40 = 0x28
	unsigned _id;	// 44 = 0x2c
	unsigned _parentID;	// 48 = 0x30
	unsigned _specialID;	// 52 = 0x34
	unsigned _orderIndex;	// 56 = 0x38
	BOOL _inserted;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x33901939; @synthesize=_UUID
@property(retain, nonatomic) NSString *address;	// G=0x33901969; S=0x33901ac1; @synthesize=_url
@property(retain, nonatomic) NSDate *dateAdded;	// G=0x33910159; S=0x33910179; 
@property(retain, nonatomic) NSDate *dateLastFetched;	// G=0x339102d9; S=0x339102f9; 
@property(retain, nonatomic) NSDate *dateLastViewed;	// G=0x33910219; S=0x33910239; 
@property(readonly, assign, nonatomic, getter=isDeletable) BOOL deletable;	// G=0x33901909; @synthesize=_deletable
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x33901919; @synthesize=_editable
@property(retain, nonatomic) NSDictionary *extraAttributes;	// G=0x339018c9; S=0x33901a99; @synthesize=_extraAttributes
@property(assign, nonatomic) BOOL fetchedIconData;	// G=0x3390fec9; S=0x3390fedd; 
@property(readonly, assign, nonatomic, getter=isFolder) BOOL folder;	// G=0x339018e9; @synthesize=_folder
@property(readonly, assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x339018f9; @synthesize=_hidden
@property(retain, nonatomic) NSData *iconData;	// G=0x3390fef1; S=0x33910119; 
@property(readonly, assign, nonatomic) unsigned identifier;	// G=0x33901949; @synthesize=_id
@property(readonly, assign, nonatomic, getter=isInserted) BOOL inserted;	// G=0x339018d9; @synthesize=_inserted
@property(readonly, assign, nonatomic) unsigned parentID;	// G=0x33901959; @synthesize=_parentID
@property(retain, nonatomic) NSString *previewText;	// G=0x3391005d; S=0x3391007d; 
@property(retain, nonatomic) NSString *serverID;	// G=0x3390d6e5; S=0x3390d74d; 
@property(readonly, assign, nonatomic) unsigned specialID;	// G=0x33901929; @synthesize=_specialID
@property(retain, nonatomic) NSData *syncData;	// G=0x3390d70d; S=0x3390d7cd; 
@property(retain, nonatomic) NSString *syncKey;	// G=0x3390d6f9; S=0x3390d78d; 
@property(retain, nonatomic) NSString *title;	// G=0x33901979; S=0x33901a71; @synthesize=_title
- (id)init;	// 0x33901dc9
- (id)initFolderWithParentID:(unsigned)parentID;	// 0x33901e25
- (id)initReadingListBookmarkWithTitle:(id)title address:(id)address previewText:(id)text iconData:(id)data;	// 0x3390ff05
- (id)initStaticWithTitle:(id)title address:(id)address;	// 0x33901e71
- (id)initWithTitle:(id)title address:(id)address;	// 0x33901989
// declared property getter: - (id)UUID;	// 0x33901939
- (id)_initWithSqliteRow:(sqlite3_stmt *)sqliteRow;	// 0x3390d85d
- (void)_markSpecial:(unsigned)special;	// 0x3390d62d
- (void)_modifyReadingListAttributes:(id)attributes;	// 0x33910509
- (unsigned)_orderIndex;	// 0x3390d66d
- (id)_readingListPropertyNamed:(id)named;	// 0x339104cd
- (void)_setHidden:(BOOL)hidden;	// 0x3390d6d1
- (void)_setID:(unsigned)anId;	// 0x3390d6a9
- (void)_setInserted:(BOOL)inserted;	// 0x3390d6bd
- (void)_setOrderIndex:(unsigned)index;	// 0x3390d695
- (void)_setParentID:(unsigned)anId;	// 0x3390d681
- (void)_setUUID:(id)uuid;	// 0x3390d721
// declared property getter: - (id)address;	// 0x33901969
// declared property getter: - (id)dateAdded;	// 0x33910159
// declared property getter: - (id)dateLastFetched;	// 0x339102d9
// declared property getter: - (id)dateLastViewed;	// 0x33910219
- (void)dealloc;	// 0x33901cf1
- (id)description;	// 0x33901c21
// declared property getter: - (id)extraAttributes;	// 0x339018c9
// declared property getter: - (BOOL)fetchedIconData;	// 0x3390fec9
// declared property getter: - (id)iconData;	// 0x3390fef1
// declared property getter: - (unsigned)identifier;	// 0x33901949
// declared property getter: - (BOOL)isDeletable;	// 0x33901909
// declared property getter: - (BOOL)isEditable;	// 0x33901919
// declared property getter: - (BOOL)isFolder;	// 0x339018e9
// declared property getter: - (BOOL)isHidden;	// 0x339018f9
// declared property getter: - (BOOL)isInserted;	// 0x339018d9
- (BOOL)isReadingListFolder;	// 0x339018a1
- (BOOL)isReadingListItem;	// 0x33910019
- (id)localizedTitle;	// 0x33901b59
// declared property getter: - (unsigned)parentID;	// 0x33901959
// declared property getter: - (id)previewText;	// 0x3391005d
// declared property getter: - (id)serverID;	// 0x3390d6e5
// declared property setter: - (void)setAddress:(id)address;	// 0x33901ac1
// declared property setter: - (void)setDateAdded:(id)added;	// 0x33910179
// declared property setter: - (void)setDateLastFetched:(id)fetched;	// 0x339102f9
// declared property setter: - (void)setDateLastViewed:(id)viewed;	// 0x33910239
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x33901a99
// declared property setter: - (void)setFetchedIconData:(BOOL)data;	// 0x3390fedd
// declared property setter: - (void)setIconData:(id)data;	// 0x33910119
// declared property setter: - (void)setPreviewText:(id)text;	// 0x3391007d
// declared property setter: - (void)setServerID:(id)anId;	// 0x3390d74d
// declared property setter: - (void)setSyncData:(id)data;	// 0x3390d7cd
// declared property setter: - (void)setSyncKey:(id)key;	// 0x3390d78d
// declared property setter: - (void)setTitle:(id)title;	// 0x33901a71
- (void)setTitle:(id)title previewText:(id)text dateLastViewed:(id)viewed dateLastFetched:(id)fetched;	// 0x33910399
- (id)shortTypeDescription;	// 0x33901811
// declared property getter: - (unsigned)specialID;	// 0x33901929
// declared property getter: - (id)syncData;	// 0x3390d70d
// declared property getter: - (id)syncKey;	// 0x3390d6f9
// declared property getter: - (id)title;	// 0x33901979
@end

