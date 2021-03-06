/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ContentHeaderDownloaderProtocol.h"

@class NSMutableArray, NSLock, NSCondition, CDNDownloadData;

@interface ContentHeaderDownloaderManager : XXUnknownSuperclass <ContentHeaderDownloaderProtocol> {
	NSCondition *downloadsDone_;	// 4 = 0x4
	NSLock *downloadCompletedLock_;	// 8 = 0x8
	NSMutableArray *contentHeaderDownloadables_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	NSMutableArray *downloadedContentHeaderTimedTextData_;	// 20 = 0x14
	int numActualDownloadables_;	// 24 = 0x18
	CDNDownloadData *selectedCdn_;	// 28 = 0x1c
	BOOL aborting_;	// 32 = 0x20
	int audioEncodingType_;	// 36 = 0x24
}
@property(assign) BOOL aborting;	// G=0x578661; S=0x578679; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x578691; S=0x5786a5; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x5785a5; S=0x5785b9; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x578581; S=0x578595; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x5785c9; S=0x5785dd; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSMutableArray *downloadedContentHeaderTimedTextData;	// G=0x5785ed; S=0x578601; @synthesize=downloadedContentHeaderTimedTextData_
@property(retain) NSCondition *downloadsDone;	// G=0x57855d; S=0x578571; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x578611; S=0x578625; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x57863d; S=0x578651; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x576ee1
- (id)init;	// 0x576fcd
- (void)abort;	// 0x5784b1
// declared property getter: - (BOOL)aborting;	// 0x578661
// declared property getter: - (int)audioEncodingType;	// 0x578691
- (int)checkAudioEncodingType:(id)type;	// 0x577381
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x577e0d
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x5783c9
// declared property getter: - (id)contentHeaderDownloadables;	// 0x5785a5
- (int)coundDownloadables:(id)downloadables;	// 0x5774b1
- (void)dealloc;	// 0x5770ed
// declared property getter: - (id)downloadCompletedLock;	// 0x578581
- (int)downloadContentHeaders:(int)headers;	// 0x577575
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x5785c9
// declared property getter: - (id)downloadedContentHeaderTimedTextData;	// 0x5785ed
// declared property getter: - (id)downloadsDone;	// 0x57855d
- (void)ignore:(id)ignore forLanguage:(id)language inDownloadData:(id)downloadData;	// 0x577205
- (BOOL)isAAC:(int)aac;	// 0x5771d9
- (BOOL)isAC3:(int)a3;	// 0x5771ad
// declared property getter: - (int)numActualDownloadables;	// 0x578611
- (void)reset;	// 0x5784c5
// declared property getter: - (id)selectedCdn;	// 0x57863d
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x578679
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x5786a5
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x5785b9
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x578595
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x5785dd
// declared property setter: - (void)setDownloadedContentHeaderTimedTextData:(id)data;	// 0x578601
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x578571
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x578625
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x578651
@end

