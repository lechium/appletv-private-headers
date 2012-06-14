/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSBundle, NSData, UINibDecoder, NSString;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject {
@private
	NSString *bundleResourceName;	// 4 = 0x4
	NSString *bundleDirectoryName;	// 8 = 0x8
	NSBundle *bundle;	// 12 = 0xc
	NSString *identifierForStringsFile;	// 16 = 0x10
	NSData *archiveData;	// 20 = 0x14
	UINibDecoder *nibDecoder;	// 24 = 0x18
	BOOL instantiatingForSimulator;	// 28 = 0x1c
	BOOL captureImplicitLoadingContextOnDecode;	// 29 = 0x1d
}
@property(copy, nonatomic) NSData *archiveData;	// G=0x302dc6c1; S=0x302dc6d5; @synthesize
@property(retain, nonatomic) NSBundle *bundle;	// G=0x302dc67d; S=0x302dc68d; @synthesize
@property(copy, nonatomic) NSString *bundleDirectoryName;	// G=0x302dc659; S=0x302dc66d; @synthesize
@property(copy, nonatomic) NSString *bundleResourceName;	// G=0x302dc635; S=0x302dc649; @synthesize
@property(assign) BOOL captureImplicitLoadingContextOnDecode;	// G=0x302dc725; S=0x302dc73d; @synthesize
@property(copy, nonatomic) NSString *identifierForStringsFile;	// G=0x302dc69d; S=0x302dc6b1; @synthesize
@property(assign, nonatomic) BOOL instantiatingForSimulator;	// G=0x302dc705; S=0x302dc715; @synthesize
@property(retain, nonatomic) UINibDecoder *nibDecoder;	// G=0x302dc6e5; S=0x302dc6f5; @synthesize
// declared property getter: - (id)archiveData;	// 0x302dc6c1
// declared property getter: - (id)bundle;	// 0x302dc67d
// declared property getter: - (id)bundleDirectoryName;	// 0x302dc659
// declared property getter: - (id)bundleResourceName;	// 0x302dc635
// declared property getter: - (BOOL)captureImplicitLoadingContextOnDecode;	// 0x302dc725
- (void)dealloc;	// 0x302dc595
// declared property getter: - (id)identifierForStringsFile;	// 0x302dc69d
// declared property getter: - (BOOL)instantiatingForSimulator;	// 0x302dc705
// declared property getter: - (id)nibDecoder;	// 0x302dc6e5
// declared property setter: - (void)setArchiveData:(id)data;	// 0x302dc6d5
// declared property setter: - (void)setBundle:(id)bundle;	// 0x302dc68d
// declared property setter: - (void)setBundleDirectoryName:(id)name;	// 0x302dc66d
// declared property setter: - (void)setBundleResourceName:(id)name;	// 0x302dc649
// declared property setter: - (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)decode;	// 0x302dc73d
// declared property setter: - (void)setIdentifierForStringsFile:(id)stringsFile;	// 0x302dc6b1
// declared property setter: - (void)setInstantiatingForSimulator:(BOOL)simulator;	// 0x302dc715
// declared property setter: - (void)setNibDecoder:(id)decoder;	// 0x302dc6f5
@end

