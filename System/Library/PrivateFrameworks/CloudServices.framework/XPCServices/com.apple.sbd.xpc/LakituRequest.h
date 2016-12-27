/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSString, NSMutableURLRequest, NSNumber;

@interface LakituRequest : NSObject <NSURLSessionDelegate> {

	BOOL _pinningFailure;
	Class _responseClass;
	NSString* _urlString;

}

@property (copy) NSString * urlString;                              //@synthesize urlString=_urlString - In the implementation block
@property (assign) BOOL pinningFailure;                             //@synthesize pinningFailure=_pinningFailure - In the implementation block
@property (readonly) NSMutableURLRequest * urlRequest; 
@property (readonly) Class responseClass;                           //@synthesize responseClass=_responseClass - In the implementation block
@property (readonly) NSNumber * protocolVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)authorizationHeader;
-(void)setPinningFailure:(BOOL)arg1 ;
-(id)sessionConfig;
-(BOOL)pinningFailure;
-(id)bodyDictionary;
-(id)protectionSpace;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(Class)responseClass;
-(NSNumber *)protocolVersion;
-(id)credential;
-(NSMutableURLRequest *)urlRequest;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)validateInput;
@end

