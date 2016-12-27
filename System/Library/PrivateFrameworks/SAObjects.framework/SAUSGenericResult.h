/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUSGenericResult : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * actionButton; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SAUIImageResource * thumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * titleMaxLines; 
+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SAUIImageResource *)thumbnail;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setFootnote:(NSString *)arg1 ;
-(BOOL)centered;
-(void)setCentered:(BOOL)arg1 ;
-(NSNumber *)titleMaxLines;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)actionButton;
@end

