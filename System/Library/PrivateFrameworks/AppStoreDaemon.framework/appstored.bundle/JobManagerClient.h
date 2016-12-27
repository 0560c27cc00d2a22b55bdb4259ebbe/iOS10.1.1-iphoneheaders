/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/XPCClient.h>

@class NSXPCConnection, NSString, NSMutableOrderedSet, NSMutableDictionary;

@interface JobManagerClient : XPCClient {

	NSXPCConnection* _connection;
	NSString* _persistenceIdentifier;
	NSMutableOrderedSet* _queuedChangedJobs;
	NSMutableOrderedSet* _queuedCompletedJobs;
	NSMutableDictionary* _queuedProgressUpdates;
	NSMutableDictionary* _queuedStateUpdates;
	BOOL _shouldFilterExternalJobs;
	BOOL _shouldReportDownloadProgress;
	BOOL _shouldFilterExternalDownloads;

}

@property (copy) NSString * persistenceIdentifier; 
@property (assign) BOOL shouldFilterExternalDownloads;              //@synthesize shouldFilterExternalDownloads=_shouldFilterExternalDownloads - In the implementation block
-(id)_newConnectionWithListenerEndpoint:(id)arg1 ;
-(BOOL)shouldFilterExternalJobs;
-(void)_sendJobStatesUpdated:(id)arg1 ;
-(void)_sendJobProgressUpdated:(id)arg1 ;
-(void)_dequeuePendingJobChanges;
-(void)_dequeuePendingJobsCompleted;
-(void)_dequeuePendingStateUpdates;
-(void)_dequeuePendingProgressUpdates;
-(BOOL)canAccessJob:(id)arg1 ;
-(void)setShouldFilterExternalJobs:(BOOL)arg1 ;
-(BOOL)shouldFilterExternalDownloads;
-(void)setShouldFilterExternalDownloads:(BOOL)arg1 ;
-(void)sendJobsChanged:(id)arg1 ;
-(void)sendJobStatesUpdated:(id)arg1 ;
-(void)sendJobsCompleted:(id)arg1 ;
-(void)sendJobProgressUpdated:(id)arg1 ;
-(id)persistentJobManagerInDatabase:(id)arg1 ;
-(id)initWithConnection:(id)arg1 options:(id)arg2 ;
-(BOOL)reloadPersistenceStateInDatabase:(id)arg1 ;
-(id)jobsQueryInDatabase:(id)arg1 ;
-(NSString *)persistenceIdentifier;
-(void)dealloc;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(void)_sendJobsChanged:(id)arg1 ;
-(void)_sendJobsCompleted:(id)arg1 ;
@end

