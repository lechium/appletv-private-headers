/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject {
	CGPDFDocumentRef _cgDocument;	// 4 = 0x4
	id *_pageArray;	// 8 = 0x8
	unsigned _numberOfPages;	// 12 = 0xc
	float _cachedWidth;	// 16 = 0x10
	NSString *_documentID;	// 20 = 0x14
	NSString *_documentName;	// 24 = 0x18
	UIPDFPageImageCache *_pageImageCache;	// 28 = 0x1c
	unsigned _imageCacheCount;	// 32 = 0x20
	unsigned _imageCacheLookAhead;	// 36 = 0x24
	int _lock;	// 40 = 0x28
	int _imageCacheLock;	// 44 = 0x2c
	UIPDFPageImageCache *_thumbnailCache;	// 48 = 0x30
	int _thumbnailLock;	// 52 = 0x34
}
@property(readonly, assign) CGPDFDocumentRef CGDocument;	// G=0x33a6217d; @synthesize=_cgDocument
@property(readonly, assign) NSString *documentID;	// G=0x33a62015; @dynamic
@property(readonly, assign) unsigned numberOfPages;	// G=0x33a61e21; @dynamic
@property(retain) UIPDFPageImageCache *pageImageCache;	// G=0x33a62399; S=0x33a62431; @dynamic
@property(retain) UIPDFPageImageCache *thumbnailCache;	// G=0x33a6249d; S=0x33a6251d; @dynamic
+ (id)documentNamed:(id)named;	// 0x33a618c1
- (id)initWithCGPDFDocument:(CGPDFDocumentRef)cgpdfdocument;	// 0x33a61ba5
- (id)initWithURL:(id)url;	// 0x33a61c39
// declared property getter: - (CGPDFDocumentRef)CGDocument;	// 0x33a6217d
- (void)_clearCachedState;	// 0x33a61965
- (BOOL)allowsCopying;	// 0x33a6215d
- (CGPDFDocumentRef)copyCGPDFDocument;	// 0x33a61af5
- (id)copyPageAtIndex:(unsigned)index;	// 0x33a61f2d
- (void)dealloc;	// 0x33a61d0d
// declared property getter: - (id)documentID;	// 0x33a62015
- (float)maxHeight;	// 0x33a62241
- (float)maxWidth;	// 0x33a62191
// declared property getter: - (unsigned)numberOfPages;	// 0x33a61e21
- (id)pageAtIndex:(unsigned)index;	// 0x33a61e55
// declared property getter: - (id)pageImageCache;	// 0x33a62399
- (void)purgePagesBefore:(unsigned)before;	// 0x33a61a3d
- (void)setCGPDFDocument:(CGPDFDocumentRef)document;	// 0x33a61b2d
- (void)setImageCacheCount:(unsigned)count lookAhead:(unsigned)ahead;	// 0x33a61dd1
// declared property setter: - (void)setPageImageCache:(id)cache;	// 0x33a62431
// declared property setter: - (void)setThumbnailCache:(id)cache;	// 0x33a6251d
- (float)sumHeight;	// 0x33a62329
- (float)sumWidth;	// 0x33a622b9
// declared property getter: - (id)thumbnailCache;	// 0x33a6249d
@end

