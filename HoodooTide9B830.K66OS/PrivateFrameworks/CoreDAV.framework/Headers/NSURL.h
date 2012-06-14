/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)scheme;	// 0x35dcc985
+ (id)CDVURLWithScheme:(id)scheme host:(id)host port:(id)port path:(id)path;	// 0x35dcc421
+ (id)CDVURLWithScheme:(id)scheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path;	// 0x35dcc3a9
- (id)initWithCDVDirtyString:(id)cdvdirtyString;	// 0x35dcd255
- (id)initWithCDVScheme:(id)cdvscheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path parameterString:(id)string query:(id)query fragment:(id)fragment;	// 0x35dcc609
- (id)CDVFileSystemSafePath;	// 0x35dcd125
- (id)CDVInitWithDirtyString:(id)dirtyString;	// 0x35dcd50d
- (BOOL)CDVIsEqualToURL:(id)url;	// 0x35dcd0ed
- (id)CDVPassword;	// 0x35dcce71
- (id)CDVRawLastPathComponent;	// 0x35dccec9
- (id)CDVRawPath;	// 0x35dcce9d
- (id)CDVServerURL;	// 0x35dccfe5
- (id)CDVURLByDeletingLastPathComponent;	// 0x35dccf5d
- (id)CDVURLWithPassword:(id)password;	// 0x35dccc59
- (id)CDVURLWithPath:(id)path;	// 0x35dccd61
- (id)CDVURLWithScheme:(id)scheme userandpass:(id)userandpass host:(id)host port:(id)port path:(id)path parameters:(id)parameters encodePercents:(BOOL)percents;	// 0x35dcc489
- (id)CDVURLWithUser:(id)user;	// 0x35dcca35
- (id)CDVfixedURLByAppendingPathComponent:(id)component;	// 0x35dcd1f9
@end
