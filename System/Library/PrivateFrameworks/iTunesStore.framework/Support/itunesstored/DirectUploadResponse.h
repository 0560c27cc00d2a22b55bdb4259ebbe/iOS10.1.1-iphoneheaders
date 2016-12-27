/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface DirectUploadResponse : NSObject {

	NSString* _assetToken;
	NSString* _assetTokenType;
	long long _countOfBytesSent;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSString * assetToken;                  //@synthesize assetToken=_assetToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetTokenType;              //@synthesize assetTokenType=_assetTokenType - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                    //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)assetToken;
-(NSString *)assetTokenType;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(NSError *)error;
-(long long)countOfBytesSent;
@end

