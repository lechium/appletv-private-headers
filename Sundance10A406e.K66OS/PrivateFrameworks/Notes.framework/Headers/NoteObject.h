/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSManagedObject.h> // Unknown library

@class NSDate, NSString, NSURL, NSNumber, NSData, NoteStoreObject, NoteBodyObject;

@interface NoteObject : NSManagedObject {
}
@property(retain, nonatomic) NSString *author;	// @dynamic
@property(retain, nonatomic) NoteBodyObject *body;	// @dynamic
@property(retain, nonatomic) NSNumber *containsCJK;	// @dynamic
@property(retain, nonatomic) NSString *content;	// G=0x373b64c9; S=0x373b6419; 
@property(readonly, assign, nonatomic) NSString *contentAsPlainText;	// G=0x373b651d; 
@property(retain, nonatomic) NSNumber *contentType;	// @dynamic
@property(retain, nonatomic) NSDate *creationDate;	// @dynamic
@property(retain, nonatomic) NSNumber *deletedFlag;	// @dynamic
@property(retain, nonatomic) NSString *externalContentRef;	// G=0x373b6ad5; S=0x373b6b29; 
@property(retain, nonatomic) NSNumber *externalFlags;	// @dynamic
@property(retain, nonatomic) NSData *externalRepresentation;	// G=0x373b6a2d; S=0x373b6a81; 
@property(retain, nonatomic) NSNumber *externalServerIntId;	// @dynamic
@property(assign, nonatomic) unsigned long long flags;	// G=0x373b68a5; S=0x373b683d; 
@property(retain, nonatomic) NSString *guid;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasValidServerIntId;	// G=0x373b699d; 
@property(retain, nonatomic) NSNumber *integerId;	// @dynamic
@property(retain, nonatomic) NSNumber *isBookkeepingEntry;	// @dynamic
@property(readonly, assign, nonatomic) BOOL isMarkedForDeletion;	// G=0x373b679d; 
@property(assign, nonatomic) BOOL isPlainText;	// G=0x373b66e9; S=0x373b6631; 
@property(retain, nonatomic) NSDate *modificationDate;	// @dynamic
@property(readonly, assign, nonatomic) NSURL *noteId;	// G=0x373b67e9; 
@property(retain, nonatomic) NSString *serverId;	// @dynamic
@property(assign, nonatomic) long long serverIntId;	// G=0x373b6955; S=0x373b68ed; 
@property(retain, nonatomic) NoteStoreObject *store;	// @dynamic
@property(retain, nonatomic) NSString *summary;	// @dynamic
@property(retain, nonatomic) NSString *title;	// @dynamic
- (BOOL)containsAttachments;	// 0x373b6b7d
// declared property getter: - (id)content;	// 0x373b64c9
// declared property getter: - (id)contentAsPlainText;	// 0x373b651d
- (id)contentAsPlainTextPreservingNewlines;	// 0x373b6571
// declared property getter: - (id)externalContentRef;	// 0x373b6ad5
// declared property getter: - (id)externalRepresentation;	// 0x373b6a2d
// declared property getter: - (unsigned long long)flags;	// 0x373b68a5
// declared property getter: - (BOOL)hasValidServerIntId;	// 0x373b699d
// declared property getter: - (BOOL)isMarkedForDeletion;	// 0x373b679d
// declared property getter: - (BOOL)isPlainText;	// 0x373b66e9
- (void)markForDeletion;	// 0x373b6741
// declared property getter: - (id)noteId;	// 0x373b67e9
// declared property getter: - (long long)serverIntId;	// 0x373b6955
// declared property setter: - (void)setContent:(id)content;	// 0x373b6419
// declared property setter: - (void)setExternalContentRef:(id)ref;	// 0x373b6b29
// declared property setter: - (void)setExternalRepresentation:(id)representation;	// 0x373b6a81
// declared property setter: - (void)setFlags:(unsigned long long)flags;	// 0x373b683d
// declared property setter: - (void)setIsPlainText:(BOOL)text;	// 0x373b6631
// declared property setter: - (void)setServerIntId:(long long)anId;	// 0x373b68ed
@end

