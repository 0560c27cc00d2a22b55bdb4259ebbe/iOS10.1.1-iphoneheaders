/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dataAnchor;
-(void)setDataAnchor:(NSString *)arg1 ;
-(NSNumber *)requestSync;
-(void)setRequestSync:(NSNumber *)arg1 ;
-(NSArray *)syncAnchors;
-(void)setSyncAnchors:(NSArray *)arg1 ;
@end

