/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * decoratedFooter; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,copy) NSString * footer; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specificAnswerItem;
+(id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)decoratedFooter;
-(void)setDecoratedFooter:(SAUIDecoratedText *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

