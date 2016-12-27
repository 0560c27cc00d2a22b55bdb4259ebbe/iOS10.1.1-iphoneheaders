/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse {

	NSDictionary* _tokens;
	NSDictionary* _appleAccount;

}

@property (nonatomic,readonly) NSString * fmfToken; 
@property (nonatomic,readonly) NSString * fmfAppToken; 
@property (nonatomic,readonly) NSString * fmipToken; 
@property (nonatomic,readonly) NSString * authToken; 
@property (nonatomic,readonly) NSString * mapsToken; 
@property (nonatomic,readonly) NSString * hsaToken; 
@property (nonatomic,readonly) NSString * cloudKitToken; 
@property (nonatomic,readonly) NSString * fmipLostModeToken; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * altDSID; 
@property (nonatomic,readonly) NSString * HSAAction; 
@property (nonatomic,readonly) NSString * HSAData; 
-(NSString *)mapsToken;
-(NSString *)authToken;
-(NSString *)personID;
-(NSString *)fmfToken;
-(NSString *)fmfAppToken;
-(NSString *)fmipToken;
-(NSString *)hsaToken;
-(NSString *)cloudKitToken;
-(NSString *)fmipLostModeToken;
-(NSString *)HSAAction;
-(NSString *)HSAData;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)altDSID;
@end

