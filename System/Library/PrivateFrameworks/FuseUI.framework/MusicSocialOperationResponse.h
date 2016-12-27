/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface MusicSocialOperationResponse : NSObject {

	BOOL _serverSuccess;
	id _responseData;
	NSError* _error;

}

@property (assign,nonatomic) BOOL serverSuccess;              //@synthesize serverSuccess=_serverSuccess - In the implementation block
@property (nonatomic,copy) id responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setServerSuccess:(BOOL)arg1 ;
-(BOOL)serverSuccess;
-(id)responseData;
-(void)setResponseData:(id)arg1 ;
@end

