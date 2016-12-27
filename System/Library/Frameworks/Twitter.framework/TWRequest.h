/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLTwitterRequest, ACAccount, NSURL, NSDictionary;

@interface TWRequest : NSObject {

	SLTwitterRequest* _request;

}

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSDictionary * parameters; 
-(void)dealloc;
-(NSURL *)URL;
-(NSDictionary *)parameters;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(id)signedURLRequest;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(long long)requestMethod;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end

