/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol ACMTicketVerificationRequest <NSObject>
@property (retain) NSString * userName; 
@property (retain) NSString * realm; 
@property (retain) NSString * token; 
@property (retain) NSString * appIDKey; 
@property (retain) NSNumber * appID; 
@property (retain) NSNumber * serverResponseTimeout; 
@property (retain) id userInfo; 
@required
-(NSString *)userName;
-(void)setRealm:(id)arg1;
-(id)userInfo;
-(void)setUserInfo:(id)arg1;
-(NSString *)token;
-(void)setToken:(id)arg1;
-(void)setAppID:(id)arg1;
-(void)setUserName:(id)arg1;
-(NSString *)realm;
-(void)setAppIDKey:(id)arg1;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end

