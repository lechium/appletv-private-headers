/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
	NSString *_uti;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *UTI;	// G=0x3033330d; 
@property(readonly, assign, nonatomic) unsigned long audioFileTypeID;	// G=0x30333355; 
@property(readonly, assign, nonatomic) NSString *defaultFileExtension;	// G=0x30333135; 
@property(readonly, assign, nonatomic) NSString *figFormatReaderFileFormat;	// G=0x3033331d; 
@property(readonly, assign, nonatomic) NSSet *supportedMediaTypes;	// G=0x3033317d; 
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x30332e8d
+ (id)allFileTypeIdentifiers;	// 0x30332e35
+ (void)initialize;	// 0x30332c91
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier;	// 0x30332e79
- (id)initWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x30332edd
// declared property getter: - (id)UTI;	// 0x3033330d
// declared property getter: - (unsigned long)audioFileTypeID;	// 0x30333355
- (id)copyWithZone:(NSZone *)zone;	// 0x303330bd
- (void)dealloc;	// 0x30333071
// declared property getter: - (id)defaultFileExtension;	// 0x30333135
- (id)description;	// 0x303330cd
// declared property getter: - (id)figFormatReaderFileFormat;	// 0x3033331d
// declared property getter: - (id)supportedMediaTypes;	// 0x3033317d
- (BOOL)supportsOutputSettings:(id)settings reason:(id *)reason;	// 0x303333c5
@end
