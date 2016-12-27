/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage {

	NSString* _networkSSID;
	NSString* _networkPassword;

}

@property (nonatomic,copy) NSString * networkSSID;                  //@synthesize networkSSID=_networkSSID - In the implementation block
@property (nonatomic,copy) NSString * networkPassword;              //@synthesize networkPassword=_networkPassword - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setNetworkSSID:(NSString *)arg1 ;
-(void)setNetworkPassword:(NSString *)arg1 ;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
@end

