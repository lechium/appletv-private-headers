/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, NSMutableArray, PDPresentation, OIXMLDocument, OIXMLElement, NSString;

@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
	int mWidth;	// 8 = 0x8
	PDPresentation *mPresentation;	// 12 = 0xc
	NSMutableArray *mSlideNames;	// 16 = 0x10
	NSMutableArray *mSlideGuids;	// 20 = 0x14
	NSString *mResourceUrlPrefix;	// 24 = 0x18
	NSString *mResourceUrlProtocol;	// 28 = 0x1c
	CMArchiveManager *mArchiver;	// 32 = 0x20
	OIXMLDocument *mXhtmlDoc;	// 36 = 0x24
	OIXMLElement *mBodyElement;	// 40 = 0x28
	unsigned mNextCommit;	// 44 = 0x2c
	unsigned mCurrentSlide;	// 48 = 0x30
	BOOL mHasPushedFirstSlides;	// 52 = 0x34
	float mSlideOriginY;	// 56 = 0x38
}
- (id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;	// 0x31bf6541
- (void)_pushEmptySlideWithMessage:(id)message;	// 0x31d6aeed
- (id)archiver;	// 0x31bf7711
- (id)blipAtIndex:(unsigned)index;	// 0x31bfcbc5
- (void)dealloc;	// 0x31c0e6c5
- (id)documentTitle;	// 0x31bf702d
- (void)finishMappingWithState:(id)state;	// 0x31c09ed5
- (void)mapDefaultCssStylesAt:(id)at;	// 0x31bf7325
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x31bf98e1
- (CGSize)pageSizeForDevice;	// 0x31bf6ca9
- (void)setHtmlDocumentSizeInArchiver;	// 0x31bf6c11
- (CGSize)slideSize;	// 0x31bf6865
- (void)startMappingWithState:(id)state;	// 0x31bf6895
@end
