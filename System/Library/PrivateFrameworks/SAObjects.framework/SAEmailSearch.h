/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * fromEmail; 
@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * toEmail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)fromEmail;
-(void)setFromEmail:(NSString *)arg1 ;
-(NSString *)toEmail;
-(void)setToEmail:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

