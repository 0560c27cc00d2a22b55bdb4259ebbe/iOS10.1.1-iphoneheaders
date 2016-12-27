/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAGetSingleClientState.h>

@class SASiriPresentationClientState, NSString, NSArray;

@interface SAGetSiriPresentationClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (nonatomic,retain) SASiriPresentationClientState * clientState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)getSiriPresentationClientState;
+(id)getSiriPresentationClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SASiriPresentationClientState *)clientState;
-(void)setClientState:(SASiriPresentationClientState *)arg1 ;
@end

