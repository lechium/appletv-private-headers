/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

@interface WDRun : NSObject {
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x36c7d7fd
- (id)initWithParagraph:(id)paragraph;	// 0x36ab1679
- (void)clearProperties;	// 0x36c7d819
- (void)dealloc;	// 0x36aba641
- (BOOL)isEmpty;	// 0x36c7d815
- (id)paragraph;	// 0x36ab5d91
- (int)runType;	// 0x36c7d7f9
@end

