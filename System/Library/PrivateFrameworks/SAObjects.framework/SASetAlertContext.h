/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientStateServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetAlertContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic,copy) NSArray * context; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAlertContext;
+(id)setAlertContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)context;
-(void)setContext:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

