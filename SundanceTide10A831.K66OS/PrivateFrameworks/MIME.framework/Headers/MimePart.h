/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class MFPartialNetworkData, NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder;

@interface MimePart : NSObject {
	NSString *_type;	// 4 = 0x4
	NSString *_subtype;	// 8 = 0x8
	NSMutableDictionary *_bodyParameters;	// 12 = 0xc
	NSString *_contentTransferEncoding;	// 16 = 0x10
	NSMutableDictionary *_otherIvars;	// 20 = 0x14
	NSRange _range;	// 24 = 0x18
	MFWeakReferenceHolder *_parent;	// 32 = 0x20
	MFWeakReferenceHolder *_body;	// 36 = 0x24
	MimePart *_nextPart;	// 40 = 0x28
	MFPartialNetworkData *_partialData;	// 44 = 0x2c
	NSData *_fullData;	// 48 = 0x30
	MFWeakReferenceHolder *_decodedData;	// 52 = 0x34
}
@property(retain) id contentDescription;	// G=0x328a84c9; S=0x328a84f5; converted property
@property(retain) id contentID;	// G=0x328a8519; S=0x328a8545; converted property
@property(retain) id contentLocation;	// G=0x328a8569; S=0x328a8595; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x328a82b5; S=0x328a82c5; converted property
@property(retain) id disposition;	// G=0x328a82e1; S=0x328a830d; converted property
@property(assign) BOOL isGenerated;	// G=0x328acd81; S=0x328acdb1; converted property
@property(retain) id languages;	// G=0x328a85b9; S=0x328a85e5; converted property
@property(retain) id mimeBody;	// G=0x328a8d31; S=0x328a8ded; converted property
@property(assign) NSRange range;	// G=0x328a8b89; S=0x328a8ba1; converted property
@property(retain) id subparts;	// G=0x328a8721; S=0x328a8831; converted property
@property(retain) NSString *subtype;	// G=0x328a8125; S=0x328a81b9; converted property
@property(retain) NSString *type;	// G=0x328a80e5; S=0x328a8109; converted property
+ (Class)attachmentClass;	// 0x328ac011
+ (void)initialize;	// 0x328a7925
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x328ac02d
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x328ab1d5
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x328aafd1
- (id)init;	// 0x328a809d
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x328af859
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x328ab87d
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x328af31d
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x328ab771
- (id)_partThatIsAttachment;	// 0x328a9ca5
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x328aa7c5
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x328aa7a5
- (BOOL)_shouldContinueDecodingProcess;	// 0x328ac00d
- (void)addSubpart:(id)subpart;	// 0x328a8a49
- (id)alternativeAtIndex:(int)index;	// 0x328aace9
- (unsigned)approximateRawSize;	// 0x328a9b4d
- (id)attachmentFilename;	// 0x328a9625
- (id)attachments;	// 0x328acbc9
- (id)bodyData;	// 0x328b0025
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x328abfc9
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x328afff1
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x328abf95
- (id)bodyParameterForKey:(id)key;	// 0x328a81d5
- (id)bodyParameterKeys;	// 0x328a8275
- (id)chosenAlternativePart;	// 0x328acc29
- (void)clearCachedDescryptedMessageBody;	// 0x328ab2a9
- (void)configureFileWrapper:(id)wrapper;	// 0x328ab419
// converted property getter: - (id)contentDescription;	// 0x328a84c9
// converted property getter: - (id)contentID;	// 0x328a8519
// converted property getter: - (id)contentLocation;	// 0x328a8569
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x328ac84d
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x328ac881
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x328ac0b9
// converted property getter: - (id)contentTransferEncoding;	// 0x328a82b5
- (id)contentsForTextSystem;	// 0x328affdd
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x328affb9
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x328aff95
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x328aff71
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x328aff45
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x328afec1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x328abf4d
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x328abf71
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x328abf09
- (void)dealloc;	// 0x328a7f41
- (id)decodeApplicationOctet_stream;	// 0x328bad49
- (id)decodeApplicationZip;	// 0x328bad45
- (void)decodeIfNecessary;	// 0x328b0039
- (id)decodeMultipart;	// 0x328bad9d
- (id)decodeMultipartAlternative;	// 0x328bad75
- (id)decodeMultipartRelated;	// 0x328bad4d
- (id)decodeText;	// 0x328af839
- (id)decodedDataForData:(id)data;	// 0x328a8bb5
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x328ab1f9
- (id)description;	// 0x328a8e45
// converted property getter: - (id)disposition;	// 0x328a82e1
- (id)dispositionParameterForKey:(id)key;	// 0x328a8345
- (id)dispositionParameterKeys;	// 0x328a8489
- (void)download;	// 0x328ab5e5
- (id)fileWrapper;	// 0x328ab759
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x328ab331
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x328ab611
- (id)firstChildPart;	// 0x328a8641
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x328ac8d5
- (BOOL)hasContents;	// 0x328afef9
- (BOOL)isAttachment;	// 0x328a9f25
// converted property getter: - (BOOL)isGenerated;	// 0x328acd81
- (BOOL)isHTML;	// 0x328aa23d
- (BOOL)isReadableText;	// 0x328a9bf1
- (BOOL)isRich;	// 0x328aa0f1
// converted property getter: - (id)languages;	// 0x328a85b9
// converted property getter: - (id)mimeBody;	// 0x328a8d31
- (id)nextSiblingPart;	// 0x328a869d
- (int)numberOfAlternatives;	// 0x328aab89
- (unsigned)numberOfAttachments;	// 0x328ac8ad
- (id)parentPart;	// 0x328a8609
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x328ae931
- (BOOL)parseMimeBody;	// 0x328ad225
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)necessary;	// 0x328ad23d
- (id)partNumber;	// 0x328af11d
- (id)preservedHeaderValueForKey:(id)key;	// 0x328a8295
// converted property getter: - (NSRange)range;	// 0x328a8b89
- (id)rfc822DecodedMessageBody;	// 0x328aa77d
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x328a8211
// converted property setter: - (void)setContentDescription:(id)description;	// 0x328a84f5
// converted property setter: - (void)setContentID:(id)anId;	// 0x328a8545
// converted property setter: - (void)setContentLocation:(id)location;	// 0x328a8595
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x328a82c5
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x328a830d
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x328a8401
// converted property setter: - (void)setIsGenerated:(BOOL)generated;	// 0x328acdb1
// converted property setter: - (void)setLanguages:(id)languages;	// 0x328a85e5
// converted property setter: - (void)setMimeBody:(id)body;	// 0x328a8ded
// converted property setter: - (void)setRange:(NSRange)range;	// 0x328a8ba1
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x328a8831
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x328a81b9
// converted property setter: - (void)setType:(id)type;	// 0x328a8109
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x328a9ded
- (id)signedData;	// 0x328aaeb5
- (id)startPart;	// 0x328aaa29
- (id)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x328ab76d
- (id)subpartAtIndex:(int)index;	// 0x328a87e5
// converted property getter: - (id)subparts;	// 0x328a8721
// converted property getter: - (id)subtype;	// 0x328a8125
- (unsigned long)textEncoding;	// 0x328a992d
- (id)textHtmlPart;	// 0x328aaf0d
- (unsigned)totalTextSize;	// 0x328aa8a9
// converted property getter: - (id)type;	// 0x328a80e5
- (BOOL)usesKnownSignatureProtocol;	// 0x328aa3c1
@end
