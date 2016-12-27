/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMOwnerAccount.h>

@class ACAccount;

@interface FMOwnerAccount_ios : FMOwnerAccount {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)init;
-(void)dealloc;
-(id)personId;
-(void)accountChanged;
-(id)username;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)initializeAccount;
-(id)tokenOfType:(long long)arg1 ;
-(id)hostNameOfType:(long long)arg1 ;
-(id)dataclassProperties;
@end
