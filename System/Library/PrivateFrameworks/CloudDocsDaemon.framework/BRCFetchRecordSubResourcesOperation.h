/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_group, OS_dispatch_source;
@class BRCServerZone, NSMutableDictionary, NSMutableArray, NSObject, NSError, NSDictionary, NSString;

@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	NSMutableDictionary* _recordsByID;
	NSMutableArray* _recordsWithXattrsToFetch;
	NSObject*<OS_dispatch_group> _recordsBeingFetchedGroup;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSObject*<OS_dispatch_source> _xattrFetchingSource;
	NSError* _error;
	BOOL _isDoneFetchingRecords;

}

@property (nonatomic,readonly) NSDictionary * recordsByID;              //@synthesize recordsByID=_recordsByID - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)stop;
-(void)addRecord:(id)arg1 ;
-(void)main;
-(NSError *)error;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 ;
-(void)startWithParentOperation:(BRCOperation*)arg1 ;
-(void)waitUntilRecordsAreFetched;
-(void)removeAllRecords;
-(void)_scheduleXattrFetch;
-(void)stopWithError:(id)arg1 ;
-(NSDictionary *)recordsByID;
@end

