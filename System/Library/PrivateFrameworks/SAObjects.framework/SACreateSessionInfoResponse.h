/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * sessionInfo; 
@property (nonatomic,copy) NSNumber * validityDuration; 
+(id)createSessionInfoResponse;
+(id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)validityDuration;
-(void)setValidityDuration:(NSNumber *)arg1 ;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
@end

