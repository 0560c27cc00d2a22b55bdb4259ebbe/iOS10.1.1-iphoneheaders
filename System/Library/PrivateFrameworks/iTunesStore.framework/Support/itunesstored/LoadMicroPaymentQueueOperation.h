/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDate, NSString, MicroPaymentQueueRequest, MicroPaymentQueueResponse;

@interface LoadMicroPaymentQueueOperation : ISOperation {

	long long _expectedCount;
	NSDate* _lastQueueCheckDate;
	NSString* _queueCountURLBagKey;
	NSString* _queuePaymentsURLBagKey;
	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;

}

@property (retain) MicroPaymentQueueResponse * response;              //@synthesize response=_response - In the implementation block
@property (assign) long long expectedCount;                           //@synthesize expectedCount=_expectedCount - In the implementation block
@property (retain) NSDate * lastQueueCheckDate;                       //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (retain) NSString * queueCountURLBagKey;                    //@synthesize queueCountURLBagKey=_queueCountURLBagKey - In the implementation block
@property (retain) NSString * queuePaymentsURLBagKey;                 //@synthesize queuePaymentsURLBagKey=_queuePaymentsURLBagKey - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                  //@synthesize request=_request - In the implementation block
-(NSString *)queueCountURLBagKey;
-(NSDate *)lastQueueCheckDate;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(void)setQueueCountURLBagKey:(NSString *)arg1 ;
-(void)setQueuePaymentsURLBagKey:(NSString *)arg1 ;
-(long long)expectedCount;
-(void)setExpectedCount:(long long)arg1 ;
-(NSString *)queuePaymentsURLBagKey;
-(BOOL)_getQueueCount:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)_loadPaymentsWithExpectedCount:(long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(MicroPaymentQueueResponse *)response;
-(MicroPaymentQueueRequest *)request;
-(void)run;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
@end
