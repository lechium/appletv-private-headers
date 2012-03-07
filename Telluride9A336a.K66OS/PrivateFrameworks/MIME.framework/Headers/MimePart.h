/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"

@class NSData, NSMutableDictionary, NSString, MFWeakReferenceHolder, MFPartialNetworkData;

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
@property(retain) id contentDescription;	// G=0x3508b039; S=0x3508db95; converted property
@property(retain) id contentID;	// G=0x3508b069; S=0x3508dbbd; converted property
@property(retain) id contentLocation;	// G=0x3508b099; S=0x3508dbe5; converted property
@property(retain) NSString *contentTransferEncoding;	// G=0x3508aa25; S=0x35090055; converted property
@property(retain) id disposition;	// G=0x3508af0d; S=0x3509001d; converted property
@property(retain) id languages;	// G=0x3508b0c9; S=0x3508dc0d; converted property
@property(retain) id mimeBody;	// G=0x3508b319; S=0x3508b3d9; converted property
@property(assign) NSRange range;	// G=0x3508aa91; S=0x3508aaad; converted property
@property(retain) id subparts;	// G=0x3508b1b5; S=0x3508dc35; converted property
@property(retain) NSString *subtype;	// G=0x3508adf5; S=0x350900d5; converted property
@property(retain) NSString *type;	// G=0x3508aa05; S=0x350900f1; converted property
+ (Class)attachmentClass;	// 0x3508d44d
+ (void)initialize;	// 0x3508e2b9
+ (BOOL)isRecognizedClassForContent:(id)content;	// 0x3508d469
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype;	// 0x3508d429
+ (BOOL)parseContentTypeHeader:(id)header type:(id *)type subtype:(id *)subtype info:(id *)info;	// 0x3508e169
- (id)init;	// 0x3509010d
- (void)_contents:(id *)contents toOffset:(unsigned)offset resultOffset:(unsigned *)offset3 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x35091325
- (void)_ensureBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete decoded:(id *)decoded;	// 0x3508eba1
- (id)_fullMimeTypeEvenInsideAppleDouble;	// 0x3508d555
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned)offset;	// 0x3508f491
- (id)_partThatIsAttachment;	// 0x3508bf39
- (void)_setDecryptedMessageBody:(id)body isEncrypted:(BOOL)encrypted isSigned:(BOOL)aSigned;	// 0x3508def1
- (void)_setRFC822DecodedMessageBody:(id)body;	// 0x3508ded1
- (BOOL)_shouldContinueDecodingProcess;	// 0x3508aac5
- (void)addSubpart:(id)subpart;	// 0x3508dd95
- (id)alternativeAtIndex:(int)index;	// 0x3508c791
- (unsigned)approximateRawSize;	// 0x3508be7d
- (id)attachmentFilename;	// 0x3508fbd9
- (id)attachments;	// 0x3508d275
- (id)bodyData;	// 0x3508d985
- (id)bodyDataForcingDownload:(BOOL)download;	// 0x3508eb65
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x3508d951
- (id)bodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x3508ce29
- (id)bodyParameterForKey:(id)key;	// 0x3508ae85
- (id)bodyParameterKeys;	// 0x3508aec9
- (id)chosenAlternativePart;	// 0x3508d2d1
- (void)clearCachedDescryptedMessageBody;	// 0x3508f76d
- (void)configureFileWrapper:(id)wrapper;	// 0x3508f5a1
// converted property getter: - (id)contentDescription;	// 0x3508b039
// converted property getter: - (id)contentID;	// 0x3508b069
// converted property getter: - (id)contentLocation;	// 0x3508b099
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x3508ceed
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x3508cf15
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x3508e50d
// converted property getter: - (id)contentTransferEncoding;	// 0x3508aa25
- (id)contentsForTextSystem;	// 0x3508d93d
- (id)contentsForTextSystemForcingDownload:(BOOL)textSystemForcingDownload;	// 0x3508d919
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x3508d8f5
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x3508d8d1
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html;	// 0x3508d8a5
- (id)contentsForTextSystemToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x3508d821
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x3508cde1
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary;	// 0x3508ce05
- (id)copyBodyDataToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 downloadIfNecessary:(BOOL)necessary isComplete:(BOOL *)complete;	// 0x3508cd9d
- (void)dealloc;	// 0x3508e049
- (id)decodeApplicationOctet_stream;	// 0x3509d6a9
- (id)decodeApplicationZip;	// 0x3509d6a5
- (void)decodeIfNecessary;	// 0x3508d999
- (id)decodeMultipart;	// 0x3509d6fd
- (id)decodeMultipartAlternative;	// 0x3509d6d5
- (id)decodeMultipartRelated;	// 0x3509d6ad
- (id)decodeText;	// 0x35091ca1
- (id)decodedDataForData:(id)data;	// 0x3508fe29
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)encrypted isSigned:(BOOL *)aSigned;	// 0x3508ca79
- (id)description;	// 0x3508bb81
// converted property getter: - (id)disposition;	// 0x3508af0d
- (id)dispositionParameterForKey:(id)key;	// 0x3508af3d
- (id)dispositionParameterKeys;	// 0x3508aff9
- (void)download;	// 0x3508cc19
- (id)fileWrapper;	// 0x3508cd89
- (id)fileWrapperForDecodedObject:(id)decodedObject withFileData:(id *)fileData;	// 0x3508cb29
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x3508cc45
- (id)firstChildPart;	// 0x3508aa35
- (void)getNumberOfAttachments:(unsigned *)attachments isSigned:(BOOL *)aSigned isEncrypted:(BOOL *)encrypted;	// 0x3508d1dd
- (BOOL)hasContents;	// 0x3508d859
- (BOOL)isAttachment;	// 0x3508c021
- (BOOL)isHTML;	// 0x3508c339
- (BOOL)isReadableText;	// 0x3508be81
- (BOOL)isRich;	// 0x3508c1f5
// converted property getter: - (id)languages;	// 0x3508b0c9
// converted property getter: - (id)mimeBody;	// 0x3508b319
- (id)nextSiblingPart;	// 0x3508b131
- (int)numberOfAlternatives;	// 0x3508c639
- (unsigned)numberOfAttachments;	// 0x3508cf41
- (id)parentPart;	// 0x3508b0f9
- (BOOL)parseIMAPPropertyList:(id)list;	// 0x35091f45
- (BOOL)parseMimeBody;	// 0x35093611
- (id)partNumber;	// 0x3509111d
- (id)preservedHeaderValueForKey:(id)key;	// 0x3508aee9
// converted property getter: - (NSRange)range;	// 0x3508aa91
- (id)rfc822DecodedMessageBody;	// 0x3508c4c5
- (void)setBodyParameter:(id)parameter forKey:(id)key;	// 0x35090071
// converted property setter: - (void)setContentDescription:(id)description;	// 0x3508db95
// converted property setter: - (void)setContentID:(id)anId;	// 0x3508dbbd
// converted property setter: - (void)setContentLocation:(id)location;	// 0x3508dbe5
// converted property setter: - (void)setContentTransferEncoding:(id)encoding;	// 0x35090055
// converted property setter: - (void)setDisposition:(id)disposition;	// 0x3509001d
- (void)setDispositionParameter:(id)parameter forKey:(id)key;	// 0x3508ff91
// converted property setter: - (void)setLanguages:(id)languages;	// 0x3508dc0d
// converted property setter: - (void)setMimeBody:(id)body;	// 0x3508b3d9
// converted property setter: - (void)setRange:(NSRange)range;	// 0x3508aaad
// converted property setter: - (void)setSubparts:(id)subparts;	// 0x3508dc35
// converted property setter: - (void)setSubtype:(id)subtype;	// 0x350900d5
// converted property setter: - (void)setType:(id)type;	// 0x350900f1
- (BOOL)shouldConsiderInlineOverridingExchangeServer;	// 0x3508fa61
- (id)signedData;	// 0x3508c961
- (id)startPart;	// 0x3508c4ed
- (void)storeData:(id)data inMessage:(id)message isComplete:(BOOL)complete;	// 0x3508aac1
- (id)subpartAtIndex:(int)index;	// 0x3508b271
// converted property getter: - (id)subparts;	// 0x3508b1b5
// converted property getter: - (id)subtype;	// 0x3508adf5
- (unsigned long)textEncoding;	// 0x3508fb99
- (id)textHtmlPart;	// 0x3508c9b9
- (unsigned)totalTextSize;	// 0x3508f7fd
// converted property getter: - (id)type;	// 0x3508aa05
- (BOOL)usesKnownSignatureProtocol;	// 0x3508f961
@end
