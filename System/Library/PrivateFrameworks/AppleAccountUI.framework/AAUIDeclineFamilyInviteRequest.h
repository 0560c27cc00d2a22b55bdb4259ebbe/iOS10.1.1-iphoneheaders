/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface AAUIDeclineFamilyInviteRequest : AAFamilyRequest {

	NSString* _inviteCode;

}

@property (nonatomic,copy) NSString * inviteCode;              //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlRequest;
-(id)urlString;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(BOOL)isUserInitiated;
@end

