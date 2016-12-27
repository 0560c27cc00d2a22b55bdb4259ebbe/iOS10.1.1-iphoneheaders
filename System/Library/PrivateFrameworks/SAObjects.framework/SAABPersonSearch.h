/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(void)setAddress:(SALocation *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setCompany:(NSString *)arg1 ;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(void)setPhone:(SAPhone *)arg1 ;
-(NSDate *)birthday;
-(NSString *)company;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSURL *)accountIdentifier;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(SALocation *)address;
-(SAEmail *)email;
-(SAPhone *)phone;
-(NSString *)relationship;
-(void)setRelationship:(NSString *)arg1 ;
-(void)setEmail:(SAEmail *)arg1 ;
@end

