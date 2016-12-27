/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * header; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerItem;
+(id)headerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)header;
-(void)setHeader:(SAUIDecoratedText *)arg1 ;
@end

