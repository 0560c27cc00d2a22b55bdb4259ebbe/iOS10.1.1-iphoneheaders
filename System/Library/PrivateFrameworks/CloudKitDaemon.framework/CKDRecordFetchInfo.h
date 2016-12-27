/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class CKRecordID, NSString, CKRecord, NSError, NSObject;

@interface CKDRecordFetchInfo : NSObject {

	double _startDate;
	unsigned long long _fetchOrder;
	CKRecordID* _recordID;
	NSString* _etag;
	unsigned long long _state;
	CKRecord* _record;
	NSError* _error;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_source> _recordReadySource;

}

@property (assign,nonatomic) unsigned long long fetchOrder;                                //@synthesize fetchOrder=_fetchOrder - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) double startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                            //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;              //@synthesize recordReadySource=_recordReadySource - In the implementation block
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CKRecordID *)recordID;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(double)startDate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithAggregator:(id)arg1 ;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(unsigned long long)fetchOrder;
-(void)performCallback;
-(void)setFetchOrder:(unsigned long long)arg1 ;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setRecord:(CKRecord *)arg1 ;
@end

