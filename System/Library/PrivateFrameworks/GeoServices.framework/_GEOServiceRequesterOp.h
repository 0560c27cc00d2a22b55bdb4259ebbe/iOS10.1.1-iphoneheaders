/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPBSessionRequesterDelegate.h>

@class PBRequest, NSString, GEORequester, NSData, NSNumber, GEOMapServiceTraits;

@interface _GEOServiceRequesterOp : NSObject <GEOPBSessionRequesterDelegate> {

	PBRequest* _request;
	NSString* _debugRequestName;
	unsigned long long _urlType;
	/*^block*/id _completionHandler;
	BOOL _cancelled;
	GEORequester* _requester;
	NSData* _auditToken;
	NSNumber* _serviceTypeNumber;
	double _timeout;
	long long _experimentType;
	int _experimentDispatcherRequestType;
	BOOL _shouldThrottleRequests;
	NSString* _throttleKey;
	GEOMapServiceTraits* _traits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned long long)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(long long)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8 shouldThrottleRequests:(BOOL)arg9 throttleKey:(id)arg10 traits:(id)arg11 ;
@end

