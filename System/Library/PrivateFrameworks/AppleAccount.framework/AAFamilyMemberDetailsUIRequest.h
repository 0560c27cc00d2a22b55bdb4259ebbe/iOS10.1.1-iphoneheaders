/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class NSNumber, NSString;

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest {

	NSNumber* _memberDSID;
	NSString* _memberEmail;

}

@property (nonatomic,copy) NSNumber * memberDSID;               //@synthesize memberDSID=_memberDSID - In the implementation block
@property (nonatomic,copy) NSString * memberEmail;              //@synthesize memberEmail=_memberEmail - In the implementation block
-(NSNumber *)memberDSID;
-(void)setMemberDSID:(NSNumber *)arg1 ;
-(NSString *)memberEmail;
-(void)setMemberEmail:(NSString *)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(BOOL)isUserInitiated;
@end
