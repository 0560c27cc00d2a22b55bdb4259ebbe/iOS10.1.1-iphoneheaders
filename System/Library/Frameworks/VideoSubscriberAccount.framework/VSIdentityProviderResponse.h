/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSAccountMetadata, VSAccount, VSImageLoadOperation;

@interface VSIdentityProviderResponse : NSObject {

	BOOL _didCreateAccount;
	VSAccountMetadata* _accountMetadata;
	VSAccount* _account;
	VSImageLoadOperation* _logoLoadOperation;

}

@property (nonatomic,copy) VSAccountMetadata * accountMetadata;                     //@synthesize accountMetadata=_accountMetadata - In the implementation block
@property (nonatomic,retain) VSAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL didCreateAccount;                                 //@synthesize didCreateAccount=_didCreateAccount - In the implementation block
@property (nonatomic,retain) VSImageLoadOperation * logoLoadOperation;              //@synthesize logoLoadOperation=_logoLoadOperation - In the implementation block
-(id)description;
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
-(BOOL)didCreateAccount;
-(VSAccountMetadata *)accountMetadata;
-(VSImageLoadOperation *)logoLoadOperation;
-(void)setDidCreateAccount:(BOOL)arg1 ;
-(void)setLogoLoadOperation:(VSImageLoadOperation *)arg1 ;
@end
