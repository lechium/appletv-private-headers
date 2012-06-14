/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"
#import "CoreDAVContainerMultiGetSubmittable.h"

@class NSError, NSSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
	NSSet *_urls;	// 132 = 0x84
	NSString *_appSpecificNamespace;	// 136 = 0x88
	NSString *_appSpecificMultiGetNameSpace;	// 140 = 0x8c
	NSString *_appSpecificMultiGetCommand;	// 144 = 0x90
	NSString *_appSpecificDataProp;	// 148 = 0x94
	Class _appSpecificDataItemClass;	// 152 = 0x98
	BOOL _shouldIgnoreResponseErrors;	// 156 = 0x9c
	NSSet *_additionalPropElements;	// 160 = 0xa0
	NSSet *_parsedContents;	// 164 = 0xa4
	NSSet *_missingURLs;	// 168 = 0xa8
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property(retain) NSSet *additionalPropElements;	// G=0x35f5075d; S=0x35f50771; @synthesize=_additionalPropElements
@property(copy, nonatomic) id completionBlock;
@property(readonly, assign, nonatomic) NSError *error;
@property(readonly, assign, nonatomic) NSSet *missingURLs;	// G=0x35f507b1; @synthesize=_missingURLs
@property(readonly, assign, nonatomic) NSSet *parsedContents;	// G=0x35f507a1; @synthesize=_parsedContents
@property(assign, nonatomic) BOOL shouldIgnoreResponseErrors;	// G=0x35f50781; S=0x35f50791; @synthesize=_shouldIgnoreResponseErrors
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;
@property(assign) double timeoutInterval;
- (id)initWithURLs:(id)urls atContainerURL:(id)containerURL appSpecificDataItemClass:(Class)aClass;	// 0x35f4facd
// declared property getter: - (id)additionalPropElements;	// 0x35f5075d
- (id)copyAdditionalPropElements;	// 0x35f4fc21
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x35f50045
- (void)dealloc;	// 0x35f4fc29
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x35f50231
- (id)httpMethod;	// 0x35f4fcb5
// declared property getter: - (id)missingURLs;	// 0x35f507b1
// declared property getter: - (id)parsedContents;	// 0x35f507a1
- (id)requestBody;	// 0x35f4fcc1
// declared property setter: - (void)setAdditionalPropElements:(id)elements;	// 0x35f50771
- (void)setAdditionalProperties:(id)properties onDataItem:(id)item;	// 0x35f4fc25
// declared property setter: - (void)setShouldIgnoreResponseErrors:(BOOL)ignoreResponseErrors;	// 0x35f50791
// declared property getter: - (BOOL)shouldIgnoreResponseErrors;	// 0x35f50781
@end

