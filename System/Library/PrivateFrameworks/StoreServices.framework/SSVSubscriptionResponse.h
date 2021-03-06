/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _accountUniqueIdentifierToSubscriptionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSubscriptionStatus:(id)arg1 forAccountUniqueIdentifier:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

