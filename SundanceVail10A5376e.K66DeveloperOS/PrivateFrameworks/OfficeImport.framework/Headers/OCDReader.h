/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CPImportTracing, NSData, NSError, NSString;
@protocol OCCancelDelegate;

@interface OCDReader : NSObject {
	id<OCCancelDelegate> mCancelDelegate;	// 4 = 0x4
	id mDelegate;	// 8 = 0x8
	BOOL mIsThumbnail;	// 12 = 0xc
	CPImportTracing *mTracing;	// 16 = 0x10
	NSString *mFileName;	// 20 = 0x14
	NSData *mData;	// 24 = 0x18
	NSError *mStartError;	// 28 = 0x1c
}
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x36f00d95; S=0x36efa6b5; @synthesize=mCancelDelegate
@property(retain, nonatomic) NSData *data;	// G=0x3705967d; S=0x3705966d; @synthesize=mData
@property(assign, nonatomic) id delegate;	// G=0x36f00db5; S=0x36efaadd; @synthesize=mDelegate
@property(retain, nonatomic) NSString *fileName;	// G=0x36efae3d; S=0x36efaacd; @synthesize=mFileName
@property(assign, nonatomic) BOOL isThumbnail;	// G=0x36f00da5; S=0x36efaabd; @synthesize=mIsThumbnail
@property(retain, nonatomic) NSError *startError;	// G=0x3715d6b5; S=0x3715d6c5; @synthesize=mStartError
@property(retain, nonatomic) CPImportTracing *tracing;	// G=0x36eff6c1; S=0x36efa6c5; @synthesize=mTracing
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x36efa655
// declared property getter: - (id)cancelDelegate;	// 0x36f00d95
// declared property getter: - (id)data;	// 0x3705967d
- (void)dealloc;	// 0x36f8752d
// declared property getter: - (id)delegate;	// 0x36f00db5
// declared property getter: - (id)fileName;	// 0x36efae3d
- (bool)isBinaryReader;	// 0x3715d6d5
// declared property getter: - (BOOL)isThumbnail;	// 0x36f00da5
- (id)read;	// 0x3715d6dd
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x36efa6b5
// declared property setter: - (void)setData:(id)data;	// 0x3705966d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36efaadd
// declared property setter: - (void)setFileName:(id)name;	// 0x36efaacd
// declared property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x36efaabd
// declared property setter: - (void)setStartError:(id)error;	// 0x3715d6c5
- (void)setStartErrorMessageFromException:(id)exception;	// 0x3715d671
// declared property setter: - (void)setTracing:(id)tracing;	// 0x36efa6c5
- (BOOL)start;	// 0x3715d6d9
// declared property getter: - (id)startError;	// 0x3715d6b5
// declared property getter: - (id)tracing;	// 0x36eff6c1
- (BOOL)verifyFileFormat;	// 0x3715d6e1
@end

