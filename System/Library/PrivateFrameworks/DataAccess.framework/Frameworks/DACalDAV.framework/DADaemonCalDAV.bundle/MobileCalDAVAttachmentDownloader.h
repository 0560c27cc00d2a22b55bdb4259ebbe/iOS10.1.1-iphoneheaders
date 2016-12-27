/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>

@class NSString, MobileCalDAVDaemonAccount, NSMutableSet, NSURL, DACoreDAVTaskManager, NSSet;

@interface MobileCalDAVAttachmentDownloader : NSObject <DADataclassLockWatcher, CoreDAVTaskDelegate> {

	NSString* _waiterID;
	MobileCalDAVDaemonAccount* _account;
	NSMutableSet* _consumers;
	NSString* _attachmentUUID;
	NSURL* _attachmentURL;
	long long _attachmentSize;
	NSString* _attachmentType;
	NSString* _localFilename;
	NSString* _etag;
	DACoreDAVTaskManager* _taskManager;
	BOOL _waitingForGatekeeper;
	BOOL _holdingGatekeeperLock;

}

@property (nonatomic,readonly) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,readonly) NSSet * consumers;                      //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)progressQueue;
-(void)dealloc;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)waiterID;
-(NSSet *)consumers;
-(NSString *)attachmentUUID;
-(void)beginDownload;
-(void)_didShowProgressDownloadedByteCount:(long long)arg1 ;
-(void)_didFinishDownloadingWithError:(id)arg1 ;
-(void)_reallySaveAttachmentDataToDatabase;
-(void)_saveAttachmentDataToDatabase;
-(void)_reallyBeginDownload;
-(id)initWithAttachmentUUID:(id)arg1 forAccount:(id)arg2 ;
-(void)addConsumer:(id)arg1 ;
-(void)removeConsumer:(id)arg1 ;
-(void)cancelDownload;
@end
