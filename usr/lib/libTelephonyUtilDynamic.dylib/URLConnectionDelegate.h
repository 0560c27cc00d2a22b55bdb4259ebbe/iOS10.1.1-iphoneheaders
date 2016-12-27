/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libTelephonyUtilDynamic.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/libTelephonyUtilDynamic.dylib-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSMutableData, NSString;

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {

	NSMutableData* fData;
	NSMutableData* fPostData;
	weak_ptr<ctu::Http::HttpRequestCallbackHandler>* fHandler;
	shared_ptr<ctu::Http::HttpResponse>* fResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(shared_ptr<ctu::Http::HttpRequestCallbackHandler>*)getHandler;
-(id)initWithCallbackHandler:(shared_ptr<ctu::Http::HttpRequestCallbackHandler>*)arg1 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
@end

