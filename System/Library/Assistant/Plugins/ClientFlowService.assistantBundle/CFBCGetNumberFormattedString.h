/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSString * number; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * variant; 
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getNumberFormattedString;
+(id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)style;
-(void)setLocale:(NSString *)arg1 ;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(NSString *)variant;
-(void)setVariant:(NSString *)arg1 ;
@end

