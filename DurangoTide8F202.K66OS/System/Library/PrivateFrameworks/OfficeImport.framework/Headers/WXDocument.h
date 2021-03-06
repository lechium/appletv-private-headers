/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXDocument : NSObject {
}
+ (id)documentFrom:(id)from reader:(id)reader cancel:(id)cancel asThumbnail:(BOOL)thumbnail;	// 0x31a2e351
+ (void)initialize;	// 0x31a29ea1
+ (void)mapDocument:(id)document to:(id)to state:(id)state;	// 0x31a3881d
+ (void)mapFontTable:(id)table to:(id)to;	// 0x31a31b09
+ (void)mapLists:(id)lists to:(id)to state:(id)state;	// 0x31a36de5
+ (void)mapStyles:(id)styles to:(id)to state:(id)state;	// 0x31a31fb1
+ (void)readDocumentSettings:(id)settings to:(id)to state:(id)state;	// 0x31a37c01
+ (id)readFromArchive:(id)archive cancel:(id)cancel asThumbnail:(BOOL)thumbnail;	// 0x31a2a009
+ (id)readFromData:(id)data cancel:(id)cancel asThumbnail:(BOOL)thumbnail;	// 0x31af9b6d
@end

