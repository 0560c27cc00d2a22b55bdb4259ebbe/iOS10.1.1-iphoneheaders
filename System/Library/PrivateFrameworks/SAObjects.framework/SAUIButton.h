/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, SAUIImageResource, NSString;

@interface SAUIButton : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * text; 
+(id)button;
+(id)buttonWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
@end

