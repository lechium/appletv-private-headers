/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL;
@protocol IMFileCopierDelegate;

@interface IMFileCopier : NSObject {
	id<IMFileCopierDelegate> _delegate;	// 4 = 0x4
	NSURL *_inputURL;	// 8 = 0x8
	NSURL *_outputURL;	// 12 = 0xc
	id _identifier;	// 16 = 0x10
	BOOL _shouldCancel;	// 20 = 0x14
	BOOL _didErrorOccur;	// 21 = 0x15
	BOOL _inProgress;	// 22 = 0x16
	unsigned _operation;	// 24 = 0x18
	void *_BOMCopier;	// 28 = 0x1c
}
@property(assign) void *_BOMCopier;	// G=0x341acac5; S=0x341acad9; @synthesize
@property(assign) id<IMFileCopierDelegate> delegate;	// G=0x341ac9e1; S=0x341ac9f5; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL didErrorOccur;	// G=0x341aca59; @synthesize=_didErrorOccur
@property(readonly, assign) id identifier;	// G=0x341aca35; @synthesize=_identifier
@property(assign) BOOL inProgress;	// G=0x341aca69; S=0x341aca81; @synthesize=_inProgress
@property(readonly, assign) NSURL *inputURL;	// G=0x341aca0d; @synthesize=_inputURL
@property(assign) unsigned operation;	// G=0x341aca99; S=0x341acaad; @synthesize=_operation
@property(readonly, assign) NSURL *outputURL;	// G=0x341aca21; @synthesize=_outputURL
@property(readonly, assign, nonatomic) BOOL wasCancelled;	// G=0x341aca49; @synthesize=_shouldCancel
- (id)initWithInputURL:(id)inputURL outputURL:(id)url identifier:(id)identifier operation:(unsigned)operation delegate:(id)delegate;	// 0x341abc3d
// declared property getter: - (void *)_BOMCopier;	// 0x341acac5
- (void)_fillOutputURLFromInputURL;	// 0x341abe8d
- (void)_main_copierFinishedWithResult:(id)result;	// 0x341ac1f5
- (id)_temporaryCopierPath;	// 0x341abe65
- (void)_worker_doCopy;	// 0x341ac299
- (void)cancel;	// 0x341ac0a9
- (void)cleanup;	// 0x341ac145
- (void)dealloc;	// 0x341abd15
// declared property getter: - (id)delegate;	// 0x341ac9e1
// declared property getter: - (BOOL)didErrorOccur;	// 0x341aca59
// declared property getter: - (id)identifier;	// 0x341aca35
// declared property getter: - (BOOL)inProgress;	// 0x341aca69
// declared property getter: - (id)inputURL;	// 0x341aca0d
// declared property getter: - (unsigned)operation;	// 0x341aca99
// declared property getter: - (id)outputURL;	// 0x341aca21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x341ac9f5
// declared property setter: - (void)setInProgress:(BOOL)progress;	// 0x341aca81
// declared property setter: - (void)setOperation:(unsigned)operation;	// 0x341acaad
// declared property setter: - (void)set_BOMCopier:(void *)copier;	// 0x341acad9
- (void)start;	// 0x341ac035
// declared property getter: - (BOOL)wasCancelled;	// 0x341aca49
@end
