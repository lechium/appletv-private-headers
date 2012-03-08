/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
@private
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x31d68c1d; S=0x31d68c39; 
@property(retain) id mimePart;	// G=0x31d69051; S=0x31d6906d; converted property
- (id)init;	// 0x31d68a81
- (id)initWithWrapper:(id)wrapper;	// 0x31d69089
- (unsigned)approximateSize;	// 0x31d68c55
- (id)cachedValueForKey:(id)key;	// 0x31d68ae5
- (void)dealloc;	// 0x31d69185
- (id)description;	// 0x31d69119
- (void)download;	// 0x31d68a75
// declared property getter: - (id)fileWrapper;	// 0x31d68c1d
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x31d68e95
- (BOOL)hasBeenDownloaded;	// 0x31d68df1
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x31d68e3d
- (BOOL)isPlaceholder;	// 0x31d68e15
// converted property getter: - (id)mimePart;	// 0x31d69051
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x31d68b5d
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x31d68c39
// converted property setter: - (void)setMimePart:(id)part;	// 0x31d6906d
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x31d68a79
- (id)textEncodingGuess;	// 0x31d68a7d
@end

