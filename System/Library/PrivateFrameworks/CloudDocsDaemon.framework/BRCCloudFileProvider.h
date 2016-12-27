/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFileProvider.h>
#import <libobjc.A.dylib/BRItemNotificationReceiving.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate> {

	NSMutableDictionary* _filePresenterByKey;
	NSMutableSet* _keysPendingImmediateReads;
	NSMutableDictionary* _readersURLAndIDToDocID;
	NSMutableDictionary* _downloadTrackersByDocID;
	NSMutableDictionary* _recursiveReadsByURLAndID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_fileReactorID;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(oneway void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)receiveProgressUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cancelAllCoordinationProviders;
-(void)cancelFileProvidersForPath:(id)arg1 ;
-(BOOL)hasPendingReaderForDocumentID:(id)arg1 ;
-(void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2 ;
-(BOOL)hasFilePresenterForURL:(id)arg1 ;
-(id)filePresenterIdentifierForURL:(id)arg1 ;
-(void)boostFilePresenterForURL:(id)arg1 ;
-(void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(BOOL)arg3 updateAccessTime:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 updateAccessTime:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(BOOL)arg4 updateAccessTime:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2 ;
-(void)_unregisterPresenterForKey:(id)arg1 ;
-(void)_triggerImmediateReadOfDocumentAtPath:(id)arg1 ;
-(unsigned long long)_spaceRequiredForReaders;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 name:(id)arg3 session:(id)arg4 ;
@end

